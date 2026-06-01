void __fastcall sub_1EB110(__int64 *a1, int a2, int a3, double a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int64 v7; // rdx
  _DWORD *v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // rax
  int v11; // r14d
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rsi
  size_t v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  __m128i *v24; // rbp
  __int64 v25; // r12
  __int64 v26; // r12
  __int64 i; // rbp
  __int64 *v28; // rbx
  __int64 v29; // rdi
  void *v30; // rax
  __int8 v31; // al
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  size_t n; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v5 = 8LL * a2;
    v7 = a1[4];
    if ( a2 >= v7 )
    {
      do
      {
        v11 = v7;
        v12 = a1[3];
        v13 = v7 + 1;
        if ( a1[5] < v13 )
        {
          v9 = qvector_reserve((__int64)(a1 + 3), v12, v13, 8);
          a1[3] = v9;
          v12 = v9;
        }
        v10 = (_DWORD *)(v12 + 8 * a1[4]);
        *v10 = v11;
        v10[1] = 0;
        v7 = a1[4] + 1;
        a1[4] = v7;
      }
      while ( v4 >= v7 );
      v8 = (_DWORD *)(a1[3] + v5);
    }
    else
    {
      v8 = (_DWORD *)(a1[3] + v5);
      if ( *v8 != a2 )
      {
        if ( !under_debugger )
          sub_383060(0xC7A2u, a4);
        BUG();
      }
    }
    v14 = *a1;
    *v8 = a3;
    v15 = (__int64 *)(v14 + 24 * v4);
    v16 = (__int64 *)(v14 + 24LL * a3);
    v8[1] = v16[1];
    v17 = *v15;
    v18 = v15[1] << 6;
    v39 = v18 >> 6;
    if ( v18 >> 6 )
    {
      v19 = *v16;
      v20 = 0;
      v21 = v16[1];
      v22 = (v18 >> 6) + v21;
      v23 = v21 << 6;
      if ( v16[2] < v22 )
      {
        n = v15[1] << 6;
        v36 = qvector_reserve((__int64)v16, v19, v22, 64);
        v37 = v16[1];
        v18 = n;
        *v16 = v36;
        v19 = v36;
        v20 = (v37 << 6) - v23;
      }
      v24 = (__m128i *)(v19 + v23);
      v25 = v17 + v18;
      memmove(&v24->m128i_i8[v18], v24, v20);
      for ( ; v25 != v17; v24[-1].m128i_i8[8] = v31 )
      {
        v32 = _mm_loadu_si128((const __m128i *)v17);
        *v24 = v32;
        sub_64000(v24[1].m128i_i64, v17 + 16, *(double *)v32.m128i_i64);
        v24[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v24[2] + 8) = 0;
        v35 = *(_QWORD *)(v17 + 40);
        if ( v35 )
        {
          v30 = (void *)qalloc_or_throw(16 * v35, v17 + 16, v33, v34);
          v24[2].m128i_i64[0] = (__int64)v30;
          v24[3].m128i_i64[0] = v35;
          memcpy(v30, *(const void **)(v17 + 32), 16 * v35);
          v24[2].m128i_i64[1] = v35;
        }
        v31 = *(_BYTE *)(v17 + 56);
        v17 += 64;
        v24 += 4;
      }
      v16[1] += v39;
      v17 = *v15;
    }
    if ( v17 )
    {
      v26 = v15[1];
      if ( v26 )
      {
        for ( i = 0; i != v26; ++i )
        {
          v28 = (__int64 *)((i << 6) + v17);
          v29 = v28[4];
          if ( v29 )
          {
            v28[5] = 0;
            qfree(v29);
          }
          qfree(v28[2]);
          v17 = *v15;
        }
      }
      v15[1] = 0;
      qfree(v17);
      *v15 = 0;
      v15[2] = 0;
    }
  }
}

