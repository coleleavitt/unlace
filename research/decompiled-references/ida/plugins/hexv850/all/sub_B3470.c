__int64 sub_B3470()
{
  char tinfo_property; // al
  unsigned int v1; // edx

  tinfo_property = get_tinfo_property();
  v1 = 0;
  if ( (tinfo_property & 0x3E) == 0 )
    return v1;
  v1 = 1;
  if ( (tinfo_property & 0xFu) <= 8 )
    return v1;
  LOBYTE(v1) = (tinfo_property & 0x3F) == 45;
  return v1;
}

