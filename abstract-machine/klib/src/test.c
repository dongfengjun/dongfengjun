#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdlib.h>
#include <stdbool.h>
/***test founction***/
#include <stdint.h>

size_t mystrlen(const char *s) {
  int i = 0;
	while(s[i] != '\0') {
		i ++;
	}
	return i;
}

char *mystrcpy(char *dst, const char *src) {
	int i = 0;
	while(src[i] != '\0') {
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return dst;
}

char *mystrncpy(char *dst, const char *src, size_t n) {
	if(strlen(src) < n) {
		int i = 0;
		while((i < strlen(src) - 1)) {
			dst[i] = src[i];
			i ++;
		}
		for(; i < n; i ++) {
			dst[i] = '\0';
		}
	}
	else {
		int j = 0;
		while(j < n) {
			dst[j] = src[j];
			j ++;
		}
	}
  return dst;
}

char *mystrcat(char *dst, const char *src) {
	int i = 0;
	int j = strlen(dst);
	while(src[i] != '\0') {
		dst[j] = src[i];
		i ++;
		j ++;
	}
	return dst;
}

int mystrcmp(const char *s1, const char *s2) {
	int i = 0;
	while((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0') {
		i ++;
	}
	if(s1[i] < s2[i])
		return -1;
	else if(s1[i] > s2[i])
		return 1;
	else return 0;
}

int mystrncmp(const char *s1, const char *s2, size_t n) {
  int i = 0;
  while((i < n-1) && (s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0') {
    i ++;
  }
  if(s1[i] < s2[i])
    return -1;
  else if(s1[i] > s2[i])
    return 1;
  else return 0;
}

void *mymemset(void *s, int c, size_t n) {
	int i = 0;
	char *p = (char *)s;
	while(i < n) {
		*p ++ = (char)c;
		i ++;
	}
	return s;
}

void *mymemmove(void *dst, const void *src, size_t n) {
  char *d = (char *)dst;
  char *s = (char *)src;
	if(d < s) {
		int i = 0;
		while(i < n) {
			*d ++ = *s ++;
			i ++;
		}
	}
	else if(d > s) {
		int i = n;
		while(i > 0) {
			d[i-1] = s[i-1];
			i --;
		}
	}
	return dst;	
}

void *mymemcpy(void *out, const void *in, size_t n) {
  int j = 0;
	char *o = (char *)out;
	char *i = (char *)in;
	while(j < n) {
		*o ++ = *i ++;
		j ++;
	}
	return out;
}

int mymemcmp(const void *s1, const void *s2, size_t n) {
	int i = 0;
	char *c1 = (char *)s1;
	char *c2 = (char *)s2;
	while((i < (n-1)) && (c1[i] == c2[i])) {
		i ++;
	}
	if(c1[i] < c2[i])
		return -1;
	else if(c1[i] > c2[i])
		return 1;
	else
		return 0;
}

void int2str(char *str,int value)
{
	char tmp_str[20] = {0};
	int lidx = 0;
	char flag = 0;
	int tmp_val;
	if(value<0){
		flag = 1;
		tmp_val = -value;
	}else{
		tmp_val = value;
	}
	if(value==0){
		tmp_str[lidx++] = 0x30+tmp_val%10;
	}else{
		while(1){
			if(tmp_val==0){
				break;
			}else{
				tmp_str[lidx++] = 0x30+tmp_val%10;
				tmp_val = tmp_val/10;
			}
		}
	}
	if(flag){
		tmp_str[lidx++] = '-';
	}
	while(lidx--){
		*str++ = tmp_str[lidx];
	}
	*str = 0;
}

int mysprintf(char *out, const char *fmt, ...) {
	mymemset(out, 0, strlen(out));
	char str[20]={0};
	va_list args;
  va_start(args, fmt);
  while(*fmt != '\0') {
    switch(*fmt) {
      case '%': {
        ++ fmt;
        switch(*fmt) {
          case 'd': {
            int val = va_arg(args, int);
            int2str(str, val);
            mystrcat(out, str);
            break;
          }
          case 's': {
            char *tmp = va_arg(args, char *);
            mystrcat(out, tmp);
            break;
          }
          default:
						printf("wait complete.\n");
            break;
				}
				break;
			}
      default: {
				char tmp[2] = {0};
				tmp[0] = *fmt;
				tmp[1] = '\0';
				mystrcat(out, tmp);
        break;
			}
    }
    ++ fmt;
  }
	va_end(args);
	return 0;
}

/***test main***/
#ifndef __TRAP_H__
#define __TRAP_H__

__attribute__((noinline))
void check(bool cond) {
  if (!cond) printf("halt\n");
	else printf("true\n");
}
#endif

char buf[128];
int main() {
	mysprintf(buf, "%s", "Hello world!\n");
	check(mystrcmp(buf, "Hello world!\n") == 0);
	mysprintf(buf, "%d + %d = %d\n", 1, 1, 2);
	printf("buf:1+1=2:%s", buf);
	check(mystrcmp(buf, "1 + 1 = 2\n") == 0);
  mysprintf(buf, "%d + %d = %d\n", 2, 10, 12);
	printf("buf:2+10=12:%s", buf);
  check(mystrcmp(buf, "2 + 10 = 12\n") == 0);
  return 0;
}
