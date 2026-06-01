bool __fastcall sub_290120(__int64 a1)
{
  bool result; // al
  int v2; // r15d
  int v3; // r14d
  int v4; // r12d
  int v5; // r13d
  int v6; // r12d
  char tinfo_property; // al
  int v8; // edx
  char v9; // bl

  if ( !(unsigned int)lexcompare_tinfo() )
  {
    if ( !(unsigned int)lexcompare_tinfo() )
    {
      clear_tinfo_t();
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
  }
  clear_tinfo_t();
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL) + 80LL);
  v3 = v2;
  v4 = v2 - 1;
  v5 = -v2;
  if ( (get_tinfo_property() & 0xF) != 0xB )
    v3 = v5 & (get_tinfo_size() + v4);
  v6 = v5 & (get_tinfo_size() + v4);
  if ( v3 > v6 )
    return 0;
  if ( v3 <= v2 && v2 < v6 )
  {
    if ( (get_tinfo_property() & 0x3F) != 9 )
      return 0;
    if ( v6 != get_tinfo_size() )
    {
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xE) != 0 || (v8 = tinfo_property & 0x30, result = 1, !v8) )
  {
    v9 = get_tinfo_property();
    return ((get_tinfo_property() & 0xF) == 9) == ((v9 & 0xF) == 9);
  }
  return result;
}

