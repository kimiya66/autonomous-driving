// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control.proto

#ifndef PROTOBUF_control_2eproto__INCLUDED
#define PROTOBUF_control_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
class Control;
class ControlDefaultTypeInternal;
extern ControlDefaultTypeInternal _Control_default_instance_;

namespace protobuf_control_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_control_2eproto

// ===================================================================

class Control : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Control) */ {
 public:
  Control();
  virtual ~Control();

  Control(const Control& from);

  inline Control& operator=(const Control& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Control& default_instance();

  static inline const Control* internal_default_instance() {
    return reinterpret_cast<const Control*>(
               &_Control_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Control* other);

  // implements Message ----------------------------------------------

  inline Control* New() const PROTOBUF_FINAL { return New(NULL); }

  Control* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Control& from);
  void MergeFrom(const Control& from);
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
  void InternalSwap(Control* other);
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

  // float steer = 1;
  void clear_steer();
  static const int kSteerFieldNumber = 1;
  float steer() const;
  void set_steer(float value);

  // float brakeCmd = 2;
  void clear_brakecmd();
  static const int kBrakeCmdFieldNumber = 2;
  float brakecmd() const;
  void set_brakecmd(float value);

  // float accelCmd = 3;
  void clear_accelcmd();
  static const int kAccelCmdFieldNumber = 3;
  float accelcmd() const;
  void set_accelcmd(float value);

  // int32 gear = 4;
  void clear_gear();
  static const int kGearFieldNumber = 4;
  ::google::protobuf::int32 gear() const;
  void set_gear(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Control)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float steer_;
  float brakecmd_;
  float accelcmd_;
  ::google::protobuf::int32 gear_;
  mutable int _cached_size_;
  friend struct protobuf_control_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Control

// float steer = 1;
inline void Control::clear_steer() {
  steer_ = 0;
}
inline float Control::steer() const {
  // @@protoc_insertion_point(field_get:Control.steer)
  return steer_;
}
inline void Control::set_steer(float value) {
  
  steer_ = value;
  // @@protoc_insertion_point(field_set:Control.steer)
}

// float brakeCmd = 2;
inline void Control::clear_brakecmd() {
  brakecmd_ = 0;
}
inline float Control::brakecmd() const {
  // @@protoc_insertion_point(field_get:Control.brakeCmd)
  return brakecmd_;
}
inline void Control::set_brakecmd(float value) {
  
  brakecmd_ = value;
  // @@protoc_insertion_point(field_set:Control.brakeCmd)
}

// float accelCmd = 3;
inline void Control::clear_accelcmd() {
  accelcmd_ = 0;
}
inline float Control::accelcmd() const {
  // @@protoc_insertion_point(field_get:Control.accelCmd)
  return accelcmd_;
}
inline void Control::set_accelcmd(float value) {
  
  accelcmd_ = value;
  // @@protoc_insertion_point(field_set:Control.accelCmd)
}

// int32 gear = 4;
inline void Control::clear_gear() {
  gear_ = 0;
}
inline ::google::protobuf::int32 Control::gear() const {
  // @@protoc_insertion_point(field_get:Control.gear)
  return gear_;
}
inline void Control::set_gear(::google::protobuf::int32 value) {
  
  gear_ = value;
  // @@protoc_insertion_point(field_set:Control.gear)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_control_2eproto__INCLUDED