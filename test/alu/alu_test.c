//
// Created by zhang on 2024/10/14.
//
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../src/alu.h"

void adder_test_1() {


    FILE *file = fopen("./test_result/adder_output.txt", "w+");
    if (file == NULL) {
        perror("Cannot open file");
        return;
    }

    srand((unsigned int)time(NULL));

    for(int i = 0; i <= 100; i++) {

        uint32_t a = rand() % 10000;
        uint32_t b = rand() % 10000;

        uint32_t res = adder(a, ~b, 1);
        fflush(stdout);
        fprintf(file, "%u-%u=%d\n", a, b, res);
    }

    fclose(file);
    printf("test result written in adder_output.txt\n");


    uint32_t a = 0xF0000000;  // 等价于 -268435456 (假设看成有符号数)
    unsigned int shift = 2;

    uint32_t result = ALU(a, shift, SRA);
    printf("Result: 0x%X\n", result);  // 输出: 0xFC000000
}