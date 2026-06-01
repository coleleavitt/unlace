bool sub_2660C0()
{
  char tinfo_property; // bl
  __int64 tinfo_size; // rbx

  tinfo_property = get_tinfo_property();
  if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  tinfo_size = get_tinfo_size();
  if ( get_tinfo_size() != tinfo_size )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0x2F) == 0xD )
    return (unsigned int)lexcompare_tinfo() == 0;
  return 1;
}

