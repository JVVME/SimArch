//
// Created by zhang on 2024/10/12.
//

#ifndef ALU_H
#define ALU_H
#include <stdint.h>
#include "constants.h"

typedef struct {
    unsigned int bit : 1;  // 1 位宽的字段
} BitField;



uint32_t adder(uint32_t a, uint32_t b, uint32_t sub);
uint32_t ALU(uint32_t a, uint32_t b, uint32_t op);

#endif //ALU_H
