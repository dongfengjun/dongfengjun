#include <am.h>

#define KBD_ADDR 0x10011000
#define KEYDOWN_MASK 0x80
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint8_t k = inb(KBD_ADDR);
  if(k & KEYDOWN_MASK) kbd->keydown = true;
  else kbd->keydown = false;
  kbd->keycode = k & ~KEYDOWN_MASK;
}
