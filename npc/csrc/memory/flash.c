#include "../include/common.h"
#include <stdint.h>
#include <iostream>
#include <cassert>

uint8_t flash[0x10000000] PG_ALIGN = {};

uint8_t* flash_to_host(paddr_t paddr) { return flash + paddr - 0x30000000; }

uint32_t flash_host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: return 0;
  }
}

int c_flash_read(int addr) {
  addr = addr & ~0x3u; //4字节对齐
	return flash_host_read(flash_to_host(addr), 4);
}

