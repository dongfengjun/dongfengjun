#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap);
void int2str(char *str,int value) {                                         
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

int printf(const char *fmt, ...) {
	char buf[1024] = {0};
	va_list ap;
	va_start(ap, fmt);
	int val = vsnprintf(buf, 1024, fmt, ap);
	char *str = buf;
	while(*str != '\0'){
		putch(*str);
		++ str;
	}
	va_end(ap);
	return val;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	memset(out, 0, strlen(out));
	va_list ap;
  va_start(ap, fmt);
	int val = vsnprintf(out, 1024, fmt, ap);
	va_end(ap);
	return val;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	char *start = out;
	while(n -- && *fmt != '\0'){
		switch(*fmt){
			case '%': {
				++ fmt;
				switch(*fmt) {
					case 'd': {
						int val = va_arg(ap, int);
						int2str(out, val);
						break;
					}
					case 's': {
						char *tmp = va_arg(ap, char *);
						strcat(out, tmp);
						break;
					}
					case 'c': {
						char tmp = va_arg(ap, int);
						*out ++ = tmp;
						break;
					}
					default: {
						putch('W');
						putch('a');
						putch('i');
						putch('t');
						return -1;
					}
				}
			}
			default: {
				*out++ = *fmt;
				break;
			}
		}
		fmt ++;
	}
	*out = '\0';
	return out - start;
}

#endif
