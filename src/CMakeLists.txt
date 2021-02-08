# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
set(CMAKE_BUILD_TYPE Debug)
set(SHAPES_LIB_NAME shapes)
set(BLOCK_SEPARATOR "------------------------------------------")

message(${BLOCK_SEPARATOR})

# project name and language
project(geometry LANGUAGES CXX)

message("C++ compiler flags: ${CMAKE_CXX_FLAGS}")

message("Dependencies: ${SHAPES_LIB_NAME}")

list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
  list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_subdirectory(${SHAPES_LIB_NAME})

add_executable(compute-areas compute-areas.cpp)
include_directories(compute-areas, ${SHAPES_LIB_NAME})

target_compile_options(compute-areas
  PRIVATE
    "-fPIC"
  )

target_link_libraries(compute-areas ${SHAPES_LIB_NAME})

message(${BLOCK_SEPARATOR})
