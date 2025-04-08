#include <am.h>
#include <klib-macros.h>
#include "./../riscv.h"
#include <string.h>
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

extern char _data_lma_start[];
extern char _data_vma_start[];
extern char _data_vma_end[];
extern char _bss_start[];
extern char _bss_end[];
void bootloader() {
	size_t data_len = _data_vma_end - _data_vma_start;
	printf("%d\n", data_len);
	memcpy(_data_vma_start, _data_lma_start, data_len);
	size_t bss_len = _bss_end - _bss_start;
	printf("%d\n", (int)bss_len);
	memset(_bss_start, 1, bss_len);
}

void _trm_init() {
	bootloader();
	int ret = main(mainargs);
	halt(ret);
}
