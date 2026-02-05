cmake_minimum_required(VERSION 3.30)
project(dismod)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
set(CMAKE_CXX_FLAGS /bigobj)

if (MSVC)
  add_compile_options(/EHsc)
endif()

add_subdirectory(external/libhat)
add_subdirectory(external/minhook)
add_subdirectory(external/sdk)

add_library(dismod SHARED
  library.cpp

  src/hooks/engine/process_event.cpp
  src/hooks/engine/load_package.cpp
  src/hooks/engine/load_package_async.cpp
  src/hooks/engine/static_load_object.cpp
  src/hooks/engine/static_construct_object.cpp
  src/hooks/engine/static_duplicate_object.cpp
  src/hooks/engine/spawn_actor_from_tweaks.cpp
  src/hooks/engine/spawn_actor.cpp

  src/engine/engine.cpp
  src/engine/state.cpp

  src/mods/spawn.cpp
  src/hooks/dishonored/world.h
  src/hooks/dishonored/world.cpp

  src/render/render.cpp
  src/render/render.h
  src/hooks/render/end_scene.h
  src/hooks/render/end_scene.cpp

  external/imgui/imgui.cpp
  external/imgui/imgui_draw.cpp
  external/imgui/imgui_widgets.cpp
  external/imgui/imgui_demo.cpp
  external/imgui/imgui_tables.cpp
  external/imgui/backends/imgui_impl_dx9.cpp
  external/imgui/backends/imgui_impl_win32.cpp
)
target_include_directories(dismod PUBLIC include src 
  external/imgui
  external/imgui/backends
)
target_link_libraries(dismod PUBLIC 
  libhat 
  sdk 
  minhook
  d3d9
)