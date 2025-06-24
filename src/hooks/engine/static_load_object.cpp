#include "static_load_object.h"

std::shared_ptr<static_load_object_hook> static_load_object_hook::instance_ = nullptr;

auto static_load_object_hook::instance() -> std::shared_ptr<static_load_object_hook> {
  if (!instance_) {
    instance_ = std::make_shared<static_load_object_hook>();
  }

  return instance_;
}

static_load_object_hook::static_load_object_hook() {
  this->hook_ = base_hook<static_load_object_t>{
    "static load object",
    hat::compile_signature<"55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 6C 53 56 57 A1 ?? ?? ?? ?? 33 C5 50 8D 45 F4 64 A3 00 00 00 00 89 65">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install static_load_object_hook");
    return;
  }
}

auto __cdecl static_load_object_hook::trampoline(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, engine::load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation) -> UObject* {
#if LOG_SLO
  std::wstring outer_name_wstr = outer_name != nullptr ? outer_name : L"nullptr";
  std::string outer_name_str = std::string(outer_name_wstr.begin(), outer_name_wstr.end());

  std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  std::string file_name_str = std::string(file_name_wstr.begin(), file_name_wstr.end());
  
  LOG("StaticLoadObject({}, {}, {}, {}, {}, {})", object_class != nullptr ? object_class->GetName() : "nullptr", outer != nullptr ? outer->GetName() : "nullptr", outer_name_str, file_name_str, engine::load_flags_to_string(load_flags), sandbox != nullptr ? sandbox->GetName() : "nullptr", allow_object_reconciliation ? "true" : "false");
#endif

  return static_load_object_hook::instance()->hook_.original()(object_class, outer, outer_name, file_name, load_flags, sandbox, allow_object_reconciliation);
}