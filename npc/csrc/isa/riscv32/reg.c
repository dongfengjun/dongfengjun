#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "./../../include/common.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_regs_display() {
  for(int i = 0; i < 32; i ++) {
    printf("%s:0x%08x\t", regs[i], gpr_regs_display(i));
  }
  printf("\n");
}

extern CPU_state cpu;
word_t isa_reg_str2val(const char *s, bool *success) {
  for(int i = 0 ; i < 32 ; i ++){
   	if(strcmp(regs[i], s) == 0){
			return gpr_regs_display(i);
			break;
		}
	}
	if(strcmp(s, "pc") == 0) {
		return cpu.pc;
	}  
	*success = false;
	printf("Invalid reg name\n");
	return 0;
}

void isa_gpr_push() {
	for(int i = 0; i < 32; i ++) {
		cpu.gpr[i] = gpr_regs_display(i);
	}
	cpu.csr.mepc = csrs_display(0);
	cpu.csr.mstatus = csrs_display(1);
	cpu.csr.mcause = csrs_display(2);
	cpu.csr.mtvec = csrs_display(3);
}
