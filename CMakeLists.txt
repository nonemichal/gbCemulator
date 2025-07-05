cmake_minimum_required(VERSION 3.10)
project(gbCemulator C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(gbCemulator
    src/main.c
    src/CPU/cpu.c
)

target_compile_options(gbCemulator PRIVATE -Wall -Wextra -pedantic)

