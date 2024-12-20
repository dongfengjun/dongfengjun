#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "Vtop_ysyx_24110017.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop_ysyx_24110017__Dpi.h"
#include "./include/common.h"

/***
int pmem_read(uint32_t raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
	return paddr_read(raddr, 4);
}
void pmem_write(uint32_t waddr, uint32_t wdata, uint8_t wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	switch(wmask) {
		case 1:	paddr_write(waddr, 1, wdata); break;
		case 3: paddr_write(waddr, 2, wdata); break;
		case 15: paddr_write(waddr, 4,wdata); break;
		default: break;
	}
}
***/
