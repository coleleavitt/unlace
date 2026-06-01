__int64 *__fastcall sub_36970(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  const void *v9; // r15
  void *v10; // rdi
  __int64 v11; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 600LL) + 24LL * *(int *)(**(_QWORD **)(a1 + 192) + 8 * a5);
  if ( *a2 != v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 > 1 )
    {
      v9 = *(const void **)v6;
      v10 = *(void **)v5;
      if ( *(_QWORD *)(v5 + 16) < v7 )
      {
        v11 = qvector_reserve();
        *(_QWORD *)v5 = v11;
        v10 = (void *)v11;
      }
      *(_QWORD *)(v5 + 8) = v7;
      memmove(v10, v9, v7 - 1);
      *(_BYTE *)(*(_QWORD *)v5 + v7 - 1) = 0;
      v6 = *a2;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
      v6 = *a2;
    }
  }
  return sub_35470((__int64 *)(v6 + 24));
}

