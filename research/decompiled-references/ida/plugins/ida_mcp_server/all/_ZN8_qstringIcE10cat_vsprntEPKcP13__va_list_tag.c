__int64 *__fastcall _qstring<char>::cat_vsprnt(__int64 *a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-50h]

  v1 = qvsnprintf();
  if ( v1 )
  {
    v2 = v1 + (a1[1] == 0) + a1[1];
    if ( a1[2] < v2 )
    {
      v4 = v1 + (a1[1] == 0) + a1[1];
      *a1 = qvector_reserve();
      v2 = v4;
    }
    a1[1] = v2;
    qvsnprintf();
  }
  return a1;
}

