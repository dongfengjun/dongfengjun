BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
VSRCS = $(shell find ./vsrc -name "*.v")
CSRCS = $(shell find ./csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")

$(BUILD_DIR)/sim: $(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@rm -rf ./obj_dir
	@echo "Write this Makefile by your self."
	verilator --trace --cc --exe --build -j 0 -Wall $(CSRCS) $(VSRCS)
	./obj_dir/Vtop_ysyx_24110017

wave: wave.vcd
	gtkwave $<

clean:
	rm -rf obj_dir
	rm wave.vcd

.PHONY: clean run wave
include ../Makefile
