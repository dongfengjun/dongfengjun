#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
	uint32_t tag;
	int valid;
} matedata;

typedef struct {
	matedata *lines;
	int n;
	int m;
	int access_cnt;
	int miss_cnt;
} Cache;

Cache* init_cache(int n, int m) {
	Cache *cache = (Cache *)malloc(sizeof(Cache));
	cache->n = n;
	cache->m = m;
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
	uint32_t index = pc >> cache->m & ((1 << cache->n) - 1);
	uint32_t tag = pc >> cache->n + cache->m;
	if(cache->lines[index].tag == tag && cache->lines[index].valid) {
		cache->access_cnt ++;
	}
	else {
		cache->miss_cnt ++;
		cache->lines[index].valid = 1;
		cache->lines[index].tag = tag;
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
	}
	fclose(file);
}

int main(int argc, char *argv[]) {
	int n = 4;
	int m = 2;
	Cache *cache = init_cache(n,m);
	cachesim(cache, argv[1]);

	int total_cnt = cache->access_cnt + cache->miss_cnt;
	double p = (double)cache->access_cnt/(double)total_cnt;
	printf("************AMAT************\n");	
	printf("n=%d m=%d\n",n,m);
	printf("total:%d acess cnt:%d miss cnt:%d p:%.6f\n",total_cnt,cache->access_cnt,cache->miss_cnt,p);
	free_cache(cache);
	return 0;
}
