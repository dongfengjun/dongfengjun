#include <memory/host.h>
#include <memory/paddr.h>

static uint8_t flash[0x10000000] PG_ALIGN = {};

static uint8_t* guest_to_host_flash(paddr_t paddr) { return flash + paddr - 0x30000000;}

word_t flash_read(paddr_t addr, int len) {
	if(addr == 0x300001E1) {
		printf("300001E1:%08x\n",flash[0x1E1]);
	}
	word_t ret = host_read(guest_to_host_flash(addr), len);
  return ret;
}

void init_flash(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_flash(addr), len, data);
}
