#include "load_package_async.h"

std::shared_ptr<load_package_async_hook> load_package_async_hook::instance_ = nullptr;

auto load_package_async_hook::instance() -> std::shared_ptr<load_package_async_hook> {
  if (!instance_) {
    instance_ = std::make_shared<load_package_async_hook>();
  }

  return instance_;
}

load_package_async_hook::load_package_async_hook() {
  this->hook_ = base_hook<load_package_async_t>{
    "load package async",
    hat::compile_signature<"55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 81 EC 8C 00 00 00 56 57">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install load_package_async_hook");
    return;
  }
}

auto __cdecl load_package_async_hook::trampoline(const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data, const FGuid* required_guid) -> void {
  LOG("LoadPackageAsync({})", package_name.ToString());

  return load_package_async_hook::instance()->hook_.original()(package_name, CompletionCallback, callback_user_data, required_guid);
}