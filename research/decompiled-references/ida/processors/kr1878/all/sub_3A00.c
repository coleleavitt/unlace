__int64 __fastcall sub_3A00(_WORD *a1)
{
  const char **v2; // rbx
  int v3; // ebp
  int i; // eax
  const char *v5; // rdx
  int v6; // ecx
  int v7; // esi
  const char *v8; // rax
  const char **v9; // rdx
  int j; // edi
  __int64 result; // rax
  int v12; // esi

  memset(a1, 0, 0x1380u);
  a1[48] = 2;
  *((_QWORD *)a1 + 13) = "000010sssssddddd";
  *a1 = 1;
  *((_QWORD *)a1 + 25) = "000100sssssddddd";
  *((_QWORD *)a1 + 1) = "000001sssssddddd";
  *((_QWORD *)a1 + 37) = "000011sssssddddd";
  *((_QWORD *)a1 + 2) = sub_3780;
  *((_QWORD *)a1 + 5) = sub_3740;
  *((_QWORD *)a1 + 14) = sub_3780;
  *((_QWORD *)a1 + 17) = sub_3740;
  a1[96] = 3;
  *((_QWORD *)a1 + 26) = sub_3780;
  *((_QWORD *)a1 + 29) = sub_3740;
  a1[144] = 4;
  *((_QWORD *)a1 + 38) = sub_3780;
  *((_QWORD *)a1 + 41) = sub_3740;
  a1[192] = 5;
  *((_DWORD *)a1 + 8) = 31;
  *((_DWORD *)a1 + 14) = 992;
  *((_DWORD *)a1 + 32) = 31;
  *((_DWORD *)a1 + 38) = 992;
  *((_DWORD *)a1 + 56) = 31;
  *((_DWORD *)a1 + 62) = 992;
  *((_DWORD *)a1 + 80) = 31;
  *((_DWORD *)a1 + 86) = 992;
  *((_QWORD *)a1 + 49) = "000101sssssddddd";
  *((_QWORD *)a1 + 61) = "000110sssssddddd";
  *((_QWORD *)a1 + 73) = "000111sssssddddd";
  *((_QWORD *)a1 + 97) = "011ccccccccddddd";
  *((_QWORD *)a1 + 85) = "010ccccccccddddd";
  *((_QWORD *)a1 + 109) = "001100cccccddddd";
  *((_QWORD *)a1 + 50) = sub_3780;
  *((_QWORD *)a1 + 53) = sub_3740;
  a1[240] = 6;
  *((_QWORD *)a1 + 62) = sub_3780;
  *((_QWORD *)a1 + 65) = sub_3740;
  a1[288] = 7;
  *((_QWORD *)a1 + 74) = sub_3780;
  *((_QWORD *)a1 + 77) = sub_3740;
  a1[336] = 8;
  *((_QWORD *)a1 + 86) = sub_3780;
  *((_QWORD *)a1 + 89) = sub_3830;
  a1[384] = 9;
  *((_QWORD *)a1 + 98) = sub_3780;
  *((_QWORD *)a1 + 101) = sub_3830;
  a1[432] = 10;
  *((_QWORD *)a1 + 110) = sub_3780;
  *((_DWORD *)a1 + 104) = 31;
  *((_DWORD *)a1 + 110) = 992;
  *((_DWORD *)a1 + 128) = 31;
  *((_DWORD *)a1 + 134) = 992;
  *((_DWORD *)a1 + 152) = 31;
  *((_DWORD *)a1 + 158) = 992;
  *((_DWORD *)a1 + 176) = 31;
  *((_DWORD *)a1 + 182) = 8160;
  *((_DWORD *)a1 + 200) = 31;
  *((_DWORD *)a1 + 206) = 8160;
  *((_DWORD *)a1 + 224) = 31;
  *((_QWORD *)a1 + 113) = sub_3830;
  a1[480] = 11;
  *((_QWORD *)a1 + 121) = "001011cccccddddd";
  *((_QWORD *)a1 + 133) = "001010pccccddddd";
  *((_QWORD *)a1 + 145) = "001110pccccddddd";
  *((_QWORD *)a1 + 137) = sub_3860;
  *((_QWORD *)a1 + 149) = sub_3860;
  *((_QWORD *)a1 + 157) = "001111pccccddddd";
  *((_QWORD *)a1 + 161) = sub_3860;
  *((_QWORD *)a1 + 173) = sub_3860;
  *((_QWORD *)a1 + 122) = sub_3780;
  *((_QWORD *)a1 + 125) = sub_3830;
  a1[528] = 12;
  *((_QWORD *)a1 + 134) = sub_3780;
  a1[576] = 13;
  *((_QWORD *)a1 + 146) = sub_3780;
  a1[624] = 14;
  *((_QWORD *)a1 + 158) = sub_3780;
  a1[672] = 15;
  *((_QWORD *)a1 + 169) = "001101pccccddddd";
  *((_QWORD *)a1 + 170) = sub_3780;
  a1[720] = 16;
  *((_DWORD *)a1 + 230) = 992;
  *((_DWORD *)a1 + 248) = 31;
  *((_DWORD *)a1 + 254) = 992;
  *((_DWORD *)a1 + 272) = 31;
  *((_DWORD *)a1 + 278) = 992;
  *((_DWORD *)a1 + 296) = 31;
  *((_DWORD *)a1 + 302) = 992;
  *((_DWORD *)a1 + 320) = 31;
  *((_DWORD *)a1 + 326) = 992;
  *((_DWORD *)a1 + 344) = 31;
  *((_DWORD *)a1 + 350) = 992;
  *((_QWORD *)a1 + 181) = "00000000001ddddd";
  *((_QWORD *)a1 + 193) = "00000000010ddddd";
  *((_QWORD *)a1 + 205) = "00000000011ddddd";
  a1[864] = 19;
  *((_QWORD *)a1 + 217) = "00000000100ddddd";
  *((_QWORD *)a1 + 229) = "00000000101ddddd";
  *((_QWORD *)a1 + 241) = "00000000110ddddd";
  *((_QWORD *)a1 + 253) = "00000000111ddddd";
  *((_QWORD *)a1 + 265) = "00000001000ddddd";
  *((_QWORD *)a1 + 182) = sub_3740;
  a1[768] = 17;
  *((_QWORD *)a1 + 194) = sub_3740;
  a1[816] = 18;
  *((_QWORD *)a1 + 206) = sub_3740;
  *((_QWORD *)a1 + 218) = sub_3740;
  a1[912] = 20;
  *((_QWORD *)a1 + 230) = sub_3740;
  a1[960] = 21;
  *((_QWORD *)a1 + 242) = sub_3740;
  a1[1008] = 22;
  *((_QWORD *)a1 + 254) = sub_3740;
  a1[1056] = 23;
  *((_QWORD *)a1 + 266) = sub_3740;
  a1[1104] = 24;
  *((_QWORD *)a1 + 277) = "00000001001ddddd";
  *((_DWORD *)a1 + 368) = 31;
  *((_DWORD *)a1 + 392) = 31;
  *((_DWORD *)a1 + 416) = 31;
  *((_DWORD *)a1 + 440) = 31;
  *((_DWORD *)a1 + 464) = 31;
  *((_DWORD *)a1 + 488) = 31;
  *((_DWORD *)a1 + 512) = 31;
  *((_DWORD *)a1 + 536) = 31;
  *((_QWORD *)a1 + 278) = sub_3740;
  *((_QWORD *)a1 + 290) = sub_3740;
  *((_QWORD *)a1 + 329) = sub_3740;
  a1[1152] = 25;
  *((_QWORD *)a1 + 289) = "00000001010ddddd";
  *((_QWORD *)a1 + 337) = "0000000000010nnn";
  *((_QWORD *)a1 + 301) = "00100ccccccccnnn";
  *((_QWORD *)a1 + 313) = "00000010nnnsssss";
  *((_QWORD *)a1 + 314) = sub_3780;
  *((_QWORD *)a1 + 349) = "0000000000011nnn";
  a1[1200] = 26;
  *((_QWORD *)a1 + 302) = sub_3800;
  *((_QWORD *)a1 + 305) = sub_3830;
  a1[1248] = 27;
  *((_QWORD *)a1 + 317) = sub_37D0;
  a1[1296] = 28;
  *((_QWORD *)a1 + 325) = "00000011nnnddddd";
  *((_QWORD *)a1 + 326) = sub_3800;
  a1[1344] = 29;
  *((_QWORD *)a1 + 338) = sub_37D0;
  a1[1392] = 30;
  *((_QWORD *)a1 + 350) = sub_37D0;
  a1[1440] = 31;
  *((_DWORD *)a1 + 560) = 31;
  *((_DWORD *)a1 + 584) = 31;
  *((_DWORD *)a1 + 608) = 7;
  *((_DWORD *)a1 + 614) = 2040;
  *((_DWORD *)a1 + 632) = 31;
  *((_DWORD *)a1 + 638) = 224;
  *((_DWORD *)a1 + 656) = 224;
  *((_DWORD *)a1 + 662) = 31;
  *((_DWORD *)a1 + 680) = 7;
  *((_DWORD *)a1 + 704) = 7;
  *((_QWORD *)a1 + 361) = "000000011000bbbb";
  *((_QWORD *)a1 + 373) = "000000011100bbbb";
  *((_QWORD *)a1 + 385) = "0000000000000100";
  *((_QWORD *)a1 + 421) = "100100aaaaaaaaaa";
  a1[1584] = 34;
  a1[1728] = 37;
  *((_QWORD *)a1 + 397) = "0000000000000101";
  *((_QWORD *)a1 + 433) = "101100aaaaaaaaaa";
  a1[1632] = 35;
  *((_QWORD *)a1 + 445) = "101000aaaaaaaaaa";
  *((_QWORD *)a1 + 409) = "100000aaaaaaaaaa";
  *((_QWORD *)a1 + 457) = "110000aaaaaaaaaa";
  *((_QWORD *)a1 + 362) = sub_3830;
  a1[1488] = 32;
  *((_QWORD *)a1 + 374) = sub_3830;
  a1[1536] = 33;
  *((_QWORD *)a1 + 410) = sub_38B0;
  a1[1680] = 36;
  *((_QWORD *)a1 + 422) = sub_38B0;
  *((_QWORD *)a1 + 434) = sub_38B0;
  *((_QWORD *)a1 + 446) = sub_38B0;
  *((_QWORD *)a1 + 458) = sub_38B0;
  *((_QWORD *)a1 + 469) = "110100aaaaaaaaaa";
  *((_DWORD *)a1 + 728) = 15;
  *((_DWORD *)a1 + 752) = 15;
  *((_DWORD *)a1 + 824) = 1023;
  *((_DWORD *)a1 + 848) = 1023;
  *((_DWORD *)a1 + 872) = 1023;
  a1[1776] = 38;
  *((_DWORD *)a1 + 896) = 1023;
  a1[1824] = 39;
  *((_DWORD *)a1 + 920) = 1023;
  a1[1872] = 40;
  *((_QWORD *)a1 + 470) = sub_38B0;
  *((_QWORD *)a1 + 482) = sub_38B0;
  *((_QWORD *)a1 + 494) = sub_38B0;
  *((_QWORD *)a1 + 505) = "0000000000000011";
  *((_QWORD *)a1 + 517) = "0000000000000111";
  a1[2112] = 45;
  *((_QWORD *)a1 + 529) = "0000000000001100";
  a1[2160] = 46;
  *((_QWORD *)a1 + 541) = "000000000000111c";
  a1[2208] = 47;
  *((_QWORD *)a1 + 553) = "0000000000001101";
  a1[2256] = 48;
  *((_QWORD *)a1 + 565) = "0000000000000000";
  *((_QWORD *)a1 + 481) = "111000aaaaaaaaaa";
  a1[2304] = 49;
  *((_QWORD *)a1 + 493) = "111100aaaaaaaaaa";
  *((_QWORD *)a1 + 542) = sub_3830;
  *((_QWORD *)a1 + 577) = "0000000000000001";
  *((_QWORD *)a1 + 589) = "0000000000001000";
  *((_DWORD *)a1 + 944) = 1023;
  a1[1920] = 41;
  *((_DWORD *)a1 + 968) = 1023;
  a1[1968] = 42;
  *((_DWORD *)a1 + 992) = 1023;
  *((_DWORD *)a1 + 1088) = 1;
  a1[2352] = 50;
  a1[2400] = 51;
  a1[2448] = 52;
  *((_QWORD *)a1 + 601) = "0000000000000010";
  a1[2016] = 43;
  v2 = (const char **)a1;
  a1[2064] = 44;
  v3 = 0;
  *((_QWORD *)a1 + 613) = "0000000000000110";
  for ( i = 16; ; i = strlen(v2[1]) )
  {
    v5 = v2[1];
    if ( i > 0 )
    {
      v6 = *((_DWORD *)v2 + 23);
      v7 = *((_DWORD *)v2 + 22);
      v8 = &v5[i - 1];
      while ( 1 )
      {
        v6 *= 2;
        v7 *= 2;
        if ( (unsigned __int8)(*v5 - 48) <= 1u )
        {
          ++v7;
          v6 += *v5 == 49;
        }
        if ( v5 == v8 )
          break;
        ++v5;
      }
      *((_DWORD *)v2 + 22) = v7;
      *((_DWORD *)v2 + 23) = v6;
    }
    v9 = v2;
    for ( j = 0; j != 3; ++j )
    {
      result = 96LL * v3 + 24LL * j;
      if ( *(_QWORD *)((char *)a1 + result + 16) )
      {
        v12 = *((_DWORD *)v9 + 8);
        result = 0;
        do
        {
          if ( _bittest(&v12, result) )
            break;
          result = (unsigned int)(result + 1);
          ++*((_DWORD *)v9 + 9);
        }
        while ( (_DWORD)result != 16 );
      }
      v9 += 3;
    }
    ++v3;
    v2 += 12;
    if ( v3 == 52 )
      break;
  }
  return result;
}

