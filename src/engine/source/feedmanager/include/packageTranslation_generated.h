// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PACKAGETRANSLATION_NSVULNERABILITYSCANNER_H_
#define FLATBUFFERS_GENERATED_PACKAGETRANSLATION_NSVULNERABILITYSCANNER_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

namespace NSVulnerabilityScanner {

struct SourceFields;
struct SourceFieldsBuilder;

struct TranslationFields;
struct TranslationFieldsBuilder;

struct TranslationEntry;
struct TranslationEntryBuilder;

enum Action : int8_t {
  Action_replace_vendor = 0,
  Action_replace_product = 1,
  Action_replace_vendor_if_matches = 2,
  Action_replace_product_if_matches = 3,
  Action_set_version_if_matches = 4,
  Action_replace_sw_edition_if_product_matches = 5,
  Action_replace_msu_name_if_version_matches = 6,
  Action_ignore = 7,
  Action_check_hotfix = 8,
  Action_replace_msu_name = 9,
  Action_set_version_if_product_matches = 10,
  Action_set_targethw_if_product_matches = 11,
  Action_set_version_only_if_product_matches = 12,
  Action_set_targethw_only_if_product_matches = 13,
  Action_set_update_if_product_matches = 14,
  Action_set_update_only_if_product_matches = 15,
  Action_MIN = Action_replace_vendor,
  Action_MAX = Action_set_update_only_if_product_matches
};

inline const Action (&EnumValuesAction())[16] {
  static const Action values[] = {
    Action_replace_vendor,
    Action_replace_product,
    Action_replace_vendor_if_matches,
    Action_replace_product_if_matches,
    Action_set_version_if_matches,
    Action_replace_sw_edition_if_product_matches,
    Action_replace_msu_name_if_version_matches,
    Action_ignore,
    Action_check_hotfix,
    Action_replace_msu_name,
    Action_set_version_if_product_matches,
    Action_set_targethw_if_product_matches,
    Action_set_version_only_if_product_matches,
    Action_set_targethw_only_if_product_matches,
    Action_set_update_if_product_matches,
    Action_set_update_only_if_product_matches
  };
  return values;
}

inline const char * const *EnumNamesAction() {
  static const char * const names[17] = {
    "replace_vendor",
    "replace_product",
    "replace_vendor_if_matches",
    "replace_product_if_matches",
    "set_version_if_matches",
    "replace_sw_edition_if_product_matches",
    "replace_msu_name_if_version_matches",
    "ignore",
    "check_hotfix",
    "replace_msu_name",
    "set_version_if_product_matches",
    "set_targethw_if_product_matches",
    "set_version_only_if_product_matches",
    "set_targethw_only_if_product_matches",
    "set_update_if_product_matches",
    "set_update_only_if_product_matches",
    nullptr
  };
  return names;
}

inline const char *EnumNameAction(Action e) {
  if (::flatbuffers::IsOutRange(e, Action_replace_vendor, Action_set_update_only_if_product_matches)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesAction()[index];
}

struct SourceFields FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SourceFieldsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VENDOR = 4,
    VT_PRODUCT = 6,
    VT_VERSION = 8,
    VT_UPDATE = 10,
    VT_TARGET_HW = 12
  };
  const ::flatbuffers::String *vendor() const {
    return GetPointer<const ::flatbuffers::String *>(VT_VENDOR);
  }
  const ::flatbuffers::String *product() const {
    return GetPointer<const ::flatbuffers::String *>(VT_PRODUCT);
  }
  const ::flatbuffers::String *version() const {
    return GetPointer<const ::flatbuffers::String *>(VT_VERSION);
  }
  const ::flatbuffers::String *update() const {
    return GetPointer<const ::flatbuffers::String *>(VT_UPDATE);
  }
  const ::flatbuffers::String *target_hw() const {
    return GetPointer<const ::flatbuffers::String *>(VT_TARGET_HW);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VENDOR) &&
           verifier.VerifyString(vendor()) &&
           VerifyOffset(verifier, VT_PRODUCT) &&
           verifier.VerifyString(product()) &&
           VerifyOffset(verifier, VT_VERSION) &&
           verifier.VerifyString(version()) &&
           VerifyOffset(verifier, VT_UPDATE) &&
           verifier.VerifyString(update()) &&
           VerifyOffset(verifier, VT_TARGET_HW) &&
           verifier.VerifyString(target_hw()) &&
           verifier.EndTable();
  }
};

