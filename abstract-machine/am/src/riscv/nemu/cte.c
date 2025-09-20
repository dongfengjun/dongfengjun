#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  c->mepc += 4;
  if(user_handler) {
    Event ev = {0};
    switch (c->mcause) {
			case -1: ev.event = EVENT_YIELD;break;
			default: ev.event = EVENT_ERROR; printf("mcause=%d\n",c->mcause);break;
		}

		c = user_handler(ev, c);
		assert(c != NULL);
	}
	return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context *stack_top = kstack.end - sizeof(Context);
  stack_top->mepc = (uintptr_t)entry;
  stack_top->mstatus = 0x1800;
  //stack_top->gpr[10]=(uintptr_t) arg;
	// a0 is gpr[10]
  for(int i=0; i<4; i++) {
	// stack_top->gpr[10+i] = ((uintptr_t)arg)[i];
		stack_top->gpr[10+i] = (uintptr_t)arg+i;
	}
  // printf("mepc addr:%p\n", &(stack_top->mepc));
  return stack_top;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
