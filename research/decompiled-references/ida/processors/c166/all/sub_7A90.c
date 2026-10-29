__int64 __fastcall sub_7A90(__int64 a1)
{
  __int64 v2; // rbp

  if ( (unsigned __int16)get_word() == 0xFFFF )
    return 0;
  if ( *(_WORD *)(a1 + 24) == 59 )
  {
    v2 = 0;
    while ( !(unsigned __int16)get_word() )
    {
      v2 += 2;
      if ( v2 == 16 )
        return 0;
    }
  }
  return 1;
}

