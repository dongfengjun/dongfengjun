#include <am.h>
#include "../riscv.h"

#define KBD_ADDR 0x10011000
#define KEYDOWN 0xF0
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inw(KBD_ADDR);
  if((k >> 8 & 0xFF) != KEYDOWN) kbd->keydown = false;
  else kbd->keydown = true;
  kbd->keycode = ((k >> 8) & 0xFF00) | (k & 0xFF);
}
