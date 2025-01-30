#include <am.h>
#include <nemu.h>
#include <stdio.h>////

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	printf("1 ");
  uint32_t low = inl(RTC_ADDR);
	printf("2 ");
	uint32_t high = inl(RTC_ADDR + 4);
	printf("3 ");
	uptime->us = low + ((uint64_t)high << 32);
	printf("uptime = %d %d\n", low, high);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
