__m128i *__fastcall sub_1954E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int128 a8,
        const __m128i a9,
        __int64 a10)
{
  __int64 v10; // r9
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __m128i *result; // rax
  __m128i *v17; // rcx
  __int64 v18; // rcx
  const __m128i *v19; // rsi
  __m128i v20; // xmm0
  __int8 v21; // dl
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rsi
  __m128i v25; // [rsp+0h] [rbp-48h] BYREF
  __m128i v26; // [rsp+10h] [rbp-38h] BYREF
  __int64 v27; // [rsp+20h] [rbp-28h]

  v10 = a2;
  v12 = a9.m128i_i64[1];
  v13 = a3 & 1;
  v14 = (a3 - 1) / 2;
  if ( a2 >= v14 )
  {
    result = (__m128i *)(a1 + 40 * a2);
    if ( (a3 & 1) != 0 )
    {
      v25 = _mm_loadu_si128((const __m128i *)&a8);
      v27 = a10;
      v26 = _mm_loadu_si128(&a9);
      goto LABEL_10;
    }
    v15 = a2;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v15 = 2 * (a2 + 1);
    result = (__m128i *)(a1 + 80 * (a2 + 1));
    if ( result[-1].m128i_i64[0] > result[1].m128i_i64[1] )
    {
      --v15;
      result = (__m128i *)(a1 + 40 * v15);
    }
    v17 = (__m128i *)(a1 + 40 * a2);
    *v17 = _mm_loadu_si128(result);
    v17[1] = _mm_loadu_si128(result + 1);
    v17[2].m128i_i8[0] = result[2].m128i_i8[0];
    if ( v14 <= v15 )
      break;
    a2 = v15;
  }
  if ( !v13 )
  {
LABEL_13:
    if ( (a3 - 2) / 2 == v15 )
    {
      v23 = v15 + 1;
      v24 = a1 + 80 * v23;
      *result = _mm_loadu_si128((const __m128i *)(v24 - 40));
      result[1] = _mm_loadu_si128((const __m128i *)(v24 - 24));
      result[2].m128i_i8[0] = *(_BYTE *)(v24 - 8);
      v15 = 2 * v23 - 1;
      result = (__m128i *)(a1 + 40 * v15);
    }
  }
  v27 = a10;
  v25 = _mm_loadu_si128((const __m128i *)&a8);
  v26 = _mm_loadu_si128(&a9);
  v18 = (v15 - 1) / 2;
  if ( v15 > v10 )
  {
    while ( 1 )
    {
      v19 = (const __m128i *)(a1 + 40 * v18);
      result = (__m128i *)(a1 + 40 * v15);
      if ( v19[1].m128i_i64[1] >= v12 )
        break;
      *result = _mm_loadu_si128(v19);
      result[1] = _mm_loadu_si128(v19 + 1);
      result[2].m128i_i8[0] = v19[2].m128i_i8[0];
      v15 = v18;
      if ( v10 >= v18 )
      {
        result = (__m128i *)(a1 + 40 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
LABEL_10:
  v20 = _mm_load_si128(&v25);
  v21 = v27;
  v26.m128i_i64[1] = v12;
  *result = v20;
  v22 = _mm_load_si128(&v26);
  result[2].m128i_i8[0] = v21;
  result[1] = v22;
  return result;
}

