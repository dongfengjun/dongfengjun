#include <dlfcn.h>
#include "./../include/common.h"

void (*red_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;//中断
#ifdef CONFIG_DIFFTEST
void init_difftest(char *ref_so_file, long img_size, int port) {
	assert(ref_so_file != NULL);
	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);//动态库加载函数
	assert(handle);
	ref_difftest_memcpy = dlsym(hanlde, "difftest_memcpy");//获取ref函数地址
	assert(ref_difftest_memcpy);
	ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);
	ref_difftest_exec = dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);
	ref_difftest_raise = dlsym(handle, "difftest_intr");
	assert(ref_difftest_intr);
	void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
	assert(ref_difftest_init);
	Log("The result of every instruction will be compared with %s. "
		"This will help you a lot for debugging, but also significantly reduce the performance. "
		"If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
	
	ref_difftest_init(port);//调用ref_init
	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);//from mymem to ref IM
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);//reg from myreg to ref
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  return false;
}

void isa_difftest_attach() {
}

static void checkregs(CPU_state *ref, vaddr_t pc) {//check regs
	if(!isa_difftest_checkregs(ref,pc)) {
		//nemu_state.halt_pc = pc;
		//isa_reg_display();
		printf("regs different.");
	}
}

void difftest_step(vaddr_t pc, vaddr_t npc) {//执行一步差异测试
	CPU_state ref_r;
	ref_difftest_exec(1);//ref 执行1
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);//ref from ref to dut
	checkregs(&ref_r, pc);//check regs dut:myregs
}

#else
void init_difftest(char *ref_so_file, long img_size, int port) {
}
#endif
