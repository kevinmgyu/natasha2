// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base.proto

#ifndef PROTOBUF_base_2eproto__INCLUDED
#define PROTOBUF_base_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace protobuf_base_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSymbolLineImpl();
void InitDefaultsSymbolLine();
void InitDefaultsSymbolBlockImpl();
void InitDefaultsSymbolBlock();
void InitDefaultsSymbolBlock3X5Impl();
void InitDefaultsSymbolBlock3X5();
void InitDefaultsStaticCascadingRandomResultImpl();
void InitDefaultsStaticCascadingRandomResult();
inline void InitDefaults() {
  InitDefaultsSymbolLine();
  InitDefaultsSymbolBlock();
  InitDefaultsSymbolBlock3X5();
  InitDefaultsStaticCascadingRandomResult();
}
}  // namespace protobuf_base_2eproto
namespace natashapb {
class StaticCascadingRandomResult;
class StaticCascadingRandomResultDefaultTypeInternal;
extern StaticCascadingRandomResultDefaultTypeInternal _StaticCascadingRandomResult_default_instance_;
class SymbolBlock;
class SymbolBlockDefaultTypeInternal;
extern SymbolBlockDefaultTypeInternal _SymbolBlock_default_instance_;
class SymbolBlock3X5;
class SymbolBlock3X5DefaultTypeInternal;
extern SymbolBlock3X5DefaultTypeInternal _SymbolBlock3X5_default_instance_;
class SymbolLine;
class SymbolLineDefaultTypeInternal;
extern SymbolLineDefaultTypeInternal _SymbolLine_default_instance_;
}  // namespace natashapb
namespace google {
namespace protobuf {
template<> ::natashapb::StaticCascadingRandomResult* Arena::Create< ::natashapb::StaticCascadingRandomResult>(Arena*);
template<> ::natashapb::SymbolBlock* Arena::Create< ::natashapb::SymbolBlock>(Arena*);
template<> ::natashapb::SymbolBlock3X5* Arena::Create< ::natashapb::SymbolBlock3X5>(Arena*);
template<> ::natashapb::SymbolLine* Arena::Create< ::natashapb::SymbolLine>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace natashapb {

// ===================================================================

class SymbolLine : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:natashapb.SymbolLine) */ {
 public:
  SymbolLine();
  virtual ~SymbolLine();

  SymbolLine(const SymbolLine& from);

