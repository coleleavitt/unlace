unsigned __int64 __fastcall sub_91C70(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rbx
  __int32 v13; // eax
  size_t v14; // r15
  void *v15; // rax
  const void *v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __m128i v23; // xmm3
  __m128i v24; // xmm2
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28[12]; // [rsp+0h] [rbp-138h] BYREF
  __m128i v29; // [rsp+C8h] [rbp-70h] BYREF
  __m128i v30; // [rsp+D8h] [rbp-60h] BYREF
  __m128i v31; // [rsp+E8h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+F8h] [rbp-40h]

  v2 = a1[1];
  v32 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v28, 0, 0x78u);
    if ( a2 < v2 )
    {
      v17 = a2;
      v18 = 120 * a2;
      do
      {
        v19 = v18 + *a1;
        v20 = *(_QWORD *)(v19 + 16);
        if ( v20 )
        {
          *(_QWORD *)(v19 + 24) = 0;
          qfree(v20);
        }
        ++v17;
        v18 += 120;
      }
      while ( v2 != v17 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)v28 < *a1 || (unsigned __int64)v28 >= v5 + 120 * v6 )
      {
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 120);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v7 = 120 * v2;
          do
          {
            v12 = v7 + *a1;
            *(_QWORD *)v12 = v28[0].m128i_i64[0];
            v13 = v28[0].m128i_i32[2];
            *(_QWORD *)(v12 + 16) = 0;
            *(_DWORD *)(v12 + 8) = v13;
            *(_OWORD *)(v12 + 24) = 0;
            v14 = v28[1].m128i_u64[1];
            if ( v28[1].m128i_i64[1] )
            {
              v15 = (void *)qalloc_or_throw(v28[1].m128i_i64[1]);
              *(_QWORD *)(v12 + 16) = v15;
              v16 = (const void *)v28[1].m128i_i64[0];
              *(_QWORD *)(v12 + 32) = v14;
              memcpy(v15, v16, v14);
              *(_QWORD *)(v12 + 24) = v14;
            }
            v8 = v28[2].m128i_i64[1];
            ++v2;
            v7 += 120;
            *(__m128i *)(v12 + 48) = _mm_load_si128(&v28[3]);
            v9 = _mm_loadu_si128((const __m128i *)&v28[4].m128i_u64[1]);
            *(_QWORD *)(v12 + 40) = v8;
            v10 = v28[4].m128i_i64[0];
            *(__m128i *)(v12 + 72) = v9;
            v11 = _mm_loadu_si128((const __m128i *)&v28[5].m128i_u64[1]);
            *(_QWORD *)(v12 + 64) = v10;
            *(__m128i *)(v12 + 88) = v11;
            *(__m128i *)(v12 + 104) = _mm_loadu_si128((const __m128i *)&v28[6].m128i_u64[1]);
          }
          while ( v2 < a2 );
        }
      }
      else
      {
        v29 = _mm_loadu_si128((const __m128i *)&v28[4].m128i_u64[1]);
        v30 = _mm_loadu_si128((const __m128i *)&v28[5].m128i_u64[1]);
        v31 = _mm_loadu_si128((const __m128i *)&v28[6].m128i_u64[1]);
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 120);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v23 = _mm_loadu_si128(&v29);
          v24 = _mm_loadu_si128(&v30);
          v25 = _mm_loadu_si128(&v31);
          v26 = 120 * v2;
          do
          {
            ++v2;
            v27 = v26 + *a1;
            v26 += 120;
            *(_QWORD *)v27 = 0;
            *(_DWORD *)(v27 + 8) = 0;
            *(_QWORD *)(v27 + 16) = 0;
            *(_QWORD *)(v27 + 40) = 0;
            *(_QWORD *)(v27 + 64) = 0;
            *(_OWORD *)(v27 + 24) = 0;
            *(_OWORD *)(v27 + 48) = 0;
            *(__m128i *)(v27 + 72) = v23;
            *(__m128i *)(v27 + 88) = v24;
            *(__m128i *)(v27 + 104) = v25;
          }
          while ( a2 != v2 );
        }
      }
    }
    v21 = v28[1].m128i_i64[0];
    a1[1] = a2;
    if ( v21 )
    {
      v28[1].m128i_i64[1] = 0;
      qfree(v21);
    }
  }
  return v32 - __readfsqword(0x28u);
}

