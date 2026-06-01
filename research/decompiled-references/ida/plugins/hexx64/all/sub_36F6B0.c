unsigned __int8 __fastcall sub_36F6B0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, double a5)
{
  unsigned __int8 result; // al
  unsigned __int8 v7; // al
  char tinfo_property; // al
  unsigned __int8 v10; // [rsp+Ch] [rbp-2Ch]

  if ( *(_QWORD *)(a2 + 24) > 1u )
    return 0;
  if ( a4 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
    {
      v7 = 0;
    }
    else
    {
      v7 = a4;
      if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
        v7 = sub_36F620(a1, a3, a5);
    }
    v10 = v7;
    clear_tinfo_t();
    return v10;
  }
  else
  {
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
      return 0;
    result = 1;
    if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
      return sub_36F620(a1, a3, a5);
  }
  return result;
}

