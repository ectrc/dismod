#ifndef render_h
#define render_h

#include <windows.h>
#include <atomic>
#include <mutex>
#include <d3d9.h>
#include <sdk.hpp>

struct render_state {
    float dpi_scale;
    std::atomic<bool> wants_exit;
    char npc_base_tweak[256];
    char npc_ai_tweak[256];
    char npc_faction_tweak[256];
};

namespace render {
    extern auto setup(LPDIRECT3DDEVICE9 device) -> void;
    extern auto draw_to_texture(LPDIRECT3DDEVICE9 device) -> void;
    extern auto draw_overlay(LPDIRECT3DDEVICE9 device) -> void;
    extern auto cleanup() -> void;

    inline uint32_t width = 0;
    inline uint32_t height = 0;
    inline std::atomic<bool> draw_enabled = {true};
    inline std::atomic<bool> block_input = {true};

    inline HWND output_window = nullptr;
    inline IDirect3DTexture9* texture = nullptr;
    inline std::once_flag init_once_flag = {};

    inline render_state render_state = {
        .dpi_scale = 1.0f,
        .wants_exit = false,
        .npc_base_tweak = "Twk_Pawn_Executioner.Twk_Pawn_Executioner",
        .npc_ai_tweak = "AI_BrainTweaks_Civilian.Faction_Conspiracy_Default",
        .npc_faction_tweak = "DisFaction_Defaults.Faction_Weepers_Default"
    };

    inline WNDPROC original_window_proc;
    extern LRESULT WINAPI window_proc(const HWND window, UINT message, WPARAM wide_param, LPARAM long_param);
}

#endif