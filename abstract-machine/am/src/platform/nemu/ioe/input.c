#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inl(0xa0000060);
	kbd->keydown = true;
	kbd->keycode = k & ~KEYDOWN_MASK;
	//printf("keycode:%d\n", kbd->keycode);
}
