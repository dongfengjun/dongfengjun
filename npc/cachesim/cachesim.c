#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
	uint32_t tag;
	int valid;
} matedata;

typedef struct {
	matedata *lines;
	int n;
	int m;
	int w;
	int access_cnt;
	int miss_cnt;
} Cache;

Cache* init_cache(int n, int m, int w) {
	Cache *cache = (Cache *)malloc(sizeof(Cache));
	cache->n = n;
	cache->m = m;
	cache->w = w;
	cache->lines = (matedata *)calloc((1<<cache->n), sizeof(matedata));
	cache->access_cnt = 0;
	cache->miss_cnt = 0;
	return cache;
}

void free_cache(Cache *cache) {
	free(cache->lines);
	free(cache);
}

void process_pc(Cache *cache, uint32_t pc) {
	uint32_t index = (pc >> cache->m & ((1 << (cache->n - cache->w)) - 1));
	uint32_t tag = pc >> (cache->n - cache->w + cache->m);
	bool flag = false;
	for(int i = 0; i < (1 << cache->w); i ++) {
		if(cache->lines[index * (1 << cache->w) + i].tag == tag && cache->lines[index * (1 << cache->w) + i].valid) {
			cache->access_cnt ++;
			flag = true;
		}
	}
	if(!flag) {
		cache->miss_cnt ++;
		for(int j = (1 << cache->w) - 1; j > 0; j --) {
			cache->lines[index * (1 << cache->w) + j].valid = cache->lines[index * (1 << cache->w) + j - 1].valid;
			cache->lines[index * (1 << cache->w) + j].tag = cache->lines[index * (1 << cache->w) + j - 1].tag;
		}
		cache->lines[index * (1 << cache->w)].valid = 1;
		cache->lines[index * (1 << cache->w)].tag = tag;
	}
}

void cachesim(Cache *cache, const char *filename) {
	FILE *file = fopen(filename, "r");
	if(!file) {
		perror("无法打开文件\n");
	}
	char line[16];
	while(fgets(line, 16, file)) {
		uint32_t pc;
		if(sscanf(line, "%x", &pc) == 1) {
			process_pc(cache, pc);
		}
		printf("tag0:%x tag1:%x tag2:%x tag3:%x tag4:%x tag5:%x tag6:%x tag7:%x\ntag8:%x tag9:%x tag10:%x tag11:%x tag12:%x tag13:%x tag14:%x tag15:%x\n",cache->lines[0].tag,cache->lines[1].tag,cache->lines[2].tag,cache->lines[3].tag,cache->lines[4].tag,cache->lines[5].tag,cache->lines[5].tag,cache->lines[7].tag,cache->lines[8].tag,cache->lines[9].tag,cache->lines[10].tag,cache->lines[11].tag,cache->lines[12].tag,cache->lines[13].tag,cache->lines[14].tag,cache->lines[15].tag);
	}
	fclose(file);
}

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int w = atoi(argv[3]);
	Cache *cache = init_cache(n,m,w);
	cachesim(cache, argv[4]);

	int total_cnt = cache->access_cnt + cache->miss_cnt;
	double p = (double)cache->access_cnt/(double)total_cnt;
	printf("************AMAT************\n");	
	printf("n=%d m=%d w=%d\n",n,m,w);
	printf("total:%d acess cnt:%d miss cnt:%d p:%.6f\n",total_cnt,cache->access_cnt,cache->miss_cnt,p);
	free_cache(cache);
	return 0;
}
