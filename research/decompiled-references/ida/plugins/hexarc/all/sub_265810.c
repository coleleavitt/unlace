__int64 __fastcall sub_265810(__int64 a1)
{
  char tinfo_property; // al
  unsigned int v2; // ebp

  if ( !(unsigned __int8)get_tinfo_property() )
  {
    if ( !under_debugger )
      sub_37B760(50206);
    BUG();
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) <= 0xA || (v2 = 2, (tinfo_property & 0x3F) == 0x2D) )
    v2 = *(_BYTE *)(a1 + 453) ^ 1;
  clear_tinfo_t();
  return v2;
}

