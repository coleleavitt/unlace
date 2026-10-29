__int64 __fastcall sub_3ECD50(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // edx
  int v5; // ecx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi

  v1 = *(_DWORD *)(a1 + 28);
  if ( (v1 & 0x10) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 28) & 0x818;
    if ( v2 && v2 != 2056 )
      return 2;
    return 4;
  }
  v3 = 8;
  if ( (*(_BYTE *)(a1 + 33) & 8) != 0 )
    return v3;
  v3 = 2;
  if ( (v1 & 0x800) == 0 )
    return v3;
  v5 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v5 > 0x39u )
  {
    v3 = 8;
    if ( (unsigned __int16)(v5 - 61) <= 0x18u )
      return v3;
    if ( (unsigned __int16)v5 > 0xA0u )
    {
      if ( (_WORD)v5 == 738 || (_WORD)v5 == 741 )
        return v3;
      goto LABEL_18;
    }
    if ( (unsigned __int16)v5 > 0x6Cu )
    {
      v8 = 0xC050682000555LL;
      if ( _bittest64(&v8, (unsigned int)(v5 - 109)) )
        return v3;
      goto LABEL_18;
    }
LABEL_16:
    v6 = (unsigned int)(v5 - 37);
    if ( (unsigned __int16)v6 <= 0x3Bu )
    {
      v7 = 0xA1A000000E00005LL;
      v3 = 8;
      if ( _bittest64(&v7, v6) )
        return v3;
    }
    goto LABEL_18;
  }
  v3 = 8;
  if ( (unsigned __int16)v5 > 0x34u )
    return v3;
  if ( (unsigned __int16)v5 > 0x12u )
    goto LABEL_16;
  if ( (unsigned __int16)v5 > 0xFu )
    return v3;
LABEL_18:
  if ( (*(_DWORD *)(a1 + 28) & 0x818) != 0x810 )
    return 2;
  return 4;
}

