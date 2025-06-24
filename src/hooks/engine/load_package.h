#ifndef load_package_h
#define load_package_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef UPackage* (__cdecl *load_package_t)(UPackage* in, const wchar_t* file_name, engine::load_flags load_flags);

class load_package_hook {
public:
  load_package_hook();
  static auto instance() -> std::shared_ptr<load_package_hook>;
  static auto __cdecl trampoline(UPackage* in, const wchar_t* file_name, engine::load_flags load_flags) -> UPackage*;

public:
  base_hook<load_package_t> hook_;
private:
  static std::shared_ptr<load_package_hook> instance_;
};

#endif