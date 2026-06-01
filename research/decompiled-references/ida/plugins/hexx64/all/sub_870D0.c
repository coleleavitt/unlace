void __fastcall sub_870D0(__int64 *a1, const void *a2, __int64 a3, __int64 a4)
{
  const void *v5; // r13
  unsigned __int64 v6; // rbp
  __int128 v7; // xmm0
  size_t v8; // r14
  __int64 v9; // rbx
  size_t v10; // r14
  void *v11; // rax
  void *v12; // rax

  v5 = a2;
  if ( a1[2] < (unsigned __int64)a2 )
  {
    a2 = (const void *)*a1;
    *a1 = qvector_reserve((__int64)a1, *a1, (__int64)v5, 48);
  }
  v6 = a1[1];
  if ( v6 < (unsigned __int64)v5 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *a1 + 48 * v6;
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = v7;
        v10 = *(_QWORD *)(a3 + 8);
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), (__int64)a2, a3, a4);
          *(_QWORD *)(v9 + 16) = v10;
          *(_QWORD *)v9 = v11;
          a2 = *(const void **)a3;
          memcpy(v11, *(const void **)a3, v10);
          *(_QWORD *)(v9 + 8) = v10;
          v7 = 0;
        }
        *(_QWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 32) = v7;
        v8 = *(_QWORD *)(a3 + 32);
        if ( v8 )
          break;
        if ( v5 == (const void *)++v6 )
          goto LABEL_10;
      }
      v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32), (__int64)a2, a3, a4);
      *(_QWORD *)(v9 + 24) = v12;
      ++v6;
      *(_QWORD *)(v9 + 40) = v8;
      a2 = *(const void **)(a3 + 24);
      memcpy(v12, a2, v8);
      *(_QWORD *)(v9 + 32) = v8;
      v7 = 0;
    }
    while ( v5 != (const void *)v6 );
  }
LABEL_10:
  a1[1] = (__int64)v5;
}

