ENTRY(_start)
PHDRS { entry PT_LOAD; ssbl PT_LOAD; text PT_LOAD; data PT_LOAD; }

MEMORY {
	flash (rx): ORIGIN = 0x30000000, LENGTH = 1M
  psram (wrx): ORIGIN = 0x80000000, LENGTH = 4M
	sram (wrx): ORIGIN = 0x0f000000, LENGTH = 2K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS /0x20000000/*/
  . = ORIGIN(flash);
  .entry : {
		*(entry)
		*(.text._trm_init)
		*(.text.uart_init)
		*(.text.bootloader_fsbl)
	} > flash AT > flash : entry
	
	.ssbl : {
		ssbl_vma_start = .;
		*(.text.bootloader_ssbl)
		*(.text.memcpy)                                                         
		*(.text.memset)
	} > sram AT > flash : ssbl
	ssbl_size = SIZEOF(.ssbl);
	ssbl_lma_start = LOADADDR(.ssbl);
	
	.text : {
		text = .;
    *(.text*)
  } > psram AT > flash : text
  etext = .;
  _etext = .;
	text_lma_start = LOADADDR(.text);
	text_size = SIZEOF(.text);

	.rodata : {
		rodata_vma_start = .;
    *(.rodata*)
		*(.srodata*)
  } > psram AT > flash
	rodata_size = SIZEOF(.rodata);
	rodata_lma_start = LOADADDR(.rodata);

	.data : ALIGN(4) {
		data_vma_start = .;
		*(.data*)
		*(.sdata*)
  } > psram AT > flash : data
	data_size = SIZEOF(.data);
	data_lma_start = LOADADDR(.data);

	.data.extra : ALIGN(4) {
    *(.data.extra*)
  } > psram AT > flash

  .bss : ALIGN(4) {
		bss_vma_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > psram AT > flash
	bss_size = SIZEOF(.bss);
  bss_lma_start = LOADADDR(.bss);

/***
	. = ORIGIN(psram) + 0x100000;
	_stack_top = ALIGN(0x10);
  . = _stack_top + 0x100000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x10);
  _heap_end = _heap_start + 0x100000;
***/
	end = .;
  _end = .;
	_heap_start = 0x83000000;
	. = _heap_start + 0x1000000;
	_heap_end = .;

	. = ORIGIN(sram) + 0x1000;
  _stack_top = ALIGN(0X10);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
}
