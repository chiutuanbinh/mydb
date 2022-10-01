// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: my_db.proto

#include "my_db.pb.h"

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
namespace mydb {
constexpr SetResp::SetResp(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : code_(int64_t{0}){}
struct SetRespDefaultTypeInternal {
  constexpr SetRespDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SetRespDefaultTypeInternal() {}
  union {
    SetResp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SetRespDefaultTypeInternal _SetResp_default_instance_;
constexpr Entry::Entry(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : entrykey_(nullptr)
  , entryvalue_(nullptr){}
struct EntryDefaultTypeInternal {
  constexpr EntryDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EntryDefaultTypeInternal() {}
  union {
    Entry _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EntryDefaultTypeInternal _Entry_default_instance_;
constexpr EntryKey::EntryKey(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : value_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct EntryKeyDefaultTypeInternal {
  constexpr EntryKeyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EntryKeyDefaultTypeInternal() {}
  union {
    EntryKey _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EntryKeyDefaultTypeInternal _EntryKey_default_instance_;
constexpr EntryValue::EntryValue(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : value_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct EntryValueDefaultTypeInternal {
  constexpr EntryValueDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EntryValueDefaultTypeInternal() {}
  union {
    EntryValue _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EntryValueDefaultTypeInternal _EntryValue_default_instance_;
}  // namespace mydb
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_my_5fdb_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_my_5fdb_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_my_5fdb_2eproto = nullptr;

const uint32_t TableStruct_my_5fdb_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mydb::SetResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mydb::SetResp, code_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mydb::Entry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mydb::Entry, entrykey_),
  PROTOBUF_FIELD_OFFSET(::mydb::Entry, entryvalue_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mydb::EntryKey, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mydb::EntryKey, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mydb::EntryValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mydb::EntryValue, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mydb::SetResp)},
  { 7, -1, -1, sizeof(::mydb::Entry)},
  { 15, -1, -1, sizeof(::mydb::EntryKey)},
  { 22, -1, -1, sizeof(::mydb::EntryValue)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mydb::_SetResp_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mydb::_Entry_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mydb::_EntryKey_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mydb::_EntryValue_default_instance_),
};

const char descriptor_table_protodef_my_5fdb_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013my_db.proto\022\004mydb\"\027\n\007SetResp\022\014\n\004code\030\001"
  " \001(\003\"O\n\005Entry\022 \n\010entryKey\030\001 \001(\0132\016.mydb.E"
  "ntryKey\022$\n\nentryValue\030\002 \001(\0132\020.mydb.Entry"
  "Value\"\031\n\010EntryKey\022\r\n\005value\030\001 \001(\014\"\033\n\nEntr"
  "yValue\022\r\n\005value\030\001 \001(\0142V\n\004MyDB\022)\n\003Get\022\016.m"
  "ydb.EntryKey\032\020.mydb.EntryValue\"\000\022#\n\003Set\022"
  "\013.mydb.Entry\032\r.mydb.SetResp\"\000B\025\n\013binhct."
  "mydbB\004MyDBP\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_my_5fdb_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_my_5fdb_2eproto = {
  false, false, 300, descriptor_table_protodef_my_5fdb_2eproto, "my_db.proto", 
  &descriptor_table_my_5fdb_2eproto_once, nullptr, 0, 4,
  schemas, file_default_instances, TableStruct_my_5fdb_2eproto::offsets,
  file_level_metadata_my_5fdb_2eproto, file_level_enum_descriptors_my_5fdb_2eproto, file_level_service_descriptors_my_5fdb_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_my_5fdb_2eproto_getter() {
  return &descriptor_table_my_5fdb_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_my_5fdb_2eproto(&descriptor_table_my_5fdb_2eproto);
namespace mydb {

// ===================================================================

class SetResp::_Internal {
 public:
};

SetResp::SetResp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mydb.SetResp)
}
SetResp::SetResp(const SetResp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:mydb.SetResp)
}

inline void SetResp::SharedCtor() {
code_ = int64_t{0};
}

SetResp::~SetResp() {
  // @@protoc_insertion_point(destructor:mydb.SetResp)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SetResp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SetResp::ArenaDtor(void* object) {
  SetResp* _this = reinterpret_cast< SetResp* >(object);
  (void)_this;
}
void SetResp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SetResp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SetResp::Clear() {
// @@protoc_insertion_point(message_clear_start:mydb.SetResp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  code_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SetResp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

uint8_t* SetResp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mydb.SetResp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 code = 1;
  if (this->_internal_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mydb.SetResp)
  return target;
}

size_t SetResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mydb.SetResp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 code = 1;
  if (this->_internal_code() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SetResp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SetResp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SetResp::GetClassData() const { return &_class_data_; }

void SetResp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SetResp *>(to)->MergeFrom(
      static_cast<const SetResp &>(from));
}


void SetResp::MergeFrom(const SetResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mydb.SetResp)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_code() != 0) {
    _internal_set_code(from._internal_code());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SetResp::CopyFrom(const SetResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mydb.SetResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetResp::IsInitialized() const {
  return true;
}

void SetResp::InternalSwap(SetResp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SetResp::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_my_5fdb_2eproto_getter, &descriptor_table_my_5fdb_2eproto_once,
      file_level_metadata_my_5fdb_2eproto[0]);
}

// ===================================================================

class Entry::_Internal {
 public:
  static const ::mydb::EntryKey& entrykey(const Entry* msg);
  static const ::mydb::EntryValue& entryvalue(const Entry* msg);
};

const ::mydb::EntryKey&
Entry::_Internal::entrykey(const Entry* msg) {
  return *msg->entrykey_;
}
const ::mydb::EntryValue&
Entry::_Internal::entryvalue(const Entry* msg) {
  return *msg->entryvalue_;
}
Entry::Entry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mydb.Entry)
}
Entry::Entry(const Entry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_entrykey()) {
    entrykey_ = new ::mydb::EntryKey(*from.entrykey_);
  } else {
    entrykey_ = nullptr;
  }
  if (from._internal_has_entryvalue()) {
    entryvalue_ = new ::mydb::EntryValue(*from.entryvalue_);
  } else {
    entryvalue_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mydb.Entry)
}

inline void Entry::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&entrykey_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&entryvalue_) -
    reinterpret_cast<char*>(&entrykey_)) + sizeof(entryvalue_));
}

Entry::~Entry() {
  // @@protoc_insertion_point(destructor:mydb.Entry)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Entry::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete entrykey_;
  if (this != internal_default_instance()) delete entryvalue_;
}

void Entry::ArenaDtor(void* object) {
  Entry* _this = reinterpret_cast< Entry* >(object);
  (void)_this;
}
void Entry::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Entry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Entry::Clear() {
// @@protoc_insertion_point(message_clear_start:mydb.Entry)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && entrykey_ != nullptr) {
    delete entrykey_;
  }
  entrykey_ = nullptr;
  if (GetArenaForAllocation() == nullptr && entryvalue_ != nullptr) {
    delete entryvalue_;
  }
  entryvalue_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Entry::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .mydb.EntryKey entryKey = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_entrykey(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .mydb.EntryValue entryValue = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_entryvalue(), ptr);
          CHK_(ptr);
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

uint8_t* Entry::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mydb.Entry)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .mydb.EntryKey entryKey = 1;
  if (this->_internal_has_entrykey()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::entrykey(this), target, stream);
  }

  // .mydb.EntryValue entryValue = 2;
  if (this->_internal_has_entryvalue()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::entryvalue(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mydb.Entry)
  return target;
}

