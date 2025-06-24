#include "render.h"

#include <imgui.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_win32.h>

namespace render{

  auto setup(LPDIRECT3DDEVICE9 device) -> void {
    std::call_once(init_once_flag, []() {
      ImGui::CreateContext();
      ImGuiIO& io = ImGui::GetIO();
      // io.ConfigFlags |= ImGuiConfigFlags_Dock

      ImGui_ImplWin32_Init(GetFore);
      ImGui_ImplDX9_Init(pDevice);
    });
  }
  
}