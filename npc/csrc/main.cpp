#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "VysyxSoCFull.h"  //.v被verilator编译成V.h
#include "verilated.h"  //verialtor官方库
#include "verilated_vcd_c.h"	//生成.vcd文件
#include <iostream>
#include "svdpi.h"
#include "VysyxSoCFull__Dpi.h"
#include "./include/common.h"
#include "nvboard.h"

extern char *mtrace_p;
/***ysyxSoC***/
extern "C" void flash_read(int32_t addr, int32_t *data) {
	*data = pmem_read(addr + CONFIG_MBASE);
#ifdef CONFIG_MTRACE
	mtrace_p += sprintf(mtrace_p, "flash addr:%08x read:%08x\n", addr, *data);
#endif
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
	*data = pmem_read(addr);
}
extern "C" void psram_read(int32_t addr, int32_t *data) {
	*data = c_psram_read(addr);
#ifdef CONFIG_MTRACE
	mtrace_p += sprintf(mtrace_p, "psram addr:%08x read:%08x\n", addr, *data);
#endif
}
extern "C" void psram_write(int32_t addr, int32_t data, char len) {
	c_psram_write(addr,data,len);
#ifdef CONFIG_MTRACE
  mtrace_p += sprintf(mtrace_p, "psram addr:%08x write:%08x\n", addr, data);
#endif
}
extern "C" void diff_skip_ref() {
	difftest_skip_ref();
}

VerilatedContext* contextp = NULL;	//verilator指针
VysyxSoCFull* top = NULL;	//实例化指针
VerilatedVcdC *tfp=	NULL;	//VCD对象指针
/***DPI-C***/
word_t gpr_regs_display(int raddr) {
  extern int gpr_reg_grab(int addr);
  svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.RFU"));
  return gpr_reg_grab(raddr);
}
word_t csrs_display(int i) {
  extern int csr_grab(int i);
  svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu"));
  return csr_grab(i);
}
word_t dpic_display(int i) {
  extern int dpic_grab(int i);
  svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu"));
  return dpic_grab(i);
}
word_t performance_counters(int i) {
  extern int performance_counter(int i);
  svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu"));
  return performance_counter(i);
}
/******/

bool RUNNING;
void npc_trap() {
  int a0 = gpr_regs_display(10);//抓取a0
  char str[15];
  Log("npc: %s at pc = " FMT_WORD, (a0 == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED)), dpic_display(0));
	RUNNING = false;
}

/***main***/
#define MAX_INST_TO_PRINT 10//puts inst
extern CPU_state cpu;
uint64_t g_nr_guest_inst = 0;
uint64_t g_nr_guest_cycle = 0;
uint64_t if_fin_cnt = 0;
uint64_t id_fin_cnt = 0;
uint64_t ex_fin_cnt = 0;
uint64_t ls_fin_cnt = 0;
uint64_t if_wait = 0;
uint64_t if_mem_wait = 0;
uint64_t ex_total_wait = 0;
uint64_t Integer_Computational_wait = 0;
uint64_t Transfer_wait = 0;
uint64_t Load_wait = 0;
uint64_t Store_wait = 0;
uint64_t Immediate_wait = 0;
uint64_t System_wait = 0;
uint64_t ls_store_cnt = 0;
uint64_t ls_load_cnt = 0;
uint64_t ls_store_wait = 0;
uint64_t ls_load_wait = 0;

static uint64_t g_timer = 0;
static bool g_print_step = false;
IFDEF(CONFIG_ITRACE, char logbuf[128]);
IFDEF(CONFIG_ITRACE, char iringbuf[128]);//Itrace
uint8_t fopcode;

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest cycles = " NUMBERIC_FMT, g_nr_guest_cycle);
	Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
	Log("IPC = %.6f", (double)g_nr_guest_inst/(double)g_nr_guest_cycle);
	Log("CPI = %.6f", (double)g_nr_guest_cycle/(double)g_nr_guest_inst);
  Log("IF FIN:%ld\tID FIN:%ld\tEX FIN cnt:%ld\tLS FIN:%ld",if_performance_cnt,id_performance_cnt,ex_performance_cnt,ls_performance_cnt);
	if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_regs_display();
	IFDEF(CONFIG_ITRACE, iringbuf_display());
  statistic();
}

#ifdef CONFIG_ITRACE
static void itrace_push(){
	uint8_t insts[4];
  insts[0] = dpic_display(2) & 0xFF;
  insts[1] = (dpic_display(2) >>  8) & 0xFF;
  insts[2] = (dpic_display(2) >> 16) & 0xFF;
  insts[3] = (dpic_display(2) >> 24) & 0xFF;

  char *p = logbuf;
	char *irp = iringbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", dpic_display(0));
	irp += snprintf(irp, sizeof(iringbuf), FMT_WORD ":", dpic_display(0));
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
	disassemble(p, logbuf + sizeof(logbuf) - p, dpic_display(0), (uint8_t *)&insts, 4);
	disassemble(irp, logbuf + sizeof(logbuf) - irp, dpic_display(0), (uint8_t *)&insts, 4);
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

static word_t fpc;
static word_t fnpc;
static word_t finst;
void ftrace_push() {
	fnpc = dpic_display(2);
	fpc = dpic_display(1);
  finst = (dpic_display(2) & 0xFF << 24) | ((dpic_display(2) >>  8) & 0xFF << 16) | ((dpic_display(2) >> 16) & 0xFF << 8) | (dpic_display(2) >> 24) & 0xFF;
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
#else
void isa_parser_elf(char *filename){
}
#endif

#ifdef CONFIG_MTRACE
	char buf[1048576] = {0};
	char *mtrace_p = buf;
	FILE *mtracelog;
#endif

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(logbuf)); }
		IFDEF(CONFIG_DIFFTEST, if(dpic_display(3)){difftest_step(dpic_display(0), dpic_display(1));});
		IFDEF(CONFIG_WATCHPOINT, checkWatchPoint());	//运行一次扫描所有监视点
}

