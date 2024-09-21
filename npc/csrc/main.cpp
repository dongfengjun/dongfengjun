#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
	dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}
static void reset(int n) {
	dut.rst = 1;
	while (n -- > 0) single_cycle();
	dut.rst = 0;
}
int main() {
	nvboard_bind_all_pins(&dut); //引脚绑定
  nvboard_init(); //初始化NVBoard
  reset(10);
	while(1) {
		nvboard_update(); //更新
		single_cycle();
	}
}
