__int64 __fastcall sub_D1E0(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4, char a5)
{
  unsigned int v6; // esi
  __int16 v7; // di
  char v8; // si

  v6 = 0;
  if ( a5 == 1 )
  {
    if ( !a4 && (a3 & 0xF80) == 0 )
    {
      *(_WORD *)(a2 + 24) = 61;
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  else if ( a5 == 2 )
  {
    if ( a4 <= 0x7Fu && (a3 & 0xF80) == 0 )
    {
      v7 = a4 >> 4;
      if ( a4 >> 4 == 2 )
      {
        v8 = 40;
      }
      else if ( (unsigned __int16)(a4 >> 4) > 2u )
      {
        if ( v7 != 4 )
          return v6;
        v8 = 56;
      }
      else
      {
        v8 = v7 == 0 ? 8 : 24;
      }
      *(_BYTE *)(a2 + 28) = v8;
      *(_WORD *)(a2 + 24) = 383;
      *(_BYTE *)(a2 + 41) = 3;
      *(_WORD *)(a2 + 46) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  else if ( !a5 && !(a4 & 0xF00F | a3 & 0x8F80) )
  {
    if ( a4 == 256 )
    {
      *(_WORD *)(a2 + 24) = 382;
    }
    else
    {
      *(_BYTE *)(a2 + 41) = 8;
      *(_WORD *)(a2 + 24) = 38;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = HIBYTE(a4);
      *(_BYTE *)(a2 + 81) = 8;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = (a4 >> 4) & 0xF;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  return v6;
}
