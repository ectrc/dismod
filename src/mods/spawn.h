#ifndef mods_spawn_h
#define mods_spawn_h

#include <vector>
#include <algorithm>

#include "engine/state.h"

#include "hook.h"
#include "sdk.hpp"

DEFINE_HOOK(
    init_brain,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 F6 46 ? ? 0F 85 ? ? ? ? 8B 45",
    void,
    UDishonoredAIBrain* brain,
    ADishonoredNPCPawn* pawn,
    UDisTweaks_AIBrain* tweaks,
    EDisAISuspicionLevel suspicion_level
);

inline auto __thiscall init_brain_hook::trampoline(UDishonoredAIBrain* brain, ADishonoredNPCPawn* pawn, UDisTweaks_AIBrain* tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    return init_brain_hook::instance()->hook_.original()(brain, pawn, tweaks, suspicion_level);
}

DEFINE_HOOK(
    tick_brain,
    "55 8B EC 56 8B F1 F6 46 ? ? 0F 84",
    void,
    UDishonoredAIBrain* brain,
    float delta
);

inline auto __thiscall tick_brain_hook::trampoline(UDishonoredAIBrain* brain, float delta) -> void {
    if (brain == nullptr) return;
    return tick_brain_hook::instance()->hook_.original()(brain, delta);
}

DEFINE_HOOK(
    controller_init_npc,
    "55 8B EC 83 EC ? 56 57 8B 7D ? 8B F1 85 FF 74 ? ? ? 8B 90",
    void,
    ADishonoredNPCController* controller,
    UDisTweaks_AIBrain* brain_tweaks,
    EDisAISuspicionLevel suspicion_level
);

inline auto __thiscall controller_init_npc_hook::trampoline(ADishonoredNPCController* controller, UDisTweaks_AIBrain* brain_tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    if (controller == nullptr) return;
    return controller_init_npc_hook::instance()->hook_.original()(controller, brain_tweaks, suspicion_level);
}

DEFINE_HOOK(
    fname_tostring,
    "55 8B EC 51 56 ? ? 57 C7 45 ? 00 00 00 00",
    FString*,
    FName* name,
    FString* result
);

inline auto __thiscall fname_tostring_hook::trampoline(FName* name, FString* result) -> FString* {
    if (name->FNameEntryId < 0) name->FNameEntryId = 0;
    return fname_tostring_hook::instance()->hook_.original()(name, result);
}

DEFINE_HOOK(
    save_load_cmd,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 89 75 ? E8 ? ? ? ? 33 DB 3B C3",
    void,
    UDishonoredEngine* engine, int dt
);

inline auto __thiscall save_load_cmd_hook::trampoline(UDishonoredEngine* engine, int dt) -> void {
    return;
    return save_load_cmd_hook::instance()->hook_.original()(engine, dt);
}

struct FCheckResult {
    void* Next;
    AActor *Actor;
    FVector Location;
    FVector Normal;
    float Time;
    int Item;
    UMaterialInterface* Material;
    UPhysicalMaterial* PhysicalMaterial;
    UPrimitiveComponent* PrimitiveComponent;
    UPrimitiveComponent* SourceComponent;
    FName BoneName;
    ULevel* Level;
    int LevelIndex;
    uint32_t bStartPenetrating;
};