  inline SymbolLine& operator=(const SymbolLine& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolLine(SymbolLine&& from) noexcept
    : SymbolLine() {
    *this = ::std::move(from);
  }

  inline SymbolLine& operator=(SymbolLine&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SymbolLine& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SymbolLine* internal_default_instance() {
    return reinterpret_cast<const SymbolLine*>(
               &_SymbolLine_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SymbolLine* other);
  friend void swap(SymbolLine& a, SymbolLine& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolLine* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolLine>(NULL);
  }

  SymbolLine* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolLine>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolLine& from);
  void MergeFrom(const SymbolLine& from);
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
  void InternalSwap(SymbolLine* other);
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

  // repeated int32 xdat = 1;
  int xdat_size() const;
  void clear_xdat();
  static const int kXdatFieldNumber = 1;
  ::google::protobuf::int32 xdat(int index) const;
  void set_xdat(int index, ::google::protobuf::int32 value);
  void add_xdat(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      xdat() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_xdat();

  // @@protoc_insertion_point(class_scope:natashapb.SymbolLine)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > xdat_;
  mutable int _xdat_cached_byte_size_;
  mutable int _cached_size_;
  friend struct ::protobuf_base_2eproto::TableStruct;
  friend void ::protobuf_base_2eproto::InitDefaultsSymbolLineImpl();
};
// -------------------------------------------------------------------

class SymbolBlock : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:natashapb.SymbolBlock) */ {
 public:
  SymbolBlock();
  virtual ~SymbolBlock();

  SymbolBlock(const SymbolBlock& from);

  inline SymbolBlock& operator=(const SymbolBlock& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolBlock(SymbolBlock&& from) noexcept
    : SymbolBlock() {
    *this = ::std::move(from);
  }

  inline SymbolBlock& operator=(SymbolBlock&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SymbolBlock& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SymbolBlock* internal_default_instance() {
    return reinterpret_cast<const SymbolBlock*>(
               &_SymbolBlock_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SymbolBlock* other);
  friend void swap(SymbolBlock& a, SymbolBlock& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolBlock* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolBlock>(NULL);
  }

  SymbolBlock* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolBlock>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolBlock& from);
  void MergeFrom(const SymbolBlock& from);
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
  void InternalSwap(SymbolBlock* other);
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

  // repeated .natashapb.SymbolLine ydat = 1;
  int ydat_size() const;
  void clear_ydat();
  static const int kYdatFieldNumber = 1;
  ::natashapb::SymbolLine* mutable_ydat(int index);
  ::google::protobuf::RepeatedPtrField< ::natashapb::SymbolLine >*
      mutable_ydat();
  const ::natashapb::SymbolLine& ydat(int index) const;
  ::natashapb::SymbolLine* add_ydat();
  const ::google::protobuf::RepeatedPtrField< ::natashapb::SymbolLine >&
      ydat() const;

  // @@protoc_insertion_point(class_scope:natashapb.SymbolBlock)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::natashapb::SymbolLine > ydat_;
  mutable int _cached_size_;
  friend struct ::protobuf_base_2eproto::TableStruct;
  friend void ::protobuf_base_2eproto::InitDefaultsSymbolBlockImpl();
};
// -------------------------------------------------------------------

class SymbolBlock3X5 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:natashapb.SymbolBlock3X5) */ {
 public:
  SymbolBlock3X5();
  virtual ~SymbolBlock3X5();

  SymbolBlock3X5(const SymbolBlock3X5& from);

  inline SymbolBlock3X5& operator=(const SymbolBlock3X5& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolBlock3X5(SymbolBlock3X5&& from) noexcept
    : SymbolBlock3X5() {
    *this = ::std::move(from);
  }

  inline SymbolBlock3X5& operator=(SymbolBlock3X5&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SymbolBlock3X5& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SymbolBlock3X5* internal_default_instance() {
    return reinterpret_cast<const SymbolBlock3X5*>(
               &_SymbolBlock3X5_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SymbolBlock3X5* other);
  friend void swap(SymbolBlock3X5& a, SymbolBlock3X5& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolBlock3X5* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolBlock3X5>(NULL);
  }

  SymbolBlock3X5* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<SymbolBlock3X5>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolBlock3X5& from);
  void MergeFrom(const SymbolBlock3X5& from);
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
  void InternalSwap(SymbolBlock3X5* other);
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

  // int32 dat0_0 = 1;
  void clear_dat0_0();
  static const int kDat00FieldNumber = 1;
  ::google::protobuf::int32 dat0_0() const;
  void set_dat0_0(::google::protobuf::int32 value);

  // int32 dat0_1 = 2;
  void clear_dat0_1();
  static const int kDat01FieldNumber = 2;
  ::google::protobuf::int32 dat0_1() const;
  void set_dat0_1(::google::protobuf::int32 value);

  // int32 dat0_2 = 3;
  void clear_dat0_2();
  static const int kDat02FieldNumber = 3;
  ::google::protobuf::int32 dat0_2() const;
  void set_dat0_2(::google::protobuf::int32 value);

  // int32 dat0_3 = 4;
  void clear_dat0_3();
  static const int kDat03FieldNumber = 4;
  ::google::protobuf::int32 dat0_3() const;
  void set_dat0_3(::google::protobuf::int32 value);

  // int32 dat0_4 = 5;
  void clear_dat0_4();
  static const int kDat04FieldNumber = 5;
  ::google::protobuf::int32 dat0_4() const;
  void set_dat0_4(::google::protobuf::int32 value);

  // int32 dat1_0 = 6;
  void clear_dat1_0();
  static const int kDat10FieldNumber = 6;
  ::google::protobuf::int32 dat1_0() const;
  void set_dat1_0(::google::protobuf::int32 value);

  // int32 dat1_1 = 7;
  void clear_dat1_1();
  static const int kDat11FieldNumber = 7;
  ::google::protobuf::int32 dat1_1() const;
  void set_dat1_1(::google::protobuf::int32 value);

  // int32 dat1_2 = 8;
  void clear_dat1_2();
  static const int kDat12FieldNumber = 8;
  ::google::protobuf::int32 dat1_2() const;
  void set_dat1_2(::google::protobuf::int32 value);

  // int32 dat1_3 = 9;
  void clear_dat1_3();
  static const int kDat13FieldNumber = 9;
  ::google::protobuf::int32 dat1_3() const;
  void set_dat1_3(::google::protobuf::int32 value);

  // int32 dat1_4 = 10;
  void clear_dat1_4();
  static const int kDat14FieldNumber = 10;
  ::google::protobuf::int32 dat1_4() const;
  void set_dat1_4(::google::protobuf::int32 value);

  // int32 dat2_0 = 11;
  void clear_dat2_0();
  static const int kDat20FieldNumber = 11;
  ::google::protobuf::int32 dat2_0() const;
  void set_dat2_0(::google::protobuf::int32 value);

  // int32 dat2_1 = 12;
  void clear_dat2_1();
  static const int kDat21FieldNumber = 12;
  ::google::protobuf::int32 dat2_1() const;
  void set_dat2_1(::google::protobuf::int32 value);

  // int32 dat2_2 = 13;
  void clear_dat2_2();
  static const int kDat22FieldNumber = 13;
  ::google::protobuf::int32 dat2_2() const;
  void set_dat2_2(::google::protobuf::int32 value);

  // int32 dat2_3 = 14;
  void clear_dat2_3();
  static const int kDat23FieldNumber = 14;
  ::google::protobuf::int32 dat2_3() const;
  void set_dat2_3(::google::protobuf::int32 value);

  // int32 dat2_4 = 15;
  void clear_dat2_4();
  static const int kDat24FieldNumber = 15;
  ::google::protobuf::int32 dat2_4() const;
  void set_dat2_4(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:natashapb.SymbolBlock3X5)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 dat0_0_;
  ::google::protobuf::int32 dat0_1_;
  ::google::protobuf::int32 dat0_2_;
  ::google::protobuf::int32 dat0_3_;
  ::google::protobuf::int32 dat0_4_;
  ::google::protobuf::int32 dat1_0_;
  ::google::protobuf::int32 dat1_1_;
  ::google::protobuf::int32 dat1_2_;
  ::google::protobuf::int32 dat1_3_;
  ::google::protobuf::int32 dat1_4_;
  ::google::protobuf::int32 dat2_0_;
  ::google::protobuf::int32 dat2_1_;
  ::google::protobuf::int32 dat2_2_;
  ::google::protobuf::int32 dat2_3_;
  ::google::protobuf::int32 dat2_4_;
  mutable int _cached_size_;
  friend struct ::protobuf_base_2eproto::TableStruct;
  friend void ::protobuf_base_2eproto::InitDefaultsSymbolBlock3X5Impl();
};
// -------------------------------------------------------------------

class StaticCascadingRandomResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:natashapb.StaticCascadingRandomResult) */ {
 public:
  StaticCascadingRandomResult();
  virtual ~StaticCascadingRandomResult();

  StaticCascadingRandomResult(const StaticCascadingRandomResult& from);

  inline StaticCascadingRandomResult& operator=(const StaticCascadingRandomResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StaticCascadingRandomResult(StaticCascadingRandomResult&& from) noexcept
    : StaticCascadingRandomResult() {
    *this = ::std::move(from);
  }

  inline StaticCascadingRandomResult& operator=(StaticCascadingRandomResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StaticCascadingRandomResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StaticCascadingRandomResult* internal_default_instance() {
    return reinterpret_cast<const StaticCascadingRandomResult*>(
               &_StaticCascadingRandomResult_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(StaticCascadingRandomResult* other);
  friend void swap(StaticCascadingRandomResult& a, StaticCascadingRandomResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StaticCascadingRandomResult* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<StaticCascadingRandomResult>(NULL);
  }

  StaticCascadingRandomResult* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<StaticCascadingRandomResult>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StaticCascadingRandomResult& from);
  void MergeFrom(const StaticCascadingRandomResult& from);
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
  void InternalSwap(StaticCascadingRandomResult* other);
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

  // int32 reelsIndex = 1;
  void clear_reelsindex();
  static const int kReelsIndexFieldNumber = 1;
  ::google::protobuf::int32 reelsindex() const;
  void set_reelsindex(::google::protobuf::int32 value);

  // int32 downNums = 2;
  void clear_downnums();
  static const int kDownNumsFieldNumber = 2;
  ::google::protobuf::int32 downnums() const;
  void set_downnums(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:natashapb.StaticCascadingRandomResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 reelsindex_;
  ::google::protobuf::int32 downnums_;
  mutable int _cached_size_;
  friend struct ::protobuf_base_2eproto::TableStruct;
  friend void ::protobuf_base_2eproto::InitDefaultsStaticCascadingRandomResultImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SymbolLine

// repeated int32 xdat = 1;
inline int SymbolLine::xdat_size() const {
  return xdat_.size();
}
inline void SymbolLine::clear_xdat() {
  xdat_.Clear();
}
inline ::google::protobuf::int32 SymbolLine::xdat(int index) const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolLine.xdat)
  return xdat_.Get(index);
}
inline void SymbolLine::set_xdat(int index, ::google::protobuf::int32 value) {
  xdat_.Set(index, value);
  // @@protoc_insertion_point(field_set:natashapb.SymbolLine.xdat)
}
inline void SymbolLine::add_xdat(::google::protobuf::int32 value) {
  xdat_.Add(value);
  // @@protoc_insertion_point(field_add:natashapb.SymbolLine.xdat)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SymbolLine::xdat() const {
  // @@protoc_insertion_point(field_list:natashapb.SymbolLine.xdat)
  return xdat_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SymbolLine::mutable_xdat() {
  // @@protoc_insertion_point(field_mutable_list:natashapb.SymbolLine.xdat)
  return &xdat_;
}

// -------------------------------------------------------------------

// SymbolBlock

// repeated .natashapb.SymbolLine ydat = 1;
inline int SymbolBlock::ydat_size() const {
  return ydat_.size();
}
inline void SymbolBlock::clear_ydat() {
  ydat_.Clear();
}
inline ::natashapb::SymbolLine* SymbolBlock::mutable_ydat(int index) {
  // @@protoc_insertion_point(field_mutable:natashapb.SymbolBlock.ydat)
  return ydat_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::natashapb::SymbolLine >*
SymbolBlock::mutable_ydat() {
  // @@protoc_insertion_point(field_mutable_list:natashapb.SymbolBlock.ydat)
  return &ydat_;
}
inline const ::natashapb::SymbolLine& SymbolBlock::ydat(int index) const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock.ydat)
  return ydat_.Get(index);
}
inline ::natashapb::SymbolLine* SymbolBlock::add_ydat() {
  // @@protoc_insertion_point(field_add:natashapb.SymbolBlock.ydat)
  return ydat_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::natashapb::SymbolLine >&
SymbolBlock::ydat() const {
  // @@protoc_insertion_point(field_list:natashapb.SymbolBlock.ydat)
  return ydat_;
}

// -------------------------------------------------------------------

// SymbolBlock3X5

// int32 dat0_0 = 1;
inline void SymbolBlock3X5::clear_dat0_0() {
  dat0_0_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat0_0() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat0_0)
  return dat0_0_;
}
inline void SymbolBlock3X5::set_dat0_0(::google::protobuf::int32 value) {
  
  dat0_0_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat0_0)
}

// int32 dat0_1 = 2;
inline void SymbolBlock3X5::clear_dat0_1() {
  dat0_1_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat0_1() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat0_1)
  return dat0_1_;
}
inline void SymbolBlock3X5::set_dat0_1(::google::protobuf::int32 value) {
  
  dat0_1_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat0_1)
}

// int32 dat0_2 = 3;
inline void SymbolBlock3X5::clear_dat0_2() {
  dat0_2_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat0_2() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat0_2)
  return dat0_2_;
}
inline void SymbolBlock3X5::set_dat0_2(::google::protobuf::int32 value) {
  
  dat0_2_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat0_2)
}

// int32 dat0_3 = 4;
inline void SymbolBlock3X5::clear_dat0_3() {
  dat0_3_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat0_3() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat0_3)
  return dat0_3_;
}
inline void SymbolBlock3X5::set_dat0_3(::google::protobuf::int32 value) {
  
  dat0_3_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat0_3)
}

// int32 dat0_4 = 5;
inline void SymbolBlock3X5::clear_dat0_4() {
  dat0_4_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat0_4() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat0_4)
  return dat0_4_;
}
inline void SymbolBlock3X5::set_dat0_4(::google::protobuf::int32 value) {
  
  dat0_4_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat0_4)
}

