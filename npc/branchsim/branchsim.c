#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

int64_t branch_total_cnt = 0;
int64_t branch_right_cnt = 0;
int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[0], "r");
	if(!file) {
    perror("无法打开文件\n");
  }
  char line[32];
  while(fgets(line, sizeof(line), file)) {
		uint32_t pc;
		uint32_t inst;
		bool offset;
    if(sscanf(line, "%x", &pc) == 1) {
			if(sscanf(line, "%x", &inst) == 1) {
				bool offset = (inst >> 31) & 0b1;
				if (offset) branch_right_cnt ++;
			}
		}
		branch_total_cnt ++;
	}
	fclose(file);

	double p = (double)branch_right_cnt/(double)branch_total_cnt;
	printf("************************\n");	
	printf("branch total=%ld branch right=%ld p=%.6f\n",branch_total_cnt,branch_right_cnt,p);
	return 0;
}
