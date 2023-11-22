/*
 * Copyright 2018 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CARTOGRAPHER_MAPPING_INTERNAL_OPTIMIZATION_COST_FUNCTIONS_COST_HELPERS_IMPL_H_
#define CARTOGRAPHER_MAPPING_INTERNAL_OPTIMIZATION_COST_FUNCTIONS_COST_HELPERS_IMPL_H_

#include "Eigen/Core"
#include "cartographer/transform/rigid_transform.h"
#include "cartographer/transform/transform.h"

namespace cartographer {
namespace mapping {
namespace optimization {

/**
 * @brief 2d 根据SPA论文里的公式求残差
 * 
 * 计算残差：
 * T12 = T1.inverse() * T2
 * [R1.inverse * R2,  R1.inverse * (t2 -t1)]
 * [0              ,  1                    ]
 * 
 * @param[in] relative_pose 
 * @param[in] start 
 * @param[in] end 
 * @return std::array<T, 3> 
 */
template <typename T>
static std::array<T, 3> ComputeUnscaledError(
    const transform::Rigid2d& relative_pose, const T* const start,
    const T* const end) {
  // 旋转矩阵R
  const T cos_theta_i = cos(start[2]);
  const T sin_theta_i = sin(start[2]);
  const T delta_x = end[0] - start[0]; // t2 -t1
  const T delta_y = end[1] - start[1];
  const T h[3] = {cos_theta_i * delta_x + sin_theta_i * delta_y, // R.inverse * (t2 -t1)：平移量的变换并不是简单的相减
                  -sin_theta_i * delta_x + cos_theta_i * delta_y,
                  end[2] - start[2]};//h这个数组就是start到end的坐标变换（子图原点 与 节点在global坐标系下的位姿  之间的   坐标变换）
  return {{T(relative_pose.translation().x()) - h[0],
           T(relative_pose.translation().y()) - h[1],
           common::NormalizeAngleDifference(
               T(relative_pose.rotation().angle()) - h[2])}};
}

// 2d 为残差中的xy与theta分别乘上不同的权重
template <typename T>
std::array<T, 3> ScaleError(const std::array<T, 3>& error,
                            double translation_weight, double rotation_weight) {
  // clang-format off
  return {{
      error[0] * translation_weight,
      error[1] * translation_weight,
      error[2] * rotation_weight
  }};
  // clang-format on
}

/**
 * @brief 根据SPA论文里的公式求6维度的残差
 * 
 * @param[in] relative_pose 
 * @param[in] start_rotation 
 * @param[in] start_translation 
 * @param[in] end_rotation 
 * @param[in] end_translation 
 * @return std::array<T, 6> 
 */
template <typename T>
static std::array<T, 6> ComputeUnscaledError(
    const transform::Rigid3d& relative_pose, const T* const start_rotation,
    const T* const start_translation, const T* const end_rotation,
    const T* const end_translation) {
  const Eigen::Quaternion<T> R_i_inverse(start_rotation[0], -start_rotation[1],
                                         -start_rotation[2],
                                         -start_rotation[3]);//四元数的逆等与四元数的共轭

  const Eigen::Matrix<T, 3, 1> delta(end_translation[0] - start_translation[0],
                                     end_translation[1] - start_translation[1],
                                     end_translation[2] - start_translation[2]);//x,y,z
  // start到end的平移
  const Eigen::Matrix<T, 3, 1> h_translation = R_i_inverse * delta;

  // start到end的旋转 四元数的转置就是逆
  const Eigen::Quaternion<T> h_rotation_inverse =
      Eigen::Quaternion<T>(end_rotation[0], -end_rotation[1], -end_rotation[2],
                           -end_rotation[3]) *
      Eigen::Quaternion<T>(start_rotation[0], start_rotation[1],
                           start_rotation[2], start_rotation[3]);

  // 计算2个旋转间的差值
  const Eigen::Matrix<T, 3, 1> angle_axis_difference =
      transform::RotationQuaternionToAngleAxisVector(
          h_rotation_inverse * relative_pose.rotation().cast<T>());

  return {{T(relative_pose.translation().x()) - h_translation[0],
           T(relative_pose.translation().y()) - h_translation[1],
           T(relative_pose.translation().z()) - h_translation[2],
           angle_axis_difference[0], 
           angle_axis_difference[1],
           angle_axis_difference[2]}};
}

// 3d 为残差添加权重
template <typename T>
std::array<T, 6> ScaleError(const std::array<T, 6>& error,
                            double translation_weight, double rotation_weight) {
  // clang-format off
  return {{
      error[0] * translation_weight,
      error[1] * translation_weight,
      error[2] * translation_weight,
      error[3] * rotation_weight,
      error[4] * rotation_weight,
      error[5] * rotation_weight
  }};
  // clang-format on
}

