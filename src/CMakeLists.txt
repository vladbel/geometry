# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
set(CMAKE_BUILD_TYPE Debug)
set(TARGET_MAIN_COMPUTE_AREAS compute-areas)
set(TARGET_LIB_SHAPES shapes)
set(BLOCK_SEPARATOR "------------------------------------------")

message(${BLOCK_SEPARATOR})

# project name and language
project(geometry LANGUAGES CXX)

message("CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
message("CMAKE_CXX_COMPILER_VERSION = ${CMAKE_CXX_COMPILER_VERSION}")

message("Dependencies: ${TARGET_LIB_SHAPES}")

list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
  list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_subdirectory(${TARGET_LIB_SHAPES})

add_executable(${TARGET_MAIN_COMPUTE_AREAS} compute-areas.cpp)
include_directories(${TARGET_MAIN_COMPUTE_AREAS}, ${TARGET_LIB_SHAPES})

target_compile_options(${TARGET_MAIN_COMPUTE_AREAS}
  PRIVATE
  "-fPIC"
)
target_compile_features(${TARGET_MAIN_COMPUTE_AREAS} PUBLIC cxx_std_17)

target_link_libraries(${TARGET_MAIN_COMPUTE_AREAS} ${TARGET_LIB_SHAPES})

message(${BLOCK_SEPARATOR})
