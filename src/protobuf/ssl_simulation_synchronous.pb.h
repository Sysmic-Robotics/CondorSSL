// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_synchronous.proto

#ifndef PROTOBUF_INCLUDED_ssl_5fsimulation_5fsynchronous_2eproto
#define PROTOBUF_INCLUDED_ssl_5fsimulation_5fsynchronous_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ssl_vision_detection.pb.h"
#include "ssl_simulation_robot_feedback.pb.h"
#include "ssl_simulation_robot_control.pb.h"
#include "ssl_simulation_control.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ssl_5fsimulation_5fsynchronous_2eproto 

namespace protobuf_ssl_5fsimulation_5fsynchronous_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ssl_5fsimulation_5fsynchronous_2eproto
class SimulationSyncRequest;
class SimulationSyncRequestDefaultTypeInternal;
extern SimulationSyncRequestDefaultTypeInternal _SimulationSyncRequest_default_instance_;
class SimulationSyncResponse;
class SimulationSyncResponseDefaultTypeInternal;
extern SimulationSyncResponseDefaultTypeInternal _SimulationSyncResponse_default_instance_;
namespace google {
namespace protobuf {
template<> ::SimulationSyncRequest* Arena::CreateMaybeMessage<::SimulationSyncRequest>(Arena*);
template<> ::SimulationSyncResponse* Arena::CreateMaybeMessage<::SimulationSyncResponse>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class SimulationSyncRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SimulationSyncRequest) */ {
 public:
  SimulationSyncRequest();
  virtual ~SimulationSyncRequest();

  SimulationSyncRequest(const SimulationSyncRequest& from);

  inline SimulationSyncRequest& operator=(const SimulationSyncRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SimulationSyncRequest(SimulationSyncRequest&& from) noexcept
    : SimulationSyncRequest() {
    *this = ::std::move(from);
  }

  inline SimulationSyncRequest& operator=(SimulationSyncRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SimulationSyncRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimulationSyncRequest* internal_default_instance() {
    return reinterpret_cast<const SimulationSyncRequest*>(
               &_SimulationSyncRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SimulationSyncRequest* other);
  friend void swap(SimulationSyncRequest& a, SimulationSyncRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SimulationSyncRequest* New() const final {
    return CreateMaybeMessage<SimulationSyncRequest>(NULL);
  }

  SimulationSyncRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SimulationSyncRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SimulationSyncRequest& from);
  void MergeFrom(const SimulationSyncRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SimulationSyncRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .SimulatorCommand simulator_command = 2;
  bool has_simulator_command() const;
  void clear_simulator_command();
  static const int kSimulatorCommandFieldNumber = 2;
  private:
  const ::SimulatorCommand& _internal_simulator_command() const;
  public:
  const ::SimulatorCommand& simulator_command() const;
  ::SimulatorCommand* release_simulator_command();
  ::SimulatorCommand* mutable_simulator_command();
  void set_allocated_simulator_command(::SimulatorCommand* simulator_command);

  // optional .RobotControl robot_control = 3;
  bool has_robot_control() const;
  void clear_robot_control();
  static const int kRobotControlFieldNumber = 3;
  private:
  const ::RobotControl& _internal_robot_control() const;
  public:
  const ::RobotControl& robot_control() const;
  ::RobotControl* release_robot_control();
  ::RobotControl* mutable_robot_control();
  void set_allocated_robot_control(::RobotControl* robot_control);

  // optional float sim_step = 1;
  bool has_sim_step() const;
  void clear_sim_step();
  static const int kSimStepFieldNumber = 1;
  float sim_step() const;
  void set_sim_step(float value);

  // @@protoc_insertion_point(class_scope:SimulationSyncRequest)
 private:
  void set_has_sim_step();
  void clear_has_sim_step();
  void set_has_simulator_command();
  void clear_has_simulator_command();
  void set_has_robot_control();
  void clear_has_robot_control();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::SimulatorCommand* simulator_command_;
  ::RobotControl* robot_control_;
  float sim_step_;
  friend struct ::protobuf_ssl_5fsimulation_5fsynchronous_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SimulationSyncResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SimulationSyncResponse) */ {
 public:
  SimulationSyncResponse();
  virtual ~SimulationSyncResponse();

  SimulationSyncResponse(const SimulationSyncResponse& from);

  inline SimulationSyncResponse& operator=(const SimulationSyncResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SimulationSyncResponse(SimulationSyncResponse&& from) noexcept
    : SimulationSyncResponse() {
    *this = ::std::move(from);
  }

  inline SimulationSyncResponse& operator=(SimulationSyncResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SimulationSyncResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimulationSyncResponse* internal_default_instance() {
    return reinterpret_cast<const SimulationSyncResponse*>(
               &_SimulationSyncResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SimulationSyncResponse* other);
  friend void swap(SimulationSyncResponse& a, SimulationSyncResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SimulationSyncResponse* New() const final {
    return CreateMaybeMessage<SimulationSyncResponse>(NULL);
  }

  SimulationSyncResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SimulationSyncResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SimulationSyncResponse& from);
  void MergeFrom(const SimulationSyncResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SimulationSyncResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .SSL_DetectionFrame detection = 1;
  int detection_size() const;
  void clear_detection();
  static const int kDetectionFieldNumber = 1;
  ::SSL_DetectionFrame* mutable_detection(int index);
  ::google::protobuf::RepeatedPtrField< ::SSL_DetectionFrame >*
      mutable_detection();
  const ::SSL_DetectionFrame& detection(int index) const;
  ::SSL_DetectionFrame* add_detection();
  const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionFrame >&
      detection() const;

  // optional .RobotControlResponse robot_control_response = 2;
  bool has_robot_control_response() const;
  void clear_robot_control_response();
  static const int kRobotControlResponseFieldNumber = 2;
  private:
  const ::RobotControlResponse& _internal_robot_control_response() const;
  public:
  const ::RobotControlResponse& robot_control_response() const;
  ::RobotControlResponse* release_robot_control_response();
  ::RobotControlResponse* mutable_robot_control_response();
  void set_allocated_robot_control_response(::RobotControlResponse* robot_control_response);

  // @@protoc_insertion_point(class_scope:SimulationSyncResponse)
 private:
  void set_has_robot_control_response();
  void clear_has_robot_control_response();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::SSL_DetectionFrame > detection_;
  ::RobotControlResponse* robot_control_response_;
  friend struct ::protobuf_ssl_5fsimulation_5fsynchronous_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimulationSyncRequest

// optional float sim_step = 1;
inline bool SimulationSyncRequest::has_sim_step() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SimulationSyncRequest::set_has_sim_step() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SimulationSyncRequest::clear_has_sim_step() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SimulationSyncRequest::clear_sim_step() {
  sim_step_ = 0;
  clear_has_sim_step();
}
inline float SimulationSyncRequest::sim_step() const {
  // @@protoc_insertion_point(field_get:SimulationSyncRequest.sim_step)
  return sim_step_;
}
inline void SimulationSyncRequest::set_sim_step(float value) {
  set_has_sim_step();
  sim_step_ = value;
  // @@protoc_insertion_point(field_set:SimulationSyncRequest.sim_step)
}

// optional .SimulatorCommand simulator_command = 2;
inline bool SimulationSyncRequest::has_simulator_command() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SimulationSyncRequest::set_has_simulator_command() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SimulationSyncRequest::clear_has_simulator_command() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::SimulatorCommand& SimulationSyncRequest::_internal_simulator_command() const {
  return *simulator_command_;
}
inline const ::SimulatorCommand& SimulationSyncRequest::simulator_command() const {
  const ::SimulatorCommand* p = simulator_command_;
  // @@protoc_insertion_point(field_get:SimulationSyncRequest.simulator_command)
  return p != NULL ? *p : *reinterpret_cast<const ::SimulatorCommand*>(
      &::_SimulatorCommand_default_instance_);
}
inline ::SimulatorCommand* SimulationSyncRequest::release_simulator_command() {
  // @@protoc_insertion_point(field_release:SimulationSyncRequest.simulator_command)
  clear_has_simulator_command();
  ::SimulatorCommand* temp = simulator_command_;
  simulator_command_ = NULL;
  return temp;
}
inline ::SimulatorCommand* SimulationSyncRequest::mutable_simulator_command() {
  set_has_simulator_command();
  if (simulator_command_ == NULL) {
    auto* p = CreateMaybeMessage<::SimulatorCommand>(GetArenaNoVirtual());
    simulator_command_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SimulationSyncRequest.simulator_command)
  return simulator_command_;
}
inline void SimulationSyncRequest::set_allocated_simulator_command(::SimulatorCommand* simulator_command) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(simulator_command_);
  }
  if (simulator_command) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      simulator_command = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, simulator_command, submessage_arena);
    }
    set_has_simulator_command();
  } else {
    clear_has_simulator_command();
  }
  simulator_command_ = simulator_command;
  // @@protoc_insertion_point(field_set_allocated:SimulationSyncRequest.simulator_command)
}

// optional .RobotControl robot_control = 3;
inline bool SimulationSyncRequest::has_robot_control() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SimulationSyncRequest::set_has_robot_control() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SimulationSyncRequest::clear_has_robot_control() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::RobotControl& SimulationSyncRequest::_internal_robot_control() const {
  return *robot_control_;
}
inline const ::RobotControl& SimulationSyncRequest::robot_control() const {
  const ::RobotControl* p = robot_control_;
  // @@protoc_insertion_point(field_get:SimulationSyncRequest.robot_control)
  return p != NULL ? *p : *reinterpret_cast<const ::RobotControl*>(
      &::_RobotControl_default_instance_);
}
inline ::RobotControl* SimulationSyncRequest::release_robot_control() {
  // @@protoc_insertion_point(field_release:SimulationSyncRequest.robot_control)
  clear_has_robot_control();
  ::RobotControl* temp = robot_control_;
  robot_control_ = NULL;
  return temp;
}
inline ::RobotControl* SimulationSyncRequest::mutable_robot_control() {
  set_has_robot_control();
  if (robot_control_ == NULL) {
    auto* p = CreateMaybeMessage<::RobotControl>(GetArenaNoVirtual());
    robot_control_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SimulationSyncRequest.robot_control)
  return robot_control_;
}
inline void SimulationSyncRequest::set_allocated_robot_control(::RobotControl* robot_control) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(robot_control_);
  }
  if (robot_control) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      robot_control = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, robot_control, submessage_arena);
    }
    set_has_robot_control();
  } else {
    clear_has_robot_control();
  }
  robot_control_ = robot_control;
  // @@protoc_insertion_point(field_set_allocated:SimulationSyncRequest.robot_control)
}

