// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_gc_common.proto

#include "ssl_gc_common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class RobotIdDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RobotId>
      _instance;
} _RobotId_default_instance_;
namespace protobuf_ssl_5fgc_5fcommon_2eproto {
static void InitDefaultsRobotId() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_RobotId_default_instance_;
    new (ptr) ::RobotId();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RobotId::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RobotId =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRobotId}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RobotId.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RobotId, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RobotId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RobotId, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RobotId, team_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::RobotId)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_RobotId_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ssl_gc_common.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023ssl_gc_common.proto\"*\n\007RobotId\022\n\n\002id\030\001"
      " \001(\r\022\023\n\004team\030\002 \001(\0162\005.Team*)\n\004Team\022\013\n\007UNK"
      "NOWN\020\000\022\n\n\006YELLOW\020\001\022\010\n\004BLUE\020\002*1\n\010Division"
      "\022\017\n\013DIV_UNKNOWN\020\000\022\t\n\005DIV_A\020\001\022\t\n\005DIV_B\020\002B"
      "8Z6github.com/RoboCup-SSL/ssl-simulation"
      "-protocol/pkg/sim"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 217);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ssl_gc_common.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ssl_5fgc_5fcommon_2eproto
const ::google::protobuf::EnumDescriptor* Team_descriptor() {
  protobuf_ssl_5fgc_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ssl_5fgc_5fcommon_2eproto::file_level_enum_descriptors[0];
}
bool Team_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Division_descriptor() {
  protobuf_ssl_5fgc_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ssl_5fgc_5fcommon_2eproto::file_level_enum_descriptors[1];
}
bool Division_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RobotId::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RobotId::kIdFieldNumber;
const int RobotId::kTeamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RobotId::RobotId()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ssl_5fgc_5fcommon_2eproto::scc_info_RobotId.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:RobotId)
}
RobotId::RobotId(const RobotId& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&team_) -
    reinterpret_cast<char*>(&id_)) + sizeof(team_));
  // @@protoc_insertion_point(copy_constructor:RobotId)
}

void RobotId::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&team_) -
      reinterpret_cast<char*>(&id_)) + sizeof(team_));
}

RobotId::~RobotId() {
  // @@protoc_insertion_point(destructor:RobotId)
  SharedDtor();
}

void RobotId::SharedDtor() {
}

void RobotId::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RobotId::descriptor() {
  ::protobuf_ssl_5fgc_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ssl_5fgc_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RobotId& RobotId::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ssl_5fgc_5fcommon_2eproto::scc_info_RobotId.base);
  return *internal_default_instance();
}


void RobotId::Clear() {
// @@protoc_insertion_point(message_clear_start:RobotId)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&team_) -
        reinterpret_cast<char*>(&id_)) + sizeof(team_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RobotId::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RobotId)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .Team team = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Team_IsValid(value)) {
            set_team(static_cast< ::Team >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:RobotId)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RobotId)
  return false;
#undef DO_
}

void RobotId::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RobotId)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional .Team team = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->team(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:RobotId)
}

::google::protobuf::uint8* RobotId::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RobotId)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional .Team team = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->team(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RobotId)
  return target;
}

size_t RobotId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RobotId)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional .Team team = 2;
    if (has_team()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->team());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RobotId::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RobotId)
  GOOGLE_DCHECK_NE(&from, this);
  const RobotId* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RobotId>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RobotId)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RobotId)
    MergeFrom(*source);
  }
}

void RobotId::MergeFrom(const RobotId& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RobotId)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      team_ = from.team_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RobotId::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RobotId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotId::CopyFrom(const RobotId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RobotId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotId::IsInitialized() const {
  return true;
}

void RobotId::Swap(RobotId* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RobotId::InternalSwap(RobotId* other) {
  using std::swap;
  swap(id_, other->id_);
  swap(team_, other->team_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RobotId::GetMetadata() const {
  protobuf_ssl_5fgc_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ssl_5fgc_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::RobotId* Arena::CreateMaybeMessage< ::RobotId >(Arena* arena) {
  return Arena::CreateInternal< ::RobotId >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
