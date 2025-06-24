#include "end_scene.h"
#include "render/render.h"

std::shared_ptr<end_scene_hook> end_scene_hook::instance_ = nullptr;
IDirect3DDevice9* end_scene_hook::device_ = nullptr;

auto end_scene_hook::instance() -> std::shared_ptr<end_scene_hook> {
  if (!instance_) {
    instance_ = std::make_shared<end_scene_hook>();
  }

  return instance_;
}

end_scene_hook::end_scene_hook() {
  const auto window_handle = FindWindowA(nullptr, "Dishonored");
  if (window_handle == nullptr) {
    LOG("Failed to get foreground window handle");
    return;
  }

  IDirect3D9* direct_3d = Direct3DCreate9(D3D_SDK_VERSION);
  if (direct_3d == nullptr) {
    LOG("Failed to create Direct3D9 instance");
    return;
  }

  D3DPRESENT_PARAMETERS present_parameters;
  ZeroMemory(&present_parameters, sizeof(present_parameters));
  present_parameters.Windowed = TRUE;
  present_parameters.SwapEffect = D3DSWAPEFFECT_DISCARD;
  present_parameters.hDeviceWindow = window_handle;
  present_parameters.BackBufferFormat = D3DFMT_UNKNOWN;

  IDirect3DDevice9* device;
  if (direct_3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, window_handle, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &present_parameters, &device) != D3D_OK) {
    direct_3d->Release();
    LOG("Failed to create Direct3D9 device");
    return;
  }
  if (device == nullptr) {
    direct_3d->Release();
    LOG("Failed to create Direct3D9 device");
    return;
  }

  const auto device_vtable = *reinterpret_cast<uintptr_t**>(device);

  this->hook_ = base_hook<end_scene_t>{
    "directx end scene",
    reinterpret_cast<std::byte*>(device_vtable[42]),
    this->trampoline
  };

  device->Release();
  direct_3d->Release();

  if (!this->hook_.install()) {
    LOG("Failed to install end_scene_hook");
    return;
  }

  render::original_window_proc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(window_handle, GWL_WNDPROC, reinterpret_cast<LONG_PTR>(render::window_proc)));
  if (render::original_window_proc == nullptr) {
    LOG("Failed to set window procedure");
    return;
  }
}

auto APIENTRY end_scene_hook::trampoline(LPDIRECT3DDEVICE9 device) -> HRESULT {
  end_scene_hook::device_ = device;

  render::setup(device);
  render::draw_to_texture(device);
  render::draw_overlay(device);
  
  return end_scene_hook::instance()->hook_.original()(device);
}