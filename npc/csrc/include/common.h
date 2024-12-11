#ifndef _COMMON_H_
#define _COMMON_H_

#include "Vtop_ysyx_24110017.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//memory
uint32_t pmem_read(int addr);                                               
int pmem_write(uint32_t content, uint64_t addr, uint32_t len);
int free_memory();

//function
void init_monitor(int argc, char *argv[]);

#endif
