#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdlib.h>
/***test founction***/
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
	char str[20]={0};
	va_list args;
  va_start(args, fmt);
  while(*fmt) {
    switch(*fmt) {
      case '%':
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
            break;
        }
      default:
        break;
    }
    ++ fmt;
  }
	va_end(args);
	return 0;
}

/***test main***/
int main()
{
   char str[80];
	 char *in = "abcde";
   mysprintf(str, "%s", in);
   puts(str);

   return(0);
}
