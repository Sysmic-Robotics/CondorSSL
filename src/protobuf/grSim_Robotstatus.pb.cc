// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Robotstatus.proto

#include "grSim_Robotstatus.pb.h"

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

namespace protobuf_grSim_5fRobotstatus_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_grSim_5fRobotstatus_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Robot_Status;
}  // namespace protobuf_grSim_5fRobotstatus_2eproto
class Robots_StatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Robots_Status>
      _instance;
} _Robots_Status_default_instance_;
class Robot_StatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Robot_Status>
      _instance;
} _Robot_Status_default_instance_;
namespace protobuf_grSim_5fRobotstatus_2eproto {
static void InitDefaultsRobots_Status() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Robots_Status_default_instance_;
    new (ptr) ::Robots_Status();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Robots_Status::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Robots_Status =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsRobots_Status}, {
      &protobuf_grSim_5fRobotstatus_2eproto::scc_info_Robot_Status.base,}};

static void InitDefaultsRobot_Status() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Robot_Status_default_instance_;
    new (ptr) ::Robot_Status();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Robot_Status::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Robot_Status =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRobot_Status}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Robots_Status.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Robot_Status.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robots_Status, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robots_Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robots_Status, robots_status_),
  ~0u,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, robot_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, infrared_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, flat_kick_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Robot_Status, chip_kick_),
  0,
  1,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::Robots_Status)},
  { 7, 16, sizeof(::Robot_Status)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Robots_Status_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Robot_Status_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "grSim_Robotstatus.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027grSim_Robotstatus.proto\"5\n\rRobots_Stat"
      "us\022$\n\rrobots_status\030\001 \003(\0132\r.Robot_Status"
      "\"X\n\014Robot_Status\022\020\n\010robot_id\030\001 \002(\005\022\020\n\010in"
      "frared\030\002 \002(\010\022\021\n\tflat_kick\030\003 \002(\010\022\021\n\tchip_"
      "kick\030\004 \002(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "grSim_Robotstatus.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_grSim_5fRobotstatus_2eproto

// ===================================================================

void Robots_Status::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Robots_Status::kRobotsStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Robots_Status::Robots_Status()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_grSim_5fRobotstatus_2eproto::scc_info_Robots_Status.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Robots_Status)
}
Robots_Status::Robots_Status(const Robots_Status& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      robots_status_(from.robots_status_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Robots_Status)
}

void Robots_Status::SharedCtor() {
}

Robots_Status::~Robots_Status() {
  // @@protoc_insertion_point(destructor:Robots_Status)
  SharedDtor();
}

void Robots_Status::SharedDtor() {
}

void Robots_Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Robots_Status::descriptor() {
  ::protobuf_grSim_5fRobotstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fRobotstatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Robots_Status& Robots_Status::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_grSim_5fRobotstatus_2eproto::scc_info_Robots_Status.base);
  return *internal_default_instance();
}


void Robots_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robots_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robots_status_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Robots_Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Robots_Status)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Robot_Status robots_status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_robots_status()));
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
  // @@protoc_insertion_point(parse_success:Robots_Status)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Robots_Status)
  return false;
#undef DO_
}

void Robots_Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Robots_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Robot_Status robots_status = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->robots_status_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->robots_status(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Robots_Status)
}

::google::protobuf::uint8* Robots_Status::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Robots_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Robot_Status robots_status = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->robots_status_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->robots_status(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robots_Status)
  return target;
}

size_t Robots_Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Robots_Status)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .Robot_Status robots_status = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->robots_status_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->robots_status(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Robots_Status::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Robots_Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Robots_Status* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Robots_Status>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Robots_Status)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Robots_Status)
    MergeFrom(*source);
  }
}

void Robots_Status::MergeFrom(const Robots_Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Robots_Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  robots_status_.MergeFrom(from.robots_status_);
}

void Robots_Status::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Robots_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Robots_Status::CopyFrom(const Robots_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robots_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robots_Status::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->robots_status())) return false;
  return true;
}