// int32 dat1_0 = 6;
inline void SymbolBlock3X5::clear_dat1_0() {
  dat1_0_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat1_0() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat1_0)
  return dat1_0_;
}
inline void SymbolBlock3X5::set_dat1_0(::google::protobuf::int32 value) {
  
  dat1_0_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat1_0)
}

// int32 dat1_1 = 7;
inline void SymbolBlock3X5::clear_dat1_1() {
  dat1_1_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat1_1() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat1_1)
  return dat1_1_;
}
inline void SymbolBlock3X5::set_dat1_1(::google::protobuf::int32 value) {
  
  dat1_1_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat1_1)
}

// int32 dat1_2 = 8;
inline void SymbolBlock3X5::clear_dat1_2() {
  dat1_2_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat1_2() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat1_2)
  return dat1_2_;
}
inline void SymbolBlock3X5::set_dat1_2(::google::protobuf::int32 value) {
  
  dat1_2_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat1_2)
}

// int32 dat1_3 = 9;
inline void SymbolBlock3X5::clear_dat1_3() {
  dat1_3_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat1_3() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat1_3)
  return dat1_3_;
}
inline void SymbolBlock3X5::set_dat1_3(::google::protobuf::int32 value) {
  
  dat1_3_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat1_3)
}

// int32 dat1_4 = 10;
inline void SymbolBlock3X5::clear_dat1_4() {
  dat1_4_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat1_4() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat1_4)
  return dat1_4_;
}
inline void SymbolBlock3X5::set_dat1_4(::google::protobuf::int32 value) {
  
  dat1_4_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat1_4)
}

