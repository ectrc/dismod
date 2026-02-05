#include "render.h"
#include "logger.h"

#include <imgui.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_win32.h>

#include "engine/engine.h"
#include "engine/state.h"
#include "mods/spawn.h"

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


    if (!draw_enabled.load()) {
      io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange | ImGuiConfigFlags_NavEnableGamepad;
      return;
    };
    io.ConfigFlags = ImGuiConfigFlags_NavEnableGamepad;

    ImGui_ImplDX9_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    // ImVec2 center = ImGui::GetMainViewport()->GetCenter();
    // ImGui::GetBackgroundDrawList()->AddRectFilled(
    //   ImVec2(center.x - 50, center.y - 50),
    //   ImVec2(center.x + 50, center.y + 50),
    //   IM_COL32(255, 0, 0, 255)
    // );
    ImGui::Begin("dismod");

    ImGui::LabelText("", "close or open using end key");

    ImGui::SeparatorText("spawn an npc");

    ImGui::InputText("npc base tweak", render_state.npc_base_tweak, 256);
    ImGui::InputText("npc ai tweak", render_state.npc_ai_tweak, 256);
    ImGui::InputText("faction tweak", render_state.npc_faction_tweak, 256);

    if (ImGui::Button("spawn")) {
      get_state()->event_queue.push( {
        .npc_tweaks_name = widen(render_state.npc_base_tweak),
        .ai_tweaks_name = widen(render_state.npc_ai_tweak),
        .faction_tweak = widen(render_state.npc_faction_tweak)
      });
    };

    ImGui::SeparatorText("unload the mod");

    if (ImGui::Button("unload module")) {
      render_state.wants_exit.store(true);
    };

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