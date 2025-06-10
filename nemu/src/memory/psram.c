#include <memory/host.h>
#include <memory/paddr.h>

static uint8_t psram[0x4000000] PG_ALIGN = {0};

static uint8_t* guest_to_host_psram(paddr_t paddr) { return psram + paddr - 0x80000000;}

word_t psram_read(paddr_t addr, int len) {
	word_t ret = host_read(guest_to_host_psram(addr), len);
	if(addr >= 0x8000001C && addr < 0x80000020) {
		printf("addr:%08x rdata:%08x\n",addr,ret);
	}
  return ret;
}

void psram_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_psram(addr), len, data);
	if(addr >= 0x8000001C && addr < 0x80000020) {
    printf("0x8000001C: %02x%02x%02x%02x\n",psram[0x1f],psram[0x1e],psram[0x1d],psram[0x1c]);
  }
}
