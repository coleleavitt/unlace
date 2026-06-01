__int64 __fastcall sub_54290(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9)
{
  __int64 v11; // r12
  __int64 v13; // rbx
  __int64 i; // rdi
  __int64 result; // rax
  __m128i *v16; // rdx
  __m128i *v17; // rsi
  __int64 v18; // rsi
  const __m128i *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax

  v11 = a3 & 1;
  v13 = (a3 - 1) / 2;
  if ( a2 >= v13 )
  {
    result = 3 * a2;
    v16 = (__m128i *)(a1 + 24 * a2);
    if ( v11 )
      goto LABEL_13;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_13;
    result = a2;
    goto LABEL_15;
  }
  for ( i = a2; ; i = result )
  {
    result = 2 * (i + 1);
    v16 = (__m128i *)(a1 + 48 * (i + 1));
    if ( v16[-2].m128i_i64[1] > v16->m128i_i64[0] )
    {
      --result;
      v16 = (__m128i *)(a1 + 24 * result);
    }
    v17 = (__m128i *)(a1 + 24 * i);
    *v17 = _mm_loadu_si128(v16);
    v17[1].m128i_i64[0] = v16[1].m128i_i64[0];
    if ( v13 <= result )
      break;
  }
  if ( !v11 && (a3 - 2) / 2 == result )
  {
LABEL_15:
    v20 = result + 1;
    v21 = 2 * v20;
    v22 = a1 + 48 * v20;
    *v16 = _mm_loadu_si128((const __m128i *)(v22 - 24));
    v16[1].m128i_i64[0] = *(_QWORD *)(v22 - 8);
    result = v21 - 1;
    v16 = (__m128i *)(a1 + 24 * (v21 - 1));
  }
  v18 = (result - 1) / 2;
  if ( result > a2 )
  {
    while ( 1 )
    {
      result *= 3;
      v19 = (const __m128i *)(a1 + 24 * v18);
      v16 = (__m128i *)(a1 + 8 * result);
      if ( v19->m128i_i64[0] >= a7 )
        break;
      *v16 = _mm_loadu_si128(v19);
      v16[1].m128i_i64[0] = v19[1].m128i_i64[0];
      result = v18;
      if ( a2 >= v18 )
      {
        v16 = (__m128i *)(a1 + 24 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
LABEL_13:
  v16->m128i_i64[0] = a7;
  v16->m128i_i64[1] = a8;
  v16[1].m128i_i16[0] = a9;
  return result;
}
