__int64 sub_26A410()
{
  int v0; // ebx
  char v1; // al
  unsigned int v2; // ebx

  if ( (unsigned __int8)get_tinfo_property() )
  {
    v0 = 4;
  }
  else
  {
    copy_tinfo_t();
    v0 = 0;
  }
  v1 = get_tinfo_property() & 0x3F;
  if ( v1 == 9 )
  {
    v2 = v0 + 1;
  }
  else if ( v1 == 25 )
  {
    v2 = v0 + 2;
  }
  else
  {
    v2 = v0 + 3;
    if ( v1 != 41 )
      v2 = 0;
  }
  clear_tinfo_t();
  return v2;
}

