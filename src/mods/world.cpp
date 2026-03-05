#include "world.h"

#include "hooks/dishonored/world.h"

auto mods::position_looking_at(UWorld* world) -> FVector {
    const auto player_controller = reinterpret_cast<ADishonoredPlayerController*>(get_state()->engine->GamePlayers[0]->Actor);
    if (player_controller == nullptr) {
        LOG("player controller is null");
        return {};
    }

    FVector original_location = player_controller->Location;
    FRotator spawn_rotation = player_controller->Rotation;
    APlayerController_GetPlayerViewPoint_hook::instance()->hook_.original()(player_controller, &original_location, &spawn_rotation);

    FVector look_vector = {};
    FRotator_Vector_hook::instance()->hook_.original()(&spawn_rotation, &look_vector);

    FVector end = {};
    end.X = original_location.X + look_vector.X * 10000;
    end.Y = original_location.Y + look_vector.Y * 10000;
    end.Z = original_location.Z + look_vector.Z * 10000;

    FCheckResult check = {};
    UWorld_SingleLineCheck_hook::instance()->hook_.original()(world, &check, player_controller->Pawn, &end, &original_location, ETraceFlags::TRACE_World, player_controller->Pawn->GetCollisionExtent(), nullptr);

    return check.Location;
}

auto mods::position_infront() -> FVector {
    const auto player_controller = reinterpret_cast<ADishonoredPlayerController*>(get_state()->engine->GamePlayers[0]->Actor);
    if (player_controller == nullptr) {
        LOG("player controller is null");
        return FVector{};
    }

    FVector original_location = player_controller->Location;
    FRotator spawn_rotation = player_controller->Rotation;
    APlayerController_GetPlayerViewPoint_hook::instance()->hook_.original()(player_controller, &original_location, &spawn_rotation);

    FVector look_vector = {};
    FRotator_Vector_hook::instance()->hook_.original()(&spawn_rotation, &look_vector);

    FVector end = {};
    end.X = original_location.X + look_vector.X * 500;
    end.Y = original_location.Y + look_vector.Y * 500;
    end.Z = original_location.Z + look_vector.Z * 500;

    return end;
}
