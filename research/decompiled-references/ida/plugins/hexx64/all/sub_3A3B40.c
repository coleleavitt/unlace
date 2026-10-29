__int64 __fastcall sub_3A3B40(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 == (__int64 *)(v2 + 32) )
    return 1;
  v3 = *(_QWORD *)(v2 + 40);
  if ( v3 > 1 )
  {
    v5 = *(const void **)(v2 + 32);
    v6 = (void *)*a2;
    if ( a2[2] < v3 )
    {
      v7 = qvector_reserve((__int64)a2, *a2, *(_QWORD *)(v2 + 40), 1);
      *a2 = v7;
      v6 = (void *)v7;
    }
    a2[1] = v3;
    memmove(v6, v5, v3 - 1);
    *(_BYTE *)(*a2 + v3 - 1) = 0;
    return 1;
  }
  else
  {
    a2[1] = 0;
    return 1;
  }
}

