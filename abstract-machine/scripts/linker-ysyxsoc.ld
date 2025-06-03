ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 1M
  sram : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS /0x20000000/*/
  . = ORIGIN(flash);
  .text : {
    *(entry)
    *(.text*)
  } > flash AT > flash : text
  etext = .;
  _etext = .;
	.rodata : {
    *(.rodata*)
		*(.srodata*)
		rodata_end = .;
  } > flash AT > flash
	
	.data : ALIGN(4) {
		data_vma_start = .;
		*(.data*)
		*(.sdata*)
  } > sram AT > flash : data
	data_size = SIZEOF(.data);
	data_lma_start = LOADADDR(.data);
  .bss : ALIGN(4) {
		bss_vma_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sram AT > flash
	bss_size = SIZEOF(.bss);
  bss_lma_start = LOADADDR(.bss);

	. = ORIGIN(sram);
	end = .;
  _end = .;
	_heap_start = .;
	. = _heap_start + 0xf00000;
	_heap_end = .;
  _stack_top = .;
  . = _stack_top + 0xf00000;
  _stack_pointer = .;
}
