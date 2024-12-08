#ifndef INSTMEMORY_H
#define INSTMEMORY_H

int mem_init();
uint32_t pmem_read(int addr);
int pmem_write(uint32_t content, uint64_t addr, uint32_t len);
int free_memory();

#endif
