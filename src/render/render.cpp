#include "render.h"
#include "logger.h"

#include <imgui.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_win32.h>
#include <d3dx9.h>

#include "engine/engine.h"
#include "engine/state.h"
#include "mods/spawn.h"

#include "aristo_fem_1.png.hpp"
#include "aristo_fem_2.png.hpp"
#include "aristo_masc_1.png.hpp"
#include "aristo_masc_2.png.hpp"
#include "assasin.png.hpp"
#include "boyle.png.hpp"
#include "buddy.png.hpp"
#include "civil_1.png.hpp"
#include "civil_2.png.hpp"
#include "daud.png.hpp"
#include "elite_1.png.hpp"
#include "emily.png.hpp"
#include "empress.png.hpp"
#include "granny.png.hpp"
#include "madam.png.hpp"
#include "middle_fem_1.png.hpp"
#include "middle_fem_2.png.hpp"
#include "outsider.png.hpp"
#include "overseer_1.png.hpp"
#include "overseer_2.png.hpp"
#include "regent.png.hpp"
#include "samuel.png.hpp"
#include "servant_1.png.hpp"
#include "servant_2.png.hpp"
#include "slackjaw.png.hpp"
#include "thug_1.png.hpp"
#include "thug_2.png.hpp"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND window, UINT message, WPARAM wide_param, LPARAM long_param);

