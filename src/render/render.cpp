#include "render.h"
#include "logger.h"

#include <imgui.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_win32.h>

#include "engine/engine.h"
#include "engine/state.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND window, UINT message, WPARAM wide_param, LPARAM long_param);

namespace render{
  auto setup(LPDIRECT3DDEVICE9 device) -> void {
    std::call_once(init_once_flag, [device]() {
      ImGui::CreateContext();
      ImGuiIO& io = ImGui::GetIO();
      io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange | ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad;

      D3DDEVICE_CREATION_PARAMETERS creation_parameters;
      device->GetCreationParameters(&creation_parameters);
      output_window = creation_parameters.hFocusWindow;
      if (output_window == nullptr) {
        LOG("Failed to get window handle from Direct3D device creation parameters");
        return;
      }

      ImGui_ImplWin32_Init(output_window);
      ImGui_ImplDX9_Init(device);
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
    if (!draw_enabled.load()) return;

    ImGui_ImplDX9_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ImGui::Begin("adsasd");
    
    // ImGui::BeginListBox("Pawns", ImVec2(0, 200.0f));

    // static auto cached_pawn_names = std::map<int32_t , std::string>();

    // const auto pawns = engine::FindObjects<ADishonoredNPCPawn>();
    // for (size_t i = 0; i < pawns.size(); ++i) {
    //   auto pawn = pawns[i];
    //   if (pawn == nullptr || pawn->IsPendingKill()) continue;
    //   ImGui::PushID(i);

    //   FVector copied_loc;
    //   memcpy(&copied_loc, &pawn->Location, sizeof(FVector));
    //   cached_pawn_names[pawn->ObjectInternalInteger] = pawn->GetName();
      
    //   ImGui::Text("%s Location: (%.2f, %.2f, %.2f)", cached_pawn_names[pawn->ObjectInternalInteger], copied_loc.X, copied_loc.Y, copied_loc.Z);
    //   // FVector2D screen_position = world_to_screen(device, pawn->Location);
    //   // if (screen_position.X >= 0.0f && screen_position.Y >= 0.0f && screen_position.X <= width && screen_position.Y <= height) {
    //   //   ImGui::SetCursorPos(screen_position);
    //   //   ImGui::Text("%s", *pawn->GetName().ToString());
    //   // }

    //   ImGui::PopID();
    // }
    // ImGui::EndListBox();

    static const auto state = get_state();
    ImGui::Text("%s Location: (%d, %d, %d)", state->pawn->GetName(),
                state->pawn->Location.X, state->pawn->Location.Y, state->pawn->Location.Z);

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

  auto world_to_screen(IDirect3DDevice9* device, const FVector& world_position) -> FVector2D {
    if (!device) return { 0.0f, 0.0f };

    D3DVIEWPORT9 viewport;
    D3DMATRIX viewMatrix, projMatrix;

    // Get viewport and transformation matrices
    device->GetViewport(&viewport);
    device->GetTransform(D3DTS_VIEW, &viewMatrix);
    device->GetTransform(D3DTS_PROJECTION, &projMatrix);

    // Combine view and projection into a single matrix manually
    D3DMATRIX viewProj;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j) {
            viewProj.m[i][j] = 0.0f;
            for (int k = 0; k < 4; ++k)
                viewProj.m[i][j] += viewMatrix.m[i][k] * projMatrix.m[k][j];
        }

    // Transform world position to clip space
    float x = world_position.X * viewProj._11 + world_position.Y * viewProj._21 + world_position.Z * viewProj._31 + viewProj._41;
    float y = world_position.X * viewProj._12 + world_position.Y * viewProj._22 + world_position.Z * viewProj._32 + viewProj._42;
    float z = world_position.X * viewProj._13 + world_position.Y * viewProj._23 + world_position.Z * viewProj._33 + viewProj._43;
    float w = world_position.X * viewProj._14 + world_position.Y * viewProj._24 + world_position.Z * viewProj._34 + viewProj._44;

    if (w < 0.001f)
        return { -1.0f, -1.0f };  // Behind camera

    // Perspective division
    x /= w;
    y /= w;
    z /= w;

    // Convert to screen space
    FVector2D screen;
    screen.X = (x * 0.5f + 0.5f) * viewport.Width + viewport.X;
    screen.Y = (1.0f - (y * 0.5f + 0.5f)) * viewport.Height + viewport.Y;

    return screen;
  }
}