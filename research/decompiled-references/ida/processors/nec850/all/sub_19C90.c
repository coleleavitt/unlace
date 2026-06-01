__int64 __fastcall sub_19C90(_QWORD *a1, _QWORD *a2, int a3)
{
  char tinfo_property; // al
  __int64 result; // rax

  tinfo_property = get_tinfo_property(*a2, 2);
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
  {
    if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD && (*(_DWORD *)(a1[2] + 264LL) != 1 || a3 <= 8) )
    {
      if ( (unsigned __int64)(*a1 + 1LL) <= 4 )
        return 3;
      return 2;
    }
    return 0;
  }
  if ( a3 <= 4 )
  {
    result = 1;
    if ( (unsigned __int64)(*a1 + 1LL) <= 4 )
      return result;
    return 2;
  }
  if ( a3 > 8 )
    return 0;
  result = 1;
  if ( (unsigned __int64)(*a1 + 2LL) > 4 )
  {
    if ( *a1 == 3 )
      return 3;
    return 2;
  }
  return result;
}