void Robots_Status::Swap(Robots_Status* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Robots_Status::InternalSwap(Robots_Status* other) {
  using std::swap;
  CastToBase(&robots_status_)->InternalSwap(CastToBase(&other->robots_status_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Robots_Status::GetMetadata() const {
  protobuf_grSim_5fRobotstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fRobotstatus_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Robot_Status::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Robot_Status::kRobotIdFieldNumber;
const int Robot_Status::kInfraredFieldNumber;
const int Robot_Status::kFlatKickFieldNumber;
const int Robot_Status::kChipKickFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Robot_Status::Robot_Status()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_grSim_5fRobotstatus_2eproto::scc_info_Robot_Status.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Robot_Status)
}
Robot_Status::Robot_Status(const Robot_Status& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&robot_id_, &from.robot_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&chip_kick_) -
    reinterpret_cast<char*>(&robot_id_)) + sizeof(chip_kick_));
  // @@protoc_insertion_point(copy_constructor:Robot_Status)
}

void Robot_Status::SharedCtor() {
  ::memset(&robot_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&chip_kick_) -
      reinterpret_cast<char*>(&robot_id_)) + sizeof(chip_kick_));
}

Robot_Status::~Robot_Status() {
  // @@protoc_insertion_point(destructor:Robot_Status)
  SharedDtor();
}

void Robot_Status::SharedDtor() {
}

void Robot_Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Robot_Status::descriptor() {
  ::protobuf_grSim_5fRobotstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fRobotstatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Robot_Status& Robot_Status::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_grSim_5fRobotstatus_2eproto::scc_info_Robot_Status.base);
  return *internal_default_instance();
}


void Robot_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robot_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&robot_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&chip_kick_) -
        reinterpret_cast<char*>(&robot_id_)) + sizeof(chip_kick_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Robot_Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Robot_Status)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 robot_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_robot_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &robot_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool infrared = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_infrared();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &infrared_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool flat_kick = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_flat_kick();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flat_kick_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool chip_kick = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_chip_kick();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &chip_kick_)));
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
  // @@protoc_insertion_point(parse_success:Robot_Status)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Robot_Status)
  return false;
#undef DO_
}

void Robot_Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Robot_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 robot_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->robot_id(), output);
  }

  // required bool infrared = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->infrared(), output);
  }

  // required bool flat_kick = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->flat_kick(), output);
  }

  // required bool chip_kick = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->chip_kick(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Robot_Status)
}

::google::protobuf::uint8* Robot_Status::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Robot_Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 robot_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->robot_id(), target);
  }

  // required bool infrared = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->infrared(), target);
  }

  // required bool flat_kick = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->flat_kick(), target);
  }

  // required bool chip_kick = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->chip_kick(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robot_Status)
  return target;
}

size_t Robot_Status::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Robot_Status)
  size_t total_size = 0;

  if (has_robot_id()) {
    // required int32 robot_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->robot_id());
  }

  if (has_infrared()) {
    // required bool infrared = 2;
    total_size += 1 + 1;
  }

  if (has_flat_kick()) {
    // required bool flat_kick = 3;
    total_size += 1 + 1;
  }

  if (has_chip_kick()) {
    // required bool chip_kick = 4;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t Robot_Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Robot_Status)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required int32 robot_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->robot_id());

    // required bool infrared = 2;
    total_size += 1 + 1;

    // required bool flat_kick = 3;
    total_size += 1 + 1;

    // required bool chip_kick = 4;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Robot_Status::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Robot_Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Robot_Status* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Robot_Status>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Robot_Status)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Robot_Status)
    MergeFrom(*source);
  }
}

void Robot_Status::MergeFrom(const Robot_Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Robot_Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      robot_id_ = from.robot_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      infrared_ = from.infrared_;
    }
    if (cached_has_bits & 0x00000004u) {
      flat_kick_ = from.flat_kick_;
    }
    if (cached_has_bits & 0x00000008u) {
      chip_kick_ = from.chip_kick_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Robot_Status::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Robot_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Robot_Status::CopyFrom(const Robot_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robot_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robot_Status::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void Robot_Status::Swap(Robot_Status* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Robot_Status::InternalSwap(Robot_Status* other) {
  using std::swap;
  swap(robot_id_, other->robot_id_);
  swap(infrared_, other->infrared_);
  swap(flat_kick_, other->flat_kick_);
  swap(chip_kick_, other->chip_kick_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Robot_Status::GetMetadata() const {
  protobuf_grSim_5fRobotstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fRobotstatus_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Robots_Status* Arena::CreateMaybeMessage< ::Robots_Status >(Arena* arena) {
  return Arena::CreateInternal< ::Robots_Status >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Robot_Status* Arena::CreateMaybeMessage< ::Robot_Status >(Arena* arena) {
  return Arena::CreateInternal< ::Robot_Status >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
