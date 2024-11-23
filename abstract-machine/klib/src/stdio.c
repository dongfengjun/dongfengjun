#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

char* int2str(int num) {
		// 处理负数
    int isNegative = num < 0;
    int absNum = isNegative ? -num : num;
    // 计算数字位数
    int length = 0;
    int temp = absNum;
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    // 处理零的情况
    if (length == 0) {
        length = 1;
    }
		// 分配内存，包括符号位和终止符
    char* str = (char*)malloc((length + isNegative + 1) * sizeof(char));
    if (str == NULL) {
        return NULL; // 内存分配失败
    }
    // 填充字符串
    str[length + isNegative] = '\0'; // 设置终止符
    int index = length + isNegative - 1;
    // 从后向前填充数字
    while (absNum != 0) {
        int digit = absNum % 10;
        str[index--] = '0' + digit;
        absNum /= 10;
    }
    // 处理零的情况
    if (num == 0) {
        str[0] = '0';
    }
		if (isNegative) {
        str[0] = '-';
    }
    return str;
}
int sprintf(char *out, const char *fmt, ...) {
	char *str;
	va_list args;
  va_start(args, fmt);
  while(*fmt) {
    switch(*fmt) {
      case '%':
        ++ fmt;
        switch(*fmt) {
          case 'd': {
            int val = va_arg(args, int);
            str = int2str(val);
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

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
