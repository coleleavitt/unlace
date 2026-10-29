__int64 __fastcall sub_5440(__int64 a1, __int64 a2)
{
  int wide_byte; // ebx
  int v4; // eax
  __int64 *v5; // r15
  __int64 *v6; // rbx
  int i; // eax
  const char *v8; // rcx
  const char *v9; // rdi
  const char *v10; // rax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // rsi
  int j; // eax
  int v16; // edi
  int k; // ecx
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // [rsp+Ch] [rbp-4Ch]
  __int64 v29; // [rsp+10h] [rbp-48h]

  wide_byte = (unsigned __int16)get_wide_byte();
  v4 = get_wide_byte();
  *(_QWORD *)(a1 + 248) = a2 + 40;
  v5 = &qword_18140 - 2976;
  v28 = (v4 << 16) | wide_byte;
  v29 = a2 + 40;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(_BYTE)byte_12428 && __cxa_guard_acquire(&byte_12428) )
      {
        memset(&qword_12440, 0, 0x5D00u);
        word_12448 = 90;
        qword_12440 = (__int64)"0000000000000000";
        qword_12500 = (__int64)"0000000000100000";
        qword_125C0 = (__int64)"0000000010fmmnnn";
        qword_125F0 = (__int64)sub_4ED0;
        qword_12680 = (__int64)"0000000001arrrrr";
        word_12688 = 63;
        word_12508 = 94;
        word_125C8 = 91;
        qword_126A0 = 0x1800000020LL;
        qword_12740 = (__int64)"000000010abrrrrr";
        qword_125D0 = (__int64)sub_4F20;
        qword_12690 = (__int64)sub_4DF0;
        qword_126B0 = (__int64)sub_48D0;
        word_12748 = 64;
        qword_12750 = (__int64)sub_48D0;
        qword_12770 = (__int64)sub_4D70;
        qword_12800 = (__int64)"000000011abmmnnn";
        word_12808 = 64;
        qword_12810 = (__int64)sub_4F20;
        byte_124F0 = 1;
        byte_125B0 = 1;
        dword_125E0 = 31;
        dword_12600 = 32;
        byte_12670 = 1;
        dword_126C0 = 31;
        byte_12730 = 3;
        dword_12760 = 31;
        dword_12780 = 96;
        byte_127F0 = 1;
        dword_12820 = 31;
        qword_12830 = (__int64)sub_4D70;
        qword_12980 = (__int64)"00001000vvvvvvvv";
        qword_12A40 = (__int64)"00000101vvvvvvvv";
        qword_12B00 = (__int64)"00001001vvvvvvvv";
        word_12B08 = 88;
        qword_128C0 = (__int64)"00000100vvvvvvvv";
        qword_12BC0 = (__int64)"00001101---rrrrr";
        word_128C8 = 95;
        word_12988 = 56;
        qword_12990 = (__int64)sub_48D0;
        word_12A48 = 62;
        qword_12A70 = (__int64)sub_48D0;
        word_12BC8 = 72;
        qword_12BD0 = (__int64)sub_48D0;
        qword_12C80 = (__int64)"00001100vvvvvvvv";
        dword_12840 = 96;
        byte_128B0 = 1;
        qword_128D0 = (__int64)sub_49C0;
        dword_128E0 = 255;
        byte_12970 = 1;
        dword_129A4 = 7;
        qword_129B0 = (__int64)sub_49C0;
        dword_129C0 = 255;
        byte_12A30 = 1;
        qword_12A50 = (__int64)sub_49C0;
        dword_12A60 = 255;
        dword_12A84 = 31;
        byte_12AF0 = 1;
        qword_12B10 = (__int64)sub_49C0;
        dword_12B20 = 255;
        byte_12BB0 = 3;
        dword_12BE0 = 31;
        byte_12C70 = 1;
        word_12C88 = 72;
        qword_12D40 = (__int64)"0000011iiqqmmnnn";
        word_12E08 = 35;
        qword_12D70 = (__int64)sub_4D30;
        qword_12EC0 = (__int64)"0000x01vvvvvvvvv";
        qword_12F00 = 0x8000002800000800LL;
        word_12D48 = 63;
        qword_12E00 = (__int64)"0000111adddddddd";
        qword_12F80 = (__int64)"000110rrrrrmmnnn";
        word_12F88 = 62;
        qword_12D50 = (__int64)sub_4F20;
        word_12EC8 = 96;
        qword_12EF0 = (__int64)sub_48D0;
        qword_12F90 = (__int64)sub_48D0;
        qword_12FB0 = (__int64)sub_4F20;
        qword_12C90 = (__int64)sub_49C0;
        dword_12CA0 = 255;
        byte_12D30 = 1;
        dword_12D60 = 31;
        dword_12D80 = 480;
        byte_12DF0 = 3;
        qword_12E10 = (__int64)sub_50A0;
        dword_12E20 = 255;
        qword_12E30 = (__int64)sub_4F90;
        dword_12E40 = 256;
        byte_12EB0 = 1;
        qword_12ED0 = (__int64)sub_49C0;
        dword_12EE0 = 511;
        byte_12F70 = 1;
        dword_12FA0 = 992;
        dword_12FC0 = 31;
        byte_13030 = 1;
        qword_13040 = (__int64)"000111rrrrrmmnnn";
        word_13048 = 62;
        qword_13130 = (__int64)sub_4BB0;
        qword_13100 = (__int64)"00010ooooooocccc";
        qword_13110 = (__int64)sub_5230;
        qword_13280 = (__int64)"001a0001vvvvvvvv";
        word_13108 = 80;
        word_13288 = 62;
        qword_131C0 = (__int64)"0010nnn0dddddddd";
        qword_132C0 = 0x8000001A00001000LL;
        qword_13340 = (__int64)"001a0101vvvvvvvv";
        qword_13050 = (__int64)sub_4F20;
        qword_13070 = (__int64)sub_48D0;
        word_131C8 = 62;
        qword_131D0 = (__int64)sub_5010;
        qword_132B0 = (__int64)sub_48D0;
        word_13348 = 62;
        dword_13060 = 31;
        dword_13080 = 992;
        byte_130F0 = 1;
        dword_13120 = 2032;
        dword_13140 = 15;
        byte_131B0 = 2;
        dword_131E0 = 3584;
        qword_131F0 = (__int64)sub_50A0;
        dword_13200 = 255;
        byte_13270 = 1;
        qword_13290 = (__int64)sub_49C0;
        dword_132A0 = 255;
        byte_13330 = 1;
        qword_13350 = (__int64)sub_49C0;
        dword_13360 = 255;
        qword_13370 = (__int64)sub_48D0;
        qword_13400 = (__int64)"001nnn11vvvvvvvv";
        qword_134C0 = (__int64)"001x1x01vvvvvvvv";
        word_134C8 = 62;
        qword_134F0 = (__int64)sub_5050;
        qword_13580 = (__int64)"0011ABL0dddddddd";
        qword_13640 = (__int64)"0100001110000000";
        word_13408 = 62;
        qword_13700 = (__int64)"0100001111000000";
        qword_13590 = (__int64)sub_4DB0;
        qword_137C0 = (__int64)"0100000110000000";
        qword_13380 = 0x8000001C00001000LL;
        qword_13430 = (__int64)sub_5010;
        word_13708 = 92;
        word_137C8 = 77;
        word_13588 = 62;
        word_13648 = 93;
        byte_133F0 = 1;
        qword_13410 = (__int64)sub_49C0;
        dword_13420 = 255;
        dword_13440 = 7168;
        byte_134B0 = 1;
        qword_134D0 = (__int64)sub_49C0;
        dword_134E0 = 255;
        dword_13500 = 5120;
        byte_13570 = 1;
        dword_135A0 = 3584;
        qword_135B0 = (__int64)sub_50A0;
        dword_135C0 = 255;
        byte_13630 = 1;
        byte_136F0 = 1;
        byte_137B0 = 1;
        qword_137D0 = (__int64)sub_5120;
        qword_13880 = (__int64)"0100010110000000";
        qword_13940 = (__int64)"01001101100000vv";
        qword_13A00 = (__int64)"01000101110f0000";
        word_13A08 = 86;
        qword_13AC0 = (__int64)"010001011000cccc";
        qword_13AD0 = (__int64)sub_4BB0;
        qword_13B80 = (__int64)"010000011000cccc";
        word_13B88 = 75;
        word_13948 = 96;
        qword_13BB0 = (__int64)sub_4BB0;
        word_13AC8 = 82;
        qword_13C40 = (__int64)"010000011100cccc";
        word_13888 = 83;
        word_13C48 = 79;
        qword_13970 = (__int64)sub_48D0;
        qword_13A10 = (__int64)sub_4E30;
        qword_13AE0 = 0x10000000FLL;
        qword_13B90 = (__int64)sub_5120;
        dword_137E0 = -65536;
        byte_13870 = 2;
        byte_13930 = 2;
        qword_13950 = (__int64)sub_49C0;
        dword_13960 = 3;
        dword_13984 = 36;
        byte_139F0 = 1;
        dword_13A20 = 16;
        byte_13AB0 = 2;
        byte_13B70 = 2;
        dword_13BA0 = -65536;
        dword_13BC0 = 15;
        byte_13C30 = 2;
        qword_13C50 = (__int64)sub_5120;
        qword_13C70 = (__int64)sub_4BB0;
        qword_13DD0 = (__int64)sub_4DF0;
        qword_13D00 = (__int64)"01000111110rrrrr";
        qword_13E80 = (__int64)"01000101110fcccc";
        word_13D08 = 62;
        word_13E88 = 85;
        qword_13DC0 = (__int64)"01000111111rrrrr";
        qword_13F40 = (__int64)"0100100110--swap";
        word_13DC8 = 62;
        qword_13F50 = (__int64)sub_4E40;
        qword_13E90 = (__int64)sub_4BB0;
        qword_13EB0 = (__int64)sub_4E30;
        qword_14000 = (__int64)"0100111111-rrrrr";
        qword_13D10 = (__int64)sub_48D0;
        qword_13D30 = (__int64)sub_48D0;
        qword_13DF0 = (__int64)sub_48D0;
        qword_13EA0 = 0x10000000FLL;
        word_13F48 = 70;
        word_14008 = 62;
        dword_13C60 = -65536;
        dword_13C80 = 15;
        byte_13CF0 = 2;
        dword_13D24 = 34;
        dword_13D40 = 31;
        byte_13DB0 = 1;
        dword_13DE4 = 13;
        dword_13E00 = 31;
        byte_13E70 = 1;
        dword_13EC0 = 16;
        byte_13F30 = 1;
        dword_13F60 = 15;
        byte_13FF0 = 1;
        qword_14010 = (__int64)sub_48D0;
        qword_140C0 = (__int64)"0100111110-vvvvv";
        qword_14180 = (__int64)"0100100111xx----";
        word_14188 = 47;
        qword_14190 = (__int64)sub_4C10;
        qword_14240 = (__int64)"010010111---bank";
        word_14248 = 71;
        qword_14300 = (__int64)"0100nnn01abvvvvv";
        word_140C8 = 62;
        qword_14250 = (__int64)sub_4E70;
        qword_14350 = (__int64)sub_4A00;
        qword_14310 = (__int64)sub_5010;
        qword_143C0 = (__int64)"0100xxxa0ooooooo";
        qword_14030 = (__int64)sub_48D0;
        qword_140F0 = (__int64)sub_48D0;
        word_14308 = 65;
        qword_14330 = (__int64)sub_4D70;
        qword_14360 = 0x50000001FLL;
        dword_14020 = 31;
        dword_14044 = 35;
        byte_140B0 = 1;
        qword_140D0 = (__int64)sub_49C0;
        dword_140E0 = 31;
        dword_14104 = 35;
        byte_14170 = 1;
        dword_141A0 = 48;
        byte_14230 = 1;
        dword_14260 = 15;
        byte_142F0 = 1;
        dword_14320 = 3584;
        dword_14340 = 96;
        byte_143B0 = 1;
        word_143C8 = 1;
        qword_14480 = (__int64)"0101111101000000";
        qword_14540 = (__int64)"01011110010rrrrr";
        word_14548 = 68;
        qword_14600 = (__int64)"01011110011rrrrr";
        qword_146C0 = (__int64)"01011110100rrrrr";
        qword_143F0 = (__int64)sub_4B00;
        qword_14780 = (__int64)"0101111011brrrrr";
        qword_143D0 = (__int64)sub_4930;
        word_14488 = 68;
        word_14788 = 62;
        qword_14490 = (__int64)sub_4AA0;
        qword_14550 = (__int64)sub_48D0;
        word_14608 = 69;
        qword_14610 = (__int64)sub_48D0;
        word_146C8 = 62;
        qword_146D0 = (__int64)sub_48D0;
        qword_146F0 = (__int64)sub_48D0;
        qword_143E0 = 0x100000E00LL;
        dword_14400 = 127;
        qword_14410 = (__int64)sub_4F90;
        dword_14420 = 256;
        byte_14470 = 1;
        dword_144A0 = -65536;
        byte_14530 = 2;
        dword_14560 = 31;
        byte_145F0 = 1;
        dword_14620 = 31;
        byte_146B0 = 1;
        dword_146E0 = 31;
        dword_14704 = 34;
        byte_14770 = 1;
        qword_14790 = (__int64)sub_48D0;
        qword_14840 = (__int64)"01011101000rrrrr";
        qword_14900 = (__int64)"0101111-000rrrrr";
        word_14908 = 62;
        qword_149C0 = (__int64)"0101111b001-----";
        word_14848 = 73;
        qword_14A80 = (__int64)"010111111jjiiwqq";
        word_149C8 = 62;
        word_14A88 = 67;
        qword_14A90 = (__int64)sub_4C70;
        qword_14B40 = (__int64)"01011100vvvvvvvv";
        qword_147B0 = (__int64)sub_4FD0;
        qword_14850 = (__int64)sub_48D0;
        qword_14870 = (__int64)sub_5120;
        qword_14910 = (__int64)sub_4AA0;
        qword_14930 = (__int64)sub_48D0;
        qword_149D0 = (__int64)sub_4AA0;
        qword_149F0 = (__int64)sub_4FD0;
        qword_14AA0 = 0x10000007FLL;
        dword_147A0 = 31;
        dword_147C0 = 32;
        byte_14830 = 1;
        dword_14860 = 31;
        dword_14880 = -65536;
        byte_148F0 = 2;
        dword_14920 = -65536;
        dword_14940 = 31;
        byte_149B0 = 2;
        dword_149E0 = -65536;
        dword_14A00 = 256;
        byte_14A70 = 2;
        byte_14B30 = 4;
        word_14B48 = 73;
        qword_14C00 = (__int64)"010110RRRRRrrrrr";
        qword_14B70 = (__int64)sub_5120;
        qword_14CC0 = (__int64)"01010ooooooo0000";
        qword_14CD0 = (__int64)sub_5230;
        qword_14D90 = (__int64)sub_5230;
        word_14C08 = 62;
        word_14CC8 = 78;
        qword_14E40 = (__int64)"01101101dddddddd";
        qword_14D80 = (__int64)"01010ooooooocccc";
        word_14D88 = 76;
        word_14E48 = 62;
        qword_14C10 = (__int64)sub_48D0;
        qword_14C30 = (__int64)sub_48D0;
        qword_14DB0 = (__int64)sub_4BB0;
        qword_14E70 = (__int64)sub_48D0;
        qword_14F00 = (__int64)"011nnn00dddddddd";
        qword_14B50 = (__int64)sub_49C0;
        dword_14B60 = 255;
        dword_14B80 = -65536;
        byte_14BF0 = 2;
        dword_14C20 = 31;
        dword_14C40 = 992;
        byte_14CB0 = 1;
        dword_14CE0 = 2032;
        byte_14D70 = 2;
        dword_14DA0 = 2032;
        dword_14DC0 = 15;
        byte_14E30 = 2;
        qword_14E50 = (__int64)sub_50A0;
        dword_14E60 = 255;
        dword_14E84 = 31;
        byte_14EF0 = 1;
        word_14F08 = 62;
        qword_14F30 = (__int64)sub_5010;
        word_15088 = 62;
        qword_150B0 = (__int64)sub_4DB0;
        qword_15140 = (__int64)"011A0101dddddddd";
        qword_14FC0 = (__int64)"011AB001dddddddd";
        qword_15190 = (__int64)sub_4F00;
        word_14FC8 = 62;
        qword_15200 = (__int64)"011ab011dddddddd";
        qword_15080 = (__int64)"011ABL10dddddddd";
        word_15208 = 64;
        qword_14FF0 = (__int64)sub_4D70;
        word_15148 = 97;
        qword_15230 = (__int64)sub_4D70;
        qword_14F10 = (__int64)sub_50A0;
        dword_14F20 = 255;
        dword_14F40 = 7168;
        byte_14FB0 = 1;
        qword_14FD0 = (__int64)sub_50A0;
        dword_14FE0 = 255;
        dword_15000 = 6144;
        byte_15070 = 1;
        qword_15090 = (__int64)sub_50A0;
        dword_150A0 = 255;
        dword_150C0 = 7168;
        byte_15130 = 1;
        qword_15150 = (__int64)sub_50A0;
        dword_15160 = 255;
        qword_15170 = (__int64)sub_4F90;
        dword_15180 = 4096;
        byte_151F0 = 1;
        qword_15210 = (__int64)sub_50A0;
        dword_15220 = 255;
        dword_15240 = 6144;
        qword_152C0 = (__int64)"011b11110fffcccc";
        qword_152D0 = (__int64)sub_4990;
        qword_15390 = (__int64)sub_4990;
        qword_15440 = (__int64)"01111101dddddddd";
        word_152C8 = 1;
        word_15448 = 62;
        qword_15310 = (__int64)sub_4BB0;
        qword_15380 = (__int64)"011a0111ffffcccc";
        qword_153D0 = (__int64)sub_4BB0;
        qword_15500 = (__int64)"100000fa011mm000";
        qword_152F0 = (__int64)sub_4FD0;
        word_15388 = 1;
        qword_15450 = (__int64)sub_48D0;
        word_15508 = 44;
        qword_15530 = (__int64)sub_4F20;
        qword_152E0 = 0x100000070LL;
        byte_152B0 = 1;
        dword_15300 = 4096;
        dword_15320 = 15;
        byte_15370 = 1;
        dword_153A0 = 240;
        qword_153B0 = (__int64)sub_4F90;
        dword_153C0 = 4096;
        dword_153E0 = 15;
        byte_15430 = 1;
        dword_15464 = 31;
        qword_15470 = (__int64)sub_50A0;
        dword_15480 = 255;
        byte_154F0 = 1;
        qword_15510 = (__int64)sub_4F90;
        dword_15520 = 256;
        dword_15540 = 31;
        qword_15550 = (__int64)sub_4BE0;
        qword_15610 = (__int64)sub_4BE0;
        qword_156D0 = (__int64)sub_4BE0;
        qword_155C0 = (__int64)"100001fa011mm000";
        word_155C8 = 45;
        qword_156E0 = 0x100000200LL;
        qword_15680 = (__int64)"10001-fa011mm000";
        qword_15740 = (__int64)"1000xxxa11000000";
        word_15748 = 1;
        qword_15800 = (__int64)"1000xxx0111mmnnn";
        qword_155F0 = (__int64)sub_4F20;
        word_15688 = 46;
        qword_156B0 = (__int64)sub_4F20;
        qword_15750 = (__int64)sub_4930;
        qword_15770 = (__int64)sub_4AA0;
        qword_15760 = 0x100000E00LL;
        dword_15560 = 512;
        byte_155B0 = 1;
        qword_155D0 = (__int64)sub_4F90;
        dword_155E0 = 256;
        dword_15600 = 31;
        dword_15620 = 512;
        byte_15670 = 1;
        qword_15690 = (__int64)sub_4F90;
        dword_156A0 = 256;
        dword_156C0 = 31;
        byte_15730 = 1;
        dword_15780 = -65536;
        qword_15790 = (__int64)sub_4F90;
        dword_157A0 = 256;
        byte_157F0 = 2;
        word_15808 = 1;
        qword_158C0 = (__int64)"1000xxx1111rrrrr";
        word_158C8 = 1;
        qword_15980 = (__int64)"1000-00x001mmnnn";
        qword_15A40 = (__int64)"1000axxx001mmnnn";
        word_15988 = 1;
        word_15A48 = 1;
        qword_15830 = (__int64)sub_4AA0;
        qword_15850 = (__int64)sub_4F20;
        qword_158F0 = (__int64)sub_4AA0;
        qword_15910 = (__int64)sub_48D0;
        qword_159B0 = (__int64)sub_48D0;
        qword_159D0 = (__int64)sub_4F20;
        qword_15A70 = (__int64)sub_48D0;
        qword_15A90 = (__int64)sub_4F20;
        qword_15810 = (__int64)sub_4980;
        dword_15820 = 3584;
        dword_15840 = -65536;
        dword_15860 = 31;
        byte_158B0 = 2;
        qword_158D0 = (__int64)sub_4980;
        dword_158E0 = 3584;
        dword_15900 = -65536;
        dword_15920 = 31;
        byte_15970 = 2;
        qword_15990 = (__int64)sub_4F60;
        dword_159A0 = 1792;
        dword_159C4 = 7;
        dword_159E0 = 31;
        byte_15A30 = 1;
        qword_15A50 = (__int64)sub_4F60;
        dword_15A60 = 1792;
        dword_15A84 = 7;
        dword_15AA0 = 31;
        qword_15B00 = (__int64)"1000-00x010rrrrr";
        word_15B08 = 1;
        qword_15BC0 = (__int64)"1000axxx010rrrrr";
        word_15BC8 = 1;
        qword_15C80 = (__int64)"1000-00x000mmnnn";
        word_15C88 = 1;
        qword_15B30 = (__int64)sub_48D0;
        qword_15B50 = (__int64)sub_48D0;
        qword_15BF0 = (__int64)sub_48D0;
        qword_15C10 = (__int64)sub_48D0;
        qword_15CB0 = (__int64)sub_4F20;
        qword_15CD0 = (__int64)sub_4AA0;
        qword_15AB0 = (__int64)sub_4F90;
        dword_15AC0 = 2048;
        byte_15AF0 = 1;
        qword_15B10 = (__int64)sub_4F60;
        dword_15B20 = 1792;
        dword_15B44 = 7;
        dword_15B60 = 31;
        byte_15BB0 = 1;
        qword_15BD0 = (__int64)sub_4F60;
        dword_15BE0 = 1792;
        dword_15C04 = 7;
        dword_15C20 = 31;
        qword_15C30 = (__int64)sub_4F90;
        dword_15C40 = 2048;
        byte_15C70 = 1;
        qword_15C90 = (__int64)sub_4F60;
        dword_15CA0 = 1792;
        dword_15CC0 = 31;
        dword_15CE0 = -65536;
        byte_15D30 = 2;
        qword_15D40 = (__int64)"1000axxx000mmnnn";
        word_15D48 = 1;
        qword_15E00 = (__int64)"100xxxxa100mmnnn";
        word_15E08 = 1;
        qword_15E10 = (__int64)sub_4930;
        qword_15EC0 = (__int64)"100xxxxa101rrrrr";
        word_15EC8 = 1;
        qword_15ED0 = (__int64)sub_4930;
        qword_15F80 = (__int64)"1001000a110mmnnn";
        word_15F88 = 57;
        qword_15D70 = (__int64)sub_4F20;
        qword_15D90 = (__int64)sub_4AA0;
        qword_15E30 = (__int64)sub_4F20;
        qword_15EF0 = (__int64)sub_48D0;
        qword_15F90 = (__int64)sub_4F20;
        qword_15D50 = (__int64)sub_4F60;
        dword_15D60 = 1792;
        dword_15D80 = 31;
        dword_15DA0 = -65536;
        qword_15DB0 = (__int64)sub_4F90;
        dword_15DC0 = 2048;
        byte_15DF0 = 2;
        dword_15E20 = 7680;
        dword_15E40 = 31;
        qword_15E50 = (__int64)sub_4F90;
        dword_15E60 = 256;
        byte_15EB0 = 1;
        dword_15EE0 = 7680;
        dword_15F00 = 31;
        qword_15F10 = (__int64)sub_4F90;
        dword_15F20 = 256;
        byte_15F70 = 1;
        dword_15FA0 = 31;
        qword_15FB0 = (__int64)sub_4AA0;
        qword_16040 = (__int64)"1001010a110mmnnn";
        word_16048 = 34;
        qword_16100 = (__int64)"1001bbbb001mmnnn";
        word_16108 = 58;
        qword_161C0 = (__int64)"1001bbbb000rrrrr";
        word_161C8 = 58;
        qword_16280 = (__int64)"1001ab1AB1vvvvvv";
        word_16288 = 60;
        qword_162D0 = (__int64)sub_4A00;
        qword_16070 = (__int64)sub_4F20;
        qword_16130 = (__int64)sub_4F20;
        qword_161F0 = (__int64)sub_48D0;
        qword_16290 = (__int64)sub_4D70;
        qword_162B0 = (__int64)sub_4D70;
        dword_15FC0 = -65536;
        qword_15FD0 = (__int64)sub_4F90;
        dword_15FE0 = 256;
        byte_16030 = 2;
        qword_16050 = (__int64)sub_4F90;
        dword_16060 = 256;
        dword_16080 = 31;
        byte_160F0 = 2;
        qword_16110 = (__int64)sub_49C0;
        dword_16120 = 3840;
        dword_16140 = 31;
        byte_161B0 = 1;
        qword_161D0 = (__int64)sub_49C0;
        dword_161E0 = 3840;
        dword_16200 = 31;
        byte_16270 = 1;
        dword_162A0 = 3072;
        dword_162C0 = 384;
        qword_16340 = (__int64)"1001100a010mmnnn";
        word_16348 = 61;
        qword_16400 = (__int64)"1001000a010rrrrr";
        word_16408 = 61;
        qword_164C0 = (__int64)"1001000a0110000b";
        word_164C8 = 61;
        qword_16580 = (__int64)"10011100010mmnnn";
        word_16588 = 61;
        qword_16640 = (__int64)"10010100010rrrrr";
        qword_16350 = (__int64)sub_4F20;
        qword_16410 = (__int64)sub_48D0;
        qword_164D0 = (__int64)sub_4FD0;
        qword_16590 = (__int64)sub_4F20;
        qword_165B0 = (__int64)sub_48D0;
        qword_162E0 = 0x60000003FLL;
        byte_16330 = 1;
        dword_16360 = 31;
        qword_16370 = (__int64)sub_4F90;
        dword_16380 = 256;
        byte_163F0 = 1;
        dword_16420 = 31;
        qword_16430 = (__int64)sub_4F90;
        dword_16440 = 256;
        byte_164B0 = 1;
        dword_164E0 = 1;
        qword_164F0 = (__int64)sub_4F90;
        dword_16500 = 256;
        byte_16570 = 1;
        dword_165A0 = 31;
        dword_165C4 = 31;
        byte_16630 = 1;
        word_16648 = 61;
        qword_16700 = (__int64)"100101000110000b";
        word_16708 = 61;
        qword_167C0 = (__int64)"1001100b110mmnnn";
        word_167C8 = 62;
        qword_16880 = (__int64)"1001110a110rrrrr";
        qword_16710 = (__int64)sub_4FD0;
        qword_167D0 = (__int64)sub_4F20;
        qword_167F0 = (__int64)sub_4FD0;
        qword_16940 = (__int64)"1001110a111mmnnn";
        qword_16950 = (__int64)sub_4F20;
        qword_16650 = (__int64)sub_48D0;
        qword_16670 = (__int64)sub_48D0;
        qword_16730 = (__int64)sub_48D0;
        word_16888 = 66;
        qword_16890 = (__int64)sub_48D0;
        word_16948 = 66;
        dword_16660 = 31;
        dword_16684 = 31;
        byte_166F0 = 1;
        dword_16720 = 1;
        dword_16744 = 31;
        byte_167B0 = 1;
        dword_167E0 = 31;
        dword_16800 = 256;
        byte_16870 = 1;
        dword_168A0 = 31;
        qword_168B0 = (__int64)sub_4F90;
        dword_168C0 = 256;
        byte_16930 = 1;
        dword_16960 = 31;
        qword_16970 = (__int64)sub_4F90;
        dword_16980 = 256;
        byte_169F0 = 1;
        qword_16A00 = (__int64)"101xxxxadddddddd";
        qword_16AC0 = (__int64)"1100xxxavvvvvvvv";
        word_16AC8 = 1;
        qword_16B80 = (__int64)"1101001111000000";
        qword_16C40 = (__int64)"1101011110000000";
        qword_16D00 = (__int64)"1101011111000000";
        word_16A08 = 1;
        word_16D08 = 87;
        qword_16A10 = (__int64)sub_4930;
        qword_16AD0 = (__int64)sub_4930;
        word_16B88 = 74;
        qword_16DC0 = (__int64)"1101010a10000000";
        word_16C48 = 84;
        word_16DC8 = 81;
        qword_16AE0 = 0x100000E00LL;
        dword_16A20 = 7680;
        qword_16A30 = (__int64)sub_50A0;
        dword_16A40 = 255;
        qword_16A50 = (__int64)sub_4F90;
        dword_16A60 = 256;
        byte_16AB0 = 1;
        qword_16AF0 = (__int64)sub_49C0;
        dword_16B00 = 255;
        qword_16B10 = (__int64)sub_4F90;
        dword_16B20 = 256;
        byte_16B70 = 1;
        byte_16C30 = 1;
        byte_16CF0 = 1;
        byte_16DB0 = 1;
        qword_16DD0 = (__int64)sub_4F90;
        dword_16DE0 = 256;
        byte_16E70 = 3;
        qword_16E80 = (__int64)"11010011100f0000";
        qword_16E90 = (__int64)sub_4EA0;
        qword_16F40 = (__int64)"110101001ab10000";
        word_16F48 = 62;
        qword_17000 = (__int64)"110101001ab10001";
        qword_170C0 = (__int64)"110101001ab10010";
        qword_17180 = (__int64)"110101001ab10011";
        word_16E88 = 89;
        word_17008 = 62;
        word_17188 = 62;
        qword_16F50 = (__int64)sub_48D0;
        qword_16F70 = (__int64)sub_4D70;
        qword_17010 = (__int64)sub_48D0;
        qword_17030 = (__int64)sub_4D70;
        word_170C8 = 62;
        qword_170D0 = (__int64)sub_48D0;
        qword_170F0 = (__int64)sub_4D70;
        qword_17190 = (__int64)sub_48D0;
        qword_171B0 = (__int64)sub_4D70;
        dword_16EA0 = 16;
        byte_16F30 = 1;
        dword_16F64 = 37;
        dword_16F80 = 96;
        byte_16FF0 = 1;
        dword_17024 = 33;
        dword_17040 = 96;
        byte_170B0 = 1;
        dword_170E4 = 35;
        dword_17100 = 96;
        byte_17170 = 1;
        dword_171A4 = 32;
        dword_171C0 = 96;
        byte_17230 = 1;
        qword_17240 = (__int64)"1101010a101110--";
        word_17248 = 62;
        word_173C8 = 62;
        qword_17480 = (__int64)"1101010a100111--";
        qword_17300 = (__int64)"1101010a101111--";
        word_17488 = 62;
        word_17308 = 62;
        qword_17540 = (__int64)"1101010a11011xxx";
        qword_173C0 = (__int64)"1101010a100110--";
        word_17548 = 1;
        qword_17250 = (__int64)sub_51A0;
        qword_17310 = (__int64)sub_48D0;
        qword_17330 = (__int64)sub_51A0;
        qword_173D0 = (__int64)sub_4B60;
        qword_17490 = (__int64)sub_48D0;
        qword_174B0 = (__int64)sub_4B60;
        qword_17550 = (__int64)sub_4930;
        dword_17260 = -65536;
        qword_17270 = (__int64)sub_4F90;
        dword_17280 = 256;
        byte_172F0 = 2;
        dword_17340 = -65536;
        byte_173B0 = 2;
        dword_173E0 = -65536;
        qword_173F0 = (__int64)sub_4F90;
        dword_17400 = 256;
        byte_17470 = 2;
        dword_174C0 = -65536;
        byte_17530 = 2;
        qword_17320 = 0x8000001A00000100LL;
        qword_174A0 = 0x8000001A00000100LL;
        qword_17560 = 0x100000007LL;
        qword_17570 = (__int64)sub_4B60;
        qword_17600 = (__int64)"1101010a11111xxx";
        word_17608 = 1;
        qword_176C0 = (__int64)"1101AB1011011000";
        qword_17780 = (__int64)"1101AB1010011000";
        qword_17840 = (__int64)"1101ab101AB10000";
        qword_17610 = (__int64)sub_4930;
        qword_17630 = (__int64)sub_51A0;
        word_17848 = 62;
        word_176C8 = 62;
        qword_176D0 = (__int64)sub_4D70;
        qword_176F0 = (__int64)sub_48D0;
        word_17788 = 62;
        qword_17790 = (__int64)sub_4D70;
        qword_177B0 = (__int64)sub_48D0;
        qword_17850 = (__int64)sub_4D70;
        dword_17580 = -65536;
        qword_17590 = (__int64)sub_4F90;
        dword_175A0 = 256;
        byte_175F0 = 2;
        dword_17640 = -65536;
        qword_17650 = (__int64)sub_4F90;
        dword_17660 = 256;
        byte_176B0 = 2;
        dword_176E0 = 3072;
        dword_17704 = 32;
        byte_17770 = 1;
        dword_177A0 = 3072;
        dword_177C4 = 33;
        byte_17830 = 1;
        dword_17860 = 3072;
        qword_17620 = 0x100000007LL;
        qword_17870 = (__int64)sub_4D70;
        qword_17900 = (__int64)"1101000a1jjiiwqq";
        qword_179C0 = (__int64)"1101ab101AB0cccc";
        qword_179D0 = (__int64)sub_4D70;
        qword_179F0 = (__int64)sub_4D70;
        word_17908 = 57;
        word_179C8 = 59;
        word_17A88 = 62;
        qword_17A10 = (__int64)sub_4BB0;
        qword_17A80 = (__int64)"1101100a1ooooooo";
        qword_17A90 = (__int64)sub_4B00;
        qword_17B70 = (__int64)sub_4B00;
        qword_17910 = (__int64)sub_4C70;
        qword_17B40 = (__int64)"1101110a1ooooooo";
        word_17B48 = 62;
        qword_17B50 = (__int64)sub_48D0;
        dword_17880 = 96;
        byte_178F0 = 1;
        dword_17920 = 127;
        qword_17930 = (__int64)sub_4F90;
        dword_17940 = 256;
        byte_179B0 = 1;
        dword_179E0 = 3072;
        dword_17A00 = 96;
        dword_17A20 = 15;
        byte_17A70 = 1;
        dword_17AA0 = 127;
        qword_17AB0 = (__int64)sub_4F90;
        dword_17AC0 = 256;
        byte_17B30 = 1;
        dword_17B80 = 127;
        byte_17BF0 = 1;
        qword_17B60 = 0x8000001A00000100LL;
        qword_17C00 = (__int64)"11011x111vvvvvvv";
        qword_17CC0 = (__int64)"1101-00x0jjiiwqq";
        word_17C08 = 96;
        word_17CC8 = 1;
        qword_17D80 = (__int64)"1101axxx0jjiiwqq";
        qword_17C40 = 0x8000002A00000400LL;
        qword_17CF0 = (__int64)sub_4C70;
        qword_17DB0 = (__int64)sub_4C70;
        qword_17E40 = (__int64)"1110xxx1dddddddd";
        qword_17C30 = (__int64)sub_48D0;
        word_17E48 = 1;
        v6 = &qword_12440;
        qword_17E70 = (__int64)sub_4AA0;
        qword_17C10 = (__int64)sub_49C0;
        dword_17C20 = 127;
        byte_17CB0 = 1;
        qword_17CD0 = (__int64)sub_4F60;
        dword_17CE0 = 1792;
        dword_17D00 = 127;
        byte_17D70 = 1;
        word_17D88 = 1;
        qword_17D90 = (__int64)sub_4F60;
        dword_17DA0 = 1792;
        dword_17DC0 = 127;
        qword_17DD0 = (__int64)sub_4F90;
        dword_17DE0 = 2048;
        byte_17E30 = 1;
        qword_17E50 = (__int64)sub_4980;
        dword_17E60 = 3584;
        dword_17E80 = -65536;
        qword_17E90 = (__int64)sub_50A0;
        dword_17EA0 = 255;
        byte_17EF0 = 2;
        qword_17F00 = (__int64)"1110-000dddddddd";
        word_17F08 = 1;
        qword_17FC0 = (__int64)"1110axx0dddddddd";
        qword_17F10 = (__int64)sub_4F60;
        qword_17F20 = 0x100000600LL;
        dword_17F44 = 7;
        qword_17F50 = (__int64)sub_50A0;
        dword_17F60 = 255;
        byte_17FB0 = 1;
        word_17FC8 = 1;
        qword_17FD0 = (__int64)sub_4F60;
        qword_17FE0 = 0x100000600LL;
        dword_18004 = 7;
        qword_18010 = (__int64)sub_50A0;
        dword_18020 = 255;
        qword_18030 = (__int64)sub_4F90;
        dword_18040 = 2048;
        byte_18070 = 1;
        word_18088 = 58;
        qword_18090 = (__int64)sub_49C0;
        dword_180A0 = 3840;
        qword_180B0 = (__int64)sub_50A0;
        dword_180C0 = 255;
        byte_18130 = 1;
        qword_17F30 = (__int64)sub_48D0;
        qword_17FF0 = (__int64)sub_48D0;
        qword_18080 = (__int64)"1111bbbbdddddddd";
        for ( i = 16; ; i = strlen((const char *)*v6) )
        {
          v8 = (const char *)*v6;
          v9 = (const char *)(*v6 + (unsigned int)(i - 1));
          if ( i > 0 )
          {
            while ( 1 )
            {
              v11 = 2 * *((_DWORD *)v6 + 46);
              v12 = *((_DWORD *)v6 + 45);
              *((_DWORD *)v6 + 46) = v11;
              v13 = 2 * v12;
              *((_DWORD *)v6 + 45) = v13;
              if ( (unsigned __int8)(*v8 - 48) <= 1u && (*((_DWORD *)v6 + 45) = v13 + 1, *v8 == 49) )
              {
                v10 = v8 + 1;
                *((_DWORD *)v6 + 46) = v11 + 1;
                if ( v9 == v8 )
                  break;
              }
              else
              {
                v10 = v8 + 1;
                if ( v9 == v8 )
                  break;
              }
              v8 = v10;
            }
          }
          v14 = v6 + 5;
          for ( j = 0; j != 5; ++j )
          {
            if ( v6[4 * j + 2] )
            {
              v16 = *(v14 - 2);
              for ( k = 0; k != 32; ++k )
              {
                if ( (v16 & (1 << k)) != 0 )
                  break;
                ++*v14;
              }
            }
            v14 += 8;
          }
          v6 += 24;
          if ( &qword_18140 == v6 )
            break;
        }
        __cxa_guard_release(&byte_12428);
      }
      if ( (*((_DWORD *)v5 + 45) & v28) == *((_DWORD *)v5 + 46) )
        break;
      v5 += 24;
      if ( &qword_18140 == v5 )
        return 0;
    }
    *(_WORD *)(a2 + 24) = *((_WORD *)v5 + 4);
    *(_BYTE *)(a2 + 33) = *((_BYTE *)v5 + 176);
    *(_WORD *)(a2 + 26) = 1;
    if ( (unsigned __int8)sub_5390(a1, a2, (__int64)v5, v28, 0, 4) )
      break;
    v5 += 24;
    *(_QWORD *)(a1 + 248) = v29;
    *(_BYTE *)(a2 + 41) = 0;
    *(_BYTE *)(a2 + 81) = 0;
    *(_BYTE *)(a2 + 121) = 0;
    *(_BYTE *)(a2 + 161) = 0;
    *(_BYTE *)(a2 + 201) = 0;
    *(_BYTE *)(a2 + 241) = 0;
    *(_BYTE *)(a2 + 281) = 0;
    *(_BYTE *)(a2 + 321) = 0;
    if ( &qword_18140 == v5 )
      return 0;
  }
  v19 = *(_QWORD *)(a2 + 16);
  if ( *(_WORD *)(a2 + 24) == 62 )
  {
    if ( *(_BYTE *)(a2 + 41) == 5 && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xC000000000100LL )
    {
      v27 = *(_QWORD *)(a2 + 48);
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = v27;
      *(_BYTE *)(a2 + 73) = 8;
    }
    if ( !v19 )
      return *(unsigned __int16 *)(a2 + 26);
  }
  else if ( !v19 )
  {
    goto LABEL_29;
  }
  v20 = get_wide_byte();
  if ( (v20 & 0xFC1F) == 0x5806 )
  {
    v21 = (v20 >> 5) & 0x1F;
LABEL_42:
    if ( *(_BYTE *)(a2 + 41) != 5 )
      return *(unsigned __int16 *)(a2 + 26);
    v24 = *(unsigned __int16 *)(a2 + 86);
    if ( v24 != v21 )
    {
      switch ( (_WORD)v24 )
      {
        case 0x1A:
          if ( v21 != 24 )
            goto LABEL_37;
          break;
        case 0x1B:
          if ( v21 != 25 )
            goto LABEL_37;
          break;
        case 0x12:
          if ( v21 != 38 )
            goto LABEL_37;
          break;
        default:
          if ( (_WORD)v24 != 19 || v21 != 39 )
          {
LABEL_37:
            if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xD000000000100LL )
            {
              v22 = *(unsigned __int16 *)(a2 + 24);
              if ( (unsigned __int16)v22 <= 0x2Bu )
              {
                v23 = 0x88000000220LL;
                if ( _bittest64(&v23, v22) )
                  *(_BYTE *)(a2 + 73) |= 0x10u;
              }
            }
            return *(unsigned __int16 *)(a2 + 26);
          }
          break;
      }
    }
    v25 = *(_WORD *)(a2 + 24);
    v26 = *(_QWORD *)(a2 + 48);
    if ( v25 != 39 )
    {
      if ( v25 > 0x27u )
      {
        if ( v25 != 43 )
          goto LABEL_37;
LABEL_53:
        LODWORD(v26) = -(int)v26;
        goto LABEL_54;
      }
      if ( v25 != 5 )
      {
        if ( v25 != 9 )
          goto LABEL_37;
        goto LABEL_53;
      }
    }
LABEL_54:
    *(_BYTE *)(a2 + 73) |= 0x14u;
    *(_QWORD *)(a2 + 56) = (__int16)v26;
    *(_BYTE *)(a2 + 41) = 9;
    *(_BYTE *)(a2 + 72) = 1;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( (v20 & 0xFFDF) == 0x5EC6 )
  {
    v21 = ((v20 >> 5) & 1) + 38;
    goto LABEL_42;
  }
LABEL_29:
  if ( *(_BYTE *)(a2 + 41) == 5 )
    goto LABEL_37;
  return *(unsigned __int16 *)(a2 + 26);
}

