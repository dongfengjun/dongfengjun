#include <am.h>
#include <klib-macros.h>
#include "./../riscv.h"
#include <string.h>
#include <stdio.h>

extern char _heap_start;
extern char _heap_end;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (1 * 1024)
#define PMEM_END ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

#define UART_BASE 0X10000000
void putch(char ch) {
	while(!(inb(UART_BASE + 0X5) & 0x20));
	outl(UART_BASE, ch);
}

void halt(int code) {
	asm volatile("mv a0, %0; ebreak" : : "r"(code));
	while (1);
}

extern char text[];
extern char text_size[];
extern char rodata_vma_start[];
extern char rodata_lma_start[];
extern char rodata_size[];
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
	printf("%d\n", (uint32_t)main);
	//uint32_t main_saddr = (uint32_t)main - 0x30000010 + (uint32_t)rodata_vma_start;
	if((size_t)text_size != 0 && ((size_t)text_size < 0x2000)) {
		//memcpy(&main_saddr, text, (size_t)text_size);
		if((size_t)rodata_size != 0 && ((size_t)rodata_size < 0x2000)) {
			if(&rodata_vma_start != &rodata_lma_start) {
			//	memcpy(rodata_vma_start, rodata_lma_start, (size_t)rodata_size);
			}
		}
		//asm volatile ("jalr %0" : : "r" (main_saddr));
	}
}

void uart_init(void) {
	outb(UART_BASE + 0X3, 0x80);
	outb(UART_BASE + 0X1, 0x0);
	outb(UART_BASE, 0x1);
	outb(UART_BASE + 0X3, 0x3);
	outb(UART_BASE + 0X1, 0x11);
}

//am flash_read
#define SPI_BASE 0X10001000
uint32_t flash_read(uint32_t addr) {
  volatile uint32_t *SS = (uint32_t *)(SPI_BASE + 0x18);                    
	SS[0] = 0b00000000;
	uint64_t *Tx = (uint64_t *)SPI_BASE;
	Tx[0] = 0x0300000000000000 + ((uint64_t)(addr & 0xffffff) << 32);
	SS[0] = 0b00000001;
  uint32_t *DIVIDER = (uint32_t *)(SPI_BASE + 0x14);
  DIVIDER[0] = 0x1;
  uint32_t *CTRL = (uint32_t *)(SPI_BASE + 0x10);
  CTRL[0] = 0b010101000000; //LEN=32+32=64 lsb=0 Mode3: Rx_NEG=1 Tx_NEG=0
  while(1) {
    volatile uint32_t *COMPLETE = (uint32_t *)(SPI_BASE + 0x10);
    int GO_BSY = COMPLETE[0] & 0x100;
    if(GO_BSY == 0) break;
  }
  uint32_t *Rx = (uint32_t *)SPI_BASE;
  return (Rx[0] << 24) | ((Rx[0] << 8) & 0x00FF0000) | ((Rx[0] >> 8) & 0x0000FF00) | (Rx[0] >> 24);
}

void _trm_init() {
	uart_init(); //uart16500 init + difftest_skip_ref
	bootloader(); //mrom->sram
	int ret = main(mainargs);
	halt(ret);
}
