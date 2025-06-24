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
file(GLOB_RECURSE imgui CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/external/imgui/*.cpp")

add_library(dismod SHARED
  library.cpp
  src/engine/engine.cpp
  src/hooks/engine/process_event.cpp
  src/hooks/engine/load_package.cpp
  src/hooks/engine/load_package_async.cpp
  src/hooks/engine/static_load_object.cpp
  src/hooks/engine/static_construct_object.cpp
  src/hooks/render/end_scene.cpp

  ${imgui}
)
target_include_directories(dismod PUBLIC include src external/imgui)
target_link_libraries(dismod PUBLIC 
  libhat 
  sdk 
  minhook
  d3d9
)