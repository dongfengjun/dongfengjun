#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "Vtop_ysyx_24110017.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop_ysyx_24110017__Dpi.h"
#include "./include/common.h"
#include <time.h>

#ifdef CONFIG_MTRACE
  extern char *mtrace_p;
#endif

static uint64_t us = 0;
int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
	uint32_t result;
	if (raddr == 0xa000004c) {
		struct timespec now;
		clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
		us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
		result = us >> 32;
		printf("time high:%d\n", result);
	}
	else if(raddr == 0xa0000048) {
		result = (uint32_t)us;
		printf("time low:%d\n", result);
	}
	else {
		result = paddr_read(raddr, 4);
	}
	/***
	#ifdef CONFIG_MTRACE
	if(inst == || inst == || inst == ) {
		mtrace_p += sprintf(mtrace_p, "raddr:%08x read:%08x\n", raddr, result);
	#endif
	}
	***/
	return result;
}
void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
#ifdef CONFIG_MTRACE
		mtrace_p += sprintf(mtrace_p, "waddr:%08x write:%08x\n", waddr, wdata);
#endif
	if(waddr == 0xa00003F8) {
		putc((char)wdata, stderr);
		return;
	}
	switch(wmask) {
		case 1:	paddr_write(waddr, 1, wdata); break;
		case 3: paddr_write(waddr, 2, wdata); break;
		case 15: paddr_write(waddr, 4, wdata); break;
		default: break;
	}
}

