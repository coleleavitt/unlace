__int64 __fastcall sub_118960(signed int a1, signed int a2)
{
  unsigned int v2; // ebx

  if ( a1 > a2 )
    return 0xFFFFFFFFLL;
  v2 = a1;
  while ( v2 == 2 || !sub_1188D0(v2) )
  {
    if ( a2 < (int)++v2 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}

