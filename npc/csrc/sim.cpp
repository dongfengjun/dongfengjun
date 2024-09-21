#include <stdio.h>
#include <stdlib.h>
#include <assert.h>	//C
#include "Vtop.h"  //top.v被verilator编译成Vtop.h
#include "verilated.h"  //verialtor官方库
#include "verilated_vcd_c.h"	//生成.vcd文件

int main(int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;  //verilator上下文指针
  contextp->commandArgs(argc, argv);  //检查参数
  Vtop* top = new Vtop{contextp};  //实例化top块

/***wave***/
  VerilatedVcdC *tfp= new VerilatedVcdC;   //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪
	top->trace(tfp,0);
	tfp->open("wave.vcd");//设置输出的文件wave.vcd

/***code***/
	while (!contextp->gotFinish()) { //一直到contextp仿真完成才退出
		int a = rand() & 1;	//定义a
		int b = rand() & 1;	//定义b
		top->a = a;	//输入a
		top->b = b;	//输入b
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);	//输出top模块f
		top->eval(); //更新电路状态，计算输出
/***wave***/
    tfp->dump(contextp->time());  //dump wave
    contextp->timeInc(1);//仿真时间推进
		}
	tfp->close();
  delete top;
	delete contextp;
	return 0;
}
