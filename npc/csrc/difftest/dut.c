#include <dlfcn.h>
#include "./../include/common.h"

extern uint8_t mem[CONFIG_MSIZE];
extern CPU_state cpu;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;//中断
#ifdef CONFIG_DIFFTEST
void init_difftest(char *ref_so_file, long img_size, int port) {
	assert(ref_so_file != NULL);
	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);//动态库加载函数
	assert(handle);
	ref_difftest_memcpy = (void (*)(paddr_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");//获取ref函数地址
	assert(ref_difftest_memcpy);
	ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);
	ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);
	ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_intr");
	assert(ref_difftest_raise_intr);
	void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
	assert(ref_difftest_init);
	Log("The result of every instruction will be compared with %s. "
		"This will help you a lot for debugging, but also significantly reduce the performance. "
		"If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
	
	ref_difftest_init(port);//调用ref_init
	ref_difftest_memcpy(0x80000000, &mem, img_size, DIFFTEST_TO_REF);//from mymem to ref IM
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);//reg from myreg to ref
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int reg_num = ARRLEN(cpu.gpr);
	for(int i = 0; i < 32; i ++) {
		if(ref_r->gpr[i] != cpu.gpr[i]) {
			printf("gpr_x[%d] diff rff\n", i);
			return false;
		}
	}
	if(ref_r->pc != cpu.pc) {
		printf("pc diff ref\n");
		return false;
	}
	return true;
}

void isa_difftest_attach() {
}

static void checkregs(CPU_state *ref, vaddr_t pc) {//check regs
	if(!isa_difftest_checkregs(ref, pc)) {
		//nemu_state.halt_pc = pc;
		isa_regs_display();
		printf("regs different.");
	}
}

void difftest_step(vaddr_t pc, vaddr_t npc) {//执行一步差异测试
	CPU_state ref_r;
	ref_difftest_exec(1);//ref 执行1
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);//regs from ref to dut
	checkregs(&ref_r, pc);//check regs dut:myregs
}

#else
void init_difftest(char *ref_so_file, long img_size, int port) {
}
#endif
