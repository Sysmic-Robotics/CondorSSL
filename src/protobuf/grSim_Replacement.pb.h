// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Replacement.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grSim_5fReplacement_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fReplacement_2eproto;
class grSim_BallReplacement;
struct grSim_BallReplacementDefaultTypeInternal;
extern grSim_BallReplacementDefaultTypeInternal _grSim_BallReplacement_default_instance_;
class grSim_Replacement;
struct grSim_ReplacementDefaultTypeInternal;
extern grSim_ReplacementDefaultTypeInternal _grSim_Replacement_default_instance_;
class grSim_RobotReplacement;
struct grSim_RobotReplacementDefaultTypeInternal;
extern grSim_RobotReplacementDefaultTypeInternal _grSim_RobotReplacement_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::grSim_BallReplacement* Arena::CreateMaybeMessage<::grSim_BallReplacement>(Arena*);
template<> ::grSim_Replacement* Arena::CreateMaybeMessage<::grSim_Replacement>(Arena*);
template<> ::grSim_RobotReplacement* Arena::CreateMaybeMessage<::grSim_RobotReplacement>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class grSim_RobotReplacement final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_RobotReplacement) */ {
 public:
  inline grSim_RobotReplacement() : grSim_RobotReplacement(nullptr) {}
  ~grSim_RobotReplacement() override;
  explicit PROTOBUF_CONSTEXPR grSim_RobotReplacement(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  grSim_RobotReplacement(const grSim_RobotReplacement& from);
  grSim_RobotReplacement(grSim_RobotReplacement&& from) noexcept
    : grSim_RobotReplacement() {
    *this = ::std::move(from);
  }

  inline grSim_RobotReplacement& operator=(const grSim_RobotReplacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_RobotReplacement& operator=(grSim_RobotReplacement&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const grSim_RobotReplacement& default_instance() {
    return *internal_default_instance();
  }
  static inline const grSim_RobotReplacement* internal_default_instance() {
    return reinterpret_cast<const grSim_RobotReplacement*>(
               &_grSim_RobotReplacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(grSim_RobotReplacement& a, grSim_RobotReplacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_RobotReplacement* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(grSim_RobotReplacement* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  grSim_RobotReplacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<grSim_RobotReplacement>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const grSim_RobotReplacement& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const grSim_RobotReplacement& from) {
    grSim_RobotReplacement::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(grSim_RobotReplacement* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_RobotReplacement";
  }
  protected:
  explicit grSim_RobotReplacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kDirFieldNumber = 3,
    kIdFieldNumber = 4,
    kYellowteamFieldNumber = 5,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double dir = 3;
  void clear_dir();
  double dir() const;
  void set_dir(double value);
  private:
  double _internal_dir() const;
  void _internal_set_dir(double value);
  public:

  // uint32 id = 4;
  void clear_id();
  uint32_t id() const;
  void set_id(uint32_t value);
  private:
  uint32_t _internal_id() const;
  void _internal_set_id(uint32_t value);
  public:

  // bool yellowteam = 5;
  void clear_yellowteam();
  bool yellowteam() const;
  void set_yellowteam(bool value);
  private:
  bool _internal_yellowteam() const;
  void _internal_set_yellowteam(bool value);
  public:

  // @@protoc_insertion_point(class_scope:grSim_RobotReplacement)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double x_;
    double y_;
    double dir_;
    uint32_t id_;
    bool yellowteam_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// -------------------------------------------------------------------

class grSim_BallReplacement final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_BallReplacement) */ {
 public:
  inline grSim_BallReplacement() : grSim_BallReplacement(nullptr) {}
  ~grSim_BallReplacement() override;
  explicit PROTOBUF_CONSTEXPR grSim_BallReplacement(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  grSim_BallReplacement(const grSim_BallReplacement& from);
  grSim_BallReplacement(grSim_BallReplacement&& from) noexcept
    : grSim_BallReplacement() {
    *this = ::std::move(from);
  }

  inline grSim_BallReplacement& operator=(const grSim_BallReplacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_BallReplacement& operator=(grSim_BallReplacement&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const grSim_BallReplacement& default_instance() {
    return *internal_default_instance();
  }
  static inline const grSim_BallReplacement* internal_default_instance() {
    return reinterpret_cast<const grSim_BallReplacement*>(
               &_grSim_BallReplacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(grSim_BallReplacement& a, grSim_BallReplacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_BallReplacement* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(grSim_BallReplacement* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  grSim_BallReplacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<grSim_BallReplacement>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const grSim_BallReplacement& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const grSim_BallReplacement& from) {
    grSim_BallReplacement::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(grSim_BallReplacement* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_BallReplacement";
  }
  protected:
  explicit grSim_BallReplacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kVxFieldNumber = 3,
    kVyFieldNumber = 4,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double vx = 3;
  void clear_vx();
  double vx() const;
  void set_vx(double value);
  private:
  double _internal_vx() const;
  void _internal_set_vx(double value);
  public:

  // double vy = 4;
  void clear_vy();
  double vy() const;
  void set_vy(double value);
  private:
  double _internal_vy() const;
  void _internal_set_vy(double value);
  public:

  // @@protoc_insertion_point(class_scope:grSim_BallReplacement)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double x_;
    double y_;
    double vx_;
    double vy_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// -------------------------------------------------------------------

class grSim_Replacement final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_Replacement) */ {
 public:
  inline grSim_Replacement() : grSim_Replacement(nullptr) {}
  ~grSim_Replacement() override;
  explicit PROTOBUF_CONSTEXPR grSim_Replacement(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  grSim_Replacement(const grSim_Replacement& from);
  grSim_Replacement(grSim_Replacement&& from) noexcept
    : grSim_Replacement() {
    *this = ::std::move(from);
  }

  inline grSim_Replacement& operator=(const grSim_Replacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_Replacement& operator=(grSim_Replacement&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const grSim_Replacement& default_instance() {
    return *internal_default_instance();
  }
  static inline const grSim_Replacement* internal_default_instance() {
    return reinterpret_cast<const grSim_Replacement*>(
               &_grSim_Replacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(grSim_Replacement& a, grSim_Replacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_Replacement* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(grSim_Replacement* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  grSim_Replacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<grSim_Replacement>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const grSim_Replacement& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const grSim_Replacement& from) {
    grSim_Replacement::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(grSim_Replacement* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_Replacement";
  }
  protected:
  explicit grSim_Replacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotsFieldNumber = 2,
    kBallFieldNumber = 1,
  };
  // repeated .grSim_RobotReplacement robots = 2;
  int robots_size() const;
  private:
  int _internal_robots_size() const;
  public:
  void clear_robots();
  ::grSim_RobotReplacement* mutable_robots(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >*
      mutable_robots();
  private:
  const ::grSim_RobotReplacement& _internal_robots(int index) const;
  ::grSim_RobotReplacement* _internal_add_robots();
  public:
  const ::grSim_RobotReplacement& robots(int index) const;
  ::grSim_RobotReplacement* add_robots();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >&
      robots() const;

  // optional .grSim_BallReplacement ball = 1;
  bool has_ball() const;
  private:
  bool _internal_has_ball() const;
  public:
  void clear_ball();
  const ::grSim_BallReplacement& ball() const;
  PROTOBUF_NODISCARD ::grSim_BallReplacement* release_ball();
  ::grSim_BallReplacement* mutable_ball();
  void set_allocated_ball(::grSim_BallReplacement* ball);
  private:
  const ::grSim_BallReplacement& _internal_ball() const;
  ::grSim_BallReplacement* _internal_mutable_ball();
  public:
  void unsafe_arena_set_allocated_ball(
      ::grSim_BallReplacement* ball);
  ::grSim_BallReplacement* unsafe_arena_release_ball();

  // @@protoc_insertion_point(class_scope:grSim_Replacement)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement > robots_;
    ::grSim_BallReplacement* ball_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// grSim_RobotReplacement

// double x = 1;
inline void grSim_RobotReplacement::clear_x() {
  _impl_.x_ = 0;
}
inline double grSim_RobotReplacement::_internal_x() const {
  return _impl_.x_;
}
inline double grSim_RobotReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.x)
  return _internal_x();
}
inline void grSim_RobotReplacement::_internal_set_x(double value) {
  
  _impl_.x_ = value;
}
inline void grSim_RobotReplacement::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.x)
}

// double y = 2;
inline void grSim_RobotReplacement::clear_y() {
  _impl_.y_ = 0;
}
inline double grSim_RobotReplacement::_internal_y() const {
  return _impl_.y_;
}
inline double grSim_RobotReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.y)
  return _internal_y();
}
inline void grSim_RobotReplacement::_internal_set_y(double value) {
  
  _impl_.y_ = value;
}
inline void grSim_RobotReplacement::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.y)
}

// double dir = 3;
inline void grSim_RobotReplacement::clear_dir() {
  _impl_.dir_ = 0;
}
inline double grSim_RobotReplacement::_internal_dir() const {
  return _impl_.dir_;
}
inline double grSim_RobotReplacement::dir() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.dir)
  return _internal_dir();
}
inline void grSim_RobotReplacement::_internal_set_dir(double value) {
  
  _impl_.dir_ = value;
}
inline void grSim_RobotReplacement::set_dir(double value) {
  _internal_set_dir(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.dir)
}

// uint32 id = 4;
inline void grSim_RobotReplacement::clear_id() {
  _impl_.id_ = 0u;
}
inline uint32_t grSim_RobotReplacement::_internal_id() const {
  return _impl_.id_;
}
inline uint32_t grSim_RobotReplacement::id() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.id)
  return _internal_id();
}
inline void grSim_RobotReplacement::_internal_set_id(uint32_t value) {
  
  _impl_.id_ = value;
}
inline void grSim_RobotReplacement::set_id(uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.id)
}

// bool yellowteam = 5;
inline void grSim_RobotReplacement::clear_yellowteam() {
  _impl_.yellowteam_ = false;
}
inline bool grSim_RobotReplacement::_internal_yellowteam() const {
  return _impl_.yellowteam_;
}
inline bool grSim_RobotReplacement::yellowteam() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.yellowteam)
  return _internal_yellowteam();
}
inline void grSim_RobotReplacement::_internal_set_yellowteam(bool value) {
  
  _impl_.yellowteam_ = value;
}
inline void grSim_RobotReplacement::set_yellowteam(bool value) {
  _internal_set_yellowteam(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.yellowteam)
}

// -------------------------------------------------------------------

// grSim_BallReplacement

// double x = 1;
inline void grSim_BallReplacement::clear_x() {
  _impl_.x_ = 0;
}
inline double grSim_BallReplacement::_internal_x() const {
  return _impl_.x_;
}
inline double grSim_BallReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.x)
  return _internal_x();
}
inline void grSim_BallReplacement::_internal_set_x(double value) {
  
  _impl_.x_ = value;
}
inline void grSim_BallReplacement::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.x)
}

// double y = 2;
inline void grSim_BallReplacement::clear_y() {
  _impl_.y_ = 0;
}
inline double grSim_BallReplacement::_internal_y() const {
  return _impl_.y_;
}
inline double grSim_BallReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.y)
  return _internal_y();
}
inline void grSim_BallReplacement::_internal_set_y(double value) {
  
  _impl_.y_ = value;
}
inline void grSim_BallReplacement::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.y)
}

