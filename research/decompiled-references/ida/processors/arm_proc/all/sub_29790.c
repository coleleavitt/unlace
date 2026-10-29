bool __fastcall sub_29790(__int64 a1, _DWORD *a2)
{
  __int16 v2; // dx
  bool result; // al
  int v4; // eax

  v2 = *(_WORD *)(a1 + 24);
  if ( v2 == 43 )
  {
    if ( !a2 )
      return 1;
    *a2 = *(_DWORD *)(a1 + 64);
    return 1;
  }
  if ( v2 == 371 )
  {
    if ( !a2 )
      return 1;
    *a2 = 0;
    return 1;
  }
  if ( *(_BYTE *)(a1 + 41) != 1 )
    goto LABEL_4;
  v4 = *(unsigned __int16 *)(a1 + 46);
  if ( v4 != 13 && v4 != 161 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 28) & 0xD0) != 0x50 )
    goto LABEL_4;
  if ( v2 == 34 )
  {
    if ( a2 )
    {
      *a2 = *(_QWORD *)(a1 + 104);
      return 1;
    }
    return 1;
  }
  if ( (unsigned __int16)(v2 - 139) <= 2u || v2 == 416 )
  {
    if ( a2 )
      *a2 = 0;
    return 1;
  }
LABEL_4:
  result = v2 == 32 || v2 == 473;
  if ( result )
  {
    result = 0;
    if ( *(_WORD *)(a1 + 86) == 13 && (*(_DWORD *)(a1 + 28) & 0xB0) == 0x30 && *(_QWORD *)(a1 + 96) == -4 )
    {
      if ( a2 )
        *a2 = 1 << *(_WORD *)(a1 + 46);
      return 1;
    }
  }
  return result;
}

