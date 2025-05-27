#include <string.h>
#include "./../../include/common.h"

CPU_state cpu;
static const uint32_t img [] = {
/***dummy***
	0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef  // some data
***/
	0x100007b7,		//lui	a5,0x10000
	0x04100713,		//li	a4,65
	0x00e78023,		//sb	a4,0(a5)
	0x0000006f		//j
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = 0x30000000;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(flash_to_host(0x0), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}

