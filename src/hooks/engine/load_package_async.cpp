#include "load_package_async.h"

auto __cdecl UObject_LoadPackageAsync_hook::trampoline(const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data, const FGuid* required_guid) -> void {
  LOG("LoadPackageAsync({})", package_name.ToString());
  return instance()->hook_.original()(package_name, CompletionCallback, callback_user_data, required_guid);
}
