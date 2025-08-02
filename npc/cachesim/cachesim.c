#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
	uint32_t tag;
	int valid;
} matedata;

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int w = atoi(argv[3]);
	matedata lines[2^(m - 2)][2^n];
	int access_cnt = 0;
	int miss_cnt = 0;

	FILE *file = fopen(argv[4], "r");
	if(!file) {
    perror("无法打开文件\n");
  }
  char line[11];
  while(fgets(line, 11, file)) {
		uint32_t pc;
    if(sscanf(line, "%x", &pc) == 1) {
			uint32_t index = (pc >> m & ((2 ^ (n - w)) - 1));
		  uint32_t tag = pc >> (m + n - w);
		  uint32_t offset = (pc & (2 ^ m - 1)) >> 2;
		  bool flag = false;
		  for(int i = 0; i < (2 ^ w); i ++) {
		    if(lines[offset][index * (2 ^ w) + i].tag == tag && lines[offset][index * (2 ^ w) + i].valid) {
		      access_cnt ++;
		      flag = true;
		    }
		  }
			if(!flag) {
		    miss_cnt ++;
				for(int j = (2 ^ w) - 1; j > 0; j --) {
		      lines[offset][index * (2 ^ w) + j].valid = lines[offset][index * (2 ^ w) + j - 1].valid;
		      lines[offset][index * (2 ^ w) + j].tag = lines[offset][index * (2 ^ w) + j - 1].tag;
				}
		    lines[offset][index * (2 ^ w)].valid = 1;
		    lines[offset][index * (2 ^ w)].tag = tag;
			}
			printf("%x  ",pc);
		}
	}
	fclose(file);

	int total_cnt = access_cnt + miss_cnt;
	double p = (double)access_cnt/(double)total_cnt;
	printf("************AMAT************\n");	
	printf("n=%d m=%d w=%d\n",n,m,w);
	printf("total:%d acess cnt:%d miss cnt:%d p:%.6f\n",total_cnt,access_cnt,miss_cnt,p);
	return 0;
}
