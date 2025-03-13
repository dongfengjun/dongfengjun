#include <am.h>
#include "./../riscv.h"
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t high = inl(0xa000004c);
	uint32_t low = inl(0xa0000048);
	uptime->us = (((uint64_t)high << 32) + low) / 500000;
	printf("us = %d %d\n",high,low);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
