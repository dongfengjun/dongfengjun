#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

int64_t branch_total_cnt = 0;
int64_t branch_right_cnt = 0;
uint32_t ppc = 0x30000000;
uint32_t pinst = 0x0;

int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[1], "r");
	if(!file) {
    perror("无法打开文件\n");
  }
  char line[32];
	while(fgets(line, sizeof(line), file)) {
		uint32_t pc;
		uint32_t inst;
		if(sscanf(line, "%x %x", &pc, &inst) == 2);
		if((pinst & 0b1111111) ==  0b1100011) {
			//bool offset = (pinst >> 31) & 0b1;
			//if((((pc != (ppc + 4)) && offset) || ((pc == (ppc + 4)) && !offset))) {
			if(pc == ppc + 4) {
				branch_right_cnt ++;
				//printf("%8x %8x %8x %ld\n",ppc,pinst,pc,branch_right_cnt);
			}
			branch_total_cnt ++; 
		}
		ppc = pc;
		pinst = inst;
	}
	fclose(file);

	double p = (double)branch_right_cnt/(double)branch_total_cnt;
	printf("************************\n");	
	printf("branch total=%ld branch right=%ld p=%.6f\n",branch_total_cnt,branch_right_cnt,p);
	return 0;
}
