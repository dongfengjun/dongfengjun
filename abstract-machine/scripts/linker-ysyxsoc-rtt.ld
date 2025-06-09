SECTIONS {
  .data.extra : {
		*(.data.extra)
	} > psram AT > flash
}
INSERT BEFORE .data;

SECTIONS {
  .bss.extra : {
		*(.bss.extra)
	}
}
INSERT BEFORE .bss;
