# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.5)

# Project's name
project(N-Base LANGUAGES C)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories(${PROJECT_SOURCE_DIR}/modules/debug ${PROJECT_SOURCE_DIR}/drivers/uart)

# Files to compile
add_executable(n-base
    ${PROJECT_SOURCE_DIR}/application/main.c
    ${PROJECT_SOURCE_DIR}/modules/debug/debug.c
    ${PROJECT_SOURCE_DIR}/drivers/uart/uart.c
    )

if ( CMAKE_C_COMPILER_ID MATCHES "Clang|GNU" )
    target_compile_options(n-base PRIVATE
        -Wall
        -Wextra
        -Wunreachable-code
        -Wpedantic
        -fdump-rtl-expand
        )
endif()
if ( CMAKE_C_COMPILER_ID MATCHES "Clang" )
    target_compile_options(n-base PRIVATE
        -Wweak-vtables
        -Wexit-time-destructors
        -Wglobal-constructors
        -Wmissing-noreturn
        -Weverything
        )
endif()

