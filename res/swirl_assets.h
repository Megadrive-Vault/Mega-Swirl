/**************************************************************
 * Graphics Assets                                            *
 * Last Modified: 6/22/2013                                   *
 *                                                            *
 * Sega Swirl is (c) Sega Enterprises Ltd and does not        *
 * endorse or contribute to this game in any way.             *
 * This project may not be forked without attribution to the  *
 * original author(s).                                        *
 **************************************************************
 */
const u16 std_pal[16] = {
	0x0EEE,0x00EE,0x0E0E,0x000E,0x0EE0,0x00E0,0x0E00,0x0888,	//  Palette: 0
	0x0CCC,0x0088,0x0808,0x0008,0x0880,0x0080,0x0800,0x0000
};

const u16 swirl_pal[16] = {
	0x0EEE,0x006E,0x0E0E,0x000E,0x0EE0,0x00E0,0x0E00,0x0888,	//  Palette: 1
	0x0CCC,0x0088,0x0808,0x0008,0x0880,0x0080,0x0800,0x0000,	
};

const u16 sel_pal[16] = {
	0x0EEE,0x0EEE,0x0E0E,0x000E,0x0EE0,0x0EEE,0x0EEE,0x0888,	//  Pallette: 2
	0x0CCC,0x0088,0x0EEE,0x0008,0x0880,0x0080,0x0800,0x0000,	
};

// Title screen Palette
const u16 ts_pal[16] = {
	0x0EEE,0x006E,0x00AE,0x000E,0x0EE0,0x00E0,0x0E00,0x04AE,	//  Pallette: 1
	0x008E,0x0088,0x0808,0x0008,0x0880,0x0080,0x0800,0x0000,
};

//select cursor, blue swirl, green swirl, purple swirl, orange swirl from top to bottom
//each of these swirls is a 16x16px sprite consisting of four tiles
const u32 swirls[160] = {
	0x4D4D4D4D, 0xD0000000, 0x40000000, 0xD0000000, 0x40000000, 0xD0000000, 0x40000000, 0xD0000000, 	//  Tile: 0
	0x40000000, 0xD0000000, 0x40000000, 0xD0000000, 0x40000000, 0xD0000000, 0x40000000, 0xD4D4D4D4, 	//  Tile: 1
	0x4D4D4D4D, 0x00000004, 0x0000000D, 0x00000004, 0x0000000D, 0x00000004, 0x0000000D, 0x00000004, 	//  Tile: 2
	0x0000000D, 0x00000004, 0x0000000D, 0x00000004, 0x0000000D, 0x00000004, 0x0000000D, 0xD4D4D4D4, 	//  Tile: 3
	
	0xFFFFFFF6, 0x66FFF666, 0x66FF666F, 0x66F666FF, 0x66F66FF6, 0x66F66F6F, 0x66F66F6F, 0xF6F66F66, 	//  Tile: 4
	0x6666FFFF, 0x6666FFFF, 0xFFFFFFFF, 0x666FFFFF, 0x6F666FFF, 0xFFF666FF, 0x6FFF666F, 0xF66FF66F, 	//  Tile: 6
	0xF6666F66, 0xFF666FF6, 0xFF666FFF, 0xFFF666FF, 0xFFFFFF66, 0xFFFFFFFF, 0xFFF66666, 0xFFF66666, 	//  Tile: 5
	0x6F66FF66, 0xFF666F66, 0xF6F66F66, 0x6FF66F66, 0xFF66FF66, 0xF66FFFFF, 0x66FFFFFF, 0xFFFFFFFF, 	//  Tile: 7
	
	0x55555555, 0x5FFFFFFF, 0x5F555555, 0x5F5FFFFF, 0x5F5F5555, 0x5F5F5FFF, 0x5F5F5F55, 0x5F5F5F5F, 	//  Tile: 8
	0x55555555, 0xFFFFFFFF, 0x55555555, 0xFFFFFFF5, 0x555555F5, 0xFFFFF5F5, 0x5555F5F5, 0xFFF5F5F5, 	//  Tile: 10
	0x5F5F5F5F, 0x5F5F5F55, 0x5F5F5FFF, 0x5F5F5555, 0x5F5FFFFF, 0x5F555555, 0x5FFFFFFF, 0x55555555, 	//  Tile: 9
	0xF5F5F5F5, 0x55F5F5F5, 0xFFF5F5F5, 0x5555F5F5, 0xFFFFF5F5, 0x555555F5, 0xFFFFFFF5, 0x55555555, 	//  Tile: 11
	
	0xFFFFFFFA, 0xFFFFFFAF, 0xFFFFFAFF, 0xFFFFFAFF, 0xFFFFAFFA, 0xFFFAFFAF, 0xFFFAFAFF, 0xFFAFFAFF, 	//  Tile: 12
	0xFFFFFFFF, 0xFFFFFFFF, 0xFAAFFFFF, 0xAFAFFFFF, 0xFFFAFFFF, 0xFFFFAFFF, 0xFAFFAFFF, 0xAFAFFAFF, 	//  Tile: 14
	0xFAFFAFFA, 0xFAFAFFAF, 0xAFFAFFAA, 0xAFAFFFFF, 0xAFAFFFFF, 0xAFAAAAAA, 0xAFFFFFFF, 0xAAAAAAAA, 	//  Tile: 13
	0xFFAFFFAF, 0xFFFAFFAF, 0xAAFFAFFA, 0xFFFFAFFA, 0xFFFFAFFA, 0xAAAAAFFA, 0xFFFFFFFA, 0xAAAAAAAA, 	//  Tile: 15
	
	0xFFFFF111, 0xFFFF1FFF, 0xFFF1FFFF, 0xFF1FFF11, 0xFF1FF1FF, 0xF1FF1FFF, 0x1FF1FF11, 0x1F1FF1FF, 	//  Tile: 16
	0x1FFFFFFF, 0xF11FFFFF, 0xFFF1FFFF, 0x11FF11FF, 0xFF1FFF1F, 0xFFF1FFF1, 0x11FF1FFF, 0xFF1FF1FF, 	//  Tile: 18
	0x1F1F1FF1, 0x1F1F1FFF, 0x1F1FF1FF, 0x1FF1FF11, 0xF1FF1FFF, 0xFF1FF111, 0xFFF1FFFF, 0xFFFF1111, 	//  Tile: 17
	0x1FF1FF1F, 0xF1FF1F1F, 0xF1FF1F1F, 0x1FF1F1FF, 0xFF1FF1FF, 0x11FF1FFF, 0xFFFF1FFF, 0x1111FFFF, 	//  Tile: 19
};

