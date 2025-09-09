BUILD = ./build
OBJ_DIR = $(BUILD)/obj_dir
TOP = ysyxSoCFull
VSRCS = ./../ysyxSoC/build/ysyxSoCFull.v
VSRCS += $(shell find ./vsrc -name "*.v")
VSRCS += $(shell find ./../ysyxSoC/perip -name "*.v")
CSRCS += $(shell find ./csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")
INC_COM_PATH = ./csrc/include
INC_UART_PATH = ./../ysyxSoC/perip/uart16550/rtl
INC_SPI_PATH = ./../ysyxSoC/perip/spi/rtl

#nvboard
NXDC_FILES = ./constr/top.nxdc
INC_NVBOARD_PATH = ./../nvboard/usr/include
SRC_AUTO_BIND = $(BUILD)/auto_bind.cpp
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
CSRCS += $(SRC_AUTO_BIND)
include $(NVBOARD_HOME)/scripts/nvboard.mk

LDFLAGS += $(shell llvm-config --ldflags) -fPIE
LIBS += $(shell llvm-config --libs)
LDFLAGS += -fsanitize=address#ASan
LDLIBS := -lasan $(LDLIBS)

VERILATOR = verilator
VERILATOR_FLAGS += -MMD -x-assign fast --trace --cc --build
VERILATOR_FLAGS += -CFLAGS -I$(INC_PATH)	-I$(INC_COM_PATH) -I$(INC_UART_PATH) -I$(INC_SPI_PATH)
VERILATOR_FLAGS += -CFLAGS $(CXXFLAGS)
VERILATOR_FLAGS += -CFLAGS -g
VERILATOR_FLAGS += -LDFLAGS "$(LDFLAGS) $(LIBS)"
VERILATOR_FLAGS += -LDFLAGS -lreadline
VERILATOR_FLAGS += --top-module $(TOP)
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_FLAGS += --autoflush
VERILATOR_FLAGS += --lint-only
VERILATOR_FLAGS += -Wall
VERILATOR_FLAGS += -Werror-

LOG ?= $(BUILD)/npc-log.txt
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
#IMG ?= ./../char-test/char-test.bin
ELF ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
REF_SO ?= ../nemu/build/riscv32-nemu-interpreter-so
ARGS += --log=$(LOG)
ARGS += --img=$(IMG)
ARGS += --elf=$(ELF)
ARGS += --diff=$(REF_SO)
ARGS += -b

run: sim
	$(OBJ_DIR)/VysyxSoCFull $(ARGS)

sim: $(CSRCS) $(VSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@rm -rf ./build/obj_dir
	mkdir -p build
	@$(VERILATOR)  $(VERILATOR_FLAGS) --Mdir ./obj_dir --exe $^
	mv obj_dir $(BUILD)

wave:
	gtkwave $(BUILD)/wave.vcd

perf:
	make -C ../am-kernels/benchmarks/microbench ARCH=riscv32e-ysyxsoc mainargs=test run

clean:
	rm -rf ./build

.PHONY: clean run sim wave
include ../Makefile
