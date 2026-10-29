__int64 __fastcall sub_326030(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  int tinfo_property; // esi

  if ( (*a3 & 0x100) != 0 )
  {
    tinfo_property = get_tinfo_property();
    if ( tinfo_property )
    {
      if ( (unsigned __int8)sub_64190(*(__int64 **)(a1 + 16), tinfo_property, a4) )
        visit_subtypes();
    }
  }
  return 0;
}

