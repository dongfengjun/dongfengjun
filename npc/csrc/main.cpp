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

/***main***/
#define MAX_INST_TO_PRINT 10//puts inst
CPU_state cpu = {.gpr = {0}, .pc = 0x80000000};
uint64_t g_nr_guest_inst = 0;
IFDEF(CONFIG_ITRACE, char logbuf[128]);
IFDEF(CONFIG_ITRACE, char iringbuf[128]);//Itrace
static bool g_print_step = false;
void assert_fail_msg() {
  isa_regs_display();
	IFDEF(CONFIG_ITRACE, iringbuf_push(iringbuf));
  //statistic();
}

#ifdef CONFIG_ITRACE
static void itrace_push(){
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
	strncat(iringbuf, " \n", 3);
	iringbuf_push(iringbuf);
}
#endif

#ifdef CONFIG_FTRACE
#define MAX_FTRACE_SIZE 1024
#define MAX_ELF_SIZE 32 * 1024 
typedef struct Ftrace
{
	word_t pc;
	word_t npc;
	word_t depth;
	bool ret;
} Ftrace;
Ftrace ftracebuf[MAX_FTRACE_SIZE];//ftracebuf
word_t ftracehead = 0;
word_t ftracedepth = 0;
char elfbuf[MAX_ELF_SIZE];//elfbuf
typedef	Elf32_Ehdr Elf_Ehdr;//elf文件头
typedef Elf32_Shdr Elf_Shdr;//elf节头
typedef Elf32_Sym Elf_Sym;//elf符号表条目
Elf_Ehdr elf_ehdr;
Elf_Shdr *elfshdr_symtab = NULL;//符号表
Elf_Shdr *elfshdr_strtab = NULL;//字符串表

static uint8_t fopcode;
static word_t fpc;
static word_t fnpc;
static word_t finst;
void ftrace_push() {
	fnpc = top->dnpc;
	fpc = top->pc;
  finst = top->inst;
  fopcode = finst & 0x7F;
	if(fopcode == 0b1100111 || fopcode == 0b1101111) {
		ftracebuf[ftracehead].npc = fnpc;
		ftracebuf[ftracehead].pc = fpc;
		if(finst == 0x00008067) {
			ftracebuf[ftracehead].ret = true;
			ftracedepth --;
			ftracebuf[ftracehead].depth = ftracedepth;
		}
		else {
			ftracebuf[ftracehead].ret = false;
			ftracebuf[ftracehead].depth = ftracedepth;
			ftracedepth ++;
		}
		ftracehead = (ftracehead + 1) % MAX_FTRACE_SIZE;
	}
}

void isa_parser_elf(char *filename) {
  printf("ELF FILE is:%s\n", filename);
	FILE *fp = fopen(filename, "rb");
  Assert(fp, "Can not open '%s'", filename);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Assert(size < MAX_ELF_SIZE, "elf file is too large");
  fseek(fp, 0, SEEK_SET);
  int ret = fread(&elf_ehdr, sizeof(elf_ehdr), 1, fp);
  assert(ret == 1);
	assert(memcmp(elf_ehdr.e_ident, ELFMAG, SELFMAG) == 0);
  fseek(fp, 0, SEEK_SET);
  ret = fread(elfbuf, size, 1, fp);
  assert(ret == 1);
  fclose(fp);

  printf("e_ident: ");
  for (size_t i = 0; i < SELFMAG; i++) {
    printf("%02x ", elf_ehdr.e_ident[i]);
  }
  printf("\n");
  printf("e_type: %d\t", elf_ehdr.e_type);
  printf("e_machine: %d\t", elf_ehdr.e_machine);
  printf("e_version: %d\n", elf_ehdr.e_version);
  printf("e_entry: " FMT_WORD "\t", elf_ehdr.e_entry);
  printf("e_phoff: " FMT_WORD "\n", elf_ehdr.e_phoff);
  printf("e_shoff: " FMT_WORD "\t", elf_ehdr.e_shoff);
  printf("e_flags: 0x%016x\n", elf_ehdr.e_flags);
  printf("e_ehsize: %d\t", elf_ehdr.e_ehsize);
  printf("e_phentsize: %d\t", elf_ehdr.e_phentsize);
  printf("e_phnum: %d\n", elf_ehdr.e_phnum);
  printf("e_shentsize: %d\t", elf_ehdr.e_shentsize);
  printf("e_shnum: %d\t", elf_ehdr.e_shnum);
  printf("e_shstrndx: %d\n", elf_ehdr.e_shstrndx);
  for (size_t i = 0; i < elf_ehdr.e_shnum; i++) {//遍历节
    Elf_Shdr *shdr = (Elf_Shdr *)(elfbuf + elf_ehdr.e_shoff + i * elf_ehdr.e_shentsize);//节地址
    if (shdr->sh_type == SHT_SYMTAB) {//符号表
      elfshdr_symtab = shdr;
    } else if (shdr->sh_type == SHT_STRTAB) {//字符串表
      elfshdr_strtab = shdr;
    }
    if (elfshdr_symtab != NULL && elfshdr_strtab != NULL) {
      break;
    }
  }
}

void cpu_show_ftrace() {
	printf("Function trace:\n");
	Elf_Sym *sym = NULL;
	Ftrace *ftrace = NULL;
	for (size_t i = 0; i < ftracehead; i++) {
		ftrace = ftracebuf + i;
		printf("" FMT_WORD ": ", ftrace->pc);
		for (size_t j = 0; j < ftrace->depth; j++) {
			printf("  ");
		}
		printf("%s ", ftrace->ret ? "ret" : "call");
		if (elfshdr_symtab == NULL) {
			printf("\n");
			continue;
		}
		for (int j = elfshdr_symtab->sh_size / sizeof(Elf_Sym) - 1; j >= 0; j--)
		{//从符号表末遍历，计算当前符号地址，寻找与下一指令匹配的符号
			sym = (Elf_Sym *)(elfbuf + elfshdr_symtab->sh_offset + j * sizeof(Elf_Sym));
			if (sym->st_value == ftrace->npc) {
				break;
			}
    }
		printf(//打印符号与pc
			"[%s@" FMT_WORD "]\n",
			elfbuf + elfshdr_strtab->sh_offset + sym->st_name,
			ftrace->npc);
	}
}
#endif

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(logbuf)); }
		IFDEF(CONFIG_DIFFTEST, difftest_step(top->pc, top->dnpc));
		IFDEF(CONFIG_WATCHPOINT, checkWatchPoint());	//运行一次扫描所有监视点
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
//restart 默认的pc,reg,im,在这实现
	cpu.pc = top->dnpc;
	isa_gpr_push();
  g_nr_guest_inst++;
#ifdef CONFIG_ITRACE
  itrace_push();
#endif
#ifdef CONFIG_FTRACE
  ftrace_push();
#endif
	g_print_step = 1;
	trace_and_difftest();
	top->rst=0;
}

void cpu_exec(int n) {
	g_print_step = (n < MAX_INST_TO_PRINT);
	while(RUNNING && n != 0) {
		single_cycle();
		cpu.pc = top->dnpc;
		isa_gpr_push();
		g_nr_guest_inst++;
#ifdef CONFIG_ITRACE
		itrace_push();
#endif
#ifdef CONFIG_FTRACE
		ftrace_push();
#endif
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
#ifdef CONFIG_FTRACE
	cpu_show_ftrace();
#endif
/***close**/
	tfp->close();
	delete contextp;
	return 0;
}

