#ifndef spawn_actor_h
#define spawn_actor_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

DEFINE_HOOK(
    spawn_actor,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 89 4D ? C7 45 ? 00 00 00 00 E8",
    AActor*,
    UWorld* base, UClass* class_, FName in_name, const FVector* location, const FRotator* rotation, AActor* template_actor, uint32_t no_collision_fail, uint32_t remote_owned, AActor* owner, APawn* instigator, uint32_t no_fail, uint32_t out_of_bend_time, void* init_func
);

#endif
