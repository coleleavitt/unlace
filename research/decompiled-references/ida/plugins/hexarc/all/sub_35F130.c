__m128i *__fastcall sub_35F130(__m128i *a1, __int64 a2, _QWORD *a3, __m128i *a4, double a5, double a6, __m128 a7)
{
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r12
  __m128 v11; // xmm0
  unsigned __int64 v12; // xmm2_8
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  size_t v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rdx

  v7 = a3;
  v8 = (__int64)a3 - a2;
  v9 = v8 >> 3;
  v11 = (__m128)_mm_loadu_si128(a4);
  v12 = _mm_movehl_ps(a7, v11).m128_u64[0];
  if ( v8 > 0 )
  {
    v13 = v12;
    v14 = v11.m128_u64[0];
    while ( v14 != v13 )
    {
      v17 = v9;
      v18 = (__int64)(v14 - v13) >> 3;
      if ( v18 <= v9 )
        v17 = (__int64)(v14 - v13) >> 3;
      v19 = 8 * v17;
      v7 -= v17;
      v20 = -8 * v17;
      if ( 8 * v17 > 8 )
        goto LABEL_11;
      if ( 8 * v17 == 8 )
        goto LABEL_17;
LABEL_12:
      v21 = v18 - v17;
      if ( v21 < 0 )
      {
        v15 = ~((unsigned __int64)~v21 >> 6);
        goto LABEL_5;
      }
      v14 += v20;
      if ( v21 > 63 )
      {
        v15 = v21 >> 6;
LABEL_5:
        v16 = (unsigned __int64 *)(a4[1].m128i_i64[1] + 8 * v15);
        a4[1].m128i_i64[1] = (__int64)v16;
        v13 = *v16;
        v14 = v13 + 8 * (v21 - (v15 << 6));
        *(__m128i *)((char *)a4 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 512));
      }
      v9 -= v17;
      a4->m128i_i64[0] = v14;
      if ( v9 <= 0 )
      {
        v11 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)v13);
        goto LABEL_19;
      }
    }
    v17 = 64;
    v14 = *(_QWORD *)(a4[1].m128i_i64[1] - 8) + 512LL;
    if ( v9 <= 64 )
      v17 = v9;
    v19 = 8 * v17;
    v7 -= v17;
    v20 = -8 * v17;
    if ( 8 * v17 != 8 )
    {
LABEL_11:
      memmove((void *)(v14 + v20), v7, v19);
      v14 = a4->m128i_i64[0];
      v13 = a4->m128i_u64[1];
      v18 = (__int64)(a4->m128i_i64[0] - v13) >> 3;
      goto LABEL_12;
    }
LABEL_17:
    v20 = -8;
    *(_QWORD *)(v14 - 8) = *v7;
    v14 = a4->m128i_i64[0];
    v13 = a4->m128i_u64[1];
    v18 = (__int64)(a4->m128i_i64[0] - v13) >> 3;
    goto LABEL_12;
  }
LABEL_19:
  *a1 = (__m128i)v11;
  a1[1] = _mm_loadu_si128(a4 + 1);
  return a1;
}

