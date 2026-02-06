#ifndef load_package_async_h
#define load_package_async_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__cdecl *load_package_async_t)(const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data, const FGuid* required_guid);

class load_package_async_hook {
public:
  load_package_async_hook();
  static auto instance() -> std::shared_ptr<load_package_async_hook>;
  static auto __cdecl trampoline(const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data, const FGuid* required_guid) -> void;

public:
  base_hook<load_package_async_t> hook_;
private:
  static std::shared_ptr<load_package_async_hook> instance_;
};

#endif