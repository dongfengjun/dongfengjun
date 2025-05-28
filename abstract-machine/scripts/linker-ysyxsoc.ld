ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x10000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS /0x20000000/*/
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } > mrom AT > mrom : text
  etext = .;
  _etext = .;
	.rodata : {
    *(.rodata*)
		*(.srodata*)
		rodata_end = .;
  } > mrom AT > mrom
	
	.data : ALIGN(4) {
		data_vma_start = .;
		*(.data*)
		*(.sdata*)
  } > sram AT > mrom : data
	data_size = SIZEOF(.data);
	data_lma_start = LOADADDR(.data);
  .bss : ALIGN(4) {
		bss_vma_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sram AT > mrom
	bss_size = SIZEOF(.bss);
  bss_lma_start = LOADADDR(.bss);

	. = 0x0f000000;
	end = .;
  _end = .;
	_heap_start = .;
	. = _heap_start + 0x1000;
	_heap_end = .;
  _stack_top = .;
  . = _stack_top + 0x1000;
  _stack_pointer = .;
}
