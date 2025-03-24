CC = riscv64-linux-gnu-gcc
CFLAGS = -march=rv32im -mabi=ilp32 -nostdlib -T link.ld
OBJCOPY = riscv64-linux-gnu-objcopy

all: char-test.bin

char-test.elf: start.S char-test.c
	$(CC) $(CFLAGS) -o $@ $^

char-test.bin: char-test.elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -f char-test.elf char-test.bin
