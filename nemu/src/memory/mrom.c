#include <memory/host.h>
#include <memory/paddr.h>

static uint8_t mrom[0x1000] PG_ALIGN = {};

static uint8_t* guest_to_host_mrom(paddr_t paddr) { return mrom + paddr - 0x20000000;}

word_t mrom_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host_mrom(addr), len);
  return ret;
}

void init_mrom(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_mrom(addr), len, data);
}
