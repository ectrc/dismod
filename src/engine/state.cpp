#include "state.h"
#include "logger.h"

std::unordered_map<NPCSpawnRequest::NPCSpawnRequest_PresetType, NPCSpawnRequest> NPCSpawnRequest::npc_presets = {
  {assasin, NPCSpawnRequest{
    L"L_Flooded_FAssassins_Script",
    L"Pwn_Assassin_MTall_1.Pwn_Assassin_MTall_1",
    L"AI_BrainTweaks_Assassin.BrainTweaks_Assassin",
    L"DisFaction_Defaults.Faction_Assassin_Default"
  }},
  {daud, NPCSpawnRequest{
    L"L_Flooded_FAssassins_Script",
    L"Pwn_Daud_MTall_1.Pwn_Daud_MTall_1",
    L"AI_BrainTweaks_Assassin.BrainTweaks_AssassinDaud",
    L"DisFaction_Defaults.Faction_Assassin_Default"
  }},
  {wolf, NPCSpawnRequest{
    L"L_Flooded_FAssassins_Script",
    L"Twk_Pawn_WolfHound.Pwn_WolfHound_0",
    L"AI_BrainTweaks_Animals.BrainTweaks_WolfHound",
    L"DisFaction_Defaults.Faction_WolfHound_Default"
  }},
  {buddy, NPCSpawnRequest{
    L"L_Prison_Script",
    L"Twk_Pawn_Executioner.Twk_Pawn_Executioner",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
};

std::atomic<state*> current_state = {nullptr};

auto get_state() -> state* {
  state* current = current_state.load();
  if (current == nullptr) {
    current = new state();
    current_state.store(current);
  }
  return current;
}

auto set_state(state* new_state) -> void {
  if (new_state == nullptr) {
    LOG("Attempted to set state to null");
    return;
  }
  current_state.store(new_state);
}