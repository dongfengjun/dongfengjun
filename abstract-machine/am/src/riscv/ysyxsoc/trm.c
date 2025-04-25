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

#define UART_BASE 0X10000000
void putch(char ch) {
	outl(UART_BASE, ch);
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

void uart_init(void) {
	outb(UART_BASE + 0X3, 0x80);
	outb(UART_BASE + 0X1, 0x0);
	outb(UART_BASE, 0xff);
	outb(UART_BASE + 0X3, 0x3);
}

void _trm_init() {
	bootloader(); //mrom->sram
	uart_init(); //uart16500 init
	int ret = main(mainargs);
	halt(ret);
}