size_t Entry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mydb.Entry)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .mydb.EntryKey entryKey = 1;
  if (this->_internal_has_entrykey()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *entrykey_);
  }

  // .mydb.EntryValue entryValue = 2;
  if (this->_internal_has_entryvalue()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *entryvalue_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Entry::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Entry::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Entry::GetClassData() const { return &_class_data_; }

void Entry::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Entry *>(to)->MergeFrom(
      static_cast<const Entry &>(from));
}


void Entry::MergeFrom(const Entry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mydb.Entry)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_entrykey()) {
    _internal_mutable_entrykey()->::mydb::EntryKey::MergeFrom(from._internal_entrykey());
  }
  if (from._internal_has_entryvalue()) {
    _internal_mutable_entryvalue()->::mydb::EntryValue::MergeFrom(from._internal_entryvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Entry::CopyFrom(const Entry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mydb.Entry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entry::IsInitialized() const {
  return true;
}

void Entry::InternalSwap(Entry* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Entry, entryvalue_)
      + sizeof(Entry::entryvalue_)
      - PROTOBUF_FIELD_OFFSET(Entry, entrykey_)>(
          reinterpret_cast<char*>(&entrykey_),
          reinterpret_cast<char*>(&other->entrykey_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Entry::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_my_5fdb_2eproto_getter, &descriptor_table_my_5fdb_2eproto_once,
      file_level_metadata_my_5fdb_2eproto[1]);
}

// ===================================================================

class EntryKey::_Internal {
 public:
};

EntryKey::EntryKey(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mydb.EntryKey)
}
EntryKey::EntryKey(const EntryKey& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:mydb.EntryKey)
}

inline void EntryKey::SharedCtor() {
value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EntryKey::~EntryKey() {
  // @@protoc_insertion_point(destructor:mydb.EntryKey)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void EntryKey::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EntryKey::ArenaDtor(void* object) {
  EntryKey* _this = reinterpret_cast< EntryKey* >(object);
  (void)_this;
}
void EntryKey::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EntryKey::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void EntryKey::Clear() {
// @@protoc_insertion_point(message_clear_start:mydb.EntryKey)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EntryKey::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

uint8_t* EntryKey::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mydb.EntryKey)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes value = 1;
  if (!this->_internal_value().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mydb.EntryKey)
  return target;
}

size_t EntryKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mydb.EntryKey)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes value = 1;
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EntryKey::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    EntryKey::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EntryKey::GetClassData() const { return &_class_data_; }

