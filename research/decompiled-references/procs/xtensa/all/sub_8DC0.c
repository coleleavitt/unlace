__int64 __fastcall sub_8DC0(unsigned int a1, __int64 a2)
{
  unsigned __int32 v2; // edi
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx

  if ( (unsigned int)(a2 - 10) > 2 )
  {
    result = a1;
    if ( (unsigned int)(a2 - 1) <= 8 )
    {
      v4 = (a1 << 16) & 0xFF0000;
      v5 = v4 | a1 & 0xFF00 | HIWORD(a1);
      v6 = v4 >> 20;
      switch ( a2 )
      {
        case 1LL:
        case 2LL:
          v7 = (v5 >> 4) & 0xF00 | (v5 >> 12) & 0xF0 | v6;
          v8 = (16 * (_WORD)v5) & 0xF000;
          goto LABEL_8;
        case 3LL:
          v9 = (v5 >> 4) & 0xF00 | (v5 >> 12) & 0xF0;
          goto LABEL_10;
        case 4LL:
          return v6 | (v5 >> 12) & 0xF0 | (v5 << 8) & 0xFFFF00;
        case 5LL:
          v7 = v5 & 0xFF00 | v6;
          v8 = (v5 >> 12) & 0xF0;
          goto LABEL_8;
        case 6LL:
          return v6 | (v5 >> 14) & 0x30 | (v5 << 6) & 0xFFFFC0;
        case 7LL:
          v7 = (v5 >> 4) & 0xF00 | (v5 >> 10) & 0xC0 | (v5 >> 14) & 0x30 | v6;
          v8 = (16 * (_WORD)v5) & 0xF000;
LABEL_8:
          result = (v5 << 12) & 0xF0000 | v8 | v7 | (v5 << 20) & 0xF00000;
          break;
        case 8LL:
          v6 |= (v5 >> 10) & 0xC0 | (v5 >> 14) & 0x30;
          v9 = (v5 >> 4) & 0xF00;
LABEL_10:
          result = (16 * (_WORD)v5) & 0xF000 | v9 | v6 | (v5 << 16) & 0xFF0000;
          break;
        default:
          result = (v5 >> 4) & 0xF00 | (v5 >> 10) & 0xC0 | (v5 >> 14) & 0x30 | v6 | (v5 << 12) & 0xFFF000;
          break;
      }
    }
  }
  else
  {
    v2 = _byteswap_ulong(a1);
    return (v2 >> 28) | (16 * HIWORD(v2)) & 0xF00 | (v2 >> 20) & 0xF0 | (unsigned __int16)(HIWORD(v2) << 12);
  }
  return result;
}
