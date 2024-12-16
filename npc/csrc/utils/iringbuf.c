#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/iringbuf.h" 
#define IRB_SIZE 500
#define iringbuf_is_empty(q) (q->head == q->tail)
#define iringbuf_is_full(q) (((q->tail+1)%IRB_SIZE) == q->head )

char strarray[IRB_SIZE]={0};

int iringbuf_init(IRINGBUF * iringp) {
	 iringp->str = strarray;
   iringp->head = 0;
   iringp->tail = 0;
   return 0;
}
 
int iringbuf_push(IRINGBUF * iringp, char *data) {
	int len = strlen(data);
	for(int i = 0; i < len; i ++) {
		iringp->str[iringp->tail] = data[i];
		iringp->tail = (iringp->tail + 1) % IRB_SIZE;
    if(iringbuf_is_full(iringp)) {
			iringp->head = (iringp->head + 1) % IRB_SIZE;
    }
	}
    return 0;
}
 
void iringbuf_display(IRINGBUF * iringp) {
  unsigned head = iringp->head;
  unsigned tail = iringp->tail;
	char *str = iringp->str;
  if(iringbuf_is_empty(iringp)) {
    printf("iringbuf is empty.\n");
    return;
  }
  while(head != tail){
    printf("%c", str[head]); 
		head = (head + 1)%(IRB_SIZE);
  }
  printf("\n");
  return;
}

