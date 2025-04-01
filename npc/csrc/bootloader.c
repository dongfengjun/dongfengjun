#include <stdio.h>
#include <stdlib.h>
#include "./include/common.h"

void bootloader() {
	extern int _heap_start;
	int *p = &_heap_start;
	printf("p=%n\n",p);
}
