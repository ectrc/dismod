#include "spawn_actor_from_tweaks.h"

auto __thiscall UDisTweaksBase_SpawnActor_hook::trampoline(
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
  LOG("SpawnActor: {} {} {}", base->GetFullName(), (uint8_t)spawn_type, in_name.ToString());

  return instance()->hook_.original()(
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
