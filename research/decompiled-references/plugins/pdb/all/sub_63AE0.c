__int64 __fastcall sub_63AE0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r13
  const void *v4; // r14
  void *v6; // rdi
  __int64 v7; // rax

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 > 1 )
  {
    v4 = *(const void **)(a1 + 24);
    if ( strcmp((const char *)v4, "<anonymous-tag>") )
    {
      if ( a2 != (__int64 *)(a1 + 24) )
      {
        v6 = (void *)*a2;
        if ( a2[2] < v3 )
        {
          v7 = qvector_reserve(a2, *a2, v3, 1);
          *a2 = v7;
          v6 = (void *)v7;
        }
        a2[1] = v3;
        memmove(v6, v4, v3 - 1);
        *(_BYTE *)(*a2 + v3 - 1) = 0;
      }
      return 0;
    }
  }
  return v2;
}
