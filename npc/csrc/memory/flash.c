#include "../include/common.h"

static uint8_t flash[0x10000000] PG_ALIGN = {};

uint8_t* flash_to_host(paddr_t paddr) { return flash + paddr - 0x30000000; }

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: return 0;
  }
}

int c_flash_read(paddr_t addr) {
  return host_read(flash_to_host(addr), 4);
}

