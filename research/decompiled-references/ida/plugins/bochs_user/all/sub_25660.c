__int64 __fastcall sub_25660(_QWORD *a1, int a2, const void *a3, size_t a4)
{
  void *v6; // rdi
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  void *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  void *src; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]

  v6 = nullptr;
  src = nullptr;
  n = 0;
  if ( a4 )
  {
    src = (void *)qvector_reserve();
    memset(src, 0, a4);
    n = a4;
    v6 = src;
  }
  memcpy(v6, a3, a4);
  v8 = (_QWORD *)a1[4];
  if ( v8 && (v9 = v8[2], v9 + *(unsigned int *)v8 == a2) )
  {
    v14 = src;
    if ( n )
    {
      v17 = n + v9;
      if ( !__CFADD__(n, v9) || (v17 = 0x7FFFFFFFFFFFFFFFLL, v9 <= 0x7FFFFFFFFFFFFFFELL) )
      {
        v19 = v8[1];
        v20 = v8[2];
        if ( v8[3] < v17 )
        {
          v21 = qvector_reserve();
          v8[1] = v21;
          v19 = v21;
          v20 = v8[2];
        }
        memset((void *)(v19 + v20), 0, v17 - v20);
      }
      v18 = v8[1];
      v8[2] = v17;
      memcpy((void *)(v9 + v18), src, n);
      v14 = src;
    }
  }
  else
  {
    v10 = operator new(0x20u);
    v11 = nullptr;
    *(_QWORD *)(v10 + 8) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    *(_DWORD *)v10 = a2;
    if ( n )
    {
      v11 = (void *)qalloc_or_throw();
      memcpy(v11, src, n);
      if ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 16) = 0;
        qfree();
      }
    }
    v12 = a1[2];
    v13 = a1[1];
    *(_QWORD *)(v10 + 8) = v11;
    a1[4] = v10;
    *(__m128i *)(v10 + 16) = _mm_unpacklo_epi64((__m128i)n, (__m128i)n);
    if ( a1[3] < (unsigned __int64)(v12 + 1) )
    {
      v16 = qvector_reserve();
      a1[1] = v16;
      v13 = v16;
      v12 = a1[2];
    }
    *(_QWORD *)(v13 + 8 * v12) = v10;
    ++a1[2];
    v14 = src;
  }
  if ( v14 )
    qfree();
  return 1;
}

