unsigned __int8 __fastcall sub_367E30(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned __int8 result; // al
  unsigned __int8 v6; // al
  char tinfo_property; // al
  unsigned __int8 v9; // [rsp+Ch] [rbp-2Ch]

  if ( *(_QWORD *)(a2 + 24) > 1u )
    return 0;
  if ( a4 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
    {
      v6 = 0;
    }
    else
    {
      v6 = a4;
      if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
        v6 = sub_367DA0(a1, a3);
    }
    v9 = v6;
    clear_tinfo_t();
    return v9;
  }
  else
  {
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
      return 0;
    result = 1;
    if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
      return sub_367DA0(a1, a3);
  }
  return result;
}

