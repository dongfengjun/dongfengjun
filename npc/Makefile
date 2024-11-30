TOPNAME = top
NXDC_FILES = constr/top.nxdc	#nxdc
INC_PATH ?=  #?= INC_PATH如果被未被定义，则为?=后的值，如果被定义过，则保持原来的值

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build --cc --trace \
								-O3 --x-assign fast --x-initial fast --noassert
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir	#OBJ_DIR = ./build/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)	#BIN = ./build/top

default: $(BIN) #最终目标default，依赖./build/top

$(shell mkdir -p $(BUILD_DIR)) #建立./build目录

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp) #abspath:返回文件的绝对路径
$(SRC_AUTO_BIND): $(NXDC_FILES) # 目标文件（约束文件SRC_AUTO_BIND)的建立依赖于constr/top.nxdc
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
	# python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py constr/top.nxdc auto_bin.cpp	生成auto_bin.cpp文件

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
#在vsrc目录中寻找所有的.v文件
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
#CSRCS = sim_main.cpp auto_bin.cpp

include $(NVBOARD_HOME)/scripts/nvboard.mk
#引用其他Makefile

INCFLAGS = $(addprefix -I, $(INC_PATH))
#INCFLAGS = -I
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
#CFLAGS = -I -DTOP_NAME="\"Vtop\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
#./build/top文件的建立依赖于 top.v main.cpp auto_bind.cpp 以及verilator仿真可执行文件
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) --top-module $(TOPNAME) $^ \
	$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
	--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	# verilator -MMD --build --cc -O3 --x-assgin fast --x-initial fast --noassert --trace \
	#--top-module top top.v sim.cpp auto_bind.cpp \
	#-CFLAGS -I -DTOP_NAME="\"VTOP\"" -LDFLAGS -lSDL2 -lSDL2_image \
	#--Mdir ./build/obj_dir --exe -o ./build/top(nvboard)

all:default
	@echo "Write this Makefile by your self."

include ../Makefile

run:$(BIN)
	@$^	#make run 执行可执行文件 ./build/top

clean:
	rm -rf $(BUILD_DIR)
.PHONY: default all clean run
