#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop_ysyx_24110017.h"  //.v被verilator编译成V.h
#include "verilated.h"  //verialtor官方库
#include "verilated_vcd_c.h"	//生成.vcd文件
#include <iostream>
#include "instmemory.h"	//im
#include "svdpi.h"
#include "Vtop_ysyx_24110017__Dpi.h"

/***ebreak***/
bool RUNNING;
void npc_trap() {
	RUNNING = false;
}
/******/
void single_cycle(Vtop_ysyx_24110017* top) {
	top->clk=0;top->eval();
	top->clk=1;top->eval();
}
static void reset(Vtop_ysyx_24110017* top,int n) {
	top->rst=1;
	while(n-->0) single_cycle(top);
	top->rst=0;
}

int main(int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;  //verilator指针
  contextp->commandArgs(argc, argv);  //检查参数
  Vtop_ysyx_24110017* top = new Vtop_ysyx_24110017{contextp};  //实例化top块
	if (mem_init() != 0) {
        std::cerr << "Memory initialization failed." << std::endl;
        return -1;
  }	//im
	RUNNING = true;

/***wave***/
  VerilatedVcdC *tfp= new VerilatedVcdC;   //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪
	top->trace(tfp,0);
	tfp->open("wave.vcd");//设置输出的文件wave.vcd

/***code***/
/***load inst***/
	uint32_t inst1 = 0b00000000000100000000000010010011;//addi x0,x1,1
  pmem_write(inst1, 0x80000000, 4); // 写入4个字节
	uint32_t inst2 = 0b00000000001000000000000100010011;//addi x0,x2,2
  pmem_write(inst2, 0x80000004, 4);
	uint32_t inst3 = 0b00000000000100000000000001110011;//ebreak
  pmem_write(inst3, 0x80000008, 4);
//测试	std::cout<<std::hex<<pmem_read(0x80000000)<<"\n";
	reset(top,10);	
	tfp->dump(contextp->time());	
	contextp->timeInc(1);
	while(RUNNING) { //一直到ebreak才退出
		top->inst = pmem_read(top->pc);	
		single_cycle(top);
/***wave***/
		tfp->dump(contextp->time());//dump wave
		contextp->timeInc(1);//仿真时间推进
	}
	tfp->dump(contextp->time());
  contextp->timeInc(1);
	tfp->close();
	free_memory();
//  delete top;
	delete contextp;
	return 0;
}