const u32 swirl_spr[128] = {
	0xFFFFFFF6, 0x66FFF666, 0x66FF666F, 0x66F666FF, 0x66F66FF6, 0x66F66F6F, 0x66F66F6F, 0xF6F66F66, 	//  Tile: 4
	0xF6666F66, 0xFF666FF6, 0xFF666FFF, 0xFFF666FF, 0xFFFFFF66, 0xFFFFFFFF, 0xFFF66666, 0xFFF66666, 	//  Tile: 5
	0x6666FFFF, 0x6666FFFF, 0xFFFFFFFF, 0x666FFFFF, 0x6F666FFF, 0xFFF666FF, 0x6FFF666F, 0xF66FF66F, 	//  Tile: 6
	0x6F66FF66, 0xFF666F66, 0xF6F66F66, 0x6FF66F66, 0xFF66FF66, 0xF66FFFFF, 0x66FFFFFF, 0xFFFFFFFF, 	//  Tile: 7
	
	0x55555555, 0x5FFFFFFF, 0x5F555555, 0x5F5FFFFF, 0x5F5F5555, 0x5F5F5FFF, 0x5F5F5F55, 0x5F5F5F5F, 	//  Tile: 8
	0x5F5F5F5F, 0x5F5F5F55, 0x5F5F5FFF, 0x5F5F5555, 0x5F5FFFFF, 0x5F555555, 0x5FFFFFFF, 0x55555555, 	//  Tile: 9
	0x55555555, 0xFFFFFFFF, 0x55555555, 0xFFFFFFF5, 0x555555F5, 0xFFFFF5F5, 0x5555F5F5, 0xFFF5F5F5, 	//  Tile: 10
	0xF5F5F5F5, 0x55F5F5F5, 0xFFF5F5F5, 0x5555F5F5, 0xFFFFF5F5, 0x555555F5, 0xFFFFFFF5, 0x55555555, 	//  Tile: 11
	
	0xFFFFFFFA, 0xFFFFFFAF, 0xFFFFFAFF, 0xFFFFFAFF, 0xFFFFAFFA, 0xFFFAFFAF, 0xFFFAFAFF, 0xFFAFFAFF, 	//  Tile: 12
	0xFAFFAFFA, 0xFAFAFFAF, 0xAFFAFFAA, 0xAFAFFFFF, 0xAFAFFFFF, 0xAFAAAAAA, 0xAFFFFFFF, 0xAAAAAAAA, 	//  Tile: 13
	0xFFFFFFFF, 0xFFFFFFFF, 0xFAAFFFFF, 0xAFAFFFFF, 0xFFFAFFFF, 0xFFFFAFFF, 0xFAFFAFFF, 0xAFAFFAFF, 	//  Tile: 14
	0xFFAFFFAF, 0xFFFAFFAF, 0xAAFFAFFA, 0xFFFFAFFA, 0xFFFFAFFA, 0xAAAAAFFA, 0xFFFFFFFA, 0xAAAAAAAA, 	//  Tile: 15
	
	0xFFFFF111, 0xFFFF1FFF, 0xFFF1FFFF, 0xFF1FFF11, 0xFF1FF1FF, 0xF1FF1FFF, 0x1FF1FF11, 0x1F1FF1FF, 	//  Tile: 16
	0x1F1F1FF1, 0x1F1F1FFF, 0x1F1FF1FF, 0x1FF1FF11, 0xF1FF1FFF, 0xFF1FF111, 0xFFF1FFFF, 0xFFFF1111, 	//  Tile: 17
	0x1FFFFFFF, 0xF11FFFFF, 0xFFF1FFFF, 0x11FF11FF, 0xFF1FFF1F, 0xFFF1FFF1, 0x11FF1FFF, 0xFF1FF1FF, 	//  Tile: 18
	0x1FF1FF1F, 0xF1FF1F1F, 0xF1FF1F1F, 0x1FF1F1FF, 0xFF1FF1FF, 0x11FF1FFF, 0xFFFF1FFF, 0x1111FFFF, 	//  Tile: 19
};