namespace render{
  auto setup(LPDIRECT3DDEVICE9 device) -> void {
    std::call_once(init_once_flag, [device]() {
      ImGui::CreateContext();

      ImGuiIO& io = ImGui::GetIO();
      io.ConfigFlags = ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad;

      D3DDEVICE_CREATION_PARAMETERS creation_parameters;
      device->GetCreationParameters(&creation_parameters);
      output_window = creation_parameters.hFocusWindow;
      if (output_window == nullptr) {
        LOG("Failed to get window handle from Direct3D device creation parameters");
        return;
      }

      ImGui_ImplWin32_Init(output_window);
      ImGui_ImplDX9_Init(device);
      ImGui_ImplWin32_EnableDpiAwareness();

      float main_scale = ImGui_ImplWin32_GetDpiScaleForMonitor(::MonitorFromPoint(POINT{ 0, 0 }, MONITOR_DEFAULTTOPRIMARY));

      ImGuiStyle& style = ImGui::GetStyle();
      style.ScaleAllSizes(main_scale);
      style.FontScaleDpi = main_scale;

      style.Colors[ImGuiCol_Text]                  = ImVec4(0.86f, 0.93f, 0.89f, 0.78f);
      style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.86f, 0.93f, 0.89f, 0.28f);
      style.Colors[ImGuiCol_WindowBg]              = ImVec4(0.13f, 0.14f, 0.17f, 1.00f);
      style.Colors[ImGuiCol_Border]                = ImVec4(0.31f, 0.31f, 1.00f, 0.00f);
      style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
      style.Colors[ImGuiCol_FrameBg]               = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
      style.Colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
      style.Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_TitleBg]               = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
      style.Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.20f, 0.22f, 0.27f, 0.75f);
      style.Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.20f, 0.22f, 0.27f, 0.47f);
      style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
      style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.09f, 0.15f, 0.16f, 1.00f);
      style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
      style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.71f, 0.22f, 0.27f, 1.00f);
      style.Colors[ImGuiCol_SliderGrab]            = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
      style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_Button]                = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
      style.Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
      style.Colors[ImGuiCol_ButtonActive]          = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_Header]                = ImVec4(0.92f, 0.18f, 0.29f, 0.76f);
      style.Colors[ImGuiCol_HeaderHovered]         = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
      style.Colors[ImGuiCol_HeaderActive]          = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_Separator]             = ImVec4(0.14f, 0.16f, 0.19f, 1.00f);
      style.Colors[ImGuiCol_SeparatorHovered]      = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
      style.Colors[ImGuiCol_SeparatorActive]       = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(0.47f, 0.77f, 0.83f, 0.04f);
      style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
      style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_PlotLines]             = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
      style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
      style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
      style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.92f, 0.18f, 0.29f, 0.43f);
      style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.20f, 0.22f, 0.27f, 0.9f);

      auto create_and_add_tex = [&device](LPCVOID resource, UINT size, NPC_T using_enum) -> void {
        if (FAILED(D3DXCreateTextureFromFileInMemory(device, resource, size, &textures[using_enum]))) {
          LOG("failed to create texture for npc type {}", static_cast<uint32_t>(using_enum));
        };
      };

      create_and_add_tex(resources_aristo_fem_1_png, resources_aristo_fem_1_png_len, NPC_T::aristo_fem_1);
      create_and_add_tex(resources_aristo_fem_2_png, resources_aristo_fem_2_png_len, NPC_T::aristo_fem_2);
      create_and_add_tex(resources_aristo_masc_1_png, resources_aristo_masc_1_png_len, NPC_T::aristo_masc_1);
      create_and_add_tex(resources_aristo_masc_2_png, resources_aristo_masc_2_png_len, NPC_T::aristo_masc_2);
      create_and_add_tex(resources_assasin_png, resources_assasin_png_len, NPC_T::assasin);
      create_and_add_tex(resources_boyle_png, resources_boyle_png_len, NPC_T::boyle);
      create_and_add_tex(resources_buddy_png, resources_buddy_png_len, NPC_T::buddy);
      create_and_add_tex(resources_civil_1_png, resources_civil_1_png_len, NPC_T::civil_1);
      create_and_add_tex(resources_civil_2_png, resources_civil_2_png_len, NPC_T::civil_2);
      create_and_add_tex(resources_daud_png, resources_daud_png_len, NPC_T::daud);
      create_and_add_tex(resources_elite_1_png, resources_elite_1_png_len, NPC_T::elite_1);
      create_and_add_tex(resources_emily_png, resources_emily_png_len, NPC_T::emily);
      create_and_add_tex(resources_empress_png, resources_empress_png_len, NPC_T::empress);
      create_and_add_tex(resources_granny_png, resources_granny_png_len, NPC_T::granny);
      create_and_add_tex(resources_madam_png, resources_madam_png_len, NPC_T::madam);
      create_and_add_tex(resources_middle_fem_1_png, resources_middle_fem_1_png_len, NPC_T::middle_fem_1);
      create_and_add_tex(resources_middle_fem_2_png, resources_middle_fem_2_png_len, NPC_T::middle_fem_2);
      create_and_add_tex(resources_outsider_png, resources_outsider_png_len, NPC_T::outsider);
      create_and_add_tex(resources_overseer_1_png, resources_overseer_1_png_len, NPC_T::overseer_1);
      create_and_add_tex(resources_overseer_2_png, resources_overseer_2_png_len, NPC_T::overseer_2);
      create_and_add_tex(resources_regent_png, resources_regent_png_len, NPC_T::regent);
      create_and_add_tex(resources_samuel_png, resources_samuel_png_len, NPC_T::samuel);
      create_and_add_tex(resources_servant_1_png, resources_servant_1_png_len, NPC_T::servant_1);
      create_and_add_tex(resources_servant_2_png, resources_servant_2_png_len, NPC_T::servant_2);
      create_and_add_tex(resources_slackjaw_png, resources_slackjaw_png_len, NPC_T::slackjaw);
      create_and_add_tex(resources_thug_1_png, resources_thug_1_png_len, NPC_T::thug_1);
      create_and_add_tex(resources_thug_2_png, resources_thug_2_png_len, NPC_T::thug_2);
    });
  }

  auto draw_to_texture(LPDIRECT3DDEVICE9 device) -> void {
    if (!draw_enabled.load()) return;

    IDirect3DSurface9* back_buffer = nullptr;
    device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &back_buffer);

    D3DSURFACE_DESC desc;
    back_buffer->GetDesc(&desc);

    if (texture == nullptr || desc.Width != width || desc.Height != height)
    {
      if (texture) texture->Release();

      device->CreateTexture(
        desc.Width, desc.Height,
        1, D3DUSAGE_DYNAMIC,
        desc.Format,
        D3DPOOL_DEFAULT,
        &texture,
        nullptr
      );

      width = desc.Width;
      height = desc.Height;
    }

    IDirect3DSurface9* surface = nullptr;
    texture->GetSurfaceLevel(0, &surface);

    if (surface) {
      device->StretchRect(back_buffer, NULL, surface, NULL, D3DTEXF_NONE);
      surface->Release();
    }

    if (back_buffer) {
      back_buffer->Release();
    }
  }

  auto draw_overlay(LPDIRECT3DDEVICE9 device) -> void {
    ImGuiIO& io = ImGui::GetIO();

    ImGui_ImplDX9_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ImVec2 center = ImGui::GetMainViewport()->GetCenter();
    const auto size = ImGui::CalcTextSize("saving is disabled to prevent unwanted behaviour when reloading without the mod enabled");
    ImGui::GetBackgroundDrawList()->AddText(ImVec2(center.x - size.x/2, size.y ), ImColor(255, 255, 255, 255), "saving is disabled to prevent unwanted behaviour when reloading without the mod enabled");

    if (!draw_enabled.load()) {
      io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange | ImGuiConfigFlags_NavEnableGamepad;

      ImGui::Render();
      ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
      return;
    };
    io.ConfigFlags = ImGuiConfigFlags_NavEnableGamepad;

    ImGui::Begin("dismod");

    ImGui::Text( "close or open using end key");

    ImGui::SeparatorText("npc presets");


    const auto spawn_npc = [&](NPC_T using_enum) -> void {
      float window_width = ImGui::GetContentRegionAvail().x;

      if ((float)(ImGui::GetCursorPosX() + 4) > (float)window_width) ImGui::NewLine();

      if (ImGui::ImageButton(
          std::format("{}##{}", static_cast<int>(using_enum), reinterpret_cast<uintptr_t>(textures[using_enum])).c_str(),
          textures[using_enum],
          ImVec2(85.f, 85.f)
      )) {
        get_state()->event_queue.push(NPCSpawnRequest::npc_presets.at(using_enum));
      }

      ImGui::SameLine();
    };

    // ImGui::BeginGroup();
    spawn_npc(NPC_T::aristo_fem_1);
    spawn_npc(NPC_T::aristo_fem_2);
    spawn_npc(NPC_T::aristo_masc_1);
    spawn_npc(NPC_T::aristo_masc_2);
    spawn_npc(NPC_T::assasin);
    spawn_npc(NPC_T::boyle);
    spawn_npc(NPC_T::buddy);
    spawn_npc(NPC_T::civil_1);
    spawn_npc(NPC_T::civil_2);
    spawn_npc(NPC_T::daud);
    spawn_npc(NPC_T::elite_1);
    spawn_npc(NPC_T::emily);
    spawn_npc(NPC_T::empress);
    spawn_npc(NPC_T::granny);
    spawn_npc(NPC_T::madam);
    spawn_npc(NPC_T::middle_fem_1);
    spawn_npc(NPC_T::middle_fem_2);
    spawn_npc(NPC_T::outsider);
    spawn_npc(NPC_T::overseer_1);
    spawn_npc(NPC_T::overseer_2);
    spawn_npc(NPC_T::regent);
    spawn_npc(NPC_T::samuel);
    spawn_npc(NPC_T::servant_1);
    spawn_npc(NPC_T::servant_2);
    spawn_npc(NPC_T::slackjaw);
    spawn_npc(NPC_T::thug_1);
    spawn_npc(NPC_T::thug_2);

    ImGui::NewLine();
    // ImGui::EndGroup();

    // if (ImGui::Button("spawn assasin")) {
    //   get_state()->event_queue.push(NPCSpawnRequest::npc_presets.at(NPCSpawnRequest::NPCSpawnRequest_PresetType::assasin));
    // }
    //
    // if (ImGui::Button("spawn wolf")) {
    //   get_state()->event_queue.push(NPCSpawnRequest::npc_presets.at(NPCSpawnRequest::NPCSpawnRequest_PresetType::wolf));
    // }
    //
    // if (ImGui::Button("spawn buddy")) {
    //   get_state()->event_queue.push(NPCSpawnRequest::npc_presets.at(NPCSpawnRequest::NPCSpawnRequest_PresetType::buddy));
    // }

    ImGui::SeparatorText("spawn a custom npc");

    ImGui::InputText("package", render_state.package, 256);
    ImGui::InputText("npc base tweak", render_state.npc_base_tweak, 256);
    ImGui::InputText("npc ai tweak", render_state.npc_ai_tweak, 256);
    ImGui::InputText("faction tweak", render_state.npc_faction_tweak, 256);

    if (ImGui::Button("spawn")) {
      get_state()->event_queue.push( {
        .package_name = widen(render_state.package),
        .npc_tweaks_name = widen(render_state.npc_base_tweak),
        .ai_tweaks_name = widen(render_state.npc_ai_tweak),
        .faction_tweak = widen(render_state.npc_faction_tweak)
      });
    };

    ImGui::SeparatorText("unload the mod");

    if (ImGui::Button("unload module")) {
      render_state.wants_exit.store(true);
    }

    ImGui::End();

    ImGui::Render();
    ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
  }

  auto cleanup() -> void {
    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    if (texture) {
      texture->Release();
      texture = nullptr;
    }

    if (output_window) {
      SetWindowLongPtr(output_window, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(original_window_proc));
      output_window = nullptr;
    }
  }

  LRESULT WINAPI window_proc(HWND window, UINT message, WPARAM wide_param, LPARAM long_param) {
    if (message == WM_KEYUP && (wide_param == VK_HOME || wide_param == VK_END)) {
      draw_enabled.store(!draw_enabled.load());
    }

    if (message == WM_KEYUP && (wide_param == VK_DELETE)) {
      block_input.store(!block_input.load());
    }

    ImGui_ImplWin32_WndProcHandler(window, message, wide_param, long_param);
    if (draw_enabled.load() && block_input.load()) {
      return true;
    }

    return CallWindowProc(original_window_proc, window, message, wide_param, long_param);
  }
}