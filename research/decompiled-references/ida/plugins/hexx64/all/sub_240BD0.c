__int64 __fastcall sub_240BD0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rbp
  int tinfo_size; // r12d
  unsigned int v7; // eax
  unsigned int v8; // r13d
  int v9; // ecx
  int tinfo_property; // eax

  if ( *(_DWORD *)(a1 + 8) != 61 )
  {
    if ( !under_debugger )
      sub_383060(0xC4BFu, a4);
LABEL_13:
    BUG();
  }
  v5 = sub_255A30(*(__int64 **)(a1 + 24));
  tinfo_size = get_tinfo_size();
  LOBYTE(v7) = sub_11CA80(tinfo_size);
  v8 = v7;
  if ( !(_BYTE)v7 )
  {
    if ( !under_debugger )
      sub_383060(0xC4C0u, a4);
    goto LABEL_13;
  }
  v9 = 8 * tinfo_size - 1;
  if ( (unsigned __int64)v9 <= 0x3F )
  {
    if ( 1LL << v9 != (v5 & (2 * (1LL << v9) - 1)) )
      goto LABEL_5;
    return 0;
  }
  if ( !v5 )
    return 0;
LABEL_5:
  tinfo_property = get_tinfo_property();
  sub_240A20(a1, a2, a3, -v5, tinfo_size, tinfo_property, a4);
  return v8;
}

