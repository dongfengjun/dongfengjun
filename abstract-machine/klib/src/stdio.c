#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
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

int sprintf(char *out, const char *fmt, ...) {
	memset(out, 0, strlen(out));
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
            strcat(out, str);
            break;
          }
          case 's': {
            char *tmp = va_arg(args, char *);
            strcat(out, tmp);
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
				strcat(out, tmp);
        break;
			}
    }
    ++ fmt;
  }
	va_end(args);
	return 0;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
