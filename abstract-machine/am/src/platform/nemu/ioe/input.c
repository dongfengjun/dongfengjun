#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = true;
	kbd->keycode = inl(KBD_ADDR);
	printf("keycode:%d\n", kbd->keycode);
	//kbd->keycode = AM_KEY_NONE;
}
