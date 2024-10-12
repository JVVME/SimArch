cmake_minimum_required(VERSION 3.29)
project(SimArch C)

set(CMAKE_C_STANDARD 17)

add_executable(SimArch main.c
        cpu.c
        cpu.h
        pipeline.c
        pipeline.h
        cache.c
        cache.h
        memory.c
        memory.h
        constants.h
)