// int32 dat2_0 = 11;
inline void SymbolBlock3X5::clear_dat2_0() {
  dat2_0_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat2_0() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat2_0)
  return dat2_0_;
}
inline void SymbolBlock3X5::set_dat2_0(::google::protobuf::int32 value) {
  
  dat2_0_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat2_0)
}

// int32 dat2_1 = 12;
inline void SymbolBlock3X5::clear_dat2_1() {
  dat2_1_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat2_1() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat2_1)
  return dat2_1_;
}
inline void SymbolBlock3X5::set_dat2_1(::google::protobuf::int32 value) {
  
  dat2_1_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat2_1)
}

// int32 dat2_2 = 13;
inline void SymbolBlock3X5::clear_dat2_2() {
  dat2_2_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat2_2() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat2_2)
  return dat2_2_;
}
inline void SymbolBlock3X5::set_dat2_2(::google::protobuf::int32 value) {
  
  dat2_2_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat2_2)
}

// int32 dat2_3 = 14;
inline void SymbolBlock3X5::clear_dat2_3() {
  dat2_3_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat2_3() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat2_3)
  return dat2_3_;
}
inline void SymbolBlock3X5::set_dat2_3(::google::protobuf::int32 value) {
  
  dat2_3_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat2_3)
}

// int32 dat2_4 = 15;
inline void SymbolBlock3X5::clear_dat2_4() {
  dat2_4_ = 0;
}
inline ::google::protobuf::int32 SymbolBlock3X5::dat2_4() const {
  // @@protoc_insertion_point(field_get:natashapb.SymbolBlock3X5.dat2_4)
  return dat2_4_;
}
inline void SymbolBlock3X5::set_dat2_4(::google::protobuf::int32 value) {
  
  dat2_4_ = value;
  // @@protoc_insertion_point(field_set:natashapb.SymbolBlock3X5.dat2_4)
}

