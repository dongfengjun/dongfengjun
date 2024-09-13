all: sim.o wave.o
	@echo "Write this Makefile by your self."

sim.o: csrc/sim.cpp vsrc/switch.v obj_dir/Vswitch.h
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --trace --cc --exe --build -j 0 -Wall csrc/sim.cpp vsrc/switch.v

include ../Makefile

#VSRCS = $(shell find $(./test_out ) -name "*.v")
# CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
wave.o:Vswitch wave.vcd
	./obj_dir/Vswitch
	gtkwave wave.vcd

clean:
	rm -rf obj_dir
	rm wave.vcd
