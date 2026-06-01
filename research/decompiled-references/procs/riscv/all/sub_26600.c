__int64 __fastcall sub_26600(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  if ( !(24 * a2[1]) )
    return 1;
  while ( *(_WORD *)(v2 + 16) == 122 )
  {
    v2 += 24;
    if ( v2 == *a2 + 24 * a2[1] )
      return 1;
  }
  return 0;
}
