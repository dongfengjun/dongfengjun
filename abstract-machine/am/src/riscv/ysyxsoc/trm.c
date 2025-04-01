#include <am.h>
#include <klib-macros.h>
#include "./../riscv.h"
#include <stdio.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (1 * 1024)
#define PMEM_END ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
	outl(0x10000000, ch);
}

void halt(int code) {
	asm volatile("mv a0, %0; ebreak" : : "r"(code));
	while (1);
}

void bootloader() {
  char *p = &_heap_start;
  printf("p=%n\n",p);
}

void _trm_init() {
	bootloader();
	int ret = main(mainargs);
	halt(ret);
}
