#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = true;
	kbd->keycode = 1;
	putch('a');putch('\n');
	//inl(KBD_ADDR);
  //kbd->keycode = AM_KEY_NONE;
}
