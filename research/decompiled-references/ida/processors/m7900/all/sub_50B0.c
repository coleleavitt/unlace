__int64 __fastcall sub_50B0(__int64 a1, int a2)
{
  if ( a2 == 128 )
    return get_sreg();
  if ( a2 > 128 )
  {
    if ( a2 == 192 )
      return get_sreg();
  }
  else if ( !a2 || a2 == 64 )
  {
    return get_sreg();
  }
  return 0;
}

