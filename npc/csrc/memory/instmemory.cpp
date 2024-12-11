#include <stdint.h>
#include <iostream>
#include <cassert>
#include "../include/common.h"

uint8_t mem[0x8000000] = {};

uint32_t pmem_read(int addr) { // 内存读取函数
    int base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    uint32_t lo0 = (uint32_t)mem[base_addr];
    uint32_t lo1 = ((uint32_t)mem[base_addr + 1]) << 8;
    uint32_t lo2 = ((uint32_t)mem[base_addr + 2]) << 16;
    uint32_t lo3 = ((uint32_t)mem[base_addr + 3]) << 24;

    return lo0 | lo1 | lo2 | lo3; // 使用按位或运算符来组合所有字节
}

int pmem_write(uint32_t content, uint64_t addr, uint32_t len) { // 内存写入函数
    int base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    for (int i = 0; i < len; ++i) { // 根据len的值写入相应数量的字节
        mem[base_addr + i] = content >> (24 - 8 * i);
    }
    return 0; // 返回0表示成功
}

