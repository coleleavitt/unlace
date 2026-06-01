__int64 __fastcall sub_83210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v5; // r13
  unsigned __int64 v6; // rbp
  size_t v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  void *v12; // rax
  __int64 v13; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v12 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8), a2, a3, a4);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = v12;
    memcpy(v12, *(const void **)a2, v5);
    *(_QWORD *)(a1 + 8) = v5;
  }
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v6 != 1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = v6 - 1;
      if ( v8 )
      {
        --v8;
        v9 = v7 + v8;
        v6 += v8;
      }
      v10 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v6 )
      {
        v13 = qvector_reserve(a1, v10, v6, 1);
        *(_QWORD *)a1 = v13;
        v10 = v13;
      }
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)(v10 + v9) = 0;
      memcpy((void *)(v8 + *(_QWORD *)a1), *(const void **)a3, v7);
    }
  }
  return a1;
}

