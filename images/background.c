
//{{BLOCK(background)

//======================================================================
//
//	background, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 6 tiles (t|f|p reduced) lz77 compressed
//	+ regular map (in SBBs), lz77 compressed, 32x32 
//	Total size: 512 + 52 + 284 = 848
//
//	Time-stamp: 2014-09-06, 23:21:11
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned int backgroundTiles[13] __attribute__((aligned(4)))=
{
	0x0000C010,0xF0000032,0x88059001,0x3301B088,0x01B03349,0x01B06666,0x01B02222,0xB0777724,
	0xB0444401,0xCC555501,0x059001F0,0x01F01111,0xF0010590,
};

const unsigned short backgroundMap[142] __attribute__((aligned(4)))=
{
	0x0010,0x0008,0x013D,0xF000,0xF001,0xF001,0x1001,0x000D,
	0x0100,0x027D,0x01F0,0x01F0,0x01F0,0x0D20,0x4010,0xF003,
	0xF701,0x01F0,0x01F0,0x0D20,0x8010,0xF004,0xF001,0xF001,
	0xFF01,0x0D20,0x3FF0,0x01F0,0x01F0,0x3FF0,0x01F0,0x01F0,
	0x01F0,0xF0FF,0xF03F,0xF001,0xF001,0xF03F,0xF001,0xF001,
	0xF001,0xFF3F,0x01F0,0x01F0,0x3FF0,0x15F0,0x01F0,0x01F0,
	0x3FF0,0x01F0,0xF0FC,0xF001,0xF03F,0xF03F,0xF001,0x9001,
	0x033F,0xFB0C,0x01F0,0x01F0,0x01F0,0x0D10,0xFF22,0xF00C,

	0xF001,0xE701,0x01F0,0x0D10,0x4013,0x0C01,0x01F0,0x01F0,
	0x01F0,0x10DF,0x130D,0x0580,0x01F0,0x01F0,0x01F0,0x0D20,
	0x3FF0,0xF0FF,0xF001,0xF001,0xF03F,0xF001,0xF001,0xF001,
	0xF03F,0xFF01,0x01F0,0x3FF0,0x01F0,0x01F0,0x01F0,0x3F50,
	0x01F0,0x01F0,0xF0FF,0xF001,0xF001,0xF001,0xF001,0xF001,
	0xF001,0xF001,0xFF01,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,
	0x01F0,0x01F0,0x01F0,0xF0FF,0xF001,0xF001,0xF001,0xF001,
	0xF001,0xF001,0xF001,0xFF01,0x01F0,0x01F0,0x01F0,0x01F0,

	0x01F0,0x01F0,0x01F0,0x01F0,0xF0FF,0xF001,0xF001,0xF001,
	0xF001,0xF001,0xF001,0xF001,0x8001,0x0190,
};

const unsigned short backgroundPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x2AB7,0x477B,0x3719,0x53BD,0x5BDE,0x3F5A,0x4F9C,
	0x2ED8,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(background)