struct SourceFieldsBuilder {
  typedef SourceFields Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_vendor(::flatbuffers::Offset<::flatbuffers::String> vendor) {
    fbb_.AddOffset(SourceFields::VT_VENDOR, vendor);
  }
  void add_product(::flatbuffers::Offset<::flatbuffers::String> product) {
    fbb_.AddOffset(SourceFields::VT_PRODUCT, product);
  }
  void add_version(::flatbuffers::Offset<::flatbuffers::String> version) {
    fbb_.AddOffset(SourceFields::VT_VERSION, version);
  }
  void add_update(::flatbuffers::Offset<::flatbuffers::String> update) {
    fbb_.AddOffset(SourceFields::VT_UPDATE, update);
  }
  void add_target_hw(::flatbuffers::Offset<::flatbuffers::String> target_hw) {
    fbb_.AddOffset(SourceFields::VT_TARGET_HW, target_hw);
  }
  explicit SourceFieldsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SourceFields> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SourceFields>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SourceFields> CreateSourceFields(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> vendor = 0,
    ::flatbuffers::Offset<::flatbuffers::String> product = 0,
    ::flatbuffers::Offset<::flatbuffers::String> version = 0,
    ::flatbuffers::Offset<::flatbuffers::String> update = 0,
    ::flatbuffers::Offset<::flatbuffers::String> target_hw = 0) {
  SourceFieldsBuilder builder_(_fbb);
  builder_.add_target_hw(target_hw);
  builder_.add_update(update);
  builder_.add_version(version);
  builder_.add_product(product);
  builder_.add_vendor(vendor);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<SourceFields> CreateSourceFieldsDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *vendor = nullptr,
    const char *product = nullptr,
    const char *version = nullptr,
    const char *update = nullptr,
    const char *target_hw = nullptr) {
  auto vendor__ = vendor ? _fbb.CreateString(vendor) : 0;
  auto product__ = product ? _fbb.CreateString(product) : 0;
  auto version__ = version ? _fbb.CreateString(version) : 0;
  auto update__ = update ? _fbb.CreateString(update) : 0;
  auto target_hw__ = target_hw ? _fbb.CreateString(target_hw) : 0;
  return NSVulnerabilityScanner::CreateSourceFields(
      _fbb,
      vendor__,
      product__,
      version__,
      update__,
      target_hw__);
}

struct TranslationFields FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TranslationFieldsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VENDOR = 4,
    VT_PRODUCT = 6,
    VT_VERSION = 8,
    VT_UPDATE = 10,
    VT_MSU_NAME = 12,
    VT_SW_EDITION = 14
  };
  const ::flatbuffers::String *vendor() const {
    return GetPointer<const ::flatbuffers::String *>(VT_VENDOR);
  }
  const ::flatbuffers::String *product() const {
    return GetPointer<const ::flatbuffers::String *>(VT_PRODUCT);
  }
  const ::flatbuffers::String *version() const {
    return GetPointer<const ::flatbuffers::String *>(VT_VERSION);
  }
  const ::flatbuffers::String *update() const {
    return GetPointer<const ::flatbuffers::String *>(VT_UPDATE);
  }
  const ::flatbuffers::String *msu_name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MSU_NAME);
  }
  const ::flatbuffers::String *sw_edition() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SW_EDITION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VENDOR) &&
           verifier.VerifyString(vendor()) &&
           VerifyOffset(verifier, VT_PRODUCT) &&
           verifier.VerifyString(product()) &&
           VerifyOffset(verifier, VT_VERSION) &&
           verifier.VerifyString(version()) &&
           VerifyOffset(verifier, VT_UPDATE) &&
           verifier.VerifyString(update()) &&
           VerifyOffset(verifier, VT_MSU_NAME) &&
           verifier.VerifyString(msu_name()) &&
           VerifyOffset(verifier, VT_SW_EDITION) &&
           verifier.VerifyString(sw_edition()) &&
           verifier.EndTable();
  }
};

