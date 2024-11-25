#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "iringbuf.h" 
#define RQ_SIZE 100

int ringq_init(RINGQ * ringqp) {
	 char strarray[RQ_SIZE]={0};
	 ringqp->str = strarray;
   ringqp->head = 0;
   ringqp->tail = 0;
   return 0;
}
 
int ringq_free(RINGQ * ringqp)
{
	free(ringqp->str);
  return 0;
}
 
 
int ringq_push(RINGQ * ringqp, char *data) {
	printf("data:%s\n", data);
	int len = strlen(data);
	printf("len=%d\n", len);
	for(int i = 0; i < len; i ++) {
		printf("index = %d\n", i);
//		ringqp->str[ringqp->tail] = *data;
		char s = data[i];
		printf("s=%s\n", &s);
    strcat(&ringqp->str[ringqp->tail], &s); 
		ringqp->tail = (ringqp->tail + 1) % ringqp->size;
    if(ringq_is_full(ringqp)) {
			ringqp->head = (ringqp->head + 1) % ringqp->size;
    }
	}
    return 0;
}
 
void ringq_display(RINGQ * ringqp) {
  unsigned head = ringqp->head;
  unsigned tail = ringqp->tail;
  unsigned size = ringqp->size;
	char *str = ringqp->str;
  if(ringq_is_empty(ringqp)) {
    printf("ringq is empty.\n");
    return;
  }
  while(head != tail){
    printf("%c", str[head]); 
		head = (head + 1)%(size);
  }
  printf("\n");
  return;
}
 
