// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/local_trajectory_builder_options_2d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/motion_filter_options.pb.h"
#include "cartographer/mapping/proto/pose_extrapolator_options.pb.h"
#include "cartographer/sensor/proto/adaptive_voxel_filter_options.pb.h"
#include "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_2d.pb.h"
#include "cartographer/mapping/proto/scan_matching/real_time_correlative_scan_matcher_options.pb.h"
#include "cartographer/mapping/proto/submaps_options_2d.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class LocalTrajectoryBuilderOptions2D;
class LocalTrajectoryBuilderOptions2DDefaultTypeInternal;
extern LocalTrajectoryBuilderOptions2DDefaultTypeInternal _LocalTrajectoryBuilderOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto

// ===================================================================

class LocalTrajectoryBuilderOptions2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D) */ {
 public:
  LocalTrajectoryBuilderOptions2D();
  virtual ~LocalTrajectoryBuilderOptions2D();

  LocalTrajectoryBuilderOptions2D(const LocalTrajectoryBuilderOptions2D& from);

  inline LocalTrajectoryBuilderOptions2D& operator=(const LocalTrajectoryBuilderOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LocalTrajectoryBuilderOptions2D(LocalTrajectoryBuilderOptions2D&& from) noexcept
    : LocalTrajectoryBuilderOptions2D() {
    *this = ::std::move(from);
  }

  inline LocalTrajectoryBuilderOptions2D& operator=(LocalTrajectoryBuilderOptions2D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LocalTrajectoryBuilderOptions2D& default_instance();

  static inline const LocalTrajectoryBuilderOptions2D* internal_default_instance() {
    return reinterpret_cast<const LocalTrajectoryBuilderOptions2D*>(
               &_LocalTrajectoryBuilderOptions2D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LocalTrajectoryBuilderOptions2D* other);
  friend void swap(LocalTrajectoryBuilderOptions2D& a, LocalTrajectoryBuilderOptions2D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LocalTrajectoryBuilderOptions2D* New() const PROTOBUF_FINAL { return New(NULL); }

  LocalTrajectoryBuilderOptions2D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LocalTrajectoryBuilderOptions2D& from);
  void MergeFrom(const LocalTrajectoryBuilderOptions2D& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LocalTrajectoryBuilderOptions2D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .cartographer.sensor.proto.AdaptiveVoxelFilterOptions adaptive_voxel_filter_options = 6;
  bool has_adaptive_voxel_filter_options() const;
  void clear_adaptive_voxel_filter_options();
  static const int kAdaptiveVoxelFilterOptionsFieldNumber = 6;
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& adaptive_voxel_filter_options() const;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* mutable_adaptive_voxel_filter_options();
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* release_adaptive_voxel_filter_options();
  void set_allocated_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* adaptive_voxel_filter_options);

  // .cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 7;
  bool has_real_time_correlative_scan_matcher_options() const;
  void clear_real_time_correlative_scan_matcher_options();
  static const int kRealTimeCorrelativeScanMatcherOptionsFieldNumber = 7;
  const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions& real_time_correlative_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* mutable_real_time_correlative_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* release_real_time_correlative_scan_matcher_options();
  void set_allocated_real_time_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options);

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 8;
  bool has_ceres_scan_matcher_options() const;
  void clear_ceres_scan_matcher_options();
  static const int kCeresScanMatcherOptionsFieldNumber = 8;
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& ceres_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* mutable_ceres_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* release_ceres_scan_matcher_options();
  void set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options);

  // .cartographer.mapping.proto.SubmapsOptions2D submaps_options = 11;
  bool has_submaps_options() const;
  void clear_submaps_options();
  static const int kSubmapsOptionsFieldNumber = 11;
  const ::cartographer::mapping::proto::SubmapsOptions2D& submaps_options() const;
  ::cartographer::mapping::proto::SubmapsOptions2D* mutable_submaps_options();
  ::cartographer::mapping::proto::SubmapsOptions2D* release_submaps_options();
  void set_allocated_submaps_options(::cartographer::mapping::proto::SubmapsOptions2D* submaps_options);

  // .cartographer.mapping.proto.MotionFilterOptions motion_filter_options = 13;
  bool has_motion_filter_options() const;
  void clear_motion_filter_options();
  static const int kMotionFilterOptionsFieldNumber = 13;
  const ::cartographer::mapping::proto::MotionFilterOptions& motion_filter_options() const;
  ::cartographer::mapping::proto::MotionFilterOptions* mutable_motion_filter_options();
  ::cartographer::mapping::proto::MotionFilterOptions* release_motion_filter_options();
  void set_allocated_motion_filter_options(::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options);

  // .cartographer.sensor.proto.AdaptiveVoxelFilterOptions loop_closure_adaptive_voxel_filter_options = 20;
  bool has_loop_closure_adaptive_voxel_filter_options() const;
  void clear_loop_closure_adaptive_voxel_filter_options();
  static const int kLoopClosureAdaptiveVoxelFilterOptionsFieldNumber = 20;
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& loop_closure_adaptive_voxel_filter_options() const;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* mutable_loop_closure_adaptive_voxel_filter_options();
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* release_loop_closure_adaptive_voxel_filter_options();
  void set_allocated_loop_closure_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* loop_closure_adaptive_voxel_filter_options);