struct TranslationFieldsBuilder {
  typedef TranslationFields Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_vendor(::flatbuffers::Offset<::flatbuffers::String> vendor) {
    fbb_.AddOffset(TranslationFields::VT_VENDOR, vendor);
  }
  void add_product(::flatbuffers::Offset<::flatbuffers::String> product) {
    fbb_.AddOffset(TranslationFields::VT_PRODUCT, product);
  }
  void add_version(::flatbuffers::Offset<::flatbuffers::String> version) {
    fbb_.AddOffset(TranslationFields::VT_VERSION, version);
  }
  void add_update(::flatbuffers::Offset<::flatbuffers::String> update) {
    fbb_.AddOffset(TranslationFields::VT_UPDATE, update);
  }
  void add_msu_name(::flatbuffers::Offset<::flatbuffers::String> msu_name) {
    fbb_.AddOffset(TranslationFields::VT_MSU_NAME, msu_name);
  }
  void add_sw_edition(::flatbuffers::Offset<::flatbuffers::String> sw_edition) {
    fbb_.AddOffset(TranslationFields::VT_SW_EDITION, sw_edition);
  }
  explicit TranslationFieldsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TranslationFields> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TranslationFields>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TranslationFields> CreateTranslationFields(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> vendor = 0,
    ::flatbuffers::Offset<::flatbuffers::String> product = 0,
    ::flatbuffers::Offset<::flatbuffers::String> version = 0,
    ::flatbuffers::Offset<::flatbuffers::String> update = 0,
    ::flatbuffers::Offset<::flatbuffers::String> msu_name = 0,
    ::flatbuffers::Offset<::flatbuffers::String> sw_edition = 0) {
  TranslationFieldsBuilder builder_(_fbb);
  builder_.add_sw_edition(sw_edition);
  builder_.add_msu_name(msu_name);
  builder_.add_update(update);
  builder_.add_version(version);
  builder_.add_product(product);
  builder_.add_vendor(vendor);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TranslationFields> CreateTranslationFieldsDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *vendor = nullptr,
    const char *product = nullptr,
    const char *version = nullptr,
    const char *update = nullptr,
    const char *msu_name = nullptr,
    const char *sw_edition = nullptr) {
  auto vendor__ = vendor ? _fbb.CreateString(vendor) : 0;
  auto product__ = product ? _fbb.CreateString(product) : 0;
  auto version__ = version ? _fbb.CreateString(version) : 0;
  auto update__ = update ? _fbb.CreateString(update) : 0;
  auto msu_name__ = msu_name ? _fbb.CreateString(msu_name) : 0;
  auto sw_edition__ = sw_edition ? _fbb.CreateString(sw_edition) : 0;
  return NSVulnerabilityScanner::CreateTranslationFields(
      _fbb,
      vendor__,
      product__,
      version__,
      update__,
      msu_name__,
      sw_edition__);
}

struct TranslationEntry FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TranslationEntryBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACTION = 4,
    VT_SOURCE = 6,
    VT_TARGET = 8,
    VT_TRANSLATION = 10
  };
  const ::flatbuffers::Vector<int8_t> *action() const {
    return GetPointer<const ::flatbuffers::Vector<int8_t> *>(VT_ACTION);
  }
  const NSVulnerabilityScanner::SourceFields *source() const {
    return GetPointer<const NSVulnerabilityScanner::SourceFields *>(VT_SOURCE);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *target() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *>(VT_TARGET);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>> *translation() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>> *>(VT_TRANSLATION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ACTION) &&
           verifier.VerifyVector(action()) &&
           VerifyOffset(verifier, VT_SOURCE) &&
           verifier.VerifyTable(source()) &&
           VerifyOffset(verifier, VT_TARGET) &&
           verifier.VerifyVector(target()) &&
           verifier.VerifyVectorOfStrings(target()) &&
           VerifyOffset(verifier, VT_TRANSLATION) &&
           verifier.VerifyVector(translation()) &&
           verifier.VerifyVectorOfTables(translation()) &&
           verifier.EndTable();
  }
};

