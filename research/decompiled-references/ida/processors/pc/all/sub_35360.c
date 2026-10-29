__int64 __fastcall sub_35360(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  int v5; // edx
  char v6; // bp
  __int16 v7; // ax
  int v8; // r13d
  unsigned __int16 v9; // dx
  __int64 result; // rax
  int v11; // edx

  v4 = *(_BYTE *)(a3 + 1);
  if ( v4 == 4 )
    goto LABEL_25;
  if ( v4 == 2 )
  {
    if ( !*(_BYTE *)(a3 + 32) )
      return 0xFFFFFFFFLL;
LABEL_25:
    *a1 = *(_QWORD *)(a3 + 16);
    v5 = *(_DWORD *)(a2 + 28);
    if ( *(_BYTE *)(a3 + 32) )
      goto LABEL_5;
    goto LABEL_26;
  }
  if ( v4 != 3 )
    return 0xFFFFFFFFLL;
  *a1 = 0;
  v5 = *(_DWORD *)(a2 + 28);
  if ( *(_BYTE *)(a3 + 32) )
  {
LABEL_5:
    v6 = *(_BYTE *)(a3 + 33);
    v7 = (v6 >> 3) & 7;
    v8 = v5 & 0x10;
    if ( (v5 & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 2) != 0 )
      v7 = (*(char *)(a3 + 33) >> 3) & 7 | 8;
    v9 = *(_WORD *)(a2 + 24);
    if ( v9 > 0x5C0u )
    {
      if ( v9 > 0x5F1u )
      {
        if ( (unsigned __int16)(v9 - 1532) > 0xFu )
          goto LABEL_15;
      }
      else if ( v9 <= 0x5EDu )
      {
        goto LABEL_15;
      }
    }
    else if ( v9 <= 0x5BCu )
    {
      if ( v9 > 0x378u )
      {
        if ( (unsigned __int16)(v9 - 993) > 3u )
          goto LABEL_15;
      }
      else if ( v9 <= 0x374u )
      {
        goto LABEL_15;
      }
    }
    if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
      v7 |= 0x10u;
    v7 = sub_22710(a2, v7);
LABEL_15:
    if ( (v7 == -1 || v7 == 4) && *(_BYTE *)(a3 + 1) != 2 )
    {
      result = v6 & 7;
      if ( v8 )
      {
        if ( (*(_BYTE *)(a2 + 33) & 1) != 0 )
          return v6 & 7 | 8u;
      }
      return result;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_26:
  v11 = v5 & 0x1018;
  result = *(unsigned __int16 *)(a3 + 6);
  if ( v11 != 4096 && v11 != 8 )
    return result;
  if ( (unsigned __int16)result <= 3u )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int16)(result - 4) <= 3u )
    return dword_95800[result];
  if ( under_debugger )
    BUG();
  interr();
  return sub_35530(10260);
}
