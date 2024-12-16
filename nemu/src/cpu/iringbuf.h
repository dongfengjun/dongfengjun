#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct {  
    unsigned int head;   
    unsigned int tail;
    char *str;
}IRINGBUF;

int iringbuf_init(IRINGBUF * iringp);
int iringbuf_push(IRINGBUF * iringp, char *data);
void iringbuf_display(IRINGBUF * iringp);

#ifdef __cplusplus
}
#endif
	
#endif
