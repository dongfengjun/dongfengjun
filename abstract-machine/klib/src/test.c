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
  return 0;
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

/***test main***/
#ifndef __TRAP_H__
#define __TRAP_H__

__attribute__((noinline))
void check(bool cond) {
  if (!cond) printf("halt\n");
	else printf("true\n");
}
#endif

char *s[] = {
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	", World!\n",
	"Hello, World!\n",
	"#####"
};

char str1[] = "Hello";
char str[20];

int main() {
	check(mystrcmp(s[0], s[2]) == 0);
	check(mystrcmp(s[0], s[1]) < 0);
	check(mystrcmp(s[0] + 1, s[1] + 1) < 0);
	check(mystrcmp(s[0] + 2, s[1] + 2) < 0);
	check(mystrcmp(s[0] + 3, s[1] + 3) < 0);

	check(mystrcmp(mystrcat(mystrcpy(str, str1), s[3]), s[4]) == 0);

	check(mymemcmp(mymemset(str, '#', 5), s[5], 5) == 0);

	return 0;
}
