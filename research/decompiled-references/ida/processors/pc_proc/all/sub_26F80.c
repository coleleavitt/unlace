char __fastcall sub_26F80(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax

  result = sub_26F10(a1, a1 + 40, 5);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 72) )
    {
      if ( *(_BYTE *)(a1 + 41) == 2 )
        goto LABEL_6;
      LODWORD(v2) = *(_BYTE *)(a1 + 73) & 7;
      if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 && (*(_BYTE *)(a1 + 33) & 1) != 0 )
        goto LABEL_6;
    }
    else
    {
      v2 = *(unsigned __int16 *)(a1 + 46);
      v4 = *(_DWORD *)(a1 + 28) & 0x1018;
      if ( v4 == 4096 || v4 == 8 )
      {
        if ( (_WORD)v2 == 0xFFFF )
          goto LABEL_6;
        if ( (unsigned __int16)v2 > 7u )
          goto LABEL_26;
        LODWORD(v2) = dword_95FE0[v2];
      }
    }
    if ( (_DWORD)v2 == 5 )
      return result;
  }
LABEL_6:
  result = sub_26F10(a1, a1 + 80, 5);
  if ( !result )
    return result;
  if ( !*(_BYTE *)(a1 + 112) )
  {
    v3 = *(unsigned __int16 *)(a1 + 86);
    v5 = *(_DWORD *)(a1 + 28) & 0x1018;
    if ( v5 != 4096 && v5 != 8 )
      return (_DWORD)v3 == 5;
    if ( (_WORD)v3 == 0xFFFF )
      return 0;
    if ( (unsigned __int16)v3 <= 7u )
    {
      LODWORD(v3) = dword_95FE0[v3];
      return (_DWORD)v3 == 5;
    }
LABEL_26:
    sub_22470(a1);
    return sub_27090();
  }
  if ( *(_BYTE *)(a1 + 81) == 2 )
    return 0;
  LODWORD(v3) = *(_BYTE *)(a1 + 113) & 7;
  if ( (*(_BYTE *)(a1 + 28) & 0x10) == 0 )
    return (_DWORD)v3 == 5;
  result = 0;
  if ( (*(_BYTE *)(a1 + 33) & 1) == 0 )
    return (_DWORD)v3 == 5;
  return result;
}

