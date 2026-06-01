bool __fastcall sub_9C2C0(_BYTE *a1)
{
  if ( a1[32] == 15 && (get_tinfo_property() & 0xF) == 9 )
    return 0;
  if ( a1[48] == 15 && (get_tinfo_property() & 0xF) == 9 )
    return 0;
  if ( a1[64] == 15 )
    return (get_tinfo_property() & 0xF) != 9;
  return 1;
}

