__int64 *__fastcall sub_F5E50(__int64 *a1)
{
  int v1; // eax
  unsigned __int64 v2; // r14

  v1 = qvsnprintf();
  if ( v1 )
  {
    v2 = (a1[1] == 0) + a1[1] + v1;
    if ( a1[2] < v2 )
      *a1 = qvector_reserve();
    a1[1] = v2;
    qvsnprintf();
  }
  return a1;
}

