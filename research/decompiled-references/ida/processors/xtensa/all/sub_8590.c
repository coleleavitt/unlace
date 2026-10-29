__int64 __fastcall sub_8590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v5; // esi
  int v6; // ecx
  char v7; // di

  *(_BYTE *)(a2 + 41) = 1;
  result = a2;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  v5 = *(unsigned __int16 *)(a2 + 24);
  v6 = BYTE2(a3);
  if ( (unsigned __int16)v5 > 0x5Au )
  {
    if ( (unsigned __int16)v5 > 0xFAu )
    {
      if ( (unsigned __int16)v5 > 0x101u )
      {
        if ( (_WORD)v5 != 316 )
          goto LABEL_5;
      }
      else if ( (unsigned __int16)v5 <= 0xFEu )
      {
        goto LABEL_5;
      }
    }
    else
    {
      if ( (unsigned __int16)v5 > 0xF8u )
        goto LABEL_13;
      if ( (unsigned __int16)v5 > 0xCCu )
      {
        v7 = 2;
        if ( (unsigned __int16)(v5 - 207) > 1u )
          goto LABEL_6;
        goto LABEL_11;
      }
      if ( (unsigned __int16)v5 > 0xCAu )
      {
LABEL_13:
        v6 = 8 * BYTE2(a3);
        v7 = 7;
        goto LABEL_6;
      }
      if ( (_WORD)v5 != 147 )
        goto LABEL_5;
    }
LABEL_11:
    v6 = 4 * BYTE2(a3);
    v7 = 2;
    goto LABEL_6;
  }
  if ( (unsigned __int16)v5 <= 0x35u )
  {
LABEL_5:
    v7 = 2;
    goto LABEL_6;
  }
  switch ( v5 )
  {
    case '6':
    case ';':
    case 'Y':
    case 'Z':
      goto LABEL_11;
    case '8':
    case 'W':
      v7 = 0;
      break;
    case '9':
    case ':':
    case 'X':
      v6 = 2 * BYTE2(a3);
      v7 = 1;
      break;
    default:
      goto LABEL_5;
  }
LABEL_6:
  *(_BYTE *)(result + 81) = 4;
  *(_BYTE *)(result + 85) = v7;
  *(_QWORD *)(result + 96) = *(_DWORD *)(a1 + 16) & (unsigned int)v6;
  *(_WORD *)(result + 86) = (a3 >> 8) & 0xF;
  return result;
}

