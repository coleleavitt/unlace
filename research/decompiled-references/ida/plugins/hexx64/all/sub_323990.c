__int64 __fastcall sub_323990(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  char tinfo_property; // al
  int v9; // eax
  __int64 v10; // rax

  if ( (*(_DWORD *)(a2 + 8) & 0xFFFFFFFB) == 0x30 )
    return 1;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 8) - 59);
  if ( (unsigned int)v5 <= 0x18 )
  {
    v6 = 16777473;
    if ( _bittest64(&v6, v5) )
      return 1;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) <= 0xA
    || (tinfo_property & 0x3F) == 0x2D
    || (get_tinfo_property() & 0xF) == 0xB && (unsigned __int8)sub_323900(a2, a3, a4) )
  {
    return 1;
  }
  v9 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v9 - 1) <= 1 || v9 > 69 )
  {
    if ( (get_tinfo_property() & 0x2F) == 0xD )
      return 1;
    v9 = *(_DWORD *)(a2 + 8);
  }
  if ( v9 == 16 && *(_QWORD *)(a2 + 24) != a3 )
  {
    v10 = sub_256D70(a1 + 16, a2);
    if ( !sub_256740(a2, v10) )
      return 1;
  }
  return sub_25A100(a1, a2);
}