struct TranslationEntryBuilder {
  typedef TranslationEntry Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_action(::flatbuffers::Offset<::flatbuffers::Vector<int8_t>> action) {
    fbb_.AddOffset(TranslationEntry::VT_ACTION, action);
  }
  void add_source(::flatbuffers::Offset<NSVulnerabilityScanner::SourceFields> source) {
    fbb_.AddOffset(TranslationEntry::VT_SOURCE, source);
  }
  void add_target(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>>> target) {
    fbb_.AddOffset(TranslationEntry::VT_TARGET, target);
  }
  void add_translation(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>>> translation) {
    fbb_.AddOffset(TranslationEntry::VT_TRANSLATION, translation);
  }
  explicit TranslationEntryBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TranslationEntry> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TranslationEntry>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TranslationEntry> CreateTranslationEntry(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<int8_t>> action = 0,
    ::flatbuffers::Offset<NSVulnerabilityScanner::SourceFields> source = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>>> target = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>>> translation = 0) {
  TranslationEntryBuilder builder_(_fbb);
  builder_.add_translation(translation);
  builder_.add_target(target);
  builder_.add_source(source);
  builder_.add_action(action);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TranslationEntry> CreateTranslationEntryDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int8_t> *action = nullptr,
    ::flatbuffers::Offset<NSVulnerabilityScanner::SourceFields> source = 0,
    const std::vector<::flatbuffers::Offset<::flatbuffers::String>> *target = nullptr,
    const std::vector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>> *translation = nullptr) {
  auto action__ = action ? _fbb.CreateVector<int8_t>(*action) : 0;
  auto target__ = target ? _fbb.CreateVector<::flatbuffers::Offset<::flatbuffers::String>>(*target) : 0;
  auto translation__ = translation ? _fbb.CreateVector<::flatbuffers::Offset<NSVulnerabilityScanner::TranslationFields>>(*translation) : 0;
  return NSVulnerabilityScanner::CreateTranslationEntry(
      _fbb,
      action__,
      source,
      target__,
      translation__);
}

inline const NSVulnerabilityScanner::TranslationEntry *GetTranslationEntry(const void *buf) {
  return ::flatbuffers::GetRoot<NSVulnerabilityScanner::TranslationEntry>(buf);
}

inline const NSVulnerabilityScanner::TranslationEntry *GetSizePrefixedTranslationEntry(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<NSVulnerabilityScanner::TranslationEntry>(buf);
}

inline bool VerifyTranslationEntryBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<NSVulnerabilityScanner::TranslationEntry>(nullptr);
}

inline bool VerifySizePrefixedTranslationEntryBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<NSVulnerabilityScanner::TranslationEntry>(nullptr);
}

inline void FinishTranslationEntryBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<NSVulnerabilityScanner::TranslationEntry> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTranslationEntryBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<NSVulnerabilityScanner::TranslationEntry> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace NSVulnerabilityScanner

#endif  // FLATBUFFERS_GENERATED_PACKAGETRANSLATION_NSVULNERABILITYSCANNER_H_
