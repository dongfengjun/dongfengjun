#include <stdint.h>
#include <iostream>
#include <cassert>
#include "instmemory.h"

uint8_t *mem = nullptr; // 定义一个uint8_t类型的指针mem，并初始化为nullptr
int size = 0x8000000; // 定义内存大小为0x8000000（8MB）

int mem_init() { // 内存初始化函数
    mem = new uint8_t[size]; // 分配指定大小的内存空间
    return 0; // 返回0表示成功
}

uint32_t pmem_read(int addr) { // 内存读取函数
    int base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    uint32_t lo0 = (uint32_t)mem[base_addr] << 24;
    uint32_t lo1 = ((uint32_t)mem[base_addr + 1]) << 16;
    uint32_t lo2 = ((uint32_t)mem[base_addr + 2]) << 8;
    uint32_t lo3 = ((uint32_t)mem[base_addr + 3]);

    return lo0 | lo1 | lo2 | lo3; // 使用按位或运算符来组合所有字节
}

int pmem_write(uint32_t content, uint64_t addr, uint32_t len) { // 内存写入函数
    int base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    for (int i = 0; i < len; ++i) { // 根据len的值写入相应数量的字节
        mem[base_addr + i] = content >> (24 - 8 * i);
    }
    return 0; // 返回0表示成功
}

int free_memory() { // 释放内存函数
    delete[] mem; // 释放之前分配的内存空间
    return 0; // 返回0表示成功
}
