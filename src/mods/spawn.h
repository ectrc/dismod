#ifndef mods_spawn_h
#define mods_spawn_h

#include "engine/state.h"

#include "hook.h"
#include "sdk.hpp"

namespace mods {
    auto handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest> &requests) -> void;
	auto handle_single_npc_request(UWorld* world, NPCSpawnRequest request) -> void;
    auto handle_single_npc_request_stepped(NPCSpawnRequest* request) -> void;
}

#endif