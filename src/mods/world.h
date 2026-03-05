#ifndef mods_world_h
#define mods_world_h

#include "sdk.hpp"
#include "engine/state.h"
#include "logger.h"

namespace mods {
    auto position_looking_at(UWorld* world) -> FVector;
    auto position_infront() -> FVector;
}

#endif