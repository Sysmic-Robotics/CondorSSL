// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Robotstatus.proto

#ifndef PROTOBUF_INCLUDED_grSim_5fRobotstatus_2eproto
#define PROTOBUF_INCLUDED_grSim_5fRobotstatus_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_grSim_5fRobotstatus_2eproto 

namespace protobuf_grSim_5fRobotstatus_2eproto {
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
}  // namespace protobuf_grSim_5fRobotstatus_2eproto
class Robot_Status;
class Robot_StatusDefaultTypeInternal;
extern Robot_StatusDefaultTypeInternal _Robot_Status_default_instance_;
class Robots_Status;
class Robots_StatusDefaultTypeInternal;
extern Robots_StatusDefaultTypeInternal _Robots_Status_default_instance_;
namespace google {
namespace protobuf {
template<> ::Robot_Status* Arena::CreateMaybeMessage<::Robot_Status>(Arena*);
template<> ::Robots_Status* Arena::CreateMaybeMessage<::Robots_Status>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Robots_Status : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Robots_Status) */ {
 public:
  Robots_Status();
  virtual ~Robots_Status();

  Robots_Status(const Robots_Status& from);

  inline Robots_Status& operator=(const Robots_Status& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Robots_Status(Robots_Status&& from) noexcept
    : Robots_Status() {
    *this = ::std::move(from);
  }

  inline Robots_Status& operator=(Robots_Status&& from) noexcept {
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
  static const Robots_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robots_Status* internal_default_instance() {
    return reinterpret_cast<const Robots_Status*>(
               &_Robots_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Robots_Status* other);
  friend void swap(Robots_Status& a, Robots_Status& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Robots_Status* New() const final {
    return CreateMaybeMessage<Robots_Status>(NULL);
  }

  Robots_Status* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Robots_Status>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Robots_Status& from);
  void MergeFrom(const Robots_Status& from);
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
  void InternalSwap(Robots_Status* other);
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

  // repeated .Robot_Status robots_status = 1;
  int robots_status_size() const;
  void clear_robots_status();
  static const int kRobotsStatusFieldNumber = 1;
  ::Robot_Status* mutable_robots_status(int index);
  ::google::protobuf::RepeatedPtrField< ::Robot_Status >*
      mutable_robots_status();
  const ::Robot_Status& robots_status(int index) const;
  ::Robot_Status* add_robots_status();
  const ::google::protobuf::RepeatedPtrField< ::Robot_Status >&
      robots_status() const;

  // @@protoc_insertion_point(class_scope:Robots_Status)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Robot_Status > robots_status_;
  friend struct ::protobuf_grSim_5fRobotstatus_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Robot_Status : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Robot_Status) */ {
 public:
  Robot_Status();
  virtual ~Robot_Status();

  Robot_Status(const Robot_Status& from);

  inline Robot_Status& operator=(const Robot_Status& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Robot_Status(Robot_Status&& from) noexcept
    : Robot_Status() {
    *this = ::std::move(from);
  }

  inline Robot_Status& operator=(Robot_Status&& from) noexcept {
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
  static const Robot_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robot_Status* internal_default_instance() {
    return reinterpret_cast<const Robot_Status*>(
               &_Robot_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Robot_Status* other);
  friend void swap(Robot_Status& a, Robot_Status& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Robot_Status* New() const final {
    return CreateMaybeMessage<Robot_Status>(NULL);
  }

  Robot_Status* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Robot_Status>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Robot_Status& from);
  void MergeFrom(const Robot_Status& from);
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
  void InternalSwap(Robot_Status* other);
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

  // required int32 robot_id = 1;
  bool has_robot_id() const;
  void clear_robot_id();
  static const int kRobotIdFieldNumber = 1;
  ::google::protobuf::int32 robot_id() const;
  void set_robot_id(::google::protobuf::int32 value);

  // required bool infrared = 2;
  bool has_infrared() const;
  void clear_infrared();
  static const int kInfraredFieldNumber = 2;
  bool infrared() const;
  void set_infrared(bool value);

  // required bool flat_kick = 3;
  bool has_flat_kick() const;
  void clear_flat_kick();
  static const int kFlatKickFieldNumber = 3;
  bool flat_kick() const;
  void set_flat_kick(bool value);

  // required bool chip_kick = 4;
  bool has_chip_kick() const;
  void clear_chip_kick();
  static const int kChipKickFieldNumber = 4;
  bool chip_kick() const;
  void set_chip_kick(bool value);

  // @@protoc_insertion_point(class_scope:Robot_Status)
 private:
  void set_has_robot_id();
  void clear_has_robot_id();
  void set_has_infrared();
  void clear_has_infrared();
  void set_has_flat_kick();
  void clear_has_flat_kick();
  void set_has_chip_kick();
  void clear_has_chip_kick();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 robot_id_;
  bool infrared_;
  bool flat_kick_;
  bool chip_kick_;
  friend struct ::protobuf_grSim_5fRobotstatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Robots_Status

// repeated .Robot_Status robots_status = 1;
inline int Robots_Status::robots_status_size() const {
  return robots_status_.size();
}
inline void Robots_Status::clear_robots_status() {
  robots_status_.Clear();
}
inline ::Robot_Status* Robots_Status::mutable_robots_status(int index) {
  // @@protoc_insertion_point(field_mutable:Robots_Status.robots_status)
  return robots_status_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::Robot_Status >*
Robots_Status::mutable_robots_status() {
  // @@protoc_insertion_point(field_mutable_list:Robots_Status.robots_status)
  return &robots_status_;
}
inline const ::Robot_Status& Robots_Status::robots_status(int index) const {
  // @@protoc_insertion_point(field_get:Robots_Status.robots_status)
  return robots_status_.Get(index);
}
inline ::Robot_Status* Robots_Status::add_robots_status() {
  // @@protoc_insertion_point(field_add:Robots_Status.robots_status)
  return robots_status_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Robot_Status >&
Robots_Status::robots_status() const {
  // @@protoc_insertion_point(field_list:Robots_Status.robots_status)
  return robots_status_;
}

// -------------------------------------------------------------------

// Robot_Status

// required int32 robot_id = 1;
inline bool Robot_Status::has_robot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot_Status::set_has_robot_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Robot_Status::clear_has_robot_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Robot_Status::clear_robot_id() {
  robot_id_ = 0;
  clear_has_robot_id();
}
inline ::google::protobuf::int32 Robot_Status::robot_id() const {
  // @@protoc_insertion_point(field_get:Robot_Status.robot_id)
  return robot_id_;
}
inline void Robot_Status::set_robot_id(::google::protobuf::int32 value) {
  set_has_robot_id();
  robot_id_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.robot_id)
}

// required bool infrared = 2;
inline bool Robot_Status::has_infrared() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot_Status::set_has_infrared() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Robot_Status::clear_has_infrared() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Robot_Status::clear_infrared() {
  infrared_ = false;
  clear_has_infrared();
}
inline bool Robot_Status::infrared() const {
  // @@protoc_insertion_point(field_get:Robot_Status.infrared)
  return infrared_;
}
inline void Robot_Status::set_infrared(bool value) {
  set_has_infrared();
  infrared_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.infrared)
}

// required bool flat_kick = 3;
inline bool Robot_Status::has_flat_kick() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot_Status::set_has_flat_kick() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Robot_Status::clear_has_flat_kick() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Robot_Status::clear_flat_kick() {
  flat_kick_ = false;
  clear_has_flat_kick();
}
inline bool Robot_Status::flat_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.flat_kick)
  return flat_kick_;
}
inline void Robot_Status::set_flat_kick(bool value) {
  set_has_flat_kick();
  flat_kick_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.flat_kick)
}

// required bool chip_kick = 4;
inline bool Robot_Status::has_chip_kick() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot_Status::set_has_chip_kick() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Robot_Status::clear_has_chip_kick() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Robot_Status::clear_chip_kick() {
  chip_kick_ = false;
  clear_has_chip_kick();
}
inline bool Robot_Status::chip_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.chip_kick)
  return chip_kick_;
}
inline void Robot_Status::set_chip_kick(bool value) {
  set_has_chip_kick();
  chip_kick_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.chip_kick)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_grSim_5fRobotstatus_2eproto
