__int64 __fastcall sub_4FB0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  const void *v6; // r13
  void *v7; // rdi
  __int64 v8; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    return 0;
  v4 = *(_QWORD *)(a1 + 40) + 80 * a3;
  if ( a2 != v4 + 48 )
  {
    v5 = *(_QWORD *)(v4 + 56);
    if ( v5 < 2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    else
    {
      v6 = *(const void **)(v4 + 48);
      v7 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v5 )
      {
        v8 = qvector_reserve();
        *(_QWORD *)a2 = v8;
        v7 = (void *)v8;
      }
      *(_QWORD *)(a2 + 8) = v5;
      memmove(v7, v6, v5 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v5 - 1) = 0;
    }
  }
  return 1;
}

