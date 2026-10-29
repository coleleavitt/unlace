__int64 __fastcall sub_2994E0(__int64 a1, __int64 a2)
{
  int v2; // eax
  char tinfo_property; // al
  int v4; // r12d
  int v5; // eax
  int v6; // eax
  char v8; // al

  v2 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(a2 + 28) > v2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a2 + 28) < v2 )
    return 1;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0
    || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D
    || (get_tinfo_property() & 0x3F) != 0x2D )
  {
    v8 = get_tinfo_property();
    if ( (v8 & 0x3E) == 0 || (v8 & 0xFu) > 8 && (v8 & 0x3F) != 0x2D )
      goto LABEL_8;
    if ( (get_tinfo_property() & 0x3F) != 0x2D )
      goto LABEL_8;
  }
  v4 = score_tinfo();
  v5 = score_tinfo();
  if ( v4 > v5 )
    return 1;
  if ( v4 >= v5 )
  {
LABEL_8:
    v6 = *(_DWORD *)(a2 + 24);
    if ( *(_DWORD *)(a1 + 24) >= v6 )
    {
      if ( *(_DWORD *)(a1 + 24) <= v6 )
        return sub_299330(a1, a2);
      return 1;
    }
  }
  return 0xFFFFFFFFLL;
}

