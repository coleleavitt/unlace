__int64 __fastcall sub_1D41E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 result; // rax
  __m128i v14; // xmm3
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r15
  const void *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  void *v24; // rax
  size_t v25; // r8
  void *v26; // rax
  size_t v27; // r8
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v28.m128i_i64[0] = a2;
  v29 = 0;
  if ( v5 )
  {
    v15 = 0;
    v16 = 0;
    v29 = qalloc_or_throw(104 * v5, a2, a3, a4);
    v17 = v29;
    do
    {
      v18 = *(_QWORD *)v28.m128i_i64[0];
      *(_DWORD *)v17 = 0;
      v19 = v15 + v18;
      v20 = (const void *)v19;
      copy_argloc();
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(v19 + 16);
      v23 = *(_DWORD *)(v19 + 24);
      *(_QWORD *)(v17 + 32) = 0;
      *(_DWORD *)(v17 + 24) = v23;
      *(_OWORD *)(v17 + 40) = 0;
      if ( *(_QWORD *)(v19 + 40) )
      {
        n = *(_QWORD *)(v19 + 40);
        v26 = (void *)qalloc_or_throw(n, v19, v21, v22);
        v27 = n;
        *(_QWORD *)(v17 + 32) = v26;
        *(_QWORD *)(v17 + 48) = v27;
        v20 = *(const void **)(v19 + 32);
        memcpy(v26, v20, v27);
        *(_QWORD *)(v17 + 40) = n;
      }
      *(_QWORD *)(v17 + 56) = 0;
      *(_OWORD *)(v17 + 64) = 0;
      if ( *(_QWORD *)(v19 + 64) )
      {
        n = *(_QWORD *)(v19 + 64);
        v24 = (void *)qalloc_or_throw(n, (__int64)v20, v21, v22);
        v25 = n;
        *(_QWORD *)(v17 + 56) = v24;
        *(_QWORD *)(v17 + 72) = v25;
        memcpy(v24, *(const void **)(v19 + 56), v25);
        *(_QWORD *)(v17 + 64) = n;
      }
      *(_QWORD *)(v17 + 80) = 0;
      copy_tinfo_t();
      ++v16;
      v15 += 104;
      v17 += 104;
      *(_QWORD *)(v17 - 16) = *(_QWORD *)(v19 + 88);
      *(_QWORD *)(v17 - 8) = *(_QWORD *)(v19 + 96);
    }
    while ( v5 != v16 );
  }
  v6 = *a1;
  v28 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v6 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v6 + v8);
        clear_tinfo_t();
        v11 = *(_QWORD *)(v6 + v8 + 56);
        if ( v11 )
        {
          v10[8] = 0;
          qfree(v11);
        }
        v12 = v10[4];
        if ( v12 )
        {
          v10[5] = 0;
          qfree(v12);
        }
        ++v9;
        v8 += 104;
        cleanup_argloc();
        v6 = *a1;
      }
      while ( v7 != v9 );
    }
    a1[1] = 0;
    qfree(v6);
  }
  result = v29;
  v14 = _mm_load_si128(&v28);
  *a1 = v29;
  *(__m128i *)(a1 + 1) = v14;
  return result;
}

