__int64 sub_23A000()
{
  unsigned int v0; // edx
  char tinfo_property; // al

  if ( (get_tinfo_property() & 0x3F) == 0x2D )
  {
    tinfo_property = get_tinfo_property();
    v0 = 0;
    if ( !tinfo_property )
      return v0;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  return 1;
}

