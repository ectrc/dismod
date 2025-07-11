#include "engine.h"

#include <string>
#include <libhat.hpp>

#include "hooks/engine/load_package.h"
#include "hooks/engine/load_package_async.h"
#include "hooks/engine/static_load_object.h"
#include "hooks/engine/static_construct_object.h"

auto engine::LoadPackage(UPackage* in, const wchar_t* file_name, load_flags load_flags) -> UPackage* {
  ::std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  ::std::string file_name_str = ::std::string(file_name_wstr.begin(), file_name_wstr.end());
  
  LOG("LoadPackage({}, {}, {})", in != nullptr ? in->GetPackageName().ToString() : "nullptr", file_name_str, engine::load_flags_to_string(load_flags));

  return load_package_hook::instance()->hook_.original()(in, file_name, load_flags);
}

auto engine::LoadPackageAsync(const FString& package_name, FAsyncCompletionCallback completion_callback, void* callback_user_data, const FGuid* required_guid, FName package_type) -> void {
  LOG("LoadPackageAsync({})", package_name.ToString());

  return load_package_async_hook::instance()->hook_.original()(package_name, completion_callback, callback_user_data, required_guid, package_type);
}

auto engine::StaticLoadObject(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation) -> UObject* {
#if LOG_SLO_ME
  ::std::wstring outer_name_wstr = outer_name != nullptr ? outer_name : L"nullptr";
  ::std::string outer_name_str = ::std::string(outer_name_wstr.begin(), outer_name_wstr.end());

  ::std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  ::std::string file_name_str = ::std::string(file_name_wstr.begin(), file_name_wstr.end());
  LOG("StaticLoadObject({}, {}, {}, {}, {}, {})", object_class != nullptr ? object_class->GetName() : "nullptr", outer != nullptr ? outer->GetName() : "nullptr", outer_name_str, file_name_str, engine::load_flags_to_string(load_flags), sandbox != nullptr ? sandbox->GetName() : "nullptr", allow_object_reconciliation ? "true" : "false");
#endif

  return static_load_object_hook::instance()->hook_.original()(object_class, outer, outer_name, file_name, load_flags, sandbox, allow_object_reconciliation);
}

auto engine::StaticConstructObject(UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph) -> UObject* {
#if LOG_SCO_ME
  LOG("StaticConstructObject({}, {}, {})", object_class != nullptr ? object_class->GetName() : "nullptr", outer != nullptr ? outer->GetName() : "nullptr", name.ToString());
#endif
  return static_construct_object_hook::instance()->hook_.original()(object_class, outer, name, object_flags, template_, error, sub_object_root, graph, 0, 0);
}