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
  {outsider, NPCSpawnRequest{
    L"L_OutsiderDream_Script",
    L"Twk_Pawn_Outsider.Twk_Pawn_Outsider",
    L"AI_BrainTweaks_Outsider.BrainTweaks_Outsider",
    L"DisFaction_Defaults.Faction_Corvo_Default"
  }},
  {overseer_1, NPCSpawnRequest{
    L"L_Ovrsr_Back_Script",
    L"Pwn_Overseer_MTall_1.Pwn_Overseer_MTall_1",
    L"AI_BrainTweaks_OverSeer.BrainTweaks_OverSeer",
    L"DisFaction_Defaults.Faction_Overseer_Default"
  }},
  {overseer_2, NPCSpawnRequest{
    L"L_Ovrsr_Back_Script",
    L"Pwn_Overseer_MTall_1.Pwn_Overseer_MTall_1_NoMask",
    L"AI_BrainTweaks_OverSeer.BrainTweaks_OverSeer",
    L"DisFaction_Defaults.Faction_Overseer_Default"
  }},
  {aristo_fem_1, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Twk_Pawn_Boyle_Party.Twk_Pawn_Boyle_AristoF1",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {aristo_fem_2, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Twk_Pawn_Boyle_Party.Twk_Pawn_Boyle_AristoF3",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {aristo_masc_1, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Twk_Pawn_Boyle_Party.Pwn_AristoParty_MTall_1Pwn_AristoParty_MTall_1",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {aristo_masc_2, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Twk_Pawn_Boyle_Party.Pwn_AristoParty_MTall_2Pwn_AristoParty_MTall_2",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {boyle, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Twk_Pawn_LadyEsmaBoyle.Twk_Pawn_LadyEsmaBoyle",
    L"AI_BrainTweaks_Civilian.AI_BrainTwk_Civ_WoLConfident",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {madam, NPCSpawnRequest{
    L"L_Brothel_Script",
    L"Pwn_BrothelMadam_F.Pwn_BrothelMadam_F",
    L"AI_BrainTweaks_Civilian.BrainTweaks_BrothelMadam",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {emily, NPCSpawnRequest{
    L"L_Brothel_Script",
    L"Twk_Pawn_LadyEmily.Pwn_LadyEmily",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian_Emily",
    L"DisFaction_Defaults.Faction_Conspiracy_Default"
  }},
  {empress, NPCSpawnRequest{
    L"L_Tower_Script",
    L"Twk_Pawn_Empress.Twk_Pawn_Empress",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {granny, NPCSpawnRequest{
    L"L_Streets1_Script",
    L"Pwn_GrannyRags_F.Pwn_GrannyRags_F",
    L"AI_BrainTweaks_Civilian.BrainTweaks_GrannyRags",
    L"StreetsShared_MS.Factions.Witch"
  }},
  {slackjaw, NPCSpawnRequest{
    L"L_Distillery2_Script",
    L"Pwn_SlackJaw_MTall_1.Pwn_SlackJaw_MTall_1",
    L"AI_BrainTweaks_Thug.BrainTweaks_SlackJaw",
    L"StreetsShared_MS.Factions.SlackJaw_Thugs"
  }},
  {thug_1, NPCSpawnRequest{
    L"L_Distillery2_Script",
    L"Pwn_Thug_MSmall_0.Pwn_Thug_MSmall_0",
    L"AI_BrainTweaks_Thug.BrainTweaks_ThugWhiskey",
    L"DisFaction_Defaults.Faction_Thug_Default"
  }},
  {thug_2, NPCSpawnRequest{
    L"L_Distillery2_Script",
    L"Pwn_Thug_MSmall_1.Pwn_Thug_MSmall_1",
    L"AI_BrainTweaks_Thug.BrainTweaks_ThugWhiskey",
    L"DisFaction_Defaults.Faction_Thug_Default"
  }},
  {samuel, NPCSpawnRequest{
    L"L_Streets1_Script",
    L"Twk_Pawn_Boatman.Twk_Pawn_Boatman",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian_NoPanic",
    L"DisFaction_Defaults.Faction_Conspiracy_Default"
  }},
  {regent, NPCSpawnRequest{
    L"L_TowerRtrn_Yard_Roof_Script",
    L"Twk_Pawn_LordRegent.Twk_Pawn_LordRegent",
    L"AI_BrainTweaks_Misc.BrainTweaks_LordRegent",
    L"DisFaction_Defaults.Faction_Guard_Default"
  }},
  {middle_fem_1, NPCSpawnRequest{
    L"L_Flooded_FRefinery_Script",
    L"Flooded_Tweaks.Pwn_Alfa",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian_FloodedGate",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {middle_fem_2, NPCSpawnRequest{
    L"L_Flooded_FGate_Script",
    L"Flooded_Tweaks.Pwn_Petunia",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian_FloodedGate",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {civil_1, NPCSpawnRequest{
    L"L_Flooded_FStreets_Script",
    L"Pwn_MiddleClass_MSmall_1_Hat1.Pwn_MiddleClass_MSmall_1_Hat1",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {civil_2, NPCSpawnRequest{
    L"L_BoyleStreet_Ext_Script",
    L"Pwn_MiddleClass_MTall_1.Pwn_MiddleClass_MTall_1",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {elite_1, NPCSpawnRequest{
    L"L_Prison_Script",
    L"Pwn_EliteGuard_MTall_4.Pwn_EliteGuard_MTall_4",
    L"AI_BrainTweaks_Elite.BrainTweaks_Guard_Elite",
    L"DisFaction_Defaults.Faction_Guard_Default"
  }},
  {servant_1, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Pwn_Servant_F_1.Pwn_Servant_F_1",
    L"AI_BrainTweaks_Civilian.BrainTweaks_Civilian",
    L"DisFaction_Defaults.Faction_Civilian_Default"
  }},
  {servant_2, NPCSpawnRequest{
    L"L_Boyle_Int_Script",
    L"Pwn_Servant_F_2.Pwn_Servant_F_2",
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