/***single_cycle***/
void dump_wave() {
	tfp->dump(contextp->time());  
  contextp->timeInc(1);
}

void single_cycle() {
	top->clock=1;top->eval();
#ifdef CONFIG_DUMP_WAVE
	dump_wave();
#elif CONFIG_DUMP_WAVE_SIM
	if(dpic_display(3)) {
		dump_wave();
	}
#endif
	top->clock=0;top->eval();
#ifdef CONFIG_DUMP_WAVE
	dump_wave();
#elif CONFIG_DUMP_WAVE_SIM
	if(dpic_display(3)) {
		dump_wave();
	}
#endif
}
static void reset(int n) {
	top->reset=1;top->eval();
	while(n-->0) single_cycle();
//restart 默认的pc,reg,im,等在这实现
	top->reset=0;
}

bool if_mem_flag = false;
bool ex_total_flag = false;
bool ls_store_flag = false;
bool ls_load_flag = false;
bool Integer_Computational_flag = false;
bool Transfer_flag = false;
bool Load_flag = false;
bool Store_flag = false;
bool Immediate_flag = false;
bool System_flag = false;
void performance_evaluation() {
	g_nr_guest_cycle ++;
	if(dpic_display(3)) g_nr_guest_inst ++;
	if(performance_counters(0)) { if_performance_cnt ++; }
	else {if_wait ++; }
	if(performance_counters(1)) id_performance_cnt ++;
	if(performance_counters(2)) ex_performance_cnt ++;
	if(performance_counters(3)) ls_performance_cnt ++;
	if(performance_counters(6)) if_mem_flag = true;
	if(performance_counters(7)) if_mem_flag = false;
	if(if_mem_flag) if_mem_wait ++;
	if(performance_counters(1)) ex_total_flag = true;
	if(performance_counters(5)) ex_total_flag = false;
	if(ex_total_flag) ex_total_wait ++;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) Integer_Computational_flag = true;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) Transfer_flag = true;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) Load_flag = true;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) Store_flag = true;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) Immediate_flag = true;
	if(performance_counters(1) && performance_counters(4) == 0b0110011) System_flag = true;
	if(performance_counters(5)) {
		Integer_Computational_flag = false;
		Transfer_flag = false;
		Load_flag = false;
		Store_flag = false;
		Immediate_flag = false;
		System_flag = false;
	}
	if(Integer_Computational_flag) Integer_Computational_wait ++;
  if(Transfer_flag) Transfer_wait ++;
  if(Load_flag) Load_wait ++;
  if(Store_flag) Store_wait ++;
  if(Immediate_flag) Immediate_wait ++;
  if(System_flag) System_wait ++;
	if(performance_counters(8)) { ls_store_flag = true; ls_store_cnt ++; }
	if(performance_counters(3)) ls_store_flag = false;
	if(performance_counters(9)) { ls_load_flag = true; ls_load_cnt ++; }
	if(performance_counters(3)) ls_load_flag = false;
	if(ls_write_flag) ls_store_wait ++;
	if(ls_load_flag) ls_load_wait ++;
}

void cpu_exec(int n) {
	g_print_step = (n > 0 && n < MAX_INST_TO_PRINT);
#ifdef CONFIG_MTRACE
		mtracelog = fopen("build/npc-mtrace-log.txt", "w");  //Mtrace
#endif
	uint64_t timer_start = get_time();	
	while(RUNNING && n != 0) {
		single_cycle();
		nvboard_update();
		cpu.pc = dpic_display(1);
		isa_gpr_push();
		performance_evaluation();
#ifdef CONFIG_ITRACE
		itrace_push();
#endif
#ifdef CONFIG_FTRACE
		ftrace_push();
#endif
		trace_and_difftest();
		n--;
  }
	uint64_t timer_end = get_time();
	g_timer += timer_end - timer_start;
#ifdef CONFIG_FTRACE
		cpu_show_ftrace();
#endif
#ifdef CONFIG_MTRACE
    fprintf(mtracelog, "%s", buf);  //Mtrace log
    fclose(mtracelog);
#endif
}

void nvboard_bind_all_pins(VysyxSoCFull* top);
int main(int argc, char *argv[]) {
/***inst***/
	Verilated::commandArgs(argc,argv);
	contextp = new VerilatedContext;  //verilator指针
  top = new VysyxSoCFull{contextp};  //实例化top块
	tfp= new VerilatedVcdC;   //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪
  top->trace(tfp,0);
  tfp->open("build/wave.vcd");//设置输出的文件wave.vcd
	RUNNING = true;
	nvboard_bind_all_pins(top); //引脚绑定
	nvboard_init(); //初始化NVBoard
/***code***/
	init_monitor(argc, argv);//load inst
	reset(50);
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
/* Receive commands from user. */
	sdb_mainloop();
#endif
	dump_wave();
/***close**/
	statistic();
	tfp->close();
	nvboard_quit();
	delete contextp;
	return 0;
}