// double vx = 3;
inline void grSim_BallReplacement::clear_vx() {
  _impl_.vx_ = 0;
}
inline double grSim_BallReplacement::_internal_vx() const {
  return _impl_.vx_;
}
inline double grSim_BallReplacement::vx() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vx)
  return _internal_vx();
}
inline void grSim_BallReplacement::_internal_set_vx(double value) {
  
  _impl_.vx_ = value;
}
inline void grSim_BallReplacement::set_vx(double value) {
  _internal_set_vx(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vx)
}

// double vy = 4;
inline void grSim_BallReplacement::clear_vy() {
  _impl_.vy_ = 0;
}
inline double grSim_BallReplacement::_internal_vy() const {
  return _impl_.vy_;
}
inline double grSim_BallReplacement::vy() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vy)
  return _internal_vy();
}
inline void grSim_BallReplacement::_internal_set_vy(double value) {
  
  _impl_.vy_ = value;
}
inline void grSim_BallReplacement::set_vy(double value) {
  _internal_set_vy(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vy)
}

// -------------------------------------------------------------------

// grSim_Replacement

// optional .grSim_BallReplacement ball = 1;
inline bool grSim_Replacement::_internal_has_ball() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.ball_ != nullptr);
  return value;
}
inline bool grSim_Replacement::has_ball() const {
  return _internal_has_ball();
}
inline void grSim_Replacement::clear_ball() {
  if (_impl_.ball_ != nullptr) _impl_.ball_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const ::grSim_BallReplacement& grSim_Replacement::_internal_ball() const {
  const ::grSim_BallReplacement* p = _impl_.ball_;
  return p != nullptr ? *p : reinterpret_cast<const ::grSim_BallReplacement&>(
      ::_grSim_BallReplacement_default_instance_);
}
inline const ::grSim_BallReplacement& grSim_Replacement::ball() const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.ball)
  return _internal_ball();
}
inline void grSim_Replacement::unsafe_arena_set_allocated_ball(
    ::grSim_BallReplacement* ball) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ball_);
  }
  _impl_.ball_ = ball;
  if (ball) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:grSim_Replacement.ball)
}
inline ::grSim_BallReplacement* grSim_Replacement::release_ball() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::grSim_BallReplacement* temp = _impl_.ball_;
  _impl_.ball_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::grSim_BallReplacement* grSim_Replacement::unsafe_arena_release_ball() {
  // @@protoc_insertion_point(field_release:grSim_Replacement.ball)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::grSim_BallReplacement* temp = _impl_.ball_;
  _impl_.ball_ = nullptr;
  return temp;
}
inline ::grSim_BallReplacement* grSim_Replacement::_internal_mutable_ball() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.ball_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_BallReplacement>(GetArenaForAllocation());
    _impl_.ball_ = p;
  }
  return _impl_.ball_;
}
inline ::grSim_BallReplacement* grSim_Replacement::mutable_ball() {
  ::grSim_BallReplacement* _msg = _internal_mutable_ball();
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.ball)
  return _msg;
}
inline void grSim_Replacement::set_allocated_ball(::grSim_BallReplacement* ball) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.ball_;
  }
  if (ball) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(ball);
    if (message_arena != submessage_arena) {
      ball = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:grSim_Replacement.ball)
}

