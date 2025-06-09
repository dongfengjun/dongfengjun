SECTIONS {
  .data.extra : {
		*(.data.extra)
	} > flash
}
INSERT BEFORE .data;

SECTIONS {
  .bss.extra : {
		*(.bss.extra)
	}
}
INSERT BEFORE .bss;
