BUILD = ./build
OBJ_DIR = $(BUILD)/obj_dir
VSRCS = $(shell find ./vsrc -name "*.v")
CSRCS = $(shell find ./csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")
INC_PATH = ./csrc/include

LDFLAGS += $(shell llvm-config --ldflags) -fPIE
LIBS += $(shell llvm-config --libs)
LDFLAGS += -fsanitize=address#ASan
LDLIBS := -lasan $(LDLIBS)

VERILATOR = verilator
VERILATOR_FLAGS += -MMD -x-assign fast --trace --cc --build
VERILATOR_FLAGS += -CFLAGS -I$(INC_PATH)
VERILATOR_FLAGS += -CFLAGS -g
VERILATOR_FLAGS += -LDFLAGS "$(LDFLAGS) $(LIBS)"
VERILATOR_FLAGS += -LDFLAGS -lreadline

LOG ?= $(BUILD)/npc-log.txt
#IMG ?= ../am-kernels/tests/cpu-tests/build/load-store-riscv32-nemu.bin
#IMG ?= ../am-kernels/tests/cpu-tests/build/recursion-riscv32-nemu.bin
#IMG ?= ../am-kernels/tests/cpu-tests/build/movsx-riscv32-nemu.bin
#IMG ?= ../am-kernels/tests/cpu-tests/build/mul-longlong.bin
#IMG ?= ../am-kernels/tests/cpu-tests/build/shift-riscv32-nemu.bin
IMG ?= ../am-kernels/tests/cpu-tests/build/to-lower-case-riscv32-nemu.bin
ELF ?= ../am-kernels/tests/cpu-tests/build/bit-riscv32-nemu.elf
REF_SO ?= ../nemu/build/riscv32-nemu-interpreter-so
NPC_ARGS += --log=$(LOG)
NPC_ARGS += --img=$(IMG)
NPC_ARGS += --elf=$(ELF)
NPC_ARGS += --diff=$(REF_SO)

run: sim
	$(OBJ_DIR)/Vtop_ysyx_24110017 $(NPC_ARGS)

sim: $(CSRCS) $(VSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@rm -rf ./build/obj_dir
	mkdir -p build
	@$(VERILATOR)  $(VERILATOR_FLAGS) --Mdir ./obj_dir --exe $^
	mv obj_dir $(BUILD)

wave:
	gtkwave $(BUILD)/wave.vcd

clean:
	rm -rf ./build

.PHONY: clean run sim wave
include ../Makefile
