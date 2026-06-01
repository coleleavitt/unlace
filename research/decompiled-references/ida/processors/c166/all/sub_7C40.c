__int64 __fastcall sub_7C40(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp

  if ( !a1 )
    return 0;
  if ( (a1[2] & 2) == 0 )
  {
    v1 = a1[1];
    if ( *a1 < v1 )
    {
      while ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || (get_byte() & 0xDF) != 0xDB )
      {
        if ( next_head() >= v1 )
          return 0;
      }
      a1[2] |= 2u;
      update_func();
    }
  }
  return 0;
}

