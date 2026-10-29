__int64 __fastcall sub_A950(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int16 v6; // di
  unsigned __int64 v7; // r8
  unsigned int v8; // esi
  char v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  __int16 v12; // cx

  v4 = (unsigned int)a2 | ((unsigned __int64)(unsigned __int16)insn_get_next_word(a3, a2, a3) << 32);
  if ( ((v4 >> 17) & 0xF) == 0xE )
  {
    v6 = v4 & 0x1F;
    v7 = v4 >> 43;
    v8 = (unsigned int)v4 >> 27;
    if ( (v4 & 0x7C00000) == 0x6800000 )
    {
      *(_DWORD *)(a3 + 28) |= 0x10u;
      *(_BYTE *)(a3 + 41) = 5;
      *(_WORD *)(a3 + 24) = 388;
      *(_BYTE *)(a3 + 45) = 1;
      *(_QWORD *)(a3 + 48) = (((v4 & 0x200000) != 0) << 11) | WORD2(v4) & 0x7FFu;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 8;
      *(_WORD *)(a3 + 86) = v6 + 96;
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 8;
      *(_WORD *)(a3 + 126) = v7 + 96;
      *(_BYTE *)(a3 + 161) = 1;
      *(_BYTE *)(a3 + 165) = 8;
      *(_WORD *)(a3 + 166) = v8 + 96;
      return 1;
    }
    if ( (v4 & 0x6000000) != 0 )
    {
      v9 = (v4 >> 21) & 3;
      switch ( (v4 >> 23) & 0xF )
      {
        case 4uLL:
          *(_BYTE *)(a3 + 41) = 5;
          *(_QWORD *)(a3 + 136) = HIDWORD(v4);
          *(_WORD *)(a3 + 24) = 395;
          *(_BYTE *)(a3 + 45) = 0;
          *(_QWORD *)(a3 + 48) = (v4 >> 21) & 3;
          *(_BYTE *)(a3 + 121) = 4;
          *(_BYTE *)(a3 + 125) = 2;
          *(_WORD *)(a3 + 126) = v6;
          *(_BYTE *)(a3 + 81) = 1;
          *(_BYTE *)(a3 + 85) = 2;
          *(_WORD *)(a3 + 86) = v8 + 96;
          break;
        case 5uLL:
          v10 = a3 + 40;
          v11 = a3 + 80;
          v12 = 394;
          if ( !v9 )
          {
            v11 = a3 + 40;
            v10 = a3 + 80;
            v12 = 390;
          }
          *(_WORD *)(a3 + 24) = v12;
          *(_QWORD *)(v11 + 16) = HIDWORD(v4);
          *(_BYTE *)(v11 + 1) = 4;
          *(_BYTE *)(v11 + 5) = 8;
          *(_WORD *)(v11 + 6) = v6;
          *(_BYTE *)(v10 + 1) = 1;
          *(_BYTE *)(v10 + 5) = 8;
          *(_WORD *)(v10 + 6) = v8 + 96;
          goto LABEL_2;
        case 6uLL:
          *(_BYTE *)(a3 + 41) = 5;
          *(_WORD *)(a3 + 24) = 389;
          *(_BYTE *)(a3 + 45) = 0;
          *(_QWORD *)(a3 + 48) = (v4 >> 21) & 3;
          *(_BYTE *)(a3 + 81) = 4;
          *(_BYTE *)(a3 + 85) = 7;
          goto LABEL_7;
        case 7uLL:
          if ( (v4 & 0x400000) == 0 )
          {
            *(_WORD *)(a3 + 24) = 393;
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = (v4 >> 21) & 1;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 7;
            *(_WORD *)(a3 + 86) = v8 + 96;
            *(_BYTE *)(a3 + 121) = 4;
            *(_BYTE *)(a3 + 125) = 7;
            *(_WORD *)(a3 + 126) = v6;
            *(_QWORD *)(a3 + 136) = HIDWORD(v4);
            break;
          }
          if ( v9 == 2 )
          {
            *(_BYTE *)(a3 + 41) = 4;
            *(_QWORD *)(a3 + 56) = HIDWORD(v4);
            *(_WORD *)(a3 + 24) = 392;
            *(_BYTE *)(a3 + 45) = 7;
            *(_WORD *)(a3 + 46) = v6;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 8;
            *(_WORD *)(a3 + 86) = v8 + 96;
          }
          else
          {
            if ( v9 != 3 )
              goto LABEL_2;
            *(_BYTE *)(a3 + 81) = 4;
            *(_QWORD *)(a3 + 96) = HIDWORD(v4);
            *(_WORD *)(a3 + 24) = 396;
            *(_BYTE *)(a3 + 85) = 7;
            *(_WORD *)(a3 + 86) = v6;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 8;
            *(_WORD *)(a3 + 46) = v8 + 96;
          }
          break;
        case 0xCuLL:
          *(_BYTE *)(a3 + 41) = 1;
          *(_WORD *)(a3 + 24) = 397;
          *(_BYTE *)(a3 + 45) = 8;
          *(_WORD *)(a3 + 46) = (BYTE4(v4) & 0x1F) + 96;
          *(_BYTE *)(a3 + 81) = 1;
          *(_BYTE *)(a3 + 85) = 8;
          *(_WORD *)(a3 + 86) = v6 + 96;
          *(_BYTE *)(a3 + 121) = 1;
          *(_BYTE *)(a3 + 125) = 8;
          *(_WORD *)(a3 + 126) = v7 + 96;
          *(_BYTE *)(a3 + 161) = 1;
          *(_BYTE *)(a3 + 165) = 8;
          *(_WORD *)(a3 + 166) = v8 + 96;
          break;
        default:
          goto LABEL_2;
      }
    }
    else
    {
      *(_BYTE *)(a3 + 41) = 5;
      *(_WORD *)(a3 + 24) = 391;
      *(_BYTE *)(a3 + 45) = 0;
      *(_QWORD *)(a3 + 48) = (v4 >> 21) & 0xF;
      *(_BYTE *)(a3 + 81) = 4;
      *(_BYTE *)(a3 + 85) = 2;
LABEL_7:
      *(_WORD *)(a3 + 86) = v6;
      *(_QWORD *)(a3 + 96) = HIDWORD(v4);
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 8;
      *(_WORD *)(a3 + 126) = v8 + 96;
    }
  }
  else
  {
LABEL_2:
    if ( !*(_WORD *)(a3 + 24) )
      return 0;
  }
  *(_DWORD *)(a3 + 28) |= 0x10u;
  return 1;
}

