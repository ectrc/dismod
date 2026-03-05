#ifndef spawn_actor_by_tweaks_h
#define spawn_actor_by_tweaks_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

DEFINE_HOOK(
    spawn_actor_from_tweaks,
    "55 8B EC 33 C0 F6 41",
    AActor*,
    UDisTweaksBase* base, EeDisTweaksSpawnType spawn_type, FName in_name, const FVector* location, const FRotator* rotation, AActor* template_actor, uint32_t no_collision_fail, uint32_t remote_owned, AActor* owner, APawn* instigator, uint32_t no_fail, uint32_t out_of_bend_time
);

#endif
