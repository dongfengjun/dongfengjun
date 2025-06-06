ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 1M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS /0x20000000/*/
  . = ORIGIN(flash);
  .text : {
    *(entry)
		text = .;
    *(.text*)
  } > flash AT > flash : text
  etext = .;
  _etext = .;
	.rodata : {
    *(.rodata*)
		*(.srodata*)
		rodata_end = .;
  } > flash AT > flash
	txtrod_size = etext - text;

	.data : ALIGN(4) {
		data_vma_start = .;
		*(.data*)
		*(.sdata*)
  } > psram AT > flash : data
	data_size = SIZEOF(.data);
	data_lma_start = LOADADDR(.data);
  .bss : ALIGN(4) {
		bss_vma_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > psram AT > flash
	bss_size = SIZEOF(.bss);
  bss_lma_start = LOADADDR(.bss);

	. = ORIGIN(psram) + 0x100000;
	_stack_top = ALIGN(0x10);
  . = _stack_top + 0x100000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x10);
  _heap_end = _heap_start + 0x100000;
/***
	end = .;
  _end = .;
	_heap_start = .;
	. = _heap_start + 0x100000;
	_heap_end = .;
  _stack_top = .;
  . = _stack_top + 0x100000;
  _stack_pointer = .;
***/
}
