__int64 *__fastcall sub_E960(__int64 *a1)
{
  int v1; // eax
  unsigned __int64 v2; // rbp

  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v1 = qvsnprintf();
  if ( v1 )
  {
    v2 = v1 + 1LL;
    if ( a1[2] < v2 )
      *a1 = qvector_reserve();
    a1[1] = v2;
    qvsnprintf();
  }
  return a1;
}

