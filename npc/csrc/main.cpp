#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop_ysyx_24110017.h"  //.v被verilator编译成V.h
#include "verilated.h"  //verialtor官方库
#include "verilated_vcd_c.h"	//生成.vcd文件
#include <iostream>
#include "svdpi.h"
#include "Vtop_ysyx_24110017__Dpi.h"
#include "./include/common.h"

VerilatedContext* contextp = NULL;	//verilator指针
Vtop_ysyx_24110017* top = NULL;	//实例化指针
VerilatedVcdC *tfp=	NULL;	//VCD对象指针

/******/
void dump_wave() {
	tfp->dump(contextp->time());  
  contextp->timeInc(1);
}
void single_cycle() {
	top->clk=1;top->eval();
	top->inst = pmem_read(top->pc);top->eval();
	dump_wave();
	top->clk=0;top->eval();dump_wave();
}
static void reset(int n) {
	top->rst=1;top->eval();
	while(n-->0) single_cycle();
	top->rst=0;
}

/***ebreak***/
bool RUNNING;
void npc_trap() {
	char str[15];
	if(top->a0 == 0) {
		strcpy(str, "HIT GOOD TRAP");
	}
	else {
		strcpy(str, "HIT BAD TRAP");
	}
	printf("npc: %s at pc = 0x%08x\n", str, top->pc);
  
	RUNNING = false;
}

void cpu_exec(int n) {
	while(RUNNING && n != 0) {
		single_cycle();
		n--;
  }
}

int main(int argc, char *argv[]) {
/***inst***/
	contextp = new VerilatedContext;  //verilator指针
  top = new Vtop_ysyx_24110017{contextp};  //实例化top块
	tfp= new VerilatedVcdC;   //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪
  top->trace(tfp,0);
  tfp->open("build/wave.vcd");//设置输出的文件wave.vcd
	RUNNING = true;

/***code***/
/***load inst***/
	init_monitor(argc, argv);
//测试inst  std::cout<<std::hex<<pmem_read(0x80000000)<<"\n";	
	reset(2);
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
	dump_wave();
/***close**/
	tfp->close();
	delete contextp;
	return 0;
}
