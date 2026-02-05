#include "world.h"

#include "engine/state.h"
#include "mods/spawn.h"

auto __thiscall tick_world_hook::trampoline(UWorld* world, uint32_t type, float delta) -> void {
    if (auto requests = get_state()->event_queue.handle(); !requests.empty()) {
        mods::handle_npc_requests(world, requests);
    }

    return tick_world_hook::instance()->hook_.original()(world, type, delta);
}