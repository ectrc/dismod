#include "engine.h"

#include <string>
#include <libhat.hpp>

#include "hooks/engine/load_package.h"
#include "hooks/engine/load_package_async.h"
#include "hooks/engine/static_load_object.h"
#include "hooks/engine/static_construct_object.h"
#include "hooks/engine/spawn_actor_from_tweaks.h"
#include "hooks/engine/spawn_actor.h"
#include "hooks/engine/static_duplicate_object.h"

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

auto engine::StaticDuplicateObject(UObject *SourceObject, UObject *RootObject, UObject *DestOuter, const wchar_t *DestName, unsigned __int64 FlagMask, UClass *DestClass, unsigned int bMigrateArchetypes) -> UObject* {
  return static_duplicate_object_hook::instance()->hook_.original()(SourceObject, RootObject, DestOuter, DestName, FlagMask, DestClass, bMigrateArchetypes);
}

auto engine::spawn_actor_by_tweaks(
  UDisTweaksBase* base,
  EeDisTweaksSpawnType spawn_type,
  FName in_name,
  const FVector* location,
  const FRotator* rotation,
  AActor* template_actor,
  uint32_t no_collision_fail,
  uint32_t remote_owned,
  AActor* owner,
  APawn* instigator,
  uint32_t no_fail,
  uint32_t out_of_bend_time
) -> AActor* {
  static FVector default_location(71.73864, 280.26736  ,1091.2305);
  static FRotator default_rotation(0, 0, 0);

  if (location == nullptr) {
    location = &default_location;
  }

  if (rotation == nullptr) {
    rotation = &default_rotation;
  }

  return spawn_actor_from_tweaks_hook::instance()->hook_.original()(
    base,
    spawn_type,
    in_name,
    location,
    rotation,
    template_actor,
    no_collision_fail,
    remote_owned,
    owner,
    instigator,
    no_fail,
    out_of_bend_time
  );
}

auto engine::spawn_actor(
  UWorld* base,
  UClass* class_,
  FName in_name,
  const FVector* location,
  const FRotator* rotation,
  AActor* template_actor,
  uint32_t no_collision_fail,
  uint32_t remote_owned,
  AActor* owner,
  APawn* instigator,
  uint32_t no_fail,
  uint32_t out_of_bend_time,
  void* init_func
) -> AActor* {
  static FVector default_location(71.73864, 245.26736  ,1091.2305);
  static FRotator default_rotation(0, 0, 0);

  if (location == nullptr) {
    location = &default_location;
  }

  if (rotation == nullptr) {
    rotation = &default_rotation;
  }

  return spawn_actor_hook::instance()->hook_.original()(
    base,
    class_,
    in_name,
    location,
    rotation,
    template_actor,
    no_collision_fail,
    remote_owned,
    owner,
    instigator,
    no_fail,
    out_of_bend_time,
    init_func
  );
}