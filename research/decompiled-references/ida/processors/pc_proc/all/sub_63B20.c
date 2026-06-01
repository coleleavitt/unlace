__int64 sub_63B20()
{
  unsigned int v0; // ebp
  __int64 entry; // rbx
  __int64 i; // rbx
  __int64 result; // rax

  v0 = 0;
  entry = get_entry();
  do
  {
    if ( !get_flags_ex() )
      break;
    entry = sub_62EC0(entry, v0);
    if ( !entry )
      break;
    ++v0;
  }
  while ( v0 != 16 );
  for ( i = get_first_seg(); i; i = get_next_seg() )
  {
    if ( !*(_BYTE *)(i + 43) )
    {
      set_default_sreg_value();
      set_default_sreg_value();
    }
  }
  getinf();
  result = getseg();
  if ( result )
  {
    if ( !*(_BYTE *)(result + 43) )
    {
      set_default_sreg_value();
      return set_default_sreg_value();
    }
  }
  return result;
}

