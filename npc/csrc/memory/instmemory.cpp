#include <stdint.h>
#include <iostream>
#include <cassert>
#include "../include/common.h"

#if   defined(CONFIG_PMEM_MALLOC)
	uint8_t *mem = NULL;
#else // CONFIG_PMEM_GARRAY
	uint8_t mem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return mem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - mem + CONFIG_MBASE; }

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  mem = malloc(CONFIG_MSIZE);
  assert(mem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(mem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t pmem_read(paddr_t addr) { // 内存读取函数
    uint8_t base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    uint32_t lo0 = (uint32_t)mem[base_addr];
    uint32_t lo1 = ((uint32_t)mem[base_addr + 1]) << 8;
    uint32_t lo2 = ((uint32_t)mem[base_addr + 2]) << 16;
    uint32_t lo3 = ((uint32_t)mem[base_addr + 3]) << 24;

    return lo0 | lo1 | lo2 | lo3; // 使用按位或运算符来组合所有字节
}

word_t pmem_write(uint32_t content, uint64_t addr, uint32_t len) { // 内存写入函数
    uint8_t base_addr = addr - 0x80000000; // 计算实际的内存地址偏移
    for (int i = 0; i < len; ++i) { // 根据len的值写入相应数量的字节
        mem[base_addr + i] = content >> (24 - 8 * i);
    }
    return 0; // 返回0成功
}

