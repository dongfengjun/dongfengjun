all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo $(VSRCS)
	verilator --trace --cc --exe --build \
	--switch sim \
	-I$(INCLUDE) ./csrc/sim.cpp $(VSRCS) \
	-LDFLAGS -"lreadline"

include ../Makefile

VSRCS = $(shell find $(./vsrc ) -name "*.v")
# CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
wave: sim
	./obj_dir/Vswitch
	gtkwave wave.vcd
 
count:
	find . -name "sim.cpp" -or -name "*.[vc]" | xargs wc -l

clean:
	rm -rf obj_dir
	rm wave.vcd