// repeated .grSim_RobotReplacement robots = 2;
inline int grSim_Replacement::_internal_robots_size() const {
  return _impl_.robots_.size();
}
inline int grSim_Replacement::robots_size() const {
  return _internal_robots_size();
}
inline void grSim_Replacement::clear_robots() {
  _impl_.robots_.Clear();
}
inline ::grSim_RobotReplacement* grSim_Replacement::mutable_robots(int index) {
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.robots)
  return _impl_.robots_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >*
grSim_Replacement::mutable_robots() {
  // @@protoc_insertion_point(field_mutable_list:grSim_Replacement.robots)
  return &_impl_.robots_;
}
inline const ::grSim_RobotReplacement& grSim_Replacement::_internal_robots(int index) const {
  return _impl_.robots_.Get(index);
}
inline const ::grSim_RobotReplacement& grSim_Replacement::robots(int index) const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.robots)
  return _internal_robots(index);
}
inline ::grSim_RobotReplacement* grSim_Replacement::_internal_add_robots() {
  return _impl_.robots_.Add();
}
inline ::grSim_RobotReplacement* grSim_Replacement::add_robots() {
  ::grSim_RobotReplacement* _add = _internal_add_robots();
  // @@protoc_insertion_point(field_add:grSim_Replacement.robots)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >&
grSim_Replacement::robots() const {
  // @@protoc_insertion_point(field_list:grSim_Replacement.robots)
  return _impl_.robots_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto
