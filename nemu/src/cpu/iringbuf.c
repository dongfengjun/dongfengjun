#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "iringbuf.h"

#define RQ_SIZE 1024

int ringq_init(RINGQ * ringqp, char *str, unsigned size)
{
   ringqp->str = str;
   ringqp->size = size;
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
	int len = strlen(data);
	char s[2] = {0};
	for(int i = 0; i < len; i ++) {
//		ringqp->str[ringqp->tail] = *data;
		s[0] = data[i];
		s[1] = '\0';
    strcat(&ringqp->str[ringqp->tail], s); 
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

