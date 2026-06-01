__m128i *__fastcall sub_1912E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8,
        __int64 a9)
{
  __int64 v9; // r9
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __m128i *result; // rax
  __m128i *v16; // rcx
  __int64 v17; // rcx
  const __m128i *v18; // rsi
  __m128i v19; // xmm0
  __int8 v20; // dl
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rsi
  __m128i v24; // [rsp+0h] [rbp-48h] BYREF
  __m128i v25; // [rsp+10h] [rbp-38h] BYREF
  __int64 v26; // [rsp+20h] [rbp-28h]

  v9 = a2;
  v11 = a8.m128i_i64[1];
  v12 = a3 & 1;
  v13 = (a3 - 1) / 2;
  if ( a2 >= v13 )
  {
    result = (__m128i *)(a1 + 40 * a2);
    if ( (a3 & 1) != 0 )
    {
      v24 = _mm_loadu_si128((const __m128i *)&a7);
      v26 = a9;
      v25 = _mm_loadu_si128(&a8);
      goto LABEL_10;
    }
    v14 = a2;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v14 = 2 * (a2 + 1);
    result = (__m128i *)(a1 + 80 * (a2 + 1));
    if ( result[-1].m128i_i64[0] > result[1].m128i_i64[1] )
    {
      --v14;
      result = (__m128i *)(a1 + 40 * v14);
    }
    v16 = (__m128i *)(a1 + 40 * a2);
    *v16 = _mm_loadu_si128(result);
    v16[1] = _mm_loadu_si128(result + 1);
    v16[2].m128i_i8[0] = result[2].m128i_i8[0];
    if ( v13 <= v14 )
      break;
    a2 = v14;
  }
  if ( !v12 )
  {
LABEL_13:
    if ( (a3 - 2) / 2 == v14 )
    {
      v22 = v14 + 1;
      v23 = a1 + 80 * v22;
      *result = _mm_loadu_si128((const __m128i *)(v23 - 40));
      result[1] = _mm_loadu_si128((const __m128i *)(v23 - 24));
      result[2].m128i_i8[0] = *(_BYTE *)(v23 - 8);
      v14 = 2 * v22 - 1;
      result = (__m128i *)(a1 + 40 * v14);
    }
  }
  v26 = a9;
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  v25 = _mm_loadu_si128(&a8);
  v17 = (v14 - 1) / 2;
  if ( v14 > v9 )
  {
    while ( 1 )
    {
      v18 = (const __m128i *)(a1 + 40 * v17);
      result = (__m128i *)(a1 + 40 * v14);
      if ( v18[1].m128i_i64[1] >= v11 )
        break;
      *result = _mm_loadu_si128(v18);
      result[1] = _mm_loadu_si128(v18 + 1);
      result[2].m128i_i8[0] = v18[2].m128i_i8[0];
      v14 = v17;
      if ( v9 >= v17 )
      {
        result = (__m128i *)(a1 + 40 * v17);
        break;
      }
      v17 = (v17 - 1) / 2;
    }
  }
LABEL_10:
  v19 = _mm_load_si128(&v24);
  v20 = v26;
  v25.m128i_i64[1] = v11;
  *result = v19;
  v21 = _mm_load_si128(&v25);
  result[2].m128i_i8[0] = v20;
  result[1] = v21;
  return result;
}

