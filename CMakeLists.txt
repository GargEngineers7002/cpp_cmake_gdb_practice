cmake_minimum_required(VERSION 3.20)

# -------------------------------------------------------------------
# Project
# -------------------------------------------------------------------
project(
  my_app
  VERSION 0.1.0
  DESCRIPTION "A short description of your project"
  LANGUAGES CXX
)

# -------------------------------------------------------------------
# C++ Standard
# -------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)   # use -std=c++20 instead of -std=gnu++20

# -------------------------------------------------------------------
# Build type
# -------------------------------------------------------------------
# Only default the build type for single-config generators (e.g. Unix Makefiles).
# Multi-config generators (e.g. Ninja Multi-Config, Xcode) manage this themselves.
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# -------------------------------------------------------------------
# Compiler warnings (matching the flags in src/note.md)
# -------------------------------------------------------------------
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR
   CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR
   CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")

  add_compile_options(
    -Wall
    -Wextra
    -Wpedantic          # matches -pedantic-errors from note.md
    -Werror             # treat all warnings as errors
    -Weffc++
    -Wconversion
    -Wsign-conversion
  )

  # Additional hardening flags (optional, but recommended)
  add_compile_options(
    -Wshadow
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Wcast-align
    -Woverloaded-virtual
    -Wduplicated-cond
    -Wduplicated-branches
    -Wlogical-op
    -Wnull-dereference
    -Wuseless-cast
    -Wdouble-promotion
    -Wformat=2
  )
endif()

# -------------------------------------------------------------------
# Sources and executable
# -------------------------------------------------------------------
set(SOURCES
  src/main.cpp
  src/index.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# -------------------------------------------------------------------
# Include directories
# -------------------------------------------------------------------
target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# -------------------------------------------------------------------
# Output directory (optional — keeps the build tree tidy)
# -------------------------------------------------------------------
set_target_properties(${PROJECT_NAME} PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