// -------------------------------------------------------------------

// StaticCascadingRandomResult

// int32 reelsIndex = 1;
inline void StaticCascadingRandomResult::clear_reelsindex() {
  reelsindex_ = 0;
}
inline ::google::protobuf::int32 StaticCascadingRandomResult::reelsindex() const {
  // @@protoc_insertion_point(field_get:natashapb.StaticCascadingRandomResult.reelsIndex)
  return reelsindex_;
}
inline void StaticCascadingRandomResult::set_reelsindex(::google::protobuf::int32 value) {
  
  reelsindex_ = value;
  // @@protoc_insertion_point(field_set:natashapb.StaticCascadingRandomResult.reelsIndex)
}

// int32 downNums = 2;
inline void StaticCascadingRandomResult::clear_downnums() {
  downnums_ = 0;
}
inline ::google::protobuf::int32 StaticCascadingRandomResult::downnums() const {
  // @@protoc_insertion_point(field_get:natashapb.StaticCascadingRandomResult.downNums)
  return downnums_;
}
inline void StaticCascadingRandomResult::set_downnums(::google::protobuf::int32 value) {
  
  downnums_ = value;
  // @@protoc_insertion_point(field_set:natashapb.StaticCascadingRandomResult.downNums)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace natashapb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2eproto__INCLUDED
