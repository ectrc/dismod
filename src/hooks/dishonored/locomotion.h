#ifndef dishonored_loco_h
#define dishonored_loco_h

#include "hook.h"
#include "sdk.hpp"

struct IArkComponentPreAsyncWork {
    void** vtable_IArkComponentPreAsyncWork;
};

struct FArkComponentBase {
    void** vtable_FArkComponentBase;
    ADishonoredNPCController* owning_controller;
    uint32_t started;
    uint32_t pending_stop;
};

struct FArkComponentLocomotion : public FArkComponentBase, public IArkComponentPreAsyncWork {
    uint8_t padding[0x254];
};

DEFINE_HOOK(
    FArkComponentLocomotion_SendTouchAndBumpEvents,
    "55 8B EC 51 83 7D ? 00 89 4D",
    void, FArkComponentLocomotion* component, void* check_result, uint32_t preview
);

DEFINE_HOOK(
    FArkComponentLocomotion_MovePawn,
    "55 8B EC 53 56 57 8B F9 8B B7",
    void,
    FArkComponentLocomotion* component, float delta_time, uint32_t preview
);

struct FArkComponentLookAt : public FArkComponentBase, public IArkComponentPreAsyncWork {
    uint8_t padding[0x268];
};

struct FLookAtInfluence {
    float m_fHeadInfluence;
    float m_fTorsoInfluence;
    uint32_t m_bTorsoInfIsMoveSpeedDependant;
};

DEFINE_HOOK(
    FArkComponentLookAt_StartLookAtLocation,
    "55 8B EC 83 EC ? 8B 45 ? ? ? ? ? ? F3 0F 10 05 ? ? ? ? 89 55 ? 8B 50 ? 8B 40 ? 89 55 ? 8B 55",
    uint64_t,
    FArkComponentLookAt* component, const void *asker, const FName *asker_name, int priority, FVector location, const FLookAtInfluence& influence, float duration
);

DEFINE_HOOK(
    FArkComponentLookAt_StartLookAtActor,
    "55 8B EC 83 EC ? 8B 45 ? ? ? ? ? ? F3 0F 10 05 ? ? ? ? 89 55 ? 8B 50 ? 8B 40 ? 89 55 ? 8B 15",
    uint64_t,
    FArkComponentLookAt* component, const void *asker, const FName *asker_name, int priority, AActor* location, const FLookAtInfluence& influence, float duration
);

DEFINE_HOOK(
    FDisNPCRotationIntent_SetTargetRotation,
    "55 8B EC F3 0F 10 45 ? 83 EC ? 53 56 8B F1",
    void,
    FDisNPCRotationIntent* component, ADishonoredNPCPawn* owning, FVector& look_at, float rate, float acceleration, EDisFaceToPriority priority, void* asker, FName asker_name
);

#endif