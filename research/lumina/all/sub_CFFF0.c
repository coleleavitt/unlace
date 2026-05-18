__int64 __fastcall sub_CFFF0(_DWORD *a1, int *a2)
{
  unsigned __int8 **v2; // rbx
  __int64 v3; // r12

  if ( *a2 <= 0 )
    return 0;
  v2 = (unsigned __int8 **)(a2 + 4);
  v3 = (__int64)&a2[6 * (*a2 - 1) + 10];
  do
  {
    if ( (int)sub_C4870(a1, *v2) >= 0 )
      return 1;
    v2 += 3;
  }
  while ( v2 != (unsigned __int8 **)v3 );
  return 0;
}