  // .cartographer.mapping.proto.PoseExtrapolatorOptions pose_extrapolator_options = 21;
  bool has_pose_extrapolator_options() const;
  void clear_pose_extrapolator_options();
  static const int kPoseExtrapolatorOptionsFieldNumber = 21;
  const ::cartographer::mapping::proto::PoseExtrapolatorOptions& pose_extrapolator_options() const;
  ::cartographer::mapping::proto::PoseExtrapolatorOptions* mutable_pose_extrapolator_options();
  ::cartographer::mapping::proto::PoseExtrapolatorOptions* release_pose_extrapolator_options();
  void set_allocated_pose_extrapolator_options(::cartographer::mapping::proto::PoseExtrapolatorOptions* pose_extrapolator_options);

  // float min_z = 1;
  void clear_min_z();
  static const int kMinZFieldNumber = 1;
  float min_z() const;
  void set_min_z(float value);

  // float max_z = 2;
  void clear_max_z();
  static const int kMaxZFieldNumber = 2;
  float max_z() const;
  void set_max_z(float value);

  // float voxel_filter_size = 3;
  void clear_voxel_filter_size();
  static const int kVoxelFilterSizeFieldNumber = 3;
  float voxel_filter_size() const;
  void set_voxel_filter_size(float value);

  // bool use_online_correlative_scan_matching = 5;
  void clear_use_online_correlative_scan_matching();
  static const int kUseOnlineCorrelativeScanMatchingFieldNumber = 5;
  bool use_online_correlative_scan_matching() const;
  void set_use_online_correlative_scan_matching(bool value);

  // bool use_imu_data = 12;
  void clear_use_imu_data();
  static const int kUseImuDataFieldNumber = 12;
  bool use_imu_data() const;
  void set_use_imu_data(bool value);

  // float min_range = 14;
  void clear_min_range();
  static const int kMinRangeFieldNumber = 14;
  float min_range() const;
  void set_min_range(float value);

  // float max_range = 15;
  void clear_max_range();
  static const int kMaxRangeFieldNumber = 15;
  float max_range() const;
  void set_max_range(float value);

  // double imu_gravity_time_constant = 17;
  void clear_imu_gravity_time_constant();
  static const int kImuGravityTimeConstantFieldNumber = 17;
  double imu_gravity_time_constant() const;
  void set_imu_gravity_time_constant(double value);

  // float missing_data_ray_length = 16;
  void clear_missing_data_ray_length();
  static const int kMissingDataRayLengthFieldNumber = 16;
  float missing_data_ray_length() const;
  void set_missing_data_ray_length(float value);

