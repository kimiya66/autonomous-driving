// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "state.pb.h"

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
class StateDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<State> {
} _State_default_instance_;

namespace protobuf_state_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, sensor_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, wheel_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, specification_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, steer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, brakecmd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(State, accelcmd_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(State)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_State_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "state.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
  _State_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_sensor_2eproto::InitDefaults();
  ::protobuf_wheel_2eproto::InitDefaults();
  ::protobuf_specification_2eproto::InitDefaults();
  _State_default_instance_.DefaultConstruct();
  _State_default_instance_.get_mutable()->specification_ = const_cast< ::Specification*>(
      ::Specification::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\013state.proto\032\014sensor.proto\032\013wheel.proto"
      "\032\023specification.proto\"\221\001\n\005State\022\027\n\006senso"
      "r\030\001 \003(\0132\007.Sensor\022\025\n\005wheel\030\002 \003(\0132\006.Wheel\022"
      "%\n\rspecification\030\003 \001(\0132\016.Specification\022\r"
      "\n\005steer\030\004 \001(\002\022\020\n\010brakeCmd\030\005 \001(\002\022\020\n\010accel"
      "Cmd\030\006 \001(\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 217);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "state.proto", &protobuf_RegisterTypes);
  ::protobuf_sensor_2eproto::AddDescriptors();
  ::protobuf_wheel_2eproto::AddDescriptors();
  ::protobuf_specification_2eproto::AddDescriptors();
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

}  // namespace protobuf_state_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int State::kSensorFieldNumber;
const int State::kWheelFieldNumber;
const int State::kSpecificationFieldNumber;
const int State::kSteerFieldNumber;
const int State::kBrakeCmdFieldNumber;
const int State::kAccelCmdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

State::State()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_state_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:State)
}
State::State(const State& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      sensor_(from.sensor_),
      wheel_(from.wheel_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_specification()) {
    specification_ = new ::Specification(*from.specification_);
  } else {
    specification_ = NULL;
  }
  ::memcpy(&steer_, &from.steer_,
    reinterpret_cast<char*>(&accelcmd_) -
    reinterpret_cast<char*>(&steer_) + sizeof(accelcmd_));
  // @@protoc_insertion_point(copy_constructor:State)
}

void State::SharedCtor() {
  ::memset(&specification_, 0, reinterpret_cast<char*>(&accelcmd_) -
    reinterpret_cast<char*>(&specification_) + sizeof(accelcmd_));
  _cached_size_ = 0;
}

State::~State() {
  // @@protoc_insertion_point(destructor:State)
  SharedDtor();
}

void State::SharedDtor() {
  if (this != internal_default_instance()) {
    delete specification_;
  }
}

void State::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* State::descriptor() {
  protobuf_state_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_state_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const State& State::default_instance() {
  protobuf_state_2eproto::InitDefaults();
  return *internal_default_instance();
}

State* State::New(::google::protobuf::Arena* arena) const {
  State* n = new State;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void State::Clear() {
// @@protoc_insertion_point(message_clear_start:State)
  sensor_.Clear();
  wheel_.Clear();
  if (GetArenaNoVirtual() == NULL && specification_ != NULL) {
    delete specification_;
  }
  specification_ = NULL;
  ::memset(&steer_, 0, reinterpret_cast<char*>(&accelcmd_) -
    reinterpret_cast<char*>(&steer_) + sizeof(accelcmd_));
}

bool State::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:State)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Sensor sensor = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_sensor()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Wheel wheel = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_wheel()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Specification specification = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_specification()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float steer = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &steer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float brakeCmd = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &brakecmd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float accelCmd = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &accelcmd_)));
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
  // @@protoc_insertion_point(parse_success:State)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:State)
  return false;
#undef DO_
}

void State::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:State)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Sensor sensor = 1;
  for (unsigned int i = 0, n = this->sensor_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->sensor(i), output);
  }

  // repeated .Wheel wheel = 2;
  for (unsigned int i = 0, n = this->wheel_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->wheel(i), output);
  }

  // .Specification specification = 3;
  if (this->has_specification()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->specification_, output);
  }

  // float steer = 4;
  if (this->steer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->steer(), output);
  }

  // float brakeCmd = 5;
  if (this->brakecmd() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->brakecmd(), output);
  }

  // float accelCmd = 6;
  if (this->accelcmd() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->accelcmd(), output);
  }

  // @@protoc_insertion_point(serialize_end:State)
}

::google::protobuf::uint8* State::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:State)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Sensor sensor = 1;
  for (unsigned int i = 0, n = this->sensor_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->sensor(i), deterministic, target);
  }

  // repeated .Wheel wheel = 2;
  for (unsigned int i = 0, n = this->wheel_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->wheel(i), deterministic, target);
  }

  // .Specification specification = 3;
  if (this->has_specification()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->specification_, deterministic, target);
  }

  // float steer = 4;
  if (this->steer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->steer(), target);
  }

  // float brakeCmd = 5;
  if (this->brakecmd() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->brakecmd(), target);
  }

  // float accelCmd = 6;
  if (this->accelcmd() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->accelcmd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:State)
  return target;
}

size_t State::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:State)
  size_t total_size = 0;

  // repeated .Sensor sensor = 1;
  {
    unsigned int count = this->sensor_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->sensor(i));
    }
  }

  // repeated .Wheel wheel = 2;
  {
    unsigned int count = this->wheel_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->wheel(i));
    }
  }

  // .Specification specification = 3;
  if (this->has_specification()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->specification_);
  }

  // float steer = 4;
  if (this->steer() != 0) {
    total_size += 1 + 4;
  }

  // float brakeCmd = 5;
  if (this->brakecmd() != 0) {
    total_size += 1 + 4;
  }

  // float accelCmd = 6;
  if (this->accelcmd() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void State::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:State)
  GOOGLE_DCHECK_NE(&from, this);
  const State* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const State>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:State)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:State)
    MergeFrom(*source);
  }
}

