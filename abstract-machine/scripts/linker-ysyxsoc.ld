ENTRY(_start)
PHDRS { entry PT_LOAD; ssbl PT_LOAD; text PT_LOAD; rodata PT_LOAD; data PT_LOAD; }

MEMORY {
	flash (rx): ORIGIN = 0x30000000, LENGTH = 1M
  sdram (wrx): ORIGIN = 0xa0000000, LENGTH = 32M
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
	} > sram AT > flash : ssbl
	ssbl_size = SIZEOF(.ssbl);
	ssbl_lma_start = LOADADDR(.ssbl);
	
	. = ALIGN(4);
	.text : ALIGN(4) {
    *(.text*)
		. = ALIGN(4);
  } > sdram AT > flash : text
  etext = .;
  _etext = .;
	text_lma_start = LOADADDR(.text);
	text_size = SIZEOF(.text);

	. = ALIGN(4);
	.rodata : ALIGN(4) {
		rodata_vma_start = .;
    *(.rodata*)
		. = ALIGN(4);
		*(.srodata.cst8)
		. = ALIGN(4);
		*(.srodata.waveform)
		. = ALIGN(4);
		*(.srodata._ZZL5CSyncvE4midx)
		. = ALIGN(4);
		*(.srodata._ZL9prot_data)
		. = ALIGN(4);
		*(.srodata._ZL3lut)
		. = ALIGN(4);
		*(.srodata.mainargs)
		. = ALIGN(4);
  } > sdram AT > flash : rodata
	rodata_size = SIZEOF(.rodata);
	rodata_lma_start = LOADADDR(.rodata);

	. = ALIGN(4);
	.data.extra : ALIGN(4) {
    data_vma_start = .;
		__fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);
  } > sdram AT > flash : data

	. = ALIGN(4);
	.data : ALIGN(4) {
		. = ALIGN(4);
		*(.sdata.p.0)
		. = ALIGN(4);
		*(.data.working_directory)
		. = ALIGN(4);
		*(.sdata._current_timezone)
		. = ALIGN(4);
		*(.sdata._rt_thread_defunct)
		. = ALIGN(4);
		*(.data._object_container)
		. = ALIGN(4);
		*(.sdata._soft_timer_status)
		. = ALIGN(4);
		*(.sdata.heap)
		. = ALIGN(4);
		*(.data.lut)
		. = ALIGN(4);
		*(.sdata.next)
		. = ALIGN(4);
  } > sdram AT > flash : data
	data_size = SIZEOF(.data) + SIZEOF(.data.extra);
	data_lma_start = LOADADDR(.data.extra);

	. = ALIGN(4);
	.bss.extra : {
    . = ALIGN(8);
		bss_vma_start = .;
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  } > sdram AT > flash

	. = ALIGN(4);
	.bss : ALIGN(4) {
		. = ALIGN(4);
		*(.bss*)
		. = ALIGN(4);
    *(.sbss*)
		. = ALIGN(4);
    *(.scommon)
		. = ALIGN(4);
  } > sdram AT > flash
	bss_size = SIZEOF(.bss) + SIZEOF(.bss.extra);
  bss_lma_start = LOADADDR(.bss.extra);

	end = .;
  _end = .;
	_heap_start = 0xa0f00000;
	. = _heap_start + 0x100000;
	_heap_end = .;

	. = ORIGIN(sram) + 0x1000;
  _stack_top = ALIGN(0X10);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
}
