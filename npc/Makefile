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

ELF += ./am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += --elf=$(ELF)
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
REF_SO ?= ../nemu/build/riscv32-nemu-interpreter-so
ARGS += --img=$(IMG)
ARGS += --diff=$(REF_SO)

run: sim
	$(OBJ_DIR)/Vtop_ysyx_24110017 $(ARGS)

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
