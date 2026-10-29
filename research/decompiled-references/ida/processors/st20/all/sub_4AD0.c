__int64 __fastcall sub_4AD0(__int64 a1)
{
  __int64 v2; // rbx

  if ( *(_WORD *)(a1 + 24) != 43 )
    return 1;
  v2 = 0;
  while ( !(unsigned __int16)get_word() )
  {
    v2 += 2;
    if ( v2 == 16 )
      return 0;
  }
  return 1;
}

