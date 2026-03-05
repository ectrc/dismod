#include "load_package.h"

auto __cdecl load_package_hook::trampoline(UPackage* in, const wchar_t* file_name, engine::load_flags load_flags) -> UPackage* {
  std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  std::string file_name_str = std::string(file_name_wstr.begin(), file_name_wstr.end());

  LOG("LoadPackage({}, {}, {})", in != nullptr ? in->GetPackageName().ToString() : "nullptr", file_name_str, engine::load_flags_to_string(load_flags));

  return instance()->hook_.original()(in, file_name, load_flags);
}
