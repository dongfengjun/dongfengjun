#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
/***
	int i;
	int w = io_read(AM_GPU_CONFIG).width;  //get the correct width
  int h = io_read(AM_GPU_CONFIG).height;  //get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
***/
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR), 
		.height = inw(VGACTL_ADDR + 2),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	if(!ctl->sync && (ctl->w == 0 || ctl->h == 0))
		return;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	uint32_t *pixels = ctl->pixels;
	//int x = ctl->x/ctl->w;
	//int y = ctl->y/ctl->h;
	//int w = ctl->w;
	//int h = ctl->h;
	for(int i = ctl->y; i < (ctl->y + ctl->h); i ++) {
		for(int j = ctl->x; j < (ctl->x + ctl->w); j ++) {
			fb[i * j + (ctl->h * ctl->w)] = pixels[0];
			//fb[inw(VGACTL_ADDR) * i + j] = pixels[(ctl->w) * (i - ctl->y) + (j - ctl->x)];
		}
	}
	/***
	for(int k = 0; k < w * h; k ++) {
		fb[y * h * x * w + k] = pixels[k];
	}
	***/
	if(ctl -> sync) {
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
