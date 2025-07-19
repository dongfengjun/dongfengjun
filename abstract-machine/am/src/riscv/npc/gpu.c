#include <am.h>
#include <nemu.h>

#define VGACTL_ADDR 0x21000000
#define SIZE 0x200000
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR + 2),
		.height = inw(VGACTL_ADDR),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	if(!ctl->sync && (ctl->w == 0 || ctl->h == 0))
		return;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	uint32_t *pixels = ctl->pixels;
	for(int i = ctl->y; i < (ctl->y + ctl->h); i ++) {
		for(int j = ctl->x; j < (ctl->x + ctl->w); j ++) {
			fb[inw(VGACTL_ADDR+2) * i + j] = pixels[ctl->w * (i-(ctl->y)) + (j-(ctl->x))];	//w*i+j 
		}
	}
	if(ctl -> sync) {
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
