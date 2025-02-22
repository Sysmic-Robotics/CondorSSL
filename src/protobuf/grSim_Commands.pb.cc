// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Commands.proto

#include "grSim_Commands.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR grSim_Robot_Command::grSim_Robot_Command(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.id_)*/0u
  , /*decltype(_impl_.kickspeedx_)*/0
  , /*decltype(_impl_.kickspeedz_)*/0
  , /*decltype(_impl_.veltangent_)*/0
  , /*decltype(_impl_.velnormal_)*/0
  , /*decltype(_impl_.velangular_)*/0
  , /*decltype(_impl_.spinner_)*/false
  , /*decltype(_impl_.wheelsspeed_)*/false
  , /*decltype(_impl_.wheel1_)*/0
  , /*decltype(_impl_.wheel2_)*/0
  , /*decltype(_impl_.wheel3_)*/0
  , /*decltype(_impl_.wheel4_)*/0} {}
struct grSim_Robot_CommandDefaultTypeInternal {
  PROTOBUF_CONSTEXPR grSim_Robot_CommandDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~grSim_Robot_CommandDefaultTypeInternal() {}
  union {
    grSim_Robot_Command _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 grSim_Robot_CommandDefaultTypeInternal _grSim_Robot_Command_default_instance_;
PROTOBUF_CONSTEXPR grSim_Commands::grSim_Commands(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.robot_commands_)*/{}
  , /*decltype(_impl_.timestamp_)*/0
  , /*decltype(_impl_.isteamyellow_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct grSim_CommandsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR grSim_CommandsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~grSim_CommandsDefaultTypeInternal() {}
  union {
    grSim_Commands _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 grSim_CommandsDefaultTypeInternal _grSim_Commands_default_instance_;
static ::_pb::Metadata file_level_metadata_grSim_5fCommands_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grSim_5fCommands_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grSim_5fCommands_2eproto = nullptr;

const uint32_t TableStruct_grSim_5fCommands_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.kickspeedx_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.kickspeedz_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.veltangent_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.velnormal_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.velangular_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.spinner_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.wheelsspeed_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.wheel1_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.wheel2_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.wheel3_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _impl_.wheel4_),
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  0,
  1,
  2,
  3,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _impl_.isteamyellow_),
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _impl_.robot_commands_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 18, -1, sizeof(::grSim_Robot_Command)},
  { 30, -1, -1, sizeof(::grSim_Commands)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_grSim_Robot_Command_default_instance_._instance,
  &::_grSim_Commands_default_instance_._instance,
};

const char descriptor_table_protodef_grSim_5fCommands_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024grSim_Commands.proto\"\252\002\n\023grSim_Robot_C"
  "ommand\022\n\n\002id\030\001 \001(\r\022\022\n\nkickspeedx\030\002 \001(\002\022\022"
  "\n\nkickspeedz\030\003 \001(\002\022\022\n\nveltangent\030\004 \001(\002\022\021"
  "\n\tvelnormal\030\005 \001(\002\022\022\n\nvelangular\030\006 \001(\002\022\017\n"
  "\007spinner\030\007 \001(\010\022\023\n\013wheelsspeed\030\010 \001(\010\022\023\n\006w"
  "heel1\030\t \001(\002H\000\210\001\001\022\023\n\006wheel2\030\n \001(\002H\001\210\001\001\022\023\n"
  "\006wheel3\030\013 \001(\002H\002\210\001\001\022\023\n\006wheel4\030\014 \001(\002H\003\210\001\001B"
  "\t\n\007_wheel1B\t\n\007_wheel2B\t\n\007_wheel3B\t\n\007_whe"
  "el4\"g\n\016grSim_Commands\022\021\n\ttimestamp\030\001 \001(\001"
  "\022\024\n\014isteamyellow\030\002 \001(\010\022,\n\016robot_commands"
  "\030\003 \003(\0132\024.grSim_Robot_Commandb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_grSim_5fCommands_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grSim_5fCommands_2eproto = {
    false, false, 436, descriptor_table_protodef_grSim_5fCommands_2eproto,
    "grSim_Commands.proto",
    &descriptor_table_grSim_5fCommands_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_grSim_5fCommands_2eproto::offsets,
    file_level_metadata_grSim_5fCommands_2eproto, file_level_enum_descriptors_grSim_5fCommands_2eproto,
    file_level_service_descriptors_grSim_5fCommands_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grSim_5fCommands_2eproto_getter() {
  return &descriptor_table_grSim_5fCommands_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grSim_5fCommands_2eproto(&descriptor_table_grSim_5fCommands_2eproto);

// ===================================================================

class grSim_Robot_Command::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Robot_Command>()._impl_._has_bits_);
  static void set_has_wheel1(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_wheel2(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_wheel3(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_wheel4(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

grSim_Robot_Command::grSim_Robot_Command(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grSim_Robot_Command)
}
grSim_Robot_Command::grSim_Robot_Command(const grSim_Robot_Command& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  grSim_Robot_Command* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.id_){}
    , decltype(_impl_.kickspeedx_){}
    , decltype(_impl_.kickspeedz_){}
    , decltype(_impl_.veltangent_){}
    , decltype(_impl_.velnormal_){}
    , decltype(_impl_.velangular_){}
    , decltype(_impl_.spinner_){}
    , decltype(_impl_.wheelsspeed_){}
    , decltype(_impl_.wheel1_){}
    , decltype(_impl_.wheel2_){}
    , decltype(_impl_.wheel3_){}
    , decltype(_impl_.wheel4_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.id_, &from._impl_.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.wheel4_) -
    reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.wheel4_));
  // @@protoc_insertion_point(copy_constructor:grSim_Robot_Command)
}

inline void grSim_Robot_Command::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.id_){0u}
    , decltype(_impl_.kickspeedx_){0}
    , decltype(_impl_.kickspeedz_){0}
    , decltype(_impl_.veltangent_){0}
    , decltype(_impl_.velnormal_){0}
    , decltype(_impl_.velangular_){0}
    , decltype(_impl_.spinner_){false}
    , decltype(_impl_.wheelsspeed_){false}
    , decltype(_impl_.wheel1_){0}
    , decltype(_impl_.wheel2_){0}
    , decltype(_impl_.wheel3_){0}
    , decltype(_impl_.wheel4_){0}
  };
}

grSim_Robot_Command::~grSim_Robot_Command() {
  // @@protoc_insertion_point(destructor:grSim_Robot_Command)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void grSim_Robot_Command::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void grSim_Robot_Command::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void grSim_Robot_Command::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Robot_Command)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.wheelsspeed_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.wheelsspeed_));
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&_impl_.wheel1_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.wheel4_) -
        reinterpret_cast<char*>(&_impl_.wheel1_)) + sizeof(_impl_.wheel4_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_Robot_Command::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float kickspeedx = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _impl_.kickspeedx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float kickspeedz = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _impl_.kickspeedz_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float veltangent = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 37)) {
          _impl_.veltangent_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float velnormal = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 45)) {
          _impl_.velnormal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float velangular = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 53)) {
          _impl_.velangular_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // bool spinner = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.spinner_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool wheelsspeed = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.wheelsspeed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional float wheel1 = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 77)) {
          _Internal::set_has_wheel1(&has_bits);
          _impl_.wheel1_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional float wheel2 = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 85)) {
          _Internal::set_has_wheel2(&has_bits);
          _impl_.wheel2_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional float wheel3 = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 93)) {
          _Internal::set_has_wheel3(&has_bits);
          _impl_.wheel3_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional float wheel4 = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 101)) {
          _Internal::set_has_wheel4(&has_bits);
          _impl_.wheel4_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* grSim_Robot_Command::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Robot_Command)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // float kickspeedx = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedx = this->_internal_kickspeedx();
  uint32_t raw_kickspeedx;
  memcpy(&raw_kickspeedx, &tmp_kickspeedx, sizeof(tmp_kickspeedx));
  if (raw_kickspeedx != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_kickspeedx(), target);
  }

  // float kickspeedz = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedz = this->_internal_kickspeedz();
  uint32_t raw_kickspeedz;
  memcpy(&raw_kickspeedz, &tmp_kickspeedz, sizeof(tmp_kickspeedz));
  if (raw_kickspeedz != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_kickspeedz(), target);
  }

  // float veltangent = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_veltangent = this->_internal_veltangent();
  uint32_t raw_veltangent;
  memcpy(&raw_veltangent, &tmp_veltangent, sizeof(tmp_veltangent));
  if (raw_veltangent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(4, this->_internal_veltangent(), target);
  }

  // float velnormal = 5;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velnormal = this->_internal_velnormal();
  uint32_t raw_velnormal;
  memcpy(&raw_velnormal, &tmp_velnormal, sizeof(tmp_velnormal));
  if (raw_velnormal != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(5, this->_internal_velnormal(), target);
  }

  // float velangular = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velangular = this->_internal_velangular();
  uint32_t raw_velangular;
  memcpy(&raw_velangular, &tmp_velangular, sizeof(tmp_velangular));
  if (raw_velangular != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(6, this->_internal_velangular(), target);
  }

  // bool spinner = 7;
  if (this->_internal_spinner() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_spinner(), target);
  }

  // bool wheelsspeed = 8;
  if (this->_internal_wheelsspeed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(8, this->_internal_wheelsspeed(), target);
  }

  // optional float wheel1 = 9;
  if (_internal_has_wheel1()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(9, this->_internal_wheel1(), target);
  }

  // optional float wheel2 = 10;
  if (_internal_has_wheel2()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(10, this->_internal_wheel2(), target);
  }

  // optional float wheel3 = 11;
  if (_internal_has_wheel3()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(11, this->_internal_wheel3(), target);
  }

  // optional float wheel4 = 12;
  if (_internal_has_wheel4()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(12, this->_internal_wheel4(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Robot_Command)
  return target;
}

size_t grSim_Robot_Command::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Robot_Command)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  // float kickspeedx = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedx = this->_internal_kickspeedx();
  uint32_t raw_kickspeedx;
  memcpy(&raw_kickspeedx, &tmp_kickspeedx, sizeof(tmp_kickspeedx));
  if (raw_kickspeedx != 0) {
    total_size += 1 + 4;
  }

  // float kickspeedz = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedz = this->_internal_kickspeedz();
  uint32_t raw_kickspeedz;
  memcpy(&raw_kickspeedz, &tmp_kickspeedz, sizeof(tmp_kickspeedz));
  if (raw_kickspeedz != 0) {
    total_size += 1 + 4;
  }

  // float veltangent = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_veltangent = this->_internal_veltangent();
  uint32_t raw_veltangent;
  memcpy(&raw_veltangent, &tmp_veltangent, sizeof(tmp_veltangent));
  if (raw_veltangent != 0) {
    total_size += 1 + 4;
  }

  // float velnormal = 5;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velnormal = this->_internal_velnormal();
  uint32_t raw_velnormal;
  memcpy(&raw_velnormal, &tmp_velnormal, sizeof(tmp_velnormal));
  if (raw_velnormal != 0) {
    total_size += 1 + 4;
  }

  // float velangular = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velangular = this->_internal_velangular();
  uint32_t raw_velangular;
  memcpy(&raw_velangular, &tmp_velangular, sizeof(tmp_velangular));
  if (raw_velangular != 0) {
    total_size += 1 + 4;
  }

  // bool spinner = 7;
  if (this->_internal_spinner() != 0) {
    total_size += 1 + 1;
  }

  // bool wheelsspeed = 8;
  if (this->_internal_wheelsspeed() != 0) {
    total_size += 1 + 1;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional float wheel1 = 9;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 4;
    }

    // optional float wheel2 = 10;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
    }

    // optional float wheel3 = 11;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 4;
    }

    // optional float wheel4 = 12;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 4;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData grSim_Robot_Command::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    grSim_Robot_Command::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*grSim_Robot_Command::GetClassData() const { return &_class_data_; }


void grSim_Robot_Command::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<grSim_Robot_Command*>(&to_msg);
  auto& from = static_cast<const grSim_Robot_Command&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grSim_Robot_Command)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedx = from._internal_kickspeedx();
  uint32_t raw_kickspeedx;
  memcpy(&raw_kickspeedx, &tmp_kickspeedx, sizeof(tmp_kickspeedx));
  if (raw_kickspeedx != 0) {
    _this->_internal_set_kickspeedx(from._internal_kickspeedx());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_kickspeedz = from._internal_kickspeedz();
  uint32_t raw_kickspeedz;
  memcpy(&raw_kickspeedz, &tmp_kickspeedz, sizeof(tmp_kickspeedz));
  if (raw_kickspeedz != 0) {
    _this->_internal_set_kickspeedz(from._internal_kickspeedz());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_veltangent = from._internal_veltangent();
  uint32_t raw_veltangent;
  memcpy(&raw_veltangent, &tmp_veltangent, sizeof(tmp_veltangent));
  if (raw_veltangent != 0) {
    _this->_internal_set_veltangent(from._internal_veltangent());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velnormal = from._internal_velnormal();
  uint32_t raw_velnormal;
  memcpy(&raw_velnormal, &tmp_velnormal, sizeof(tmp_velnormal));
  if (raw_velnormal != 0) {
    _this->_internal_set_velnormal(from._internal_velnormal());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_velangular = from._internal_velangular();
  uint32_t raw_velangular;
  memcpy(&raw_velangular, &tmp_velangular, sizeof(tmp_velangular));
  if (raw_velangular != 0) {
    _this->_internal_set_velangular(from._internal_velangular());
  }
  if (from._internal_spinner() != 0) {
    _this->_internal_set_spinner(from._internal_spinner());
  }
  if (from._internal_wheelsspeed() != 0) {
    _this->_internal_set_wheelsspeed(from._internal_wheelsspeed());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.wheel1_ = from._impl_.wheel1_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.wheel2_ = from._impl_.wheel2_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.wheel3_ = from._impl_.wheel3_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.wheel4_ = from._impl_.wheel4_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void grSim_Robot_Command::CopyFrom(const grSim_Robot_Command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Robot_Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Robot_Command::IsInitialized() const {
  return true;
}

void grSim_Robot_Command::InternalSwap(grSim_Robot_Command* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_Robot_Command, _impl_.wheel4_)
      + sizeof(grSim_Robot_Command::_impl_.wheel4_)
      - PROTOBUF_FIELD_OFFSET(grSim_Robot_Command, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Robot_Command::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fCommands_2eproto_getter, &descriptor_table_grSim_5fCommands_2eproto_once,
      file_level_metadata_grSim_5fCommands_2eproto[0]);
}

// ===================================================================

class grSim_Commands::_Internal {
 public:
};

grSim_Commands::grSim_Commands(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grSim_Commands)
}
grSim_Commands::grSim_Commands(const grSim_Commands& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  grSim_Commands* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.robot_commands_){from._impl_.robot_commands_}
    , decltype(_impl_.timestamp_){}
    , decltype(_impl_.isteamyellow_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.timestamp_, &from._impl_.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.isteamyellow_) -
    reinterpret_cast<char*>(&_impl_.timestamp_)) + sizeof(_impl_.isteamyellow_));
  // @@protoc_insertion_point(copy_constructor:grSim_Commands)
}

inline void grSim_Commands::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.robot_commands_){arena}
    , decltype(_impl_.timestamp_){0}
    , decltype(_impl_.isteamyellow_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

grSim_Commands::~grSim_Commands() {
  // @@protoc_insertion_point(destructor:grSim_Commands)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void grSim_Commands::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.robot_commands_.~RepeatedPtrField();
}

void grSim_Commands::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void grSim_Commands::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Commands)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.robot_commands_.Clear();
  ::memset(&_impl_.timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.isteamyellow_) -
      reinterpret_cast<char*>(&_impl_.timestamp_)) + sizeof(_impl_.isteamyellow_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_Commands::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // bool isteamyellow = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.isteamyellow_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .grSim_Robot_Command robot_commands = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robot_commands(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* grSim_Commands::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Commands)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // double timestamp = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_timestamp = this->_internal_timestamp();
  uint64_t raw_timestamp;
  memcpy(&raw_timestamp, &tmp_timestamp, sizeof(tmp_timestamp));
  if (raw_timestamp != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_timestamp(), target);
  }

  // bool isteamyellow = 2;
  if (this->_internal_isteamyellow() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_isteamyellow(), target);
  }

  // repeated .grSim_Robot_Command robot_commands = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_robot_commands_size()); i < n; i++) {
    const auto& repfield = this->_internal_robot_commands(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Commands)
  return target;
}

size_t grSim_Commands::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Commands)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .grSim_Robot_Command robot_commands = 3;
  total_size += 1UL * this->_internal_robot_commands_size();
  for (const auto& msg : this->_impl_.robot_commands_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // double timestamp = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_timestamp = this->_internal_timestamp();
  uint64_t raw_timestamp;
  memcpy(&raw_timestamp, &tmp_timestamp, sizeof(tmp_timestamp));
  if (raw_timestamp != 0) {
    total_size += 1 + 8;
  }

  // bool isteamyellow = 2;
  if (this->_internal_isteamyellow() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData grSim_Commands::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    grSim_Commands::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*grSim_Commands::GetClassData() const { return &_class_data_; }


void grSim_Commands::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<grSim_Commands*>(&to_msg);
  auto& from = static_cast<const grSim_Commands&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grSim_Commands)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.robot_commands_.MergeFrom(from._impl_.robot_commands_);
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_timestamp = from._internal_timestamp();
  uint64_t raw_timestamp;
  memcpy(&raw_timestamp, &tmp_timestamp, sizeof(tmp_timestamp));
  if (raw_timestamp != 0) {
    _this->_internal_set_timestamp(from._internal_timestamp());
  }
  if (from._internal_isteamyellow() != 0) {
    _this->_internal_set_isteamyellow(from._internal_isteamyellow());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void grSim_Commands::CopyFrom(const grSim_Commands& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Commands)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Commands::IsInitialized() const {
  return true;
}

void grSim_Commands::InternalSwap(grSim_Commands* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.robot_commands_.InternalSwap(&other->_impl_.robot_commands_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_Commands, _impl_.isteamyellow_)
      + sizeof(grSim_Commands::_impl_.isteamyellow_)
      - PROTOBUF_FIELD_OFFSET(grSim_Commands, _impl_.timestamp_)>(
          reinterpret_cast<char*>(&_impl_.timestamp_),
          reinterpret_cast<char*>(&other->_impl_.timestamp_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Commands::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fCommands_2eproto_getter, &descriptor_table_grSim_5fCommands_2eproto_once,
      file_level_metadata_grSim_5fCommands_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grSim_Robot_Command*
Arena::CreateMaybeMessage< ::grSim_Robot_Command >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_Robot_Command >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_Commands*
Arena::CreateMaybeMessage< ::grSim_Commands >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_Commands >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