void State::MergeFrom(const State& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:State)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sensor_.MergeFrom(from.sensor_);
  wheel_.MergeFrom(from.wheel_);
  if (from.has_specification()) {
    mutable_specification()->::Specification::MergeFrom(from.specification());
  }
  if (from.steer() != 0) {
    set_steer(from.steer());
  }
  if (from.brakecmd() != 0) {
    set_brakecmd(from.brakecmd());
  }
  if (from.accelcmd() != 0) {
    set_accelcmd(from.accelcmd());
  }
}

void State::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void State::CopyFrom(const State& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool State::IsInitialized() const {
  return true;
}

void State::Swap(State* other) {
  if (other == this) return;
  InternalSwap(other);
}
void State::InternalSwap(State* other) {
  sensor_.InternalSwap(&other->sensor_);
  wheel_.InternalSwap(&other->wheel_);
  std::swap(specification_, other->specification_);
  std::swap(steer_, other->steer_);
  std::swap(brakecmd_, other->brakecmd_);
  std::swap(accelcmd_, other->accelcmd_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata State::GetMetadata() const {
  protobuf_state_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_state_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// State

// repeated .Sensor sensor = 1;
int State::sensor_size() const {
  return sensor_.size();
}
void State::clear_sensor() {
  sensor_.Clear();
}
const ::Sensor& State::sensor(int index) const {
  // @@protoc_insertion_point(field_get:State.sensor)
  return sensor_.Get(index);
}
::Sensor* State::mutable_sensor(int index) {
  // @@protoc_insertion_point(field_mutable:State.sensor)
  return sensor_.Mutable(index);
}
::Sensor* State::add_sensor() {
  // @@protoc_insertion_point(field_add:State.sensor)
  return sensor_.Add();
}
::google::protobuf::RepeatedPtrField< ::Sensor >*
State::mutable_sensor() {
  // @@protoc_insertion_point(field_mutable_list:State.sensor)
  return &sensor_;
}
const ::google::protobuf::RepeatedPtrField< ::Sensor >&
State::sensor() const {
  // @@protoc_insertion_point(field_list:State.sensor)
  return sensor_;
}

// repeated .Wheel wheel = 2;
int State::wheel_size() const {
  return wheel_.size();
}
void State::clear_wheel() {
  wheel_.Clear();
}
const ::Wheel& State::wheel(int index) const {
  // @@protoc_insertion_point(field_get:State.wheel)
  return wheel_.Get(index);
}
::Wheel* State::mutable_wheel(int index) {
  // @@protoc_insertion_point(field_mutable:State.wheel)
  return wheel_.Mutable(index);
}
::Wheel* State::add_wheel() {
  // @@protoc_insertion_point(field_add:State.wheel)
  return wheel_.Add();
}
::google::protobuf::RepeatedPtrField< ::Wheel >*
State::mutable_wheel() {
  // @@protoc_insertion_point(field_mutable_list:State.wheel)
  return &wheel_;
}
const ::google::protobuf::RepeatedPtrField< ::Wheel >&
State::wheel() const {
  // @@protoc_insertion_point(field_list:State.wheel)
  return wheel_;
}

// .Specification specification = 3;
bool State::has_specification() const {
  return this != internal_default_instance() && specification_ != NULL;
}
void State::clear_specification() {
  if (GetArenaNoVirtual() == NULL && specification_ != NULL) delete specification_;
  specification_ = NULL;
}
const ::Specification& State::specification() const {
  // @@protoc_insertion_point(field_get:State.specification)
  return specification_ != NULL ? *specification_
                         : *::Specification::internal_default_instance();
}
::Specification* State::mutable_specification() {
  
  if (specification_ == NULL) {
    specification_ = new ::Specification;
  }
  // @@protoc_insertion_point(field_mutable:State.specification)
  return specification_;
}
::Specification* State::release_specification() {
  // @@protoc_insertion_point(field_release:State.specification)
  
  ::Specification* temp = specification_;
  specification_ = NULL;
  return temp;
}
void State::set_allocated_specification(::Specification* specification) {
  delete specification_;
  specification_ = specification;
  if (specification) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:State.specification)
}

// float steer = 4;
void State::clear_steer() {
  steer_ = 0;
}
float State::steer() const {
  // @@protoc_insertion_point(field_get:State.steer)
  return steer_;
}
void State::set_steer(float value) {
  
  steer_ = value;
  // @@protoc_insertion_point(field_set:State.steer)
}

// float brakeCmd = 5;
void State::clear_brakecmd() {
  brakecmd_ = 0;
}
float State::brakecmd() const {
  // @@protoc_insertion_point(field_get:State.brakeCmd)
  return brakecmd_;
}
void State::set_brakecmd(float value) {
  
  brakecmd_ = value;
  // @@protoc_insertion_point(field_set:State.brakeCmd)
}

// float accelCmd = 6;
void State::clear_accelcmd() {
  accelcmd_ = 0;
}
float State::accelcmd() const {
  // @@protoc_insertion_point(field_get:State.accelCmd)
  return accelcmd_;
}
void State::set_accelcmd(float value) {
  
  accelcmd_ = value;
  // @@protoc_insertion_point(field_set:State.accelCmd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
