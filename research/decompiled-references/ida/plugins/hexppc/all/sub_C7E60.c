__m128i *__fastcall sub_C7E60(__m128i *a1, __int64 a2, _DWORD *a3, __m128i *a4, double a5, double a6, __m128 a7)
{
  signed __int64 v8; // r14
  __m128 v9; // xmm0
  unsigned __int64 v10; // xmm2_8
  _DWORD *v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rbx
  signed __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx

  v8 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a3 - a2) >> 2);
  v9 = (__m128)_mm_loadu_si128(a4);
  v10 = _mm_movehl_ps(a7, v9).m128_u64[0];
  if ( (__int64)a3 - a2 > 0 )
  {
    v11 = a3;
    v12 = v10;
    v13 = v9.m128_u64[0];
    while ( v13 != v12 )
    {
      v16 = v8;
      v17 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v13 - v12) >> 2);
      if ( v17 <= v8 )
        v16 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v13 - v12) >> 2);
      v18 = 12 * v16;
      v11 -= 3 * v16;
      v19 = -12LL * v16;
      if ( (__int64)(12 * v16) > 12 )
        goto LABEL_11;
      if ( 12 * v16 == 12 )
        goto LABEL_17;
LABEL_12:
      v20 = v17 - v16;
      v21 = v20;
      if ( v20 < 0 )
      {
        v14 = ~(~v20 / 0x2AuLL);
        goto LABEL_5;
      }
      v13 += v19;
      if ( v20 > 41 )
      {
        v14 = v20 / 42;
LABEL_5:
        v15 = (unsigned __int64 *)(a4[1].m128i_i64[1] + 8 * v14);
        a4[1].m128i_i64[1] = (__int64)v15;
        v12 = *v15;
        *(__m128i *)((char *)a4 + 8) = _mm_unpacklo_epi64((__m128i)*v15, (__m128i)(*v15 + 504));
        v13 = v12 + 12 * (v21 - 42 * v14);
      }
      v8 -= v16;
      a4->m128i_i64[0] = v13;
      if ( v8 <= 0 )
      {
        v9 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v12);
        goto LABEL_19;
      }
    }
    v16 = 42;
    v13 = *(_QWORD *)(a4[1].m128i_i64[1] - 8) + 504LL;
    if ( v8 <= 42 )
      v16 = v8;
    v18 = 12 * v16;
    v11 -= 3 * v16;
    v19 = -12LL * v16;
    if ( 12 * v16 != 12 )
    {
LABEL_11:
      memmove((void *)(v13 + v19), v11, v18);
      v13 = a4->m128i_i64[0];
      v12 = a4->m128i_u64[1];
      v17 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a4->m128i_i64[0] - v12) >> 2);
      goto LABEL_12;
    }
LABEL_17:
    v19 = -12;
    *(_QWORD *)(v13 - 12) = *(_QWORD *)v11;
    *(_DWORD *)(v13 - 4) = v11[2];
    v13 = a4->m128i_i64[0];
    v12 = a4->m128i_u64[1];
    v17 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a4->m128i_i64[0] - v12) >> 2);
    goto LABEL_12;
  }
LABEL_19:
  *a1 = (__m128i)v9;
  a1[1] = _mm_loadu_si128(a4 + 1);
  return a1;
}

