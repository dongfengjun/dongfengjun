#include "Vhello.h"  //our.v被verilator编译成Vour.h
#include "verilated.h"  //verialtor官方库
int main(int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;  //verilator上下文指针
  contextp->commandArgs(argc, argv);  //检查参数
  Vhello* top = new Vhello{contextp};  //实例化our模
	while (!contextp->gotFinish()) { //一直到contextp仿真完成才退出
		top->eval(); //更新电路状态，计算输出
		}
  delete top;
	delete contextp;
	return 0;
}
