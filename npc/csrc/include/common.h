#ifndef _COMMON_H_
#define _COMMON_H_

#include "Vtop_ysyx_24110017.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "macro.h"//宏定义函数
#include "debug.h"//Assert\Log
#include "utils.h"//Log
//#include "iringbuf.h"

//Macro definition
typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

//Config
//#define CONFIG_TARGET_AM 0//AM
//#define CONFIG_DEVICE 0//DEVICE
#define CONFIG_ITRACE 1
#define CONFIG_WATCHPOINT 1

#define CONFIG_MBASE 0x80000000//IM
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MEM_RANDOM 1
#define PMEM_LEFT ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)


//main
void cpu_exec(int n);

//Imemory
uint8_t guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);
void init_mem();
word_t pmem_read(paddr_t addr);
word_t pmem_write(uint32_t content, uint64_t addr, uint32_t len);
//reg DPI-C
word_t gpr_regs_display(int raddr);//抓取reg  DPI-C in RF
void isa_regs_display();
word_t isa_reg_str2val(const char *s, bool *success);

//monitor
void init_monitor(int argc, char *argv[]);
//sdb//sdb.h
void init_sdb();
void sdb_mainloop();
void sdb_set_batch_mode();
void checkWatchPoint();

//itrace
extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
int iringbuf_init();
int iringbuf_push(char *data);
void iringbuf_display();

#endif
