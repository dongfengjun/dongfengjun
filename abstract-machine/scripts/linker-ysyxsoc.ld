ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
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
/*	.rodata : {
    *(.rodata*)
  }
	*/
	.data : {
    _data = .;
		*(.data)
		_edata = .;
  } > sram AT > mrom : data
	_data_lma_start = LOADADDR(.data);
  .bss : {
		_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
		_bss_end = .;
  } > sram

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
