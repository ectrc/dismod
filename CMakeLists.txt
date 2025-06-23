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
  src/engine/engine.cpp
  src/hooks/process_event.cpp
  src/hooks/load_package.cpp
  src/hooks/load_package_async.cpp
  src/hooks/static_load_object.cpp
  src/hooks/static_construct_object.cpp
)
target_include_directories(dismod PUBLIC include src)
target_link_libraries(dismod PUBLIC 
  libhat 
  sdk 
  minhook
)