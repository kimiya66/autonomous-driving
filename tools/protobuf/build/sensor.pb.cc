// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sensor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf {
class SensorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Sensor> {
} _Sensor_default_instance_;

namespace protobuf_sensor_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sensor, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sensor, value_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Sensor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Sensor_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "sensor.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _Sensor_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Sensor_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\014sensor.proto\022\010protobuf\"d\n\006Sensor\022)\n\004ty"
      "pe\030\001 \001(\0162\033.protobuf.Sensor.SensorType\022\r\n"
      "\005value\030\002 \003(\002\" \n\nSensorType\022\007\n\003GPS\020\000\022\t\n\005L"
      "ASER\020\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sensor.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_sensor_2eproto

const ::google::protobuf::EnumDescriptor* Sensor_SensorType_descriptor() {
  protobuf_sensor_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_sensor_2eproto::file_level_enum_descriptors[0];
}
bool Sensor_SensorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Sensor_SensorType Sensor::GPS;
const Sensor_SensorType Sensor::LASER;
const Sensor_SensorType Sensor::SensorType_MIN;
const Sensor_SensorType Sensor::SensorType_MAX;
const int Sensor::SensorType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Sensor::kTypeFieldNumber;
const int Sensor::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Sensor::Sensor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_sensor_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf.Sensor)
}
Sensor::Sensor(const Sensor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      value_(from.value_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:protobuf.Sensor)
}

void Sensor::SharedCtor() {
  type_ = 0;
  _cached_size_ = 0;
}

Sensor::~Sensor() {
  // @@protoc_insertion_point(destructor:protobuf.Sensor)
  SharedDtor();
}

void Sensor::SharedDtor() {
}

void Sensor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sensor::descriptor() {
  protobuf_sensor_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_sensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Sensor& Sensor::default_instance() {
  protobuf_sensor_2eproto::InitDefaults();
  return *internal_default_instance();
}

Sensor* Sensor::New(::google::protobuf::Arena* arena) const {
  Sensor* n = new Sensor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Sensor::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf.Sensor)
  value_.Clear();
  type_ = 0;
}

bool Sensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf.Sensor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .protobuf.Sensor.SensorType type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::protobuf::Sensor_SensorType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_value())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(21u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 18u, input, this->mutable_value())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf.Sensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf.Sensor)
  return false;
#undef DO_
}

void Sensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf.Sensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .protobuf.Sensor.SensorType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // repeated float value = 2;
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast<::google::protobuf::uint32>(
        _value_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->value().data(), this->value_size(), output);
  }

  // @@protoc_insertion_point(serialize_end:protobuf.Sensor)
}

::google::protobuf::uint8* Sensor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf.Sensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .protobuf.Sensor.SensorType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // repeated float value = 2;
  if (this->value_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast<::google::protobuf::uint32>(
            _value_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->value_, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protobuf.Sensor)
  return target;
}

size_t Sensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf.Sensor)
  size_t total_size = 0;

  // repeated float value = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->value_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast<google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // .protobuf.Sensor.SensorType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Sensor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf.Sensor)
  GOOGLE_DCHECK_NE(&from, this);
  const Sensor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Sensor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf.Sensor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf.Sensor)
    MergeFrom(*source);
  }
}

void Sensor::MergeFrom(const Sensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf.Sensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Sensor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf.Sensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sensor::CopyFrom(const Sensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf.Sensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sensor::IsInitialized() const {
  return true;
}

void Sensor::Swap(Sensor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sensor::InternalSwap(Sensor* other) {
  value_.InternalSwap(&other->value_);
  std::swap(type_, other->type_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Sensor::GetMetadata() const {
  protobuf_sensor_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_sensor_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Sensor

// .protobuf.Sensor.SensorType type = 1;
void Sensor::clear_type() {
  type_ = 0;
}
::protobuf::Sensor_SensorType Sensor::type() const {
  // @@protoc_insertion_point(field_get:protobuf.Sensor.type)
  return static_cast< ::protobuf::Sensor_SensorType >(type_);
}
void Sensor::set_type(::protobuf::Sensor_SensorType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protobuf.Sensor.type)
}

// repeated float value = 2;
int Sensor::value_size() const {
  return value_.size();
}
void Sensor::clear_value() {
  value_.Clear();
}
float Sensor::value(int index) const {
  // @@protoc_insertion_point(field_get:protobuf.Sensor.value)
  return value_.Get(index);
}
void Sensor::set_value(int index, float value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:protobuf.Sensor.value)
}
void Sensor::add_value(float value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:protobuf.Sensor.value)
}
const ::google::protobuf::RepeatedField< float >&
Sensor::value() const {
  // @@protoc_insertion_point(field_list:protobuf.Sensor.value)
  return value_;
}
::google::protobuf::RepeatedField< float >*
Sensor::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:protobuf.Sensor.value)
  return &value_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)
