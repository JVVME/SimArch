//
// Created by zhang on 2024/10/12.
//

#include "alu.h"

BitField uint32t_to_bitfield(uint32_t value) {
    BitField bf;
    bf.bit = value & 1;  // 只保留最低有效位
    return bf;
}

uint32_t adder(uint32_t a, uint32_t b, uint32_t sub) {
    uint32_t result = 0;

    BitField carry = {sub};

    for(int i = 0; i < 32; i++) {
        const BitField bit_a = uint32t_to_bitfield(a >> i);
        const BitField bit_b = uint32t_to_bitfield(b >> i);

        const BitField bit_sum = {bit_a.bit ^ bit_b.bit ^ carry.bit};
        carry.bit = (bit_a.bit & bit_b.bit) | (bit_a.bit & carry.bit) | (bit_b.bit & carry.bit);

        result |= (bit_sum.bit << i);
    }

    return result;

}



uint32_t ALU(uint32_t a, uint32_t b, uint32_t op) {
    switch (op) {
        case ADD:
            return adder(a, b, 0);
        case SUB:
            return adder(a, ~b, 1);
        case AND:
            return a & b;
        case OR:
            return a | b;
        case XOR:
            return a ^ b;
        case NOT:
            return ~a;
        case SLL:
            return a << b;
        case SRL:
            return a >> b;
        case SRA:
            uint32_t msb = a & 0x80000000;
            uint32_t result = a >> b;
            if (msb) {
                uint32_t mask = ~((1 << (32 - b)) - 1);  // 生成填充掩码
                result |= mask;
            }
            return result;
        default:
            return 0;
    }

}