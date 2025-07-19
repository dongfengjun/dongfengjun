#include <am.h>
#include "../riscv.h"

#define KBD_ADDR 0x10011000
#define KEYDOWN_MASK 0x8000
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inw(KBD_ADDR);
  if(k & KEYDOWN_MASK) kbd->keydown = false;
  else kbd->keydown = true;
  kbd->keycode = k & ~KEYDOWN_MASK;
}