  // int32 num_accumulated_range_data = 19;
  void clear_num_accumulated_range_data();
  static const int kNumAccumulatedRangeDataFieldNumber = 19;
  ::google::protobuf::int32 num_accumulated_range_data() const;
  void set_num_accumulated_range_data(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* adaptive_voxel_filter_options_;
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options_;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options_;
  ::cartographer::mapping::proto::SubmapsOptions2D* submaps_options_;
  ::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options_;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* loop_closure_adaptive_voxel_filter_options_;
  ::cartographer::mapping::proto::PoseExtrapolatorOptions* pose_extrapolator_options_;
  float min_z_;
  float max_z_;
  float voxel_filter_size_;
  bool use_online_correlative_scan_matching_;
  bool use_imu_data_;
  float min_range_;
  float max_range_;
  double imu_gravity_time_constant_;
  float missing_data_ray_length_;
  ::google::protobuf::int32 num_accumulated_range_data_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocalTrajectoryBuilderOptions2D

// float min_range = 14;
inline void LocalTrajectoryBuilderOptions2D::clear_min_range() {
  min_range_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::min_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.min_range)
  return min_range_;
}
inline void LocalTrajectoryBuilderOptions2D::set_min_range(float value) {
  
  min_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.min_range)
}

// float max_range = 15;
inline void LocalTrajectoryBuilderOptions2D::clear_max_range() {
  max_range_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::max_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.max_range)
  return max_range_;
}
inline void LocalTrajectoryBuilderOptions2D::set_max_range(float value) {
  
  max_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.max_range)
}

// float min_z = 1;
inline void LocalTrajectoryBuilderOptions2D::clear_min_z() {
  min_z_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::min_z() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.min_z)
  return min_z_;
}
inline void LocalTrajectoryBuilderOptions2D::set_min_z(float value) {
  
  min_z_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.min_z)
}

// float max_z = 2;
inline void LocalTrajectoryBuilderOptions2D::clear_max_z() {
  max_z_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::max_z() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.max_z)
  return max_z_;
}
inline void LocalTrajectoryBuilderOptions2D::set_max_z(float value) {
  
  max_z_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.max_z)
}

// float missing_data_ray_length = 16;
inline void LocalTrajectoryBuilderOptions2D::clear_missing_data_ray_length() {
  missing_data_ray_length_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::missing_data_ray_length() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.missing_data_ray_length)
  return missing_data_ray_length_;
}
inline void LocalTrajectoryBuilderOptions2D::set_missing_data_ray_length(float value) {
  
  missing_data_ray_length_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.missing_data_ray_length)
}

// int32 num_accumulated_range_data = 19;
inline void LocalTrajectoryBuilderOptions2D::clear_num_accumulated_range_data() {
  num_accumulated_range_data_ = 0;
}
inline ::google::protobuf::int32 LocalTrajectoryBuilderOptions2D::num_accumulated_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.num_accumulated_range_data)
  return num_accumulated_range_data_;
}
inline void LocalTrajectoryBuilderOptions2D::set_num_accumulated_range_data(::google::protobuf::int32 value) {
  
  num_accumulated_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.num_accumulated_range_data)
}

// float voxel_filter_size = 3;
inline void LocalTrajectoryBuilderOptions2D::clear_voxel_filter_size() {
  voxel_filter_size_ = 0;
}
inline float LocalTrajectoryBuilderOptions2D::voxel_filter_size() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.voxel_filter_size)
  return voxel_filter_size_;
}
inline void LocalTrajectoryBuilderOptions2D::set_voxel_filter_size(float value) {
  
  voxel_filter_size_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.voxel_filter_size)
}

