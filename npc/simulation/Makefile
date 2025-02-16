all:sim wave

VSRCS = $(shell find ./vsrc -name "*.v")
CSRCS = $(shell find ./csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")

sim: $(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@rm -rf ./obj_dir
	verilator --trace --cc --exe --build -j 0 -Wall $(CSRCS) $(VSRCS)
	./obj_dir/Vtop_ysyx_24110017

wave: wave.vcd
	gtkwave $<

clean:
	rm -rf obj_dir
	rm wave.vcd
