#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;
//char *hbrk = NULL;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

struct block_header {
	size_t size;
	int is_free;
	struct block_header* next;
};

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
	if(size == 0) return NULL;
	size = (size_t)ROUNDUP(size, 8);
	size_t total_size = sizeof(struct block_header) + size;

	struct block_header* current = (struct block_header*)heap.start;
	struct block_header* prev = NULL;

	while ((void*)current < heap.end) {
		if(current->is_free && (current->size >= size)) {
			struct block_header* new_block = (struct block_header*)((char*)current + total_size);
			new_block->size = current->size - total_size;
			new_block->is_free = 1;
			new_block->next = current->next;

			current->size = size;
			current->is_free = 0;
			current->next = new_block;
		}
		prev = current;
		current = current->next;
		return (void*)prev;
	}
	return NULL;
/***
	char *old = hbrk;
	hbrk += size;
	assert((uintptr_t)heap.start <= (uintptr_t)hbrk && (uintptr_t)hbrk < (uintptr_t)heap.end);
	for(uint64_t *p = (uint64_t *)old; p != (uint64_t *)hbrk; p ++) {
		*p = 0;
	}
	return old;
***/
}
#endif

void free(void *ptr) {
}
#endif
