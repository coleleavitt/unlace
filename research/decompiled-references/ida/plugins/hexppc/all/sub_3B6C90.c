__int64 sub_3B6C90()
{
  char tinfo_property; // al
  unsigned int v1; // edx

  tinfo_property = get_tinfo_property();
  v1 = 0;
  if ( (tinfo_property & 0x2F) == 0xD )
    return get_numbered_type_name() != 0;
  return v1;
}

