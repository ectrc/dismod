#include "load_package.h"

std::shared_ptr<load_package_hook> load_package_hook::instance_ = nullptr;

auto load_package_hook::instance() -> std::shared_ptr<load_package_hook> {
  if (!instance_) {
    instance_ = std::make_shared<load_package_hook>();
  }

  return instance_;
}

load_package_hook::load_package_hook() {
  this->hook_ = base_hook<load_package_t>{
    "load package",
    hat::compile_signature<"55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 50 A1 ?? ?? ?? ?? 33 C5 89 45 EC">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install load_package_hook");
    return;
  }
}

auto __cdecl load_package_hook::trampoline(UPackage* in, const wchar_t* file_name, engine::load_flags load_flags) -> UPackage* {
  std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  std::string file_name_str = std::string(file_name_wstr.begin(), file_name_wstr.end());
  
  LOG("LoadPackage({}, {}, {})", in != nullptr ? in->GetPackageName().ToString() : "nullptr", file_name_str, engine::load_flags_to_string(load_flags));

  if (const auto package = engine::LoadPackage(nullptr, L"L_Prison_Script", engine::load_flags::seek_free); package) {
    if (!(package->ObjectFlags.A & EObjectFlags::RF_RootSet)) package->ObjectFlags.A |= EObjectFlags::RF_RootSet;
  }

  return load_package_hook::instance()->hook_.original()(in, file_name, load_flags);
}