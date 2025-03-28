// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_error.proto

#ifndef PROTOBUF_INCLUDED_ssl_5fsimulation_5ferror_2eproto
#define PROTOBUF_INCLUDED_ssl_5fsimulation_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ssl_5fsimulation_5ferror_2eproto 

namespace protobuf_ssl_5fsimulation_5ferror_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ssl_5fsimulation_5ferror_2eproto
class SimulatorError;
class SimulatorErrorDefaultTypeInternal;
extern SimulatorErrorDefaultTypeInternal _SimulatorError_default_instance_;
namespace google {
namespace protobuf {
template<> ::SimulatorError* Arena::CreateMaybeMessage<::SimulatorError>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class SimulatorError : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SimulatorError) */ {
 public:
  SimulatorError();
  virtual ~SimulatorError();

  SimulatorError(const SimulatorError& from);

  inline SimulatorError& operator=(const SimulatorError& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SimulatorError(SimulatorError&& from) noexcept
    : SimulatorError() {
    *this = ::std::move(from);
  }

  inline SimulatorError& operator=(SimulatorError&& from) noexcept {
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
  static const SimulatorError& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimulatorError* internal_default_instance() {
    return reinterpret_cast<const SimulatorError*>(
               &_SimulatorError_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SimulatorError* other);
  friend void swap(SimulatorError& a, SimulatorError& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SimulatorError* New() const final {
    return CreateMaybeMessage<SimulatorError>(NULL);
  }

  SimulatorError* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SimulatorError>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SimulatorError& from);
  void MergeFrom(const SimulatorError& from);
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
  void InternalSwap(SimulatorError* other);
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

  // optional string code = 1;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  const ::std::string& code() const;
  void set_code(const ::std::string& value);
  #if LANG_CXX11
  void set_code(::std::string&& value);
  #endif
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  ::std::string* mutable_code();
  ::std::string* release_code();
  void set_allocated_code(::std::string* code);

  // optional string message = 2;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:SimulatorError)
 private:
  void set_has_code();
  void clear_has_code();
  void set_has_message();
  void clear_has_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr code_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  friend struct ::protobuf_ssl_5fsimulation_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimulatorError

// optional string code = 1;
inline bool SimulatorError::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SimulatorError::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SimulatorError::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SimulatorError::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_code();
}
inline const ::std::string& SimulatorError::code() const {
  // @@protoc_insertion_point(field_get:SimulatorError.code)
  return code_.GetNoArena();
}
inline void SimulatorError::set_code(const ::std::string& value) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SimulatorError.code)
}
#if LANG_CXX11
inline void SimulatorError::set_code(::std::string&& value) {
  set_has_code();
  code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SimulatorError.code)
}
#endif
inline void SimulatorError::set_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SimulatorError.code)
}
inline void SimulatorError::set_code(const char* value, size_t size) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SimulatorError.code)
}
inline ::std::string* SimulatorError::mutable_code() {
  set_has_code();
  // @@protoc_insertion_point(field_mutable:SimulatorError.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimulatorError::release_code() {
  // @@protoc_insertion_point(field_release:SimulatorError.code)
  if (!has_code()) {
    return NULL;
  }
  clear_has_code();
  return code_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimulatorError::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    set_has_code();
  } else {
    clear_has_code();
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:SimulatorError.code)
}

// optional string message = 2;
inline bool SimulatorError::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SimulatorError::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SimulatorError::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SimulatorError::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
inline const ::std::string& SimulatorError::message() const {
  // @@protoc_insertion_point(field_get:SimulatorError.message)
  return message_.GetNoArena();
}
inline void SimulatorError::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SimulatorError.message)
}
#if LANG_CXX11
inline void SimulatorError::set_message(::std::string&& value) {
  set_has_message();
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SimulatorError.message)
}
#endif
inline void SimulatorError::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SimulatorError.message)
}
inline void SimulatorError::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SimulatorError.message)
}
inline ::std::string* SimulatorError::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:SimulatorError.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimulatorError::release_message() {
  // @@protoc_insertion_point(field_release:SimulatorError.message)
  if (!has_message()) {
    return NULL;
  }
  clear_has_message();
  return message_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimulatorError::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:SimulatorError.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ssl_5fsimulation_5ferror_2eproto
