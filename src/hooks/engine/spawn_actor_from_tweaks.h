#ifndef spawn_actor_by_tweaks_h
#define spawn_actor_by_tweaks_h

#include "hook.h"
#include <sdk.hpp>

// To find the pattern:
//  Scan for: "55 8B EC 8B 45 ? 8B 55 ? 56 8B F1 8B 4D ? 50 51 52 8B CE E8 ? ? ? ? 8B 86" = "ADisWhiskeyBottle::OnRigidBodyCollision"
//  Click into the last function call inside the condition is "ADisWhiskeyBottle::Explode"
//  Click into the function whereby its return value is checked, it also has like 13 arguments.
//  This is "UDisTweaksBase::SpawnActor", and you can now generate a signature

DEFINE_HOOK(
    UDisTweaksBase_SpawnActor,
    "55 8B EC 33 C0 F6 41",
    AActor*,
    UDisTweaksBase* base, EeDisTweaksSpawnType spawn_type, FName in_name, const FVector* location, const FRotator* rotation, AActor* template_actor, uint32_t no_collision_fail, uint32_t remote_owned, AActor* owner, APawn* instigator, uint32_t no_fail, uint32_t out_of_bend_time
);

#endif
