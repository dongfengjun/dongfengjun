#ifndef __RINGQ_H__
#define __RINGQ_H__

#ifdef __cplusplus
extern "C" {
#endif

    
typedef struct {  
    unsigned int head;   
    unsigned int tail;
    unsigned int size;
    char *str;
}RINGQ;

#define ringq_is_empty(q) (q->head == q->tail)
#define ringq_is_full(q) (((q->tail+1)%q->size) == q->head )

int ringq_init(RINGQ * ringqp, char *str, unsigned size);
int ringq_free(RINGQ * ringqp);
int ringq_push(RINGQ * ringqp,char *data);
void ringq_display(RINGQ * ringqp);

#ifdef __cplusplus
}
#endif
	
#endif

