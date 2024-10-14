cmake_minimum_required(VERSION 3.29)
project(SimArch C)

set(CMAKE_C_STANDARD 17)

add_executable(SimArch src/main.c
        src/cpu.c
        src/cpu.h
        src/pipeline.c
        src/pipeline.h
        src/cache.c
        src/cache.h
        src/memory.c
        src/memory.h
        src/constants.h
        src/alu.c
        src/alu.h
        test/alu/alu_test.c
        test/alu/alu_test.h
)
