cmake_minimum_required(VERSION 3.31)
project(c_fundamentals C)

# Use C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Headers.
include_directories(${PROJECT_SOURCE_DIR}/include)


add_executable(
        function_pointers_demo
        src/function_pointer_parameters_demo.c
)

# Main executable.
add_executable(
        main_demo
        src/main.c
)