void EntryKey::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<EntryKey *>(to)->MergeFrom(
      static_cast<const EntryKey &>(from));
}


void EntryKey::MergeFrom(const EntryKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mydb.EntryKey)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EntryKey::CopyFrom(const EntryKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mydb.EntryKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryKey::IsInitialized() const {
  return true;
}

void EntryKey::InternalSwap(EntryKey* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata EntryKey::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_my_5fdb_2eproto_getter, &descriptor_table_my_5fdb_2eproto_once,
      file_level_metadata_my_5fdb_2eproto[2]);
}

// ===================================================================

class EntryValue::_Internal {
 public:
};

EntryValue::EntryValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mydb.EntryValue)
}
EntryValue::EntryValue(const EntryValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:mydb.EntryValue)
}

inline void EntryValue::SharedCtor() {
value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EntryValue::~EntryValue() {
  // @@protoc_insertion_point(destructor:mydb.EntryValue)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void EntryValue::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EntryValue::ArenaDtor(void* object) {
  EntryValue* _this = reinterpret_cast< EntryValue* >(object);
  (void)_this;
}
void EntryValue::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EntryValue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void EntryValue::Clear() {
// @@protoc_insertion_point(message_clear_start:mydb.EntryValue)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EntryValue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

uint8_t* EntryValue::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mydb.EntryValue)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes value = 1;
  if (!this->_internal_value().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mydb.EntryValue)
  return target;
}

size_t EntryValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mydb.EntryValue)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes value = 1;
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EntryValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    EntryValue::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EntryValue::GetClassData() const { return &_class_data_; }

void EntryValue::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<EntryValue *>(to)->MergeFrom(
      static_cast<const EntryValue &>(from));
}


void EntryValue::MergeFrom(const EntryValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mydb.EntryValue)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EntryValue::CopyFrom(const EntryValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mydb.EntryValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryValue::IsInitialized() const {
  return true;
}

void EntryValue::InternalSwap(EntryValue* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata EntryValue::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_my_5fdb_2eproto_getter, &descriptor_table_my_5fdb_2eproto_once,
      file_level_metadata_my_5fdb_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mydb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mydb::SetResp* Arena::CreateMaybeMessage< ::mydb::SetResp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mydb::SetResp >(arena);
}
template<> PROTOBUF_NOINLINE ::mydb::Entry* Arena::CreateMaybeMessage< ::mydb::Entry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mydb::Entry >(arena);
}
template<> PROTOBUF_NOINLINE ::mydb::EntryKey* Arena::CreateMaybeMessage< ::mydb::EntryKey >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mydb::EntryKey >(arena);
}
template<> PROTOBUF_NOINLINE ::mydb::EntryValue* Arena::CreateMaybeMessage< ::mydb::EntryValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mydb::EntryValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