// .cartographer.sensor.proto.AdaptiveVoxelFilterOptions adaptive_voxel_filter_options = 6;
inline bool LocalTrajectoryBuilderOptions2D::has_adaptive_voxel_filter_options() const {
  return this != internal_default_instance() && adaptive_voxel_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_adaptive_voxel_filter_options() {
  if (GetArenaNoVirtual() == NULL && adaptive_voxel_filter_options_ != NULL) delete adaptive_voxel_filter_options_;
  adaptive_voxel_filter_options_ = NULL;
}
inline const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& LocalTrajectoryBuilderOptions2D::adaptive_voxel_filter_options() const {
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* p = adaptive_voxel_filter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.adaptive_voxel_filter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions*>(
      &::cartographer::sensor::proto::_AdaptiveVoxelFilterOptions_default_instance_);
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions2D::mutable_adaptive_voxel_filter_options() {
  
  if (adaptive_voxel_filter_options_ == NULL) {
    adaptive_voxel_filter_options_ = new ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.adaptive_voxel_filter_options)
  return adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions2D::release_adaptive_voxel_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.adaptive_voxel_filter_options)
  
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* temp = adaptive_voxel_filter_options_;
  adaptive_voxel_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* adaptive_voxel_filter_options) {
  delete adaptive_voxel_filter_options_;
  adaptive_voxel_filter_options_ = adaptive_voxel_filter_options;
  if (adaptive_voxel_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.adaptive_voxel_filter_options)
}

// .cartographer.sensor.proto.AdaptiveVoxelFilterOptions loop_closure_adaptive_voxel_filter_options = 20;
inline bool LocalTrajectoryBuilderOptions2D::has_loop_closure_adaptive_voxel_filter_options() const {
  return this != internal_default_instance() && loop_closure_adaptive_voxel_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_loop_closure_adaptive_voxel_filter_options() {
  if (GetArenaNoVirtual() == NULL && loop_closure_adaptive_voxel_filter_options_ != NULL) delete loop_closure_adaptive_voxel_filter_options_;
  loop_closure_adaptive_voxel_filter_options_ = NULL;
}
inline const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& LocalTrajectoryBuilderOptions2D::loop_closure_adaptive_voxel_filter_options() const {
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* p = loop_closure_adaptive_voxel_filter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.loop_closure_adaptive_voxel_filter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions*>(
      &::cartographer::sensor::proto::_AdaptiveVoxelFilterOptions_default_instance_);
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions2D::mutable_loop_closure_adaptive_voxel_filter_options() {
  
  if (loop_closure_adaptive_voxel_filter_options_ == NULL) {
    loop_closure_adaptive_voxel_filter_options_ = new ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.loop_closure_adaptive_voxel_filter_options)
  return loop_closure_adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions2D::release_loop_closure_adaptive_voxel_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.loop_closure_adaptive_voxel_filter_options)
  
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* temp = loop_closure_adaptive_voxel_filter_options_;
  loop_closure_adaptive_voxel_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_loop_closure_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* loop_closure_adaptive_voxel_filter_options) {
  delete loop_closure_adaptive_voxel_filter_options_;
  loop_closure_adaptive_voxel_filter_options_ = loop_closure_adaptive_voxel_filter_options;
  if (loop_closure_adaptive_voxel_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.loop_closure_adaptive_voxel_filter_options)
}

// bool use_online_correlative_scan_matching = 5;
inline void LocalTrajectoryBuilderOptions2D::clear_use_online_correlative_scan_matching() {
  use_online_correlative_scan_matching_ = false;
}
inline bool LocalTrajectoryBuilderOptions2D::use_online_correlative_scan_matching() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.use_online_correlative_scan_matching)
  return use_online_correlative_scan_matching_;
}
inline void LocalTrajectoryBuilderOptions2D::set_use_online_correlative_scan_matching(bool value) {
  
  use_online_correlative_scan_matching_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.use_online_correlative_scan_matching)
}

