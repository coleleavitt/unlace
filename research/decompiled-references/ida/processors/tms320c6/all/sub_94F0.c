__int64 __fastcall sub_94F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int next_dword; // edx
  __int64 v4; // rcx
  unsigned int v5; // eax

  if ( (*(_BYTE *)(a2 + 8) & 3) != 0 )
    return 0;
  next_dword = insn_get_next_dword();
  if ( (next_dword & 1) != 0 )
    *(_BYTE *)(a2 + 29) |= 1u;
  *(_BYTE *)(a2 + 28) = next_dword >> 28;
  if ( next_dword >> 28 == 1 )
  {
    *(_BYTE *)(a2 + 28) = 0;
    return sub_93E0(a1, a2, next_dword);
  }
  if ( (unsigned __int8)((next_dword >> 28) - 14) <= 1u )
    return 0;
  switch ( (next_dword >> 2) & 0x1F )
  {
    case 0u:
      if ( (next_dword & 0x3FFFC) == 0x1E000 )
      {
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 19;
        return result;
      }
      if ( (next_dword & 0x21FFE) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        v4 = ((next_dword >> 13) & 0xF) + 1;
        *(_QWORD *)(a2 + 48) = v4;
        if ( (unsigned int)v4 > 9 )
          return 0;
        if ( ((next_dword >> 13) & 0xF) == 0 )
          *(_BYTE *)(a2 + 44) &= ~8u;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 48;
        return result;
      }
      if ( (next_dword & 0xC03FFFC) == 0x32000 )
      {
        *(_WORD *)(a2 + 24) = 209;
LABEL_35:
        *(_BYTE *)(a2 + 41) = 9;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(next_dword >> 18);
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (next_dword & 0xC03FFFC) == 0x30000 )
      {
        *(_WORD *)(a2 + 24) = 208;
        goto LABEL_35;
      }
      if ( (next_dword & 0x371FFC) == 0x30000 )
      {
        v5 = (unsigned __int16)next_dword >> 13;
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_F3D0 + ((unsigned __int16)next_dword >> 13));
        if ( v5 == 3 )
          return *(unsigned __int16 *)(a2 + 26);
        if ( (next_dword & 0x8000) == 0 )
        {
          if ( v5 != 2 )
            return 0;
          *(_BYTE *)(a2 + 41) = 10;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = (next_dword >> 22) & 0x3F;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( v5 <= 5 || v5 == 7 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = ((next_dword >> 23) & 0x1F) + 1;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 5;
      return sub_89B0(
               a1,
               a2,
               next_dword,
               (__int64)qword_F900 + 6 * ((next_dword >> 7) & 0x1F),
               (next_dword & 0x1000) != 0);
    case 1u:
    case 5u:
    case 9u:
    case 0xDu:
    case 0x11u:
    case 0x15u:
    case 0x19u:
    case 0x1Du:
      *(_BYTE *)(a2 + 32) = ((unsigned __int8)next_dword >> 7) + 7;
      return sub_8EF0(a1, a2, next_dword);
    case 2u:
    case 0x12u:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 3;
      return sub_92D0(a1, a2, next_dword);
    case 3u:
    case 7u:
    case 0xBu:
    case 0xFu:
    case 0x13u:
    case 0x17u:
    case 0x1Bu:
    case 0x1Fu:
      *(_BYTE *)(a2 + 32) = 8;
      return sub_8E60(a1, a2, next_dword);
    case 4u:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 3;
      *(_WORD *)(a2 + 24) = 10;
      sub_8230(a1, a2, a2 + 40, next_dword, 7, 0x1FFFFF);
      return *(unsigned __int16 *)(a2 + 26);
    case 6u:
    case 0xEu:
    case 0x16u:
    case 0x1Eu:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 1;
      return sub_8AF0(a1, a2, next_dword);
    case 8u:
    case 0x18u:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 3;
      return sub_9040(a1, a2, next_dword);
    case 0xAu:
    case 0x1Au:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 3;
      return sub_9360(a1, a2, next_dword);
    case 0xCu:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 7;
      return sub_8C70(a1, a2, (__int64)qword_F700, next_dword);
    case 0x10u:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 7;
      return sub_8C00(a1, a2, next_dword);
    case 0x14u:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 3;
      return sub_9270(a1, a2, next_dword);
    case 0x1Cu:
      *(_BYTE *)(a2 + 32) = ((next_dword & 2) != 0) + 7;
      return sub_8D40(a1, a2, next_dword);
  }
}

