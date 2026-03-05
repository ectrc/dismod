#ifndef world_h
#define world_h

#include "hook.h"
#include "sdk.hpp"

#include <vector>
#include <algorithm>

DEFINE_HOOK(
	UWorld_SpawnActor,
	"55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 89 4D ? C7 45 ? 00 00 00 00 E8",
	AActor*,
	UWorld* base, UClass* class_, FName in_name, const FVector* location, const FRotator* rotation, AActor* template_actor, uint32_t no_collision_fail, uint32_t remote_owned, AActor* owner, APawn* instigator, uint32_t no_fail, uint32_t out_of_bend_time, void* init_func
);

DEFINE_HOOK(
    UWorld_Tick,
    "55 8B EC 51 56 8B F1 8B 86 ? ? ? ? F7 80",
    void,
    UWorld* world, uint32_t tick_type, float delta
);

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

	TRACE_Hash					= TRACE_Pawns	|	TRACE_Movers |	TRACE_Volumes	|	TRACE_Others			|	TRACE_Terrain	|	TRACE_LevelGeometry,
	TRACE_Actors				= TRACE_Pawns	|	TRACE_Movers |	TRACE_Others	|	TRACE_LevelGeometry		|	TRACE_Terrain,
	TRACE_World					= TRACE_Level	|	TRACE_Movers |	TRACE_Terrain	|	TRACE_LevelGeometry,
	TRACE_AllColliding			= TRACE_Level	|	TRACE_Actors |	TRACE_Volumes,
	TRACE_ProjTargets			= TRACE_AllColliding	| TRACE_OnlyProjActor,
	TRACE_AllBlocking			= TRACE_Blocking		| TRACE_AllColliding,
};

DEFINE_HOOK(
    UWorld_SingleLineCheck,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? A1 ? ? ? ? 8B 15 ? ? ? ? FF 05 ? ? ? ? 89 45 ? A1 ? ? ? ? 89 55 ? 33 FF 8D 55 ? C7 45 ? ? ? ? ? 89 7D ? 89 45 ? 89 15 ? ? ? ? 8B 55",
    bool,
    UWorld *world, FCheckResult *Hit, AActor *SourceActor, const FVector *End, const FVector *Start, ETraceFlags TraceFlags, const FVector &Extent, ULightComponent *SourceLight
);

DEFINE_HOOK(
	FRotator_Vector,
	"53 8B DC 83 EC ? 83 E4 ? 83 C4 ? 55 8B 6B ? 89 6C 24 ? 8B EC 83 EC ? 68 ? ? ? ? 51",
	FVector*,
	FRotator* rot, FVector* vec
);

DEFINE_HOOK(
	APlayerController_GetPlayerViewPoint,
	"55 8B EC 56 8B F1 83 BE ? ? ? ? 00 75 ? 83 BE ? ? ? ? 00 74",
	void,
	APlayerController *controller, FVector *out_Location, FRotator *out_Rotation
);

#endif