// Title screen logo
const u32 title_screen[120] = {
	0xFFFFFFFF, 0xFFFFFFF2, 0xFFFFFF2F, 0xFFFFF2FF, 0xFFFF22FF, 0xFFFF2FFF, 0xFFFFFFFF, 0xFF7118FF, 	//  Tile: 0
	0xFFFFFFFF, 0x2F222FF2, 0x22FF2F2F, 0x2FF2FF22, 0xFF2FF2FF, 0xF2FFF222, 0xFFFFFFFF, 0xFFFFFFFF, 	//  Tile: 3
	0xFFFFFFFF, 0x2FFFF22F, 0xFFFF2FFF, 0x2FF2FFFF, 0xFF2FF2FF, 0x2F2222F2, 0xFF1111FF, 0xF1FFFF1F, 	//  Tile: 6
	0xFFFFFFF6, 0xFF222F6F, 0xF2FF2F6F, 0x2222FF6F, 0x2FF2F6FF, 0xFF2FFFFB, 0xFFFFFFBB, 0xFFFFFFFF, 	//  Tile: 9
	0x6555566F, 0x53DD356F, 0x53DD356F, 0x5DDDD5F6, 0xB5555BFF, 0xF5DD5FBF, 0xF5DD5FBB, 0xF5DD5FFF, 	//  Tile: 12
	
	0xF811118F, 0x71FFFF1F, 0x11F8FF1F, 0x11F1781F, 0xF1FF11FF, 0xF812FFFF, 0xFF818FFF, 0xFFF818FF, 	//  Tile: 1
	0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFF1FFFF, 0xFF17FFFF, 0xF18FFFFF, 0xF11FFFF1, 0xF11FFFFF, 	//  Tile: 4
	0xF1F11F1F, 0xF1FF1F1F, 0xF811FFFF, 0xFFFFFFFF, 0xF71111FF, 0xF1811FFF, 0x7FF11FFF, 0x1FF11FFF, 	//  Tile: 7
	0xFFFFFFFF, 0xFFF8711F, 0xFF711FF1, 0xF11FF8F1, 0x811F1FF1, 0xF11F1F1F, 0xF11F818F, 0xF11FFFFF, 	//  Tile: 10
	0xF8111FFF, 0xF1111FFF, 0xFF11FFFF, 0xFF11FFFF, 0xFF11FFFF, 0xFF11FFFF, 0xFF11FFFF, 0xFF11FFFF, 	//  Tile: 13
	
	0xFFFF818F, 0xFF11F21F, 0xF1871F11, 0x21FF8F11, 0x71FFFF1F, 0xF81111FF, 0xFF7118FF, 0xFFFFFFFF, 	//  Tile: 2
	0xF11FF1FF, 0xF11FF1FF, 0xF11FF1FF, 0xF11FF1FF, 0xF11FF1FF, 0xF18FF1FF, 0xF7111F11, 0xFFF18FFF, 	//  Tile: 5
	0x11F11FFF, 0x11F11FFF, 0x11F11FFF, 0x11F11FFF, 0x11F11FFF, 0x1F81111F, 0x8F1117FF, 0xFFFFFFFF, 	//  Tile: 8
	0xF11FFFFF, 0xF11FFFFF, 0xF11FFFFF, 0xF11FFFFF, 0xF11FFFFF, 0x71111FFF, 0x11188FFF, 0xFFFFFFFF, 	//  Tile: 11
	0xFF11FFFF, 0xFF11F112, 0xFF111FF1, 0xFF1171F1, 0xFF11FFF1, 0xFF11F817, 0xF811118F, 0xFFFFFFFF, 	//  Tile: 14
};
