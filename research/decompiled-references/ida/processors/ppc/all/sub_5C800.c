__int64 __fastcall sub_5C800(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( !(24 * a1[1]) )
    return 0;
  while ( *(_WORD *)(v1 + 16) != 285 )
  {
    v1 += 24;
    if ( v1 == *a1 + 24 * a1[1] )
      return 0;
  }
  return 1;
}