// Eigen implementation of slerp is not compatible with Ceres on all supported
// platforms. Our own implementation is used instead.
// slerp 的Eigen实现与所有支持平台上的 Ceres 不兼容, 所以自己实现
template <typename T>
std::array<T, 4> SlerpQuaternions(const T* const start, const T* const end,
                                  double factor) {
  // Angle 'theta' is the half-angle "between" quaternions. It can be computed
  // as the arccosine of their dot product.
  const T cos_theta = start[0] * end[0] + start[1] * end[1] +
                      start[2] * end[2] + start[3] * end[3];
  // Avoid using ::abs which would cast to integer.
  const T abs_cos_theta = ceres::abs(cos_theta);
  // If numerical error brings 'cos_theta' outside [-1 + epsilon, 1 - epsilon]
  // interval, then the quaternions are likely to be collinear.
  T prev_scale(1. - factor);
  T next_scale(factor);
  if (abs_cos_theta < T(1. - 1e-5)) {
    const T theta = acos(abs_cos_theta);
    const T sin_theta = sin(theta);
    prev_scale = sin((1. - factor) * theta) / sin_theta;
    next_scale = sin(factor * theta) / sin_theta;
  }
  if (cos_theta < T(0.)) {
    next_scale = -next_scale;
  }
  return {{prev_scale * start[0] + next_scale * end[0],
           prev_scale * start[1] + next_scale * end[1],
           prev_scale * start[2] + next_scale * end[2],
           prev_scale * start[3] + next_scale * end[3]}};
}

template <typename T>
std::tuple<std::array<T, 4> /* rotation */, std::array<T, 3> /* translation */>
InterpolateNodes3D(const T* const prev_node_rotation,
                   const T* const prev_node_translation,
                   const T* const next_node_rotation,
                   const T* const next_node_translation,
                   const double interpolation_parameter) {
  return std::make_tuple(
      SlerpQuaternions(prev_node_rotation, next_node_rotation,
                       interpolation_parameter),
      std::array<T, 3>{
          {prev_node_translation[0] +
               interpolation_parameter *
                   (next_node_translation[0] - prev_node_translation[0]),
           prev_node_translation[1] +
               interpolation_parameter *
                   (next_node_translation[1] - prev_node_translation[1]),
           prev_node_translation[2] +
               interpolation_parameter *
                   (next_node_translation[2] - prev_node_translation[2])}});
}

/**
 * @brief 2d 根据landmark数据的时间在2个节点位姿中插值出来的位姿
 * 
 * @param[in] prev_node_pose 
 * @param[in] prev_node_gravity_alignment 
 * @param[in] next_node_pose 
 * @param[in] next_node_gravity_alignment 
 * @param[in] interpolation_parameter 
 * @return std::tuple<std::array<T, 4> 
 */
template <typename T>
std::tuple<std::array<T, 4> /* rotation */, std::array<T, 3> /* translation */>
InterpolateNodes2D(const T* const prev_node_pose,
                   const Eigen::Quaterniond& prev_node_gravity_alignment,
                   const T* const next_node_pose,
                   const Eigen::Quaterniond& next_node_gravity_alignment,
                   const double interpolation_parameter) {
  // The following is equivalent to (Embed3D(prev_node_pose) *
  // Rigid3d::Rotation(prev_node_gravity_alignment)).rotation().
  const Eigen::Quaternion<T> prev_quaternion(
      (Eigen::AngleAxis<T>(prev_node_pose[2], Eigen::Matrix<T, 3, 1>::UnitZ()) *
       prev_node_gravity_alignment.cast<T>())
          .normalized());
  // 转成std::array
  const std::array<T, 4> prev_node_rotation = {
      {prev_quaternion.w(), prev_quaternion.x(), prev_quaternion.y(),
       prev_quaternion.z()}};

  // The following is equivalent to (Embed3D(next_node_pose) *
  // Rigid3d::Rotation(next_node_gravity_alignment)).rotation().
  const Eigen::Quaternion<T> next_quaternion(
      (Eigen::AngleAxis<T>(next_node_pose[2], Eigen::Matrix<T, 3, 1>::UnitZ()) *
       next_node_gravity_alignment.cast<T>())
          .normalized());
  const std::array<T, 4> next_node_rotation = {
      {next_quaternion.w(), next_quaternion.x(), next_quaternion.y(),
       next_quaternion.z()}};

  return std::make_tuple(
      SlerpQuaternions(prev_node_rotation.data(), next_node_rotation.data(),
                       interpolation_parameter),
      // 通过插值公式计算出这个时刻的tracking_frame在global下的位姿
      std::array<T, 3>{
          {prev_node_pose[0] + interpolation_parameter *
                                   (next_node_pose[0] - prev_node_pose[0]),//x
           prev_node_pose[1] + interpolation_parameter *
                                   (next_node_pose[1] - prev_node_pose[1]),//y
           T(0)}});//theta
}

}  // namespace optimization
}  // namespace mapping
}  // namespace cartographer

#endif  // CARTOGRAPHER_MAPPING_INTERNAL_OPTIMIZATION_COST_FUNCTIONS_COST_HELPERS_IMPL_H_