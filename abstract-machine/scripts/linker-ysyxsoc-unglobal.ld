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
  } : text
  etext = .;
  _etext = .;
	.rodata : {
    *(.rodata*)
  }
	.data : {
		*(.data)
  } : data
	edata = .;
	_data = .;
  .bss : {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }

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
