__int64 __fastcall sub_698D0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax

  while ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    if ( (unsigned int)find_tinfo_udt_member() == -1 || (get_tinfo_property() & 0xF) == 0xE )
    {
      clear_tinfo_t();
      return 0;
    }
    *a1 = 0;
    a2 -= a2 & 0x1FFFFFFFFFFFFFFFLL;
    clear_tinfo_t();
  }
  if ( !a2 )
  {
    v5 = sub_40000();
    if ( v5 != -1 )
    {
      *a3 = v5;
      return 1;
    }
  }
  return 0;
}
