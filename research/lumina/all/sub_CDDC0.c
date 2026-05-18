__int64 __fastcall sub_CDDC0(__int64 a1, int *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp

  if ( !a2 )
    return 0;
  v2 = (__int64 *)(a2 + 2);
  if ( *a2 <= 0 )
    return 0;
  v3 = &v2[3 * (unsigned int)(*a2 - 1) + 3];
  while ( !*v2 || !(unsigned int)sub_CDCD0(a1, *v2) )
  {
    v2 += 3;
    if ( v2 == v3 )
      return 0;
  }
  return 2;
}
