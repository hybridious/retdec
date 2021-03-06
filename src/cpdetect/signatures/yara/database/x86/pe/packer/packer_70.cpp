/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_70.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_70 =
R"x86_pe_packer(
rule rule_WinrarSFX_530
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.30"
		source = "Made by Retdec Team"
		pattern = "E886630000E978FEFFFF8BFF558BEC568D4508508BF1E882FCFFFFC706F0B242008BC65E5DC20400C701F0B24200E937FDFFFF8BFF558BEC568BF1C706F0B24200E824FDFFFFF6450801740756E88ACAFFFF598BC65E5DC204008BFF558BEC56578B7D08"
	strings:
		$1 = { E8 86 63 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 82 FC FF FF C7 06 F0 B2 42 00 8B C6 5E 5D C2 04 00 C7 01 F0 B2 42 00 E9 37 FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 F0 B2 42 00 E8 24 FD FF FF F6 45 08 01 74 07 56 E8 8A CA FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_521
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.21"
		source = "Made by Retdec Team"
		pattern = "E885630000E978FEFFFF8BFF558BEC568D4508508BF1E882FCFFFFC70620B242008BC65E5DC20400C70120B24200E937FDFFFF8BFF558BEC568BF1C70620B24200E824FDFFFFF6450801740756E852CAFFFF598BC65E5DC204008BFF558BEC56578B7D08"
	strings:
		$1 = { E8 85 63 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 82 FC FF FF C7 06 20 B2 42 00 8B C6 5E 5D C2 04 00 C7 01 20 B2 42 00 E9 37 FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 20 B2 42 00 E8 24 FD FF FF F6 45 08 01 74 07 56 E8 52 CA FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_520
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.20"
		source = "Made by Retdec Team"
		pattern = "E885630000E978FEFFFF8BFF558BEC568D4508508BF1E882FCFFFFC70620B242008BC65E5DC20400C70120B24200E937FDFFFF8BFF558BEC568BF1C70620B24200E824FDFFFFF6450801740756E84ECAFFFF598BC65E5DC204008BFF558BEC56578B7D08"
	strings:
		$1 = { E8 85 63 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 82 FC FF FF C7 06 20 B2 42 00 8B C6 5E 5D C2 04 00 C7 01 20 B2 42 00 E9 37 FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 20 B2 42 00 E8 24 FD FF FF F6 45 08 01 74 07 56 E8 4E CA FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_511
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.11"
		source = "Made by Retdec Team"
		pattern = "E85C640000E978FEFFFF8BFF558BEC568D4508508BF1E87AFCFFFFC70620B242008BC65E5DC20400C70120B24200E92FFDFFFF8BFF558BEC568BF1C70620B24200E81CFDFFFFF6450801740756E886C9FFFF598BC65E5DC204008BFF558BEC56578B7D08"
	strings:
		$1 = { E8 5C 64 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 7A FC FF FF C7 06 20 B2 42 00 8B C6 5E 5D C2 04 00 C7 01 20 B2 42 00 E9 2F FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 20 B2 42 00 E8 1C FD FF FF F6 45 08 01 74 07 56 E8 86 C9 FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_510
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.10"
		source = "Made by Retdec Team"
		pattern = "E85D640000E978FEFFFF8BFF558BEC568D4508508BF1E87AFCFFFFC706F0B142008BC65E5DC20400C701F0B14200E92FFDFFFF8BFF558BEC568BF1C706F0B14200E81CFDFFFFF6450801740756E886C9FFFF598BC65E5DC204008BFF558BEC56578B7D08"
		strings:
		$1 = { E8 5D 64 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 7A FC FF FF C7 06 F0 B1 42 00 8B C6 5E 5D C2 04 00 C7 01 F0 B1 42 00 E9 2F FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 F0 B1 42 00 E8 1C FD FF FF F6 45 08 01 74 07 56 E8 86 C9 FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_501
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "5.0x"
		source = "Made by Retdec Team"
		pattern = "E8F0570000E978FEFFFF8BFF558BEC568D4508508BF1E805FDFFFFC706?48142008BC65E5DC20400C701?4814200E9BAFDFFFF8BFF558BEC568BF1C706?4814200E8A7FDFFFFF6450801740756E8??C9FFFF598BC65E5DC204008BFF558BEC56578B7D08"
	strings:
		$1 = { E8 F0 57 00 00 E9 78 FE FF FF 8B FF 55 8B EC 56 8D 45 08 50 8B F1 E8 05 FD FF FF C7 06 ?4 81 42 00 8B C6 5E 5D C2 04 00 C7 01 ?4 81 42 00 E9 BA FD FF FF 8B FF 55 8B EC 56 8B F1 C7 06 ?4 81 42 00 E8 A7 FD FF FF F6 45 08 01 74 07 56 E8 ?? C9 FF FF 59 8B C6 5E 5D C2 04 00 8B FF 55 8B EC 56 57 8B 7D 08 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_420
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "4.20"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E89F300000C356578B7C240C8BF18BCF893EE88FABFFFF89460889560C8B87240C00008946105F8BC65EC204008BC18B088B50103B91240C0000750D6A00FF700CFF7008E80EB1FFFFC3568BF18B0685C0740750FF15C44041"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 9F 30 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 8F AB FF FF 89 46 08 89 56 0C 8B 87 24 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 24 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 0E B1 FF FF C3 56 8B F1 8B 06 85 C0 74 07 50 FF 15 C4 40 41 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_411
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "4.11"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8F22D0000C356578B7C240C8BF18BCF893EE8EE9FFFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E817A5FFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 F2 2D 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 EE 9F FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 17 A5 FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_410
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "4.10"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8F22D0000C356578B7C240C8BF18BCF893EE8B0A1FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E8D9A6FFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 F2 2D 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 B0 A1 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 D9 A6 FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_401
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "4.01"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8D52D0000C356578B7C240C8BF18BCF893EE8F3A0FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E81CA6FFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 D5 2D 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 F3 A0 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 1C A6 FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_400
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "4.00"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E87F2D0000C356578B7C240C8BF18BCF893EE81EA1FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E847A6FFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 7F 2D 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 1E A1 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 47 A6 FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_393
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.93"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8BE2B0000C356578B7C240C8BF18BCF893EE8D0A7FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E8AFACFFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 BE 2B 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 D0 A7 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 AF AC FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_392
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.92"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8BE2B0000C356578B7C240C8BF18BCF893EE8F6A7FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E8D5ACFFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 BE 2B 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 F6 A7 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 D5 AC FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_391
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.91"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8BE2B0000C356578B7C240C8BF18BCF893EE8E2A7FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E8C1ACFFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 BE 2B 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 E2 A7 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 C1 AC FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_390
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.90"
		source = "Made by Retdec Team"
		pattern = "E8E3FEFFFF33C050505050E8542B0000C356578B7C240C8BF18BCF893EE8E2A7FFFF89460889560C8B871C0C00008946105F8BC65EC204008BC18B088B50103B911C0C0000750D6A00FF700CFF7008E8C1ACFFFFC3558BEC83EC1C5633F6565656568D45"
	strings:
		$1 = { E8 E3 FE FF FF 33 C0 50 50 50 50 E8 54 2B 00 00 C3 56 57 8B 7C 24 0C 8B F1 8B CF 89 3E E8 E2 A7 FF FF 89 46 08 89 56 0C 8B 87 1C 0C 00 00 89 46 10 5F 8B C6 5E C2 04 00 8B C1 8B 08 8B 50 10 3B 91 1C 0C 00 00 75 0D 6A 00 FF 70 0C FF 70 08 E8 C1 AC FF FF C3 55 8B EC 83 EC 1C 56 33 F6 56 56 56 56 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_380
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.80"
		source = "Made by Retdec Team"
		pattern = "E86F2B000050E8733601000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E55041006A006A008BC68BCFE87A48000081EB1001000074054B7414EB57FF75146A6656E8DE380100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 6F 2B 00 00 50 E8 73 36 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E5 50 41 00 6A 00 6A 00 8B C6 8B CF E8 7A 48 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 DE 38 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_371
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.71"
		source = "Made by Retdec Team"
		pattern = "E8F32A000050E83B3301000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E15041006A006A008BC68BCFE8A247000081EB1001000074054B7414EB57FF75146A6656E89A350100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 F3 2A 00 00 50 E8 3B 33 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E1 50 41 00 6A 00 6A 00 8B C6 8B CF E8 A2 47 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 9A 35 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_370
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.70"
		source = "Made by Retdec Team"
		pattern = "E82F2B000050E83F3101000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E15041006A006A008BC68BCFE85247000081EB1001000074054B7414EB57FF75146A6656E89E330100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 2F 2B 00 00 50 E8 3F 31 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E1 50 41 00 6A 00 6A 00 8B C6 8B CF E8 52 47 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 9E 33 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_362
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.62"
		source = "Made by Retdec Team"
		pattern = "E88F28000050E8CB2901000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E54041006A006A008BC68BCFE80A44000081EB1001000074054B7414EB57FF75146A6656E8222C0100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 8F 28 00 00 50 E8 CB 29 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E5 40 41 00 6A 00 6A 00 8B C6 8B CF E8 0A 44 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 22 2C 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_361
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.61"
		source = "Made by Retdec Team"
		pattern = "E89F28000050E8832A01000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E54041006A006A008BC68BCFE82A44000081EB1001000074054B7414EB57FF75146A6656E8DA2C0100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 9F 28 00 00 50 E8 83 2A 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E5 40 41 00 6A 00 6A 00 8B C6 8B CF E8 2A 44 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 DA 2C 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_WinrarSFX_35x
{
	meta:
		tool = "I"
		name = "WinRAR SFX"
		version = "3.5x"
		source = "Made by Retdec Team"
		pattern = "E89B27000050E8A72201000000000090558BEC5356578B7D108B5D0C8B75088BD3FF751468E54041006A006A008BC68BCFE82643000081EB1001000074054B7414EB57FF75146A6656E8F8240100B801000000EB476681E7FFFF66FFCF740766FFCF7423"
	strings:
		$1 = { E8 9B 27 00 00 50 E8 A7 22 01 00 00 00 00 00 90 55 8B EC 53 56 57 8B 7D 10 8B 5D 0C 8B 75 08 8B D3 FF 75 14 68 E5 40 41 00 6A 00 6A 00 8B C6 8B CF E8 26 43 00 00 81 EB 10 01 00 00 74 05 4B 74 14 EB 57 FF 75 14 6A 66 56 E8 F8 24 01 00 B8 01 00 00 00 EB 47 66 81 E7 FF FF 66 FF CF 74 07 66 FF CF 74 23 }
	condition:
		for any of them : ( $ at pe.entry_point )
})x86_pe_packer";
