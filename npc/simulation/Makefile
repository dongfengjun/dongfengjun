all: sim.o wave.o

sim.o: csrc/duswitch_tb.cpp vsrc/duswitch.v
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --trace --cc --exe --build -j 0 -Wall csrc/duswitch_tb.cpp vsrc/duswitch.v
	./obj_dir/Vduswitch

#VSRCS = $(shell find $(./test_out ) -name "*.v")
#CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

wave.o:
	gtkwave wave.vcd

clean:
	rm -rf obj_dir
	rm wave.vcd
