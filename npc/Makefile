TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH += ./csrc/include
INC_UART_PATH = ./../ysyxSoC/perip/uart16550/rtl
INC_SPI_PATH = ./../ysyxSoC/perip/spi/rtl

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD -x-assign fast --trace --cc --build
VERILATOR_CFLAGS += -CFLAGS -g
VERILATOR_CFLAGS += -LDFLAGS "$(LDFLAGS) $(LIBS)"
VERILATOR_CFLAGS += -LDFLAGS -lreadline
VERILATOR_CFLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_CFLAGS += --autoflush

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
VSRCS += $(shell find ./../ysyxSoC/perip -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS += $(addprefix -I, $(INC_PATH))
INCFLAGS += $(addprefix -I, $(INC_UART_PATH))
INCFLAGS += $(addprefix -I, $(INC_SPI_PATH))
VERILATOR_FLAGS += -CFLAGS $(INC_PATH) $(INC_UART_PATH) $(INC_SPI_PATH)
VERILATOR_FLAGS += -CFLAGS -g

LOG ?= $(BUILD)/npc-log.txt
#IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
IMG ?= ./../char-test/char-test.bin
ELF ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
REF_SO ?= ../nemu/build/riscv32-nemu-interpreter-so
ARGS += --log=$(LOG)
ARGS += --img=$(IMG)
ARGS += --elf=$(ELF)
ARGS += --diff=$(REF_SO)
ARGS += -b

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^ $(ARGS)

wave:
	gtkwave $(BUILD_DIR)/wave.vcd

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
include ../Makefile
