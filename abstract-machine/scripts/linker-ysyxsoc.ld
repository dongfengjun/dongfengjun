ENTRY(_start)
PHDRS { entry PT_LOAD; ssbl PT_LOAD; text PT_LOAD; rodata PT_LOAD; data PT_LOAD; }

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
  } > psram AT > flash : rodata
	rodata_size = SIZEOF(.rodata);
	rodata_lma_start = LOADADDR(.rodata);

	.data.extra : ALIGN(4) {
		data_vma_start = .;
    /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
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
  } > psram AT > flash : data

	.data : ALIGN(4) {
		*(.data*)
		*(.sdata*)
  } > psram AT > flash : data
	data_size = SIZEOF(.data) + SIZEOF(.data.extra);
	data_lma_start = LOADADDR(.data.extra);

  .bss.extra : {
		. = ALIGN(8);
		bss_vma_start = .;
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  } > psram AT > flash

	.bss : ALIGN(4) {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > psram AT > flash
	bss_size = SIZEOF(.bss) + SIZEOF(.bss.extra);
  bss_lma_start = LOADADDR(.bss.extra);

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
