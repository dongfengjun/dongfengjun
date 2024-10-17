/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	/***打印寄存器***/
	int i;
	printf("The value of the register:\n");
	for(i = 0; i < 4; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 4; i < 8; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 8; i < 12; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 12; i < 16; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 16; i < 20; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 20; i < 24; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 24; i < 28; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
	for(i = 28; i < 32; i++) {
		printf("%s\t%d\t", regs[i], cpu.gpr[i]);
	}
	printf("\n");
}

word_t isa_reg_str2val(const char *s, bool *success) {
  for(int i = 0 ; i < 32 ; i ++){
   	if(strcmp(regs[i], s) == 0){
			return cpu.gpr[i];
			printf("str=%s\n", s);
			break;
		}
		else {
			printf("strcmp fail\n");
		}
	}
	if(strcmp(s, "$pc") == 0) {
		return cpu.pc;
		printf("str=pc\n");
	}
  success = false;
  return 0;
}