// -------------------------------------------------------------------

// SimulationSyncResponse

// repeated .SSL_DetectionFrame detection = 1;
inline int SimulationSyncResponse::detection_size() const {
  return detection_.size();
}
inline ::SSL_DetectionFrame* SimulationSyncResponse::mutable_detection(int index) {
  // @@protoc_insertion_point(field_mutable:SimulationSyncResponse.detection)
  return detection_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::SSL_DetectionFrame >*
SimulationSyncResponse::mutable_detection() {
  // @@protoc_insertion_point(field_mutable_list:SimulationSyncResponse.detection)
  return &detection_;
}
inline const ::SSL_DetectionFrame& SimulationSyncResponse::detection(int index) const {
  // @@protoc_insertion_point(field_get:SimulationSyncResponse.detection)
  return detection_.Get(index);
}
inline ::SSL_DetectionFrame* SimulationSyncResponse::add_detection() {
  // @@protoc_insertion_point(field_add:SimulationSyncResponse.detection)
  return detection_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionFrame >&
SimulationSyncResponse::detection() const {
  // @@protoc_insertion_point(field_list:SimulationSyncResponse.detection)
  return detection_;
}

// optional .RobotControlResponse robot_control_response = 2;
inline bool SimulationSyncResponse::has_robot_control_response() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SimulationSyncResponse::set_has_robot_control_response() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SimulationSyncResponse::clear_has_robot_control_response() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::RobotControlResponse& SimulationSyncResponse::_internal_robot_control_response() const {
  return *robot_control_response_;
}
inline const ::RobotControlResponse& SimulationSyncResponse::robot_control_response() const {
  const ::RobotControlResponse* p = robot_control_response_;
  // @@protoc_insertion_point(field_get:SimulationSyncResponse.robot_control_response)
  return p != NULL ? *p : *reinterpret_cast<const ::RobotControlResponse*>(
      &::_RobotControlResponse_default_instance_);
}
inline ::RobotControlResponse* SimulationSyncResponse::release_robot_control_response() {
  // @@protoc_insertion_point(field_release:SimulationSyncResponse.robot_control_response)
  clear_has_robot_control_response();
  ::RobotControlResponse* temp = robot_control_response_;
  robot_control_response_ = NULL;
  return temp;
}
inline ::RobotControlResponse* SimulationSyncResponse::mutable_robot_control_response() {
  set_has_robot_control_response();
  if (robot_control_response_ == NULL) {
    auto* p = CreateMaybeMessage<::RobotControlResponse>(GetArenaNoVirtual());
    robot_control_response_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SimulationSyncResponse.robot_control_response)
  return robot_control_response_;
}
inline void SimulationSyncResponse::set_allocated_robot_control_response(::RobotControlResponse* robot_control_response) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(robot_control_response_);
  }
  if (robot_control_response) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      robot_control_response = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, robot_control_response, submessage_arena);
    }
    set_has_robot_control_response();
  } else {
    clear_has_robot_control_response();
  }
  robot_control_response_ = robot_control_response;
  // @@protoc_insertion_point(field_set_allocated:SimulationSyncResponse.robot_control_response)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ssl_5fsimulation_5fsynchronous_2eproto
