__int64 __fastcall sub_1E7C70(__int64 a1, __int64 a2, _BYTE *a3, unsigned int tinfo_size, unsigned int a5, char a6)
{
  int v10; // eax
  __int64 result; // rax
  char tinfo_property; // al

  if ( (a6 & 0x10) != 0 )
    return 1;
  if ( a3 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      v10 = a5;
      if ( a5 <= 0x10 )
        v10 = getinf();
      if ( v10 != 256 && v10 != 176 )
        return 0;
    }
    if ( *(char *)(a1 + 25) < 0 )
    {
      if ( (unsigned int)lexcompare_tinfo() )
      {
        if ( (a6 & 8) == 0 )
          return 0;
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
          return 0;
      }
    }
  }
  else if ( *(char *)(a1 + 25) < 0 )
  {
    return 0;
  }
  if ( !sub_1E7B70(a1, a2, a3, tinfo_size, a5) )
    return 0;
  result = 1;
  if ( (a6 & 4) != 0 )
  {
    if ( a3 )
      tinfo_size = get_tinfo_size();
    return (unsigned int)sub_1E7880(*(_QWORD *)(a2 + 96), tinfo_size, a5, (__int64)a3) ^ 1;
  }
  return result;
}