enum ETraceFlags
{
	// Bitflags.
	TRACE_Pawns					= 0x00001, // Check collision with pawns.
	TRACE_Movers				= 0x00002, // Check collision with movers.
	TRACE_Level					= 0x00004, // Check collision with BSP level geometry.
	TRACE_Volumes				= 0x00008, // Check collision with soft volume boundaries.
	TRACE_Others				= 0x00010, // Check collision with all other kinds of actors.
	TRACE_OnlyProjActor			= 0x00020, // Check collision with other actors only if they are projectile targets
	TRACE_Blocking				= 0x00040, // Check collision with other actors only if they block the check actor
	TRACE_LevelGeometry			= 0x00080, // Check collision with other actors which are static level geometry
	TRACE_ShadowCast			= 0x00100, // Check collision with shadow casting actors
	TRACE_StopAtAnyHit			= 0x00200, // Stop when find any collision (for visibility checks)
	TRACE_SingleResult			= 0x00400, // Stop when find guaranteed first nearest collision (for SingleLineCheck)
	TRACE_Material				= 0x00800, // Request that Hit.Material return the material the trace hit.
	TRACE_Visible				= 0x01000,
	TRACE_Terrain				= 0x02000, // Check collision with terrain
	TRACE_Tesselation			= 0x04000, // Check collision against highest tessellation level (not valid for box checks)  (no longer used)
	TRACE_PhysicsVolumes		= 0x08000, // Check collision with physics volumes
	TRACE_TerrainIgnoreHoles	= 0x10000, // Ignore terrain holes when checking collision
	TRACE_ComplexCollision		= 0x20000, // Ignore simple collision on static meshes and always do per poly
	TRACE_AllComponents			= 0x40000, // Don't discard collision results of actors that have already been tagged.  Currently adhered to only by ActorOverlapCheck.
	TRACE_Accurate				= 0x80000, // Don't do the legacy pullback by an arbitrary amount of collision results
	TRACE_MoveIgnoresDestruction= 0x100000, // Skip collision with dynamic rigid bodies

	// Combinations.
	TRACE_Hash					= TRACE_Pawns	|	TRACE_Movers |	TRACE_Volumes	|	TRACE_Others			|	TRACE_Terrain	|	TRACE_LevelGeometry,
	TRACE_Actors				= TRACE_Pawns	|	TRACE_Movers |	TRACE_Others	|	TRACE_LevelGeometry		|	TRACE_Terrain,
	TRACE_World					= TRACE_Level	|	TRACE_Movers |	TRACE_Terrain	|	TRACE_LevelGeometry,
	TRACE_AllColliding			= TRACE_Level	|	TRACE_Actors |	TRACE_Volumes,
	TRACE_ProjTargets			= TRACE_AllColliding	| TRACE_OnlyProjActor,
	TRACE_AllBlocking			= TRACE_Blocking		| TRACE_AllColliding,
};


DEFINE_HOOK(
    uworld_line_check,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? A1 ? ? ? ? 8B 15 ? ? ? ? FF 05 ? ? ? ? 89 45 ? A1 ? ? ? ? 89 55 ? 33 FF 8D 55 ? C7 45 ? ? ? ? ? 89 7D ? 89 45 ? 89 15 ? ? ? ? 8B 55",
    bool,
    UWorld *world, FCheckResult *Hit, AActor *SourceActor, const FVector *End, const FVector *Start, ETraceFlags TraceFlags, const FVector &Extent, ULightComponent *SourceLight
);

inline auto __thiscall uworld_line_check_hook::trampoline(UWorld *world, FCheckResult *Hit, AActor *SourceActor, const FVector *End, const FVector *Start, ETraceFlags TraceFlags, const FVector &Extent, ULightComponent *SourceLight) -> bool {
    return uworld_line_check_hook::instance()->hook_.original()(world, Hit, SourceActor, End, Start, TraceFlags, Extent, SourceLight);
}

DEFINE_HOOK(
	frotator_to_look_vector,
	"53 8B DC 83 EC ? 83 E4 ? 83 C4 ? 55 8B 6B ? 89 6C 24 ? 8B EC 83 EC ? 68 ? ? ? ? 51",
	FVector*,
	FRotator* rot, FVector* vec
);

inline auto __thiscall frotator_to_look_vector_hook::trampoline(FRotator* rot, FVector* vec) -> FVector* {
	return frotator_to_look_vector_hook::instance()->hook_.original()(rot, vec);
}

DEFINE_HOOK(
	get_player_viewpoint,
	"55 8B EC 56 8B F1 83 BE ? ? ? ? 00 75 ? 83 BE ? ? ? ? 00 74",
	void,
	APlayerController *controller, FVector *out_Location, FRotator *out_Rotation
);

inline auto __thiscall get_player_viewpoint_hook::trampoline(APlayerController *controller, FVector *out_Location, FRotator *out_Rotation) -> void {
	return get_player_viewpoint_hook::instance()->hook_.original()(controller, out_Location, out_Rotation);
}

namespace mods {
    auto handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest> &requests) -> std::vector<ADishonoredNPCController*>;
    auto handle_single_npc_request(UWorld* world, const NPCSpawnRequest& request) -> std::optional<ADishonoredNPCController*>;

    auto spawn_test_pawn() -> void;
}

#endif