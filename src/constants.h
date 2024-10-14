//
// Created by zhang on 2024/10/12.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H

#define MODEL "MIPS"

// CPU相关常量
#define NUM_REGISTERS 32     // 寄存器数量
#define INSTRUCTION_SIZE 4   // 每条指令占用的字节数

// 缓存相关常量
#define CACHE_LINE_SIZE 64       // 缓存行大小 64字节
#define L1_CACHE_LINE_SIZE 16384   // L1缓存大小 16KB

// 虚拟内存相关常量
#define PAGE_SIZE 4096     // 页面大小 4KB
#define NUM_PAGES 1024      // 页面数量

enum operation {
    ADD,
    SUB,
    AND,
    OR,
    XOR,
    NOT,
    SLL,
    SRL,
    SRA,
};

#endif //CONSTANTS_H
