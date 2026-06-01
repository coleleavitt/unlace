__int64 __fastcall sub_DAF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned __int64 v4; // rcx
  int v6; // edi
  int v7; // eax
  unsigned __int16 v8; // dx
  __int16 v9; // r8
  __int64 v10; // rsi

  v3 = *(_BYTE *)(a2 + 1);
  LODWORD(v4) = 0;
  if ( v3 != *(_BYTE *)(a3 + 1) )
    return (unsigned int)v4;
  if ( v3 == 3 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return (unsigned int)v4;
    goto LABEL_13;
  }
  if ( v3 <= 3u )
  {
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
        return (unsigned int)v4;
      goto LABEL_6;
    }
    v7 = *(unsigned __int16 *)(a2 + 6);
    v8 = *(_WORD *)(a3 + 6);
    v6 = v8;
    v9 = *(_WORD *)(a2 + 6);
    v4 = (int)v8 >> 3;
    if ( (unsigned int)v7 > 0x27 )
    {
      v10 = 10;
      if ( (int)v4 > 4 )
        goto LABEL_18;
    }
    else
    {
      v10 = *((unsigned __int8 *)&qword_181C8 + (v7 >> 3));
      if ( (int)v4 > 4 )
      {
        if ( (unsigned __int8)v10 > 9u )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
    v4 = *((unsigned __int8 *)&qword_181C8 + v4);
    if ( (unsigned __int8)v10 >= (unsigned __int8)v4 )
    {
      if ( (unsigned __int8)v4 < (unsigned __int8)v10 )
        v7 = *((_DWORD *)qword_18240 + 3 * (v9 & 7) + v4);
      goto LABEL_18;
    }
LABEL_17:
    v4 = (unsigned __int64)qword_18240;
    v6 = *((_DWORD *)qword_18240 + 3 * (v8 & 7) + v10);
LABEL_18:
    LOBYTE(v4) = v7 == v6;
    return (unsigned int)v4;
  }
  if ( v3 == 4 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return (unsigned int)v4;
LABEL_6:
    if ( *(_QWORD *)(a2 + 16) != *(_QWORD *)(a3 + 16) )
      return (unsigned int)v4;
LABEL_13:
    LOBYTE(v4) = *(_BYTE *)(a2 + 32) == *(_BYTE *)(a3 + 32);
    return (unsigned int)v4;
  }
  LOBYTE(v4) = v3 == 99;
  return (unsigned int)v4;
}

