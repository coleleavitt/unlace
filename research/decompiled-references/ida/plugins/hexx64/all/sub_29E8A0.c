__int64 __fastcall sub_29E8A0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  char tinfo_property; // al
  int v5; // r12d
  int v6; // eax
  int v7; // eax
  char v9; // al

  v3 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(a2 + 28) > v3 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a2 + 28) < v3 )
    return 1;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0
    || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D
    || (get_tinfo_property() & 0x3F) != 0x2D )
  {
    v9 = get_tinfo_property();
    if ( (v9 & 0x3E) == 0 || (v9 & 0xFu) > 8 && (v9 & 0x3F) != 0x2D )
      goto LABEL_8;
    if ( (get_tinfo_property() & 0x3F) != 0x2D )
      goto LABEL_8;
  }
  v5 = score_tinfo();
  v6 = score_tinfo();
  if ( v5 > v6 )
    return 1;
  if ( v5 >= v6 )
  {
LABEL_8:
    v7 = *(_DWORD *)(a2 + 24);
    if ( *(_DWORD *)(a1 + 24) >= v7 )
    {
      if ( *(_DWORD *)(a1 + 24) <= v7 )
        return sub_29E6F0(a1, a2, a3);
      return 1;
    }
  }
  return 0xFFFFFFFFLL;
}

