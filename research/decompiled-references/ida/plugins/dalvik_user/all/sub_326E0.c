__int64 __fastcall sub_326E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r13
  void *v4; // rdi
  __int64 v6; // rax

  if ( !a2 )
    return 1;
  if ( a2 == a1 + 40 )
    return 1;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 >= 2 )
  {
    v3 = *(const void **)(a1 + 40);
    v4 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) < v2 )
    {
      v6 = qvector_reserve();
      *(_QWORD *)a2 = v6;
      v4 = (void *)v6;
    }
    *(_QWORD *)(a2 + 8) = v2;
    memmove(v4, v3, v2 - 1);
    *(_BYTE *)(*(_QWORD *)a2 + v2 - 1) = 0;
    return 1;
  }
  *(_QWORD *)(a2 + 8) = 0;
  return 1;
}

