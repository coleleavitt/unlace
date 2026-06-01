__int64 __fastcall sub_7D510(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  const char *v3; // rsi
  int v5; // ecx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi

  v1 = *(_DWORD *)(a1 + 252);
  if ( (v1 & 0x10) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 252) & 0x818;
    if ( v2 != 2056 )
    {
      v3 = "small ";
      if ( v2 )
        goto LABEL_4;
    }
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(a1 + 257) & 8) == 0 )
  {
    if ( (v1 & 0x800) == 0 )
      goto LABEL_20;
    v5 = *(unsigned __int16 *)(a1 + 248);
    if ( (unsigned __int16)v5 > 0x39u )
    {
      if ( (unsigned __int16)(v5 - 61) <= 0x18u )
        return 0;
      if ( (unsigned __int16)v5 > 0xA0u )
      {
        if ( (_WORD)v5 == 738 || (_WORD)v5 == 741 )
          return 0;
LABEL_18:
        if ( (*(_DWORD *)(a1 + 252) & 0x818) == 0x810 )
        {
LABEL_19:
          v3 = "large ";
LABEL_4:
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v3, 32);
          return 1;
        }
LABEL_20:
        v3 = "small ";
        goto LABEL_4;
      }
      if ( (unsigned __int16)v5 > 0x6Cu )
      {
        v8 = 0xC050682000555LL;
        if ( _bittest64(&v8, (unsigned int)(v5 - 109)) )
          return 0;
        goto LABEL_18;
      }
    }
    else
    {
      if ( (unsigned __int16)v5 > 0x34u )
        return 0;
      if ( (unsigned __int16)v5 <= 0x12u )
      {
        if ( (unsigned __int16)v5 > 0xFu )
          return 0;
        goto LABEL_18;
      }
    }
    v6 = (unsigned int)(v5 - 37);
    if ( (unsigned __int16)v6 <= 0x3Bu )
    {
      v7 = 0xA1A000000E00005LL;
      if ( _bittest64(&v7, v6) )
        return 0;
    }
    goto LABEL_18;
  }
  return 0;
}
