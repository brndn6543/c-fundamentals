cmake_minimum_required(VERSION 3.31)
project(c_fundamentals C)

# Use C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Headers.
include_directories(${PROJECT_SOURCE_DIR}/include)


add_executable(
        function_parameters_pointers_demo
        src/function_pointer_parameters_demo.c
        include/function_parameters_pointers.h
)

# Main executable.
add_executable(
        c_fundamentals
        src/main.c
        src/function_pointer_parameters_demo.c
)