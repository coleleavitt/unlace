__int64 *__fastcall sub_13F10(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  const void *v14; // r8
  void *v15; // rdi
  __int64 v16; // rax
  const void *v17; // [rsp+8h] [rbp-40h]

  v7 = (__int64 *)*a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 112LL);
  v9 = *(int *)(*(_QWORD *)(a1 + 192) + 4 * a5);
  v10 = *(_QWORD *)(v8 + 600) + 24 * v9;
  if ( *a2 != v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 > 1 )
    {
      v14 = *(const void **)v10;
      v15 = (void *)*v7;
      if ( v7[2] < v11 )
      {
        v17 = v14;
        v16 = qvector_reserve(v7, *v7, v11, 1, v14, a6);
        v14 = v17;
        *v7 = v16;
        v15 = (void *)v16;
      }
      v7[1] = v11;
      memmove(v15, v14, v11 - 1);
      *(_BYTE *)(*v7 + v11 - 1) = 0;
    }
    else
    {
      v7[1] = 0;
    }
    v10 = *a2;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 112LL);
    v9 = *(int *)(*(_QWORD *)(a1 + 192) + 4 * a5);
  }
  return sub_13580((__int64 *)(v10 + 24), (__int64)"0x%08llX", *(_QWORD *)(*(_QWORD *)(v8 + 552) + 32 * v9));
}

