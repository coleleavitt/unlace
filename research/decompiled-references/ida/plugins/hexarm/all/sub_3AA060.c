__m128i *__fastcall sub_3AA060(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int64 a9)
{
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int32 v12; // r10d
  __int64 v14; // r11
  __int32 v15; // r9d
  __int64 i; // rcx
  __m128i *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  __m128i *result; // rax
  __int32 v22; // r13d
  __int32 v23; // r14d
  __int64 v24; // rsi
  __int32 v25; // ecx
  __m128i v26; // xmm0
  __int8 v27; // dl
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i *v31; // rdx
  __m128i v32; // [rsp+0h] [rbp-68h] BYREF
  __m128i v33; // [rsp+10h] [rbp-58h] BYREF
  __int64 v34; // [rsp+20h] [rbp-48h]

  v10 = (a3 - 1) / 2;
  v11 = a3 & 1;
  v12 = DWORD1(a8);
  v14 = a8;
  v15 = a8;
  if ( a2 >= v10 )
  {
    result = (__m128i *)(a1 + 40 * a2);
    if ( (a3 & 1) != 0 )
    {
      v32 = _mm_loadu_si128((const __m128i *)&a7);
      v34 = a9;
      v33 = _mm_loadu_si128((const __m128i *)&a8);
      goto LABEL_15;
    }
    v18 = a2;
    goto LABEL_18;
  }
  for ( i = a2; ; i = v18 )
  {
    v18 = 2 * (i + 1);
    v19 = 80 * (i + 1);
    v20 = a1 + v19 - 40;
    result = (__m128i *)(a1 + v19);
    v22 = result[1].m128i_i32[0];
    v23 = *(_DWORD *)(v20 + 16);
    if ( v23 > v22 || *(_DWORD *)(v20 + 20) > result[1].m128i_i32[1] && v23 == v22 )
    {
      --v18;
      result = (__m128i *)(a1 + 40 * v18);
    }
    v17 = (__m128i *)(a1 + 40 * i);
    *v17 = _mm_loadu_si128(result);
    v17[1] = _mm_loadu_si128(result + 1);
    v17[2].m128i_i8[0] = result[2].m128i_i8[0];
    if ( v10 <= v18 )
      break;
  }
  if ( !v11 )
  {
LABEL_18:
    if ( (a3 - 2) / 2 == v18 )
    {
      v29 = v18 + 1;
      v30 = a1 + 80 * v29;
      *result = _mm_loadu_si128((const __m128i *)(v30 - 40));
      result[1] = _mm_loadu_si128((const __m128i *)(v30 - 24));
      result[2].m128i_i8[0] = *(_BYTE *)(v30 - 8);
      v18 = 2 * v29 - 1;
      result = (__m128i *)(a1 + 40 * v18);
    }
  }
  v34 = a9;
  v32 = _mm_loadu_si128((const __m128i *)&a7);
  v33 = _mm_loadu_si128((const __m128i *)&a8);
  v24 = (v18 - 1) / 2;
  if ( v18 > a2 )
  {
    while ( 1 )
    {
      result = (__m128i *)(a1 + 40 * v24);
      v25 = result[1].m128i_i32[0];
      if ( v25 >= v15 && (result[1].m128i_i32[1] >= v12 || v25 != v15) )
        break;
      v31 = (__m128i *)(a1 + 40 * v18);
      *v31 = _mm_loadu_si128(result);
      v31[1] = _mm_loadu_si128(result + 1);
      v31[2].m128i_i8[0] = result[2].m128i_i8[0];
      v18 = v24;
      if ( v24 <= a2 )
        goto LABEL_15;
      v24 = (v24 - 1) / 2;
    }
    result = (__m128i *)(a1 + 40 * v18);
  }
LABEL_15:
  v26 = _mm_load_si128(&v32);
  v27 = v34;
  v33.m128i_i64[0] = v14;
  *result = v26;
  v28 = _mm_load_si128(&v33);
  result[2].m128i_i8[0] = v27;
  result[1] = v28;
  return result;
}

