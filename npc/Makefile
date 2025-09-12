BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
TOP = ysyxSoCFull
VSRCS = ./../ysyxSoC/build/ysyxSoCFull.v
VSRCS += ./vsrc/ysyx_24110017.v
VSRCS += $(shell find ./../ysyxSoC/perip -name "*.v")
CSRCS += $(shell find ./csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")
INC_COM_PATH = ./csrc/include
INC_UART_PATH = ./../ysyxSoC/perip/uart16550/rtl
INC_SPI_PATH = ./../ysyxSoC/perip/spi/rtl

#verilator
VERILATOR = verilator
VERILATOR_FLAGS += -MMD -x-assign fast --trace --cc --build
VERILATOR_FLAGS += -CFLAGS -I$(INC_PATH) -I$(INC_COM_PATH) -I$(INC_UART_PATH) -I$(INC_SPI_PATH)
VERILATOR_FLAGS += -CFLAGS $(CXXFLAGS)
VERILATOR_FLAGS += -CFLAGS -g
VERILATOR_FLAGS += -LDFLAGS "$(LDFLAGS) $(LIBS)"
VERILATOR_FLAGS += -LDFLAGS -lreadline
VERILATOR_FLAGS += --top-module $(TOP)
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_FLAGS += --autoflush
#静态检查
#VERILATOR_FLAGS += --lint-only -Wall
#VERILATOR_FLAGS += -Wno-DECLFILENAME

#nvboard
NXDC_FILES = ./constr/top.nxdc
INC_NVBOARD_PATH = ./../nvboard/usr/include
SRC_AUTO_BIND = $(BUILD_DIR)/auto_bind.cpp
$(SRC_AUTO_BIND): $(NXDC_FILES) | $(BUILD)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
CSRCS += $(SRC_AUTO_BIND)
include $(NVBOARD_HOME)/scripts/nvboard.mk

#gtkwave
GTKWAVE = gtkwave

#iverilog
IVERILOG = iverilog
VVP = vvp
OBJCOPY = objcopy
IVERILOG_FLAGS = -g2012 -Wall
IVSRC = ./vsrc/ysyx_24110017_itestbench.v
IVSRC += ./vsrc/ysyx_24110017.v
NETLIST_VSRC = ./ysyx_24110017_testbench.v
NETLIST ?= ./ysyx_24110017.netlist.syn.v
NETLIST_VSRC += $(NETLIST)
CELLS ?= cells.v
NETLIST_VSRC += $(CELLS)
COMPILED = $(BUILD_DIR)/ysyx_24110017_iverilog.vpp
MEMORY_HEX = $(BUILD_DIR)/memory_iverilog.hex
VMA_ADJUST ?= 0x0
#LLVM
LDFLAGS += $(shell llvm-config --ldflags) -fPIE
LDFLAGS += -fsanitize=address#ASan
LIBS += $(shell llvm-config --libs)
LDLIBS := -lasan $(LDLIBS)

#传入参数
LOG ?= $(BUILD_DIR)/npc-log.txt
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
ELF ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
REF_SO ?= ../nemu/build/riscv32-nemu-interpreter-so
ARGS += --log=$(LOG)
ARGS += --img=$(IMG)
ARGS += --elf=$(ELF)
ARGS += --diff=$(REF_SO)
ARGS += -b

$(BUILD):
	mkdir $(BUILD_DIR)

run: compile
	$(OBJ_DIR)/$(TOP) $(ARGS)

compile: $(BUILD_DIR) $(CSRCS) $(VSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(VERILATOR)  $(VERILATOR_FLAGS) --Mdir $(OBJ_DIR) --exe $^

perf:
	make -C ../am-kernels/benchmarks/microbench ARCH=riscv32e-ysyxsoc mainargs=test run
	
sim-iverilog: $(MEMORY_HEX) icompile run_sim_iverilog

sim-iverilog-netlist: $(MEMORY_HEX) compile-netlist run_sim_iverilog

$(MEMORY_HEX): $(IMG) | $(BUILD_DIR)
	$(OBJCOPY) -I binary -O verilog --adjust-vma=$(VMA_ADJUST) $(IMG) $(MEMORY_HEX)

icompile: $(VSRC) | $(BUILD_DIR)
	$(IVERILOG) $(IVERILOG_FLAGS) -o $(COMPILED) $(VSRC)

compile-netlist: $(NETLIST_VSRC) | $(BUILD_DIR)
	$(IVERILOG) $(IVERILOG_FLAGS) -o $(COMPILED) $(NETLIST_VSRC)

run_sim_iverilog: $(COMPILED)
	$(VVP) $(COMPILED)

wave:
	$(GTKWAVE) $(BUILD_DIR)/wave.vcd

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run wave $(MEMORY_HEX) wave.vcd compile icompile compile-netlist run_sim_iverilog sim-iverilog sim-iverilog-netlist

include ../Makefile
