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

extern char data_vma_start[];
extern char data_lma_start[];
extern char data_size[];
extern char bss_vma_start[];
extern char bss_lma_start[];
extern char bss_size[];
void bootloader(void) {
	if(&data_vma_start != &data_lma_start) {
		if((size_t)data_size != 0) {
			memcpy(data_vma_start, data_lma_start, (size_t)data_size);
		}
	}
	if(&bss_vma_start != &bss_lma_start) {
		if((size_t)bss_size != 0) {
			memset(bss_vma_start, 0, (size_t)data_size);
		}
	}
}

void _trm_init() {
	//bootloader();
	int ret = main(mainargs);
	halt(ret);
}
