__int64 __fastcall sub_31E0D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char tinfo_property; // al
  int v8; // eax
  __int64 v9; // rax

  if ( (*(_DWORD *)(a2 + 8) & 0xFFFFFFFB) == 0x30 )
    return 1;
  v4 = (unsigned int)(*(_DWORD *)(a2 + 8) - 59);
  if ( (unsigned int)v4 <= 0x18 )
  {
    v5 = 16777473;
    if ( _bittest64(&v5, v4) )
      return 1;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) <= 0xA
    || (tinfo_property & 0x3F) == 0x2D
    || (get_tinfo_property() & 0xF) == 0xB && (unsigned __int8)sub_31E040(a2, a3) )
  {
    return 1;
  }
  v8 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v8 - 1) <= 1 || v8 > 69 )
  {
    if ( (get_tinfo_property() & 0x2F) == 0xD )
      return 1;
    v8 = *(_DWORD *)(a2 + 8);
  }
  if ( v8 == 16 && *(_QWORD *)(a2 + 24) != a3 )
  {
    v9 = sub_2519B0(a1 + 16, a2);
    if ( !sub_251380(a2, v9) )
      return 1;
  }
  return sub_254D40(a1, a2);
}

