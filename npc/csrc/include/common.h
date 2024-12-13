#ifndef _COMMON_H_
#define _COMMON_H_

#include "Vtop_ysyx_24110017.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "macro.h"//宏定义函数
#include "debug.h"//Assert\Log
#include "utils.h"//Log

//Macro definition
typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

//Config
//#define CONFIG_TARGET_AM 1;

//main
void cpu_exec(int n);

//memory
word_t pmem_read(paddr_t addr);
int pmem_write(uint32_t content, uint64_t addr, uint32_t len);
int free_memory();
void isa_reg_display();//DPI-C in RF

//monitor
void init_monitor(int argc, char *argv[]);

//sdb//sdb.h
void init_sdb();
void sdb_mainloop();
void sdb_set_batch_mode();

#endif
