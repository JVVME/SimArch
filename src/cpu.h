//
// Created by zhang on 2024/10/12.
//

#ifndef CPU_H
#define CPU_H
#include <stdint.h>

#include "constants.h"


typedef struct{
    uint32_t registers[NUM_REGISTERS];
    uint32_t rip;
} Registers;



#endif //CPU_H
