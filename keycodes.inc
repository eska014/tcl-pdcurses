static const char* keycodes[] =
{
	"BREAK",
	"DOWN",
	"UP",
	"LEFT",
	"RIGHT",
	"HOME",
	"BACKSPACE",
	"F0",
	"F1",
	"F2",
	"F3",
	"F4",
	"F5",
	"F6",
	"F7",
	"F8",
	"F9",
	"F10",
	"F11",
	"F12",
	"F13",
	"F14",
	"F15",
	"F16",
	"F17",
	"F18",
	"F19",
	"F20",
	"F21",
	"F22",
	"F23",
	"F24",
	"F25",
	"F26",
	"F27",
	"F28",
	"F29",
	"F30",
	"F31",
	"F32",
	"F33",
	"F34",
	"F35",
	"F36",
	"F37",
	"F38",
	"F39",
	"F40",
	"F41",
	"F42",
	"F43",
	"F44",
	"F45",
	"F46",
	"F47",
	"F48",
	"F49",
	"F50",
	"F51",
	"F52",
	"F53",
	"F54",
	"F55",
	"F56",
	"F57",
	"F58",
	"F59",
	"F60",
	"F61",
	"F62",
	"F63",
	"DL",
	"IL",
	"DC",
	"IC",
	"EIC",
	"CLEAR",
	"EOS",
	"EOL",
	"SF",
	"SR",
	"NPAGE",
	"PPAGE",
	"STAB",
	"CTAB",
	"CATAB",
	"ENTER",
	"SRESET",
	"RESET",
	"PRINT",
	"LL",
	"ABORT",
	"SHELP",
	"LHELP",
	"BTAB",
	"BEG",
	"CANCEL",
	"CLOSE",
	"COMMAND",
	"COPY",
	"CREATE",
	"END",
	"EXIT",
	"FIND",
	"HELP",
	"MARK",
	"MESSAGE",
	"MOVE",
	"NEXT",
	"OPEN",
	"OPTIONS",
	"PREVIOUS",
	"REDO",
	"REFERENCE",
	"REFRESH",
	"REPLACE",
	"RESTART",
	"RESUME",
	"SAVE",
	"SBEG",
	"SCANCEL",
	"SCOMMAND",
	"SCOPY",
	"SCREATE",
	"SDC",
	"SDL",
	"SELECT",
	"SEND",
	"SEOL",
	"SEXIT",
	"SFIND",
	"SHOME",
	"SIC",
	"",
	"SLEFT",
	"SMESSAGE",
	"SMOVE",
	"SNEXT",
	"SOPTIONS",
	"SPREVIOUS",
	"SPRINT",
	"SREDO",
	"SREPLACE",
	"SRIGHT",
	"SRSUME",
	"SSAVE",
	"SSUSPEND",
	"SUNDO",
	"SUSPEND",
	"UNDO",

	"ALT_0",
	"ALT_1",
	"ALT_2",
	"ALT_3",
	"ALT_4",
	"ALT_5",
	"ALT_6",
	"ALT_7",
	"ALT_8",
	"ALT_9",
	"ALT_A",
	"ALT_B",
	"ALT_C",
	"ALT_D",
	"ALT_E",
	"ALT_F",
	"ALT_G",
	"ALT_H",
	"ALT_I",
	"ALT_J",
	"ALT_K",
	"ALT_L",
	"ALT_M",
	"ALT_N",
	"ALT_O",
	"ALT_P",
	"ALT_Q",
	"ALT_R",
	"ALT_S",
	"ALT_T",
	"ALT_U",
	"ALT_V",
	"ALT_W",
	"ALT_X",
	"ALT_Y",
	"ALT_Z",

	"CTL_LEFT",
	"CTL_RIGHT",
	"CTL_PGUP",
	"CTL_PGDN",
	"CTL_HOME",
	"CTL_END",

	"A1",
	"A2",
	"A3",
	"B1",
	"B2",
	"B3",
	"C1",
	"C2",
	"C3",

	"PADSLASH",
	"PADENTER",
	"CTL_PADENTER",
	"ALT_PADENTER",
	"PADSTOP",
	"PADSTAR",
	"PADMINUS",
	"PADPLUS",
	"CTL_PADSTOP",
	"CTL_PADCENTER",
	"CTL_PADPLUS",
	"CTL_PADMINUS",
	"CTL_PADSLASH",
	"CTL_PADSTAR",
	"ALT_PADPLUS",
	"ALT_PADMINUS",
	"ALT_PADSLASH",
	"ALT_PADSTAR",
	"ALT_PADSTOP",
	"CTL_INS",
	"ALT_DEL",
	"ALT_INS",
	"CTL_UP",
	"CTL_DOWN",
	"CTL_TAB",
	"ALT_TAB",
	"ALT_MINUS",
	"ALT_EQUAL",
	"ALT_HOME",
	"ALT_PGUP",
	"ALT_PGDN",
	"ALT_END",
	"ALT_UP",
	"ALT_DOWN",
	"ALT_RIGHT",
	"ALT_LEFT",
	"ALT_ENTER",
	"ALT_ESC",
	"ALT_BQUOTE",
	"ALT_LBRACKET",
	"ALT_RBRACKET",
	"ALT_SEMICOLON",
	"ALT_FQUOTE",
	"ALT_COMMA",
	"ALT_STOP",
	"ALT_FSLASH",
	"ALT_BKSP",
	"CTL_BKSP",
	"PAD0",

	"CTL_PAD0",
	"CTL_PAD1",
	"CTL_PAD2",
	"CTL_PAD3",
	"CTL_PAD4",
	"CTL_PAD5",
	"CTL_PAD6",
	"CTL_PAD7",
	"CTL_PAD8",
	"CTL_PAD9",

	"ALT_PAD0",
	"ALT_PAD1",
	"ALT_PAD2",
	"ALT_PAD3",
	"ALT_PAD4",
	"ALT_PAD5",
	"ALT_PAD6",
	"ALT_PAD7",
	"ALT_PAD8",
	"ALT_PAD9",

	"CTL_DEL",
	"ALT_BSLASH",
	"CTL_ENTER",

	"SHF_PADENTER",
	"SHF_PADSLASH",
	"SHF_PADSTAR",
	"SHF_PADPLUS",
	"SHF_PADMINUS",
	"SHF_UP",
	"SHF_DOWN",
	"SHF_IC",
	"SHF_DC",

	"MOUSE",
	"SHIFT_L",
	"SHIFT_R",
	"CONTROL_L",
	"CONTROL_R",
	"ALT_L",
	"ALT_R",
	"RESIZE",
	"SUP",
	"SDOWN",
};
