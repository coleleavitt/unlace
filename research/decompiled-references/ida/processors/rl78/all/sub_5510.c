__int64 __fastcall sub_5510(__m128i *a1, unsigned __int64 *a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 *i; // r12
  __m128 v12; // xmm0
  __int64 *v13; // rdi
  unsigned __int64 *v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __m128d v19; // xmm1
  unsigned __int64 v20; // rsi
  unsigned __int64 *v21; // rax
  __int64 j; // rbx
  unsigned __int64 v23; // rcx

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v7 = result >> 4;
    v8 = a3;
    v9 = ((char *)a2 - (char *)a1) >> 3;
    for ( i = a2; v8; v9 = ((char *)v14 - (char *)a1) >> 3 )
    {
      v12 = (__m128)_mm_loadu_si128(a1);
      v13 = &a1->m128i_i64[v7];
      --v8;
      v14 = &a1->m128i_u64[1];
      v15 = *v13;
      v16 = *(i - 1);
      a6 = _mm_movehl_ps(a6, v12);
      v17 = v12.m128_u64[0];
      v18 = a6.m128_u64[0];
      v19 = _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1);
      if ( a6.m128_u64[0] >= *v13 )
      {
        if ( a6.m128_u64[0] >= v16 )
        {
          if ( v15 >= v16 )
          {
LABEL_25:
            a1->m128i_i64[0] = v15;
            *v13 = v12.m128_u64[0];
            v17 = a1->m128i_u64[1];
            v18 = a1->m128i_i64[0];
            v20 = *(i - 1);
            goto LABEL_7;
          }
LABEL_16:
          a1->m128i_i64[0] = v16;
          v20 = v12.m128_u64[0];
          *(i - 1) = v12.m128_u64[0];
          v18 = a1->m128i_i64[0];
          v17 = a1->m128i_u64[1];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v15 < v16 )
          goto LABEL_25;
        if ( a6.m128_u64[0] < v16 )
          goto LABEL_16;
      }
      *(__m128d *)a1 = v19;
      v20 = *(i - 1);
LABEL_7:
      v21 = i;
      while ( 1 )
      {
        while ( v17 < v18 )
        {
          v17 = v14[1];
          ++v14;
        }
        for ( --v21; v18 < v20; --v21 )
          v20 = *(v21 - 1);
        if ( v14 >= v21 )
          break;
        *v14++ = v20;
        v20 = *(v21 - 1);
        *v21 = v17;
        v17 = *v14;
        v18 = a1->m128i_i64[0];
      }
      sub_5510(v14, i, v8);
      result = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 128 )
        return result;
      i = v14;
      v7 = result >> 4;
    }
    for ( j = v7 - 1; ; --j )
    {
      sub_52C0((__int64)a1, j, v9, a1->m128i_u64[j]);
      if ( !j )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 8;
          result = sub_52C0((__int64)a1, 0, ((char *)i - (char *)a1) >> 3, v23) )
    {
      v23 = *--i;
      *i = a1->m128i_i64[0];
    }
  }
  return result;
}

