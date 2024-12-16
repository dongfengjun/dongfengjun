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

/***DPI-C***/
word_t gpr_regs_display(int raddr) {
  extern int gpr_reg_display(int addr);
  svSetScope(svGetScopeFromName("TOP.top_ysyx_24110017.RF"));
  return gpr_reg_display(raddr);
}

bool RUNNING;
void npc_trap() {
  extern int gpr_reg_display(int addr);//抓取a0
  svSetScope(svGetScopeFromName("TOP.top_ysyx_24110017.RF"));
  int a0 = gpr_reg_display(10);
  char str[15];
  Log("npc: %s at pc = " FMT_WORD, (a0 == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED)), top->pc);
                                                                            
  RUNNING = false;
}

/***single_cycle***/
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

/***main***/
#define MAX_INST_TO_PRINT 10//puts inst
static bool g_print_step = false;
void assert_fail_msg() {
  isa_regs_display();
  //statistic();
}

IFDEF(CONFIG_ITRACE, char logbuf[128]);
IFDEF(CONFIG_ITRACE, char iringbuf[128]);
#ifdef CONFIG_ITRACE
extern IRINGBUF *rp;

static void itrace(){
	uint8_t insts[4];
  insts[0] = top->inst & 0xFF;
  insts[1] = (top->inst >>  8) & 0xFF;
  insts[2] = (top->inst >> 16) & 0xFF;
  insts[3] = (top->inst >> 24) & 0xFF;

  char *p = logbuf;
	char *irp = iringbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", top->pc);
	irp += snprintf(irp, sizeof(iringbuf), FMT_WORD ":", top->pc);
  int ilen = 4;
  int i;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", insts[i]);
		irp += snprintf(irp, 4, " %02x", insts[i]);
  }
	memset(p, ' ', 1);
	memset(irp, ' ', 1);
	p += 1;
	irp += 1;
	disassemble(p, logbuf + sizeof(logbuf) - p, top->pc, (uint8_t *)&insts, 4);
	disassemble(irp, logbuf + sizeof(logbuf) - irp, top->pc, (uint8_t *)&insts, 4);
	iringbuf_push(rp, &iringbuf);
}
#endif

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(logbuf)); }
		IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
		IFDEF(CONFIG_WATCHPOINT, checkWatchPoint());	//运行一次扫描所有监视点
}

void cpu_exec(int n) {
	g_print_step = (n < MAX_INST_TO_PRINT);
	while(RUNNING && n != 0) {
		single_cycle();
		itrace();
		trace_and_difftest();
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
	init_monitor(argc, argv);//load inst
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
	iringbuf_display(rp);
	tfp->close();
	delete contextp;
	return 0;
}
