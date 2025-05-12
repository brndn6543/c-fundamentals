cmake_minimum_required(VERSION 3.31)

# Enable both C and C++.
project(c_fundamentals LANGUAGES C CXX)

# Use C11.
set(CMAKE_C_STANDARD            11)
set(CMAKE_C_STANDARD_REQUIRED   ON)

# Use C++20.
set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Headers.
include_directories(${PROJECT_SOURCE_DIR}/include)


add_executable(
        function_parameters_pointers_demo
        src/c/function_pointer_parameters_demo.c
)

add_executable(
        function_pointers_demo
        src/c/function_pointers_demo.c
)

add_executable(
        c_style_callback
        src/c/c_style_callback.c
)


# Main executable.
add_executable(
        c_fundamentals
        src/c/main.c
        src/c/function_pointer_parameters_demo.c
        src/c/function_pointers_demo.c
        src/c/c_style_callback.c
)

# C++ Target.
add_executable(
        virtual_methods_demo
        src/cpp/virtual_methods_demo.cpp
)

add_executable(
        vector_demo
        src/cpp/vector_demo.cpp
)

add_executable(
        make_unique
        src/cpp/make_unique_demo.cpp
)