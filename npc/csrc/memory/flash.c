#include "../include/common.h"

static uint8_t flash[0x10000000] PG_ALIGN = {};

uint8_t* flash_to_host(paddr_t paddr) { return flash + paddr; }

uint32_t flash_host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: return 0;
  }
}

int c_flash_read(int addr) {
	printf("addr = %08x\n",addr);
	printf("flash: %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x\n",flash[0],flash[1],flash[2],flash[3],flash[4],flash[5],flash[6],flash[7],flash[8],flash[9],flash[10],flash[11],flash[12],flash[13],flash[14],flash[15]);
  addr = addr & ~0x3u; //4字节对齐
	return flash_host_read(flash_to_host(addr), 4);
}

