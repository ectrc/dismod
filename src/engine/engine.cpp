#include "engine.h"

#include <string>

#include "hooks/load_package.h"
#include "hooks/load_package_async.h"
#include "hooks/static_load_object.h"

auto engine::LoadPackage(UPackage* in, const wchar_t* file_name, load_flags load_flags) -> UPackage* {
  ::std::wstring file_name_wstr = file_name;
  ::std::string file_name_str = ::std::string(file_name_wstr.begin(), file_name_wstr.end());
  
  LOG("LoadPackage({}, {}, {})", in != nullptr ? in->GetPackageName().ToString() : "nullptr", file_name_str, engine::load_flags_to_string(load_flags));

  return load_package_hook::instance()->hook_.original()(in, file_name, load_flags);
}

auto engine::LoadPackageAsync(const FString& package_name, FAsyncCompletionCallback completion_callback, void* callback_user_data, const FGuid* required_guid, FName package_type) -> void {
  LOG("LoadPackageAsync({})", package_name.ToString());

  return load_package_async_hook::instance()->hook_.original()(package_name, completion_callback, callback_user_data, required_guid, package_type);
}

auto engine::StaticLoadObject(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation) -> UObject* {
  ::std::wstring outer_name_wstr = outer_name;
  ::std::string outer_name_str = ::std::string(outer_name_wstr.begin(), outer_name_wstr.end());

  ::std::wstring file_name_wstr = file_name;
  ::std::string file_name_str = ::std::string(file_name_wstr.begin(), file_name_wstr.end());

  LOG("StaticLoadObject({}, {}, {}, {}, {})", object_class != nullptr ? object_class->GetName() : "nullptr", outer != nullptr ? outer->GetName() : "nullptr", outer_name_str, file_name_str, engine::load_flags_to_string(load_flags));

  return static_load_object_hook::instance()->hook_.original()(object_class, outer, outer_name, file_name, load_flags, sandbox, allow_object_reconciliation);
}