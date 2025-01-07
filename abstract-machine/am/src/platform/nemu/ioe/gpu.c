#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
int i;
	int w = io_read(AM_GPU_CONFIG).width;  //get the correct width
  int h = io_read(AM_GPU_CONFIG).height;  //get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR), 
		.height = inw(VGACTL_ADDR + 2),
    .vmemsz = inw(VGACTL_ADDR) * inw(VGACTL_ADDR + 2)
  };
}

static uint32_t color_buf[32 * 32];
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (!ctl->sync) {
		for (int i = 0; i < (ctl -> w * ctl -> h); i ++) {
			color_buf[i] = *(uint32_t *)(ctl -> pixels);
			ctl -> pixels ++;
		}
  }
	else {
		uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
		for(int j = 0; j < 32 * 32; j ++) {
			fb[j] = color_buf[j];
		}
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
