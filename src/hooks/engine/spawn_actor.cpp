#include "spawn_actor.h"

auto __thiscall spawn_actor_hook::trampoline(
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
  return instance()->hook_.original()(
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
