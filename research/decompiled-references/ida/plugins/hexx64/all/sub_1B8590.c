__int64 __fastcall sub_1B8590(__m128i *a1, char *a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  signed __int64 v9; // r14
  __int64 *i; // r12
  __m128 v12; // xmm0
  __int64 *v13; // rdi
  __m128i *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __m128d v19; // xmm1
  __int64 v20; // rsi
  __m128i *j; // rax
  __int64 k; // rbx
  __int64 v23; // rcx

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 128 )
  {
    v7 = result >> 4;
    v8 = a3;
    v9 = (a2 - (char *)a1) >> 3;
    for ( i = (__int64 *)a2; v8; v9 = ((char *)v14 - (char *)a1) >> 3 )
    {
      v12 = (__m128)_mm_loadu_si128(a1);
      v13 = &a1->m128i_i64[v7];
      --v8;
      v14 = (__m128i *)&a1->m128i_u64[1];
      v15 = *v13;
      v16 = *(i - 1);
      a6 = _mm_movehl_ps(a6, v12);
      v17 = v12.m128_u64[0];
      v18 = a6.m128_u64[0];
      v19 = _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1);
      if ( a6.m128_i64[0] >= *v13 )
      {
        if ( a6.m128_i64[0] >= v16 )
        {
          if ( v15 >= v16 )
          {
LABEL_25:
            a1->m128i_i64[0] = v15;
            *v13 = v12.m128_u64[0];
            v17 = a1->m128i_i64[1];
            v18 = a1->m128i_i64[0];
            v20 = *(i - 1);
            goto LABEL_7;
          }
LABEL_16:
          a1->m128i_i64[0] = v16;
          v20 = v12.m128_u64[0];
          *(i - 1) = v12.m128_u64[0];
          v18 = a1->m128i_i64[0];
          v17 = a1->m128i_i64[1];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v15 < v16 )
          goto LABEL_25;
        if ( a6.m128_i64[0] < v16 )
          goto LABEL_16;
      }
      *(__m128d *)a1 = v19;
      v20 = *(i - 1);
LABEL_7:
      j = (__m128i *)i;
      while ( 1 )
      {
        while ( v17 < v18 )
        {
          v17 = v14->m128i_i64[1];
          v14 = (__m128i *)((char *)v14 + 8);
        }
        for ( j = (__m128i *)((char *)j - 8); v20 > v18; j = (__m128i *)((char *)j - 8) )
          v20 = j[-1].m128i_i64[1];
        if ( v14 >= j )
          break;
        v14->m128i_i64[0] = v20;
        v14 = (__m128i *)((char *)v14 + 8);
        v20 = j[-1].m128i_i64[1];
        j->m128i_i64[0] = v17;
        v17 = v14->m128i_i64[0];
        v18 = a1->m128i_i64[0];
      }
      sub_1B8590(v14, i, v8, *(double *)v12.m128_u64, v19.m128d_f64[0], a6);
      result = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 128 )
        return result;
      i = (__int64 *)v14;
      v7 = result >> 4;
    }
    for ( k = v7 - 1; ; --k )
    {
      sub_1B8340((__int64)a1, k, v9, a1->m128i_i64[k]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 8;
          result = sub_1B8340((__int64)a1, 0, ((char *)i - (char *)a1) >> 3, v23) )
    {
      v23 = *--i;
      *i = a1->m128i_i64[0];
    }
  }
  return result;
}

