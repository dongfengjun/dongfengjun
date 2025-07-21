#include <am.h>
#include <stdio.h>
#include "../riscv.h"

#define KBD_ADDR 0x10011000
#define KEYUP 0xF0
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inw(KBD_ADDR);
  if((k >> 8 & 0xFF) == KEYUP) {
		kbd->keydown = false;
		kbd->keycode = ((k >> 8) & 0xFF00) | (k & 0xFF);
	}
  else {
		kbd->keydown = true;
		kbd->keycode = k;
	}
	printf("keycode:%d\n", kbd->keycode);
}
