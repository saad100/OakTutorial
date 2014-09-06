
//{{BLOCK(prof)

//======================================================================
//
//	prof, 64x128@4, 
//	Transparent color : AD,DD,DD
//	+ palette 16 entries, not compressed
//	+ 128 tiles lz77 compressed
//	Total size: 32 + 1720 = 1752
//
//	Time-stamp: 2014-09-06, 23:21:11
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned int profTiles[430] __attribute__((aligned(4)))=
{
	0x00100010,0xF000003F,0xF001F001,0xF001F001,0x9601F001,0x99900950,0x30EE0300,0x9901F003,
	0xEE010093,0xEE010099,0x801FF0EB,0x05593F06,0x01F013F0,0x01F001F0,0x01F001F0,0xF001F0E0,
	0x0001F001,0x90EB9999,0xEEEEEE05,0x0300E900,0x01CF0090,0x00AEEEE9,0x00DAEE50,0x00DA060B,
	0x00ABBBB5,0xAB02601A,0xE0DDDD20,0x055EEE01,0xEE20EE00,0xEE03005E,0xEEBADD05,0xADDD5E00,
	0xDDDD5EEA,0x00EE41AA,0xDDDDBE03,0x71F0BBBA,0x1100002B,0x16000916,0xF01AF05B,0x01F0FC01,
	0x01F001F0,0x01F001F0,0x9BB50B30,0x9500BA00,0x5C009ABB,0xC0AA00BB,0xC0AAE9AA,0xDA40E93A,
	0x30DB0300,0x00AEE53A,0xEEE5AC10,0xB9DDC800,0xBD01DDEE,0x9DDD9C9B,0xDD00E6EE,0x0461AE48,
	0xE800DADA,0x00ABEEDD,0xA99BEEB9,0xAAB9C9BB,0xEE6EBB00,0xAEEA9EAA,0xDD9E0CAA,0x0300BAAD,

	0xEEAA0701,0xE3105E54,0xC5750059,0x0CAA7900,0xA3000010,0x00030350,0xF0FF3A00,0xF001F08D,
	0xF001F001,0xF001F001,0x400B3001,0x95E70095,0x99505B59,0x509E0059,0x505E9959,0x02949505,
	0x009550FB,0x2C105028,0xEB28BDDD,0xB50312BB,0xBAAA0822,0x7AAB00E5,0xAAAA39A7,0x330055AA,
	0x77C0AAAA,0x10AB3333,0x005EEAAA,0x5BEE951D,0xEE9500E9,0xBA99E5EE,0x5900995E,0x055993AA,
	0x1A055533,0x30C97700,0x99FF10FB,0xBF950B03,0xF3500F03,0xF001F013,0xF001F001,0xD501F001,
	0x0A5001F0,0x9C1300C0,0x809E0600,0x00CC401B,0xCCC04602,0x08EC4666,0xEE666666,0x66860310,
	0xBBC00066,0xBB9C7777,0xBC0929BB,0x00929BBB,0x00B92206,0x9BB40003,0x5B94222B,0x4600929B,
	0x77525BB5,0x00000CBB,0x00C9BBB9,0x0CCBBBBB,0x4BBBB900,0x49BBB9C6,0xBB9B0066,0x9B5B6664,

	0xBB0C6664,0x90666645,0x00FE017B,0x0302A0C6,0x66040066,0x8600CEE6,0x109EE63F,0xF001F012,
	0xF001F001,0x60DFD001,0x03E600BC,0x009EEC7F,0x9E01EBC0,0xEEEEBCC0,0x0330B9BC,0xEBBB9B18,
	0xDA010340,0x94688886,0xE9880300,0x409E03C0,0x00BB4603,0xEE48525B,0xE988222B,0x88222E02,
	0x305559E4,0x55105503,0x03009888,0xBB555548,0x88664B00,0x88884EEB,0x008954EE,0x03308443,
	0x950700E5,0x88881688,0x88030045,0x0300E300,0x034085CE,0xE9E688EE,0x04960370,0x1FC1DC77,
	0x40CE0350,0xD101F003,0xAFBBBCC7,0x00BBE600,0x0600BB06,0x0A000320,0x992A0300,0xBB0E0099,
	0x00EBE300,0xBB34BBE7,0x200D10B9,0xAB21CB03,0x00350CCB,0x108F0399,0xFF009BE7,0x40AF004B,
	0xCCB30049,0xC0888868,0x86860586,0x106868C0,0xE3106607,0x10888828,0x07005403,0x20882524,

	0x03002888,0x86684248,0x02425748,0xE3106426,0x00EB0085,0x9E0320FA,0x88660240,0x02104302,
	0xE700E310,0x488809BE,0x4C01BBBE,0x03C066BB,0xD300CB7F,0x03704202,0x03901000,0x0350AB42,
	0xBB01E080,0xBBB999BB,0x9B7EBB99,0xA702E310,0xFF30E620,0x5B100F31,0x6C05B8B9,0x007B049B,
	0xBB63B0F2,0x4C5BC00C,0xF06CEB02,0x640F2003,0x0610C330,0x660A409F,0xF0034069,0x3101F001,
	0x29F31001,0x0340B466,0xB4034094,0x050340B9,0x0CB9BB9B,0x9B035000,0x30BF4B03,0x5303CB03,
	0xF2F00330,0xF301E8C2,0x22E3FB11,0x12071203,0x9BC0000F,0x1912DF33,0x0330CB44,0x00CC9999,
	0x00B94A57,0xBB4AD79B,0x7BCDDDD7,0x10CB06FB,0x31B1F003,0xCD0F11B8,0xFBD016B0,0x03406176,
	0x00B101F0,0x0003409B,0x01DE46F3,0x6603500B,0x01120320,0x03C0A511,0x0350F8C9,0x01F0F2F0,

	0x077001F0,0x40DDDDDC,0x7A0300D7,0xAAADDDC0,0xAA7A00C0,0xA7AC00A7,0xC014007A,0x0205AA7C,
	0x112D004C,0xEB0480CA,0x66611CAA,0x021441A7,0x44441A11,0x0300AA44,0x0700B077,0x100B0041,
	0x16666602,0x03108214,0x14111111,0x41016044,0x2100147B,0xEF500320,0x40111F00,0xAC04A032,
	0x00B11900,0x3B00B119,0x41440330,0xC40310A7,0xCC140330,0x8F03A103,0xB94F0350,0x0C990380,
	0x1FF5C103,0x01F001F0,0x1104B0AB,0x40411300,0x03404403,0x20F7FB10,0xD0B1F003,0x14EB1001,
	0xE7100390,0x1C650350,0x01D02FF0,0x5601CC14,0x560380C1,0x71660131,0x10A16A01,0xBBE71017,
	0x003A9901,0x0CAAAA77,0x40895607,0xA700CA03,0xCAAC0300,0x3690FEF0,0x06ACC0BB,0xCCC099BE,
	0xB306E0CC,0x120020B0,0x77772ACC,0x10BB7C77,0x601F3008,0x06F710EB,0x05C74CE4,0x554C0055,

	0xC50B00C9,0xF0E7FFF0,0x00E32001,0xF0C0C427,0xF00F1003,0x03C0B601,0x7003F00C,0xE2F0C007,
	0xB8AC04A0,0x007C6B08,0x3003F0CF,0x52AAA20B,0x57725508,0x22038025,0x57607222,0x17101310,
	0xC2552222,0x554C08CC,0x03305525,0x084C2222,0x1C555255,0x22220320,0x1700B91C,0x02C8021C,
	0x1403A0D6,0x89FC0241,0x11110300,0x0C061341,0x55035000,0x140B0041,0x00410710,0x0F001407,
	0x210C1131,0x41037040,0x2A024C44,0x40004C40,0x4114141C,0x00E3411C,0xB0300049,0x440C1403,
	0x03203800,0x4000117F,0x04A0F3F0,0x03B0F3F0,0x03F0FBB0,0xC525550F,0x7003F011,0x00E31007,
	0xBE13F0E8,0xD31301F0,0xC144E300,0x14520000,0xF0110300,0x011C0003,0x4100C023,0x11C04114,
	0xEFC01114,0x03D02404,0x04C14501,0x4003F03B,0xC0F1F00B,0x03B0FFF0,0x757C5757,0x5C017575,

	0x5C575757,0xFB615555,0x03125271,0x0730E801,0x01522222,0x0310C7E8,0xC222F3E0,0xF0039211,
	0xEF03C0F2,0x03F0B30B,0x00000770,0x7003F041,0xBFF3F007,0x500C0F20,0xB0F1F003,0x90E31003,
	0x7FF3D303,0x00EB2052,0x430330FF,0x124770F2,0x990320E3,0x75C00C24,0x03305110,0x060B222C,
	0xB715CC50,0x550501CC,0x0A11CCC5,0xCC225557,0x10225201,0x22162203,0x5E04C222,0x14F3900C,
	0x40F0C26C,0x70B86003,0xCC5E00F3,0x25C00052,0x03205522,0x5F00CC00,0x005F1000,0xC1CCC10C,
	0xCC55520C,0x75550005,0xB2010C57,0xE00310C5,0xF1F05F50,0x000001B0,
};

const unsigned short profPal[16] __attribute__((aligned(4)))=
{
	0x6F75,0x2D27,0x252A,0x210F,0x4169,0x35AE,0x51C9,0x1DF6,
	0x6A2C,0x6695,0x469B,0x6F39,0x0000,0x677F,0x7FBD,0x0000,
};

//}}BLOCK(prof)