// .cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 7;
inline bool LocalTrajectoryBuilderOptions2D::has_real_time_correlative_scan_matcher_options() const {
  return this != internal_default_instance() && real_time_correlative_scan_matcher_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_real_time_correlative_scan_matcher_options() {
  if (GetArenaNoVirtual() == NULL && real_time_correlative_scan_matcher_options_ != NULL) delete real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions& LocalTrajectoryBuilderOptions2D::real_time_correlative_scan_matcher_options() const {
  const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* p = real_time_correlative_scan_matcher_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.real_time_correlative_scan_matcher_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions*>(
      &::cartographer::mapping::scan_matching::proto::_RealTimeCorrelativeScanMatcherOptions_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* LocalTrajectoryBuilderOptions2D::mutable_real_time_correlative_scan_matcher_options() {
  
  if (real_time_correlative_scan_matcher_options_ == NULL) {
    real_time_correlative_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.real_time_correlative_scan_matcher_options)
  return real_time_correlative_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* LocalTrajectoryBuilderOptions2D::release_real_time_correlative_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.real_time_correlative_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* temp = real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_real_time_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options) {
  delete real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = real_time_correlative_scan_matcher_options;
  if (real_time_correlative_scan_matcher_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.real_time_correlative_scan_matcher_options)
}

// .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 8;
inline bool LocalTrajectoryBuilderOptions2D::has_ceres_scan_matcher_options() const {
  return this != internal_default_instance() && ceres_scan_matcher_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_ceres_scan_matcher_options() {
  if (GetArenaNoVirtual() == NULL && ceres_scan_matcher_options_ != NULL) delete ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& LocalTrajectoryBuilderOptions2D::ceres_scan_matcher_options() const {
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* p = ceres_scan_matcher_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.ceres_scan_matcher_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D*>(
      &::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions2D_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* LocalTrajectoryBuilderOptions2D::mutable_ceres_scan_matcher_options() {
  
  if (ceres_scan_matcher_options_ == NULL) {
    ceres_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.ceres_scan_matcher_options)
  return ceres_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* LocalTrajectoryBuilderOptions2D::release_ceres_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.ceres_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* temp = ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options) {
  delete ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = ceres_scan_matcher_options;
  if (ceres_scan_matcher_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.ceres_scan_matcher_options)
}

// .cartographer.mapping.proto.MotionFilterOptions motion_filter_options = 13;
inline bool LocalTrajectoryBuilderOptions2D::has_motion_filter_options() const {
  return this != internal_default_instance() && motion_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_motion_filter_options() {
  if (GetArenaNoVirtual() == NULL && motion_filter_options_ != NULL) delete motion_filter_options_;
  motion_filter_options_ = NULL;
}
inline const ::cartographer::mapping::proto::MotionFilterOptions& LocalTrajectoryBuilderOptions2D::motion_filter_options() const {
  const ::cartographer::mapping::proto::MotionFilterOptions* p = motion_filter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.motion_filter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::MotionFilterOptions*>(
      &::cartographer::mapping::proto::_MotionFilterOptions_default_instance_);
}
inline ::cartographer::mapping::proto::MotionFilterOptions* LocalTrajectoryBuilderOptions2D::mutable_motion_filter_options() {
  
  if (motion_filter_options_ == NULL) {
    motion_filter_options_ = new ::cartographer::mapping::proto::MotionFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.motion_filter_options)
  return motion_filter_options_;
}
inline ::cartographer::mapping::proto::MotionFilterOptions* LocalTrajectoryBuilderOptions2D::release_motion_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.motion_filter_options)
  
  ::cartographer::mapping::proto::MotionFilterOptions* temp = motion_filter_options_;
  motion_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_motion_filter_options(::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options) {
  delete motion_filter_options_;
  motion_filter_options_ = motion_filter_options;
  if (motion_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.motion_filter_options)
}

// double imu_gravity_time_constant = 17;
inline void LocalTrajectoryBuilderOptions2D::clear_imu_gravity_time_constant() {
  imu_gravity_time_constant_ = 0;
}
inline double LocalTrajectoryBuilderOptions2D::imu_gravity_time_constant() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.imu_gravity_time_constant)
  return imu_gravity_time_constant_;
}
inline void LocalTrajectoryBuilderOptions2D::set_imu_gravity_time_constant(double value) {
  
  imu_gravity_time_constant_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.imu_gravity_time_constant)
}

// .cartographer.mapping.proto.PoseExtrapolatorOptions pose_extrapolator_options = 21;
inline bool LocalTrajectoryBuilderOptions2D::has_pose_extrapolator_options() const {
  return this != internal_default_instance() && pose_extrapolator_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_pose_extrapolator_options() {
  if (GetArenaNoVirtual() == NULL && pose_extrapolator_options_ != NULL) delete pose_extrapolator_options_;
  pose_extrapolator_options_ = NULL;
}
inline const ::cartographer::mapping::proto::PoseExtrapolatorOptions& LocalTrajectoryBuilderOptions2D::pose_extrapolator_options() const {
  const ::cartographer::mapping::proto::PoseExtrapolatorOptions* p = pose_extrapolator_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.pose_extrapolator_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::PoseExtrapolatorOptions*>(
      &::cartographer::mapping::proto::_PoseExtrapolatorOptions_default_instance_);
}
inline ::cartographer::mapping::proto::PoseExtrapolatorOptions* LocalTrajectoryBuilderOptions2D::mutable_pose_extrapolator_options() {
  
  if (pose_extrapolator_options_ == NULL) {
    pose_extrapolator_options_ = new ::cartographer::mapping::proto::PoseExtrapolatorOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.pose_extrapolator_options)
  return pose_extrapolator_options_;
}
inline ::cartographer::mapping::proto::PoseExtrapolatorOptions* LocalTrajectoryBuilderOptions2D::release_pose_extrapolator_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.pose_extrapolator_options)
  
  ::cartographer::mapping::proto::PoseExtrapolatorOptions* temp = pose_extrapolator_options_;
  pose_extrapolator_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_pose_extrapolator_options(::cartographer::mapping::proto::PoseExtrapolatorOptions* pose_extrapolator_options) {
  delete pose_extrapolator_options_;
  pose_extrapolator_options_ = pose_extrapolator_options;
  if (pose_extrapolator_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.pose_extrapolator_options)
}

// .cartographer.mapping.proto.SubmapsOptions2D submaps_options = 11;
inline bool LocalTrajectoryBuilderOptions2D::has_submaps_options() const {
  return this != internal_default_instance() && submaps_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions2D::clear_submaps_options() {
  if (GetArenaNoVirtual() == NULL && submaps_options_ != NULL) delete submaps_options_;
  submaps_options_ = NULL;
}
inline const ::cartographer::mapping::proto::SubmapsOptions2D& LocalTrajectoryBuilderOptions2D::submaps_options() const {
  const ::cartographer::mapping::proto::SubmapsOptions2D* p = submaps_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.submaps_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::SubmapsOptions2D*>(
      &::cartographer::mapping::proto::_SubmapsOptions2D_default_instance_);
}
inline ::cartographer::mapping::proto::SubmapsOptions2D* LocalTrajectoryBuilderOptions2D::mutable_submaps_options() {
  
  if (submaps_options_ == NULL) {
    submaps_options_ = new ::cartographer::mapping::proto::SubmapsOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.submaps_options)
  return submaps_options_;
}
inline ::cartographer::mapping::proto::SubmapsOptions2D* LocalTrajectoryBuilderOptions2D::release_submaps_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.submaps_options)
  
  ::cartographer::mapping::proto::SubmapsOptions2D* temp = submaps_options_;
  submaps_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions2D::set_allocated_submaps_options(::cartographer::mapping::proto::SubmapsOptions2D* submaps_options) {
  delete submaps_options_;
  submaps_options_ = submaps_options;
  if (submaps_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.submaps_options)
}

// bool use_imu_data = 12;
inline void LocalTrajectoryBuilderOptions2D::clear_use_imu_data() {
  use_imu_data_ = false;
}
inline bool LocalTrajectoryBuilderOptions2D::use_imu_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.use_imu_data)
  return use_imu_data_;
}
inline void LocalTrajectoryBuilderOptions2D::set_use_imu_data(bool value) {
  
  use_imu_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions2D.use_imu_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_5f2d_2eproto__INCLUDED
