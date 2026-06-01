__m128i *__fastcall sub_358720(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int32 a5)
{
  __int64 v5; // r9
  __int64 v7; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  __m128i *result; // rax
  __int64 v12; // rsi
  __m128i *v13; // rcx
  __int64 v14; // rcx

  v5 = a2;
  v7 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 >= v9 )
  {
    result = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_13;
    v10 = a2;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v10 = 2 * (a2 + 1);
    result = (__m128i *)(a1 + 32 * (a2 + 1));
    if ( *(_QWORD *)result->m128i_i64[0] < *(_QWORD *)result[-1].m128i_i64[0] )
    {
      --v10;
      result = (__m128i *)(a1 + 16 * v10);
    }
    *(__m128i *)(a1 + 16 * a2) = _mm_loadu_si128(result);
    if ( v9 <= v10 )
      break;
    a2 = v10;
  }
  if ( !v7 && (a3 - 2) / 2 == v10 )
  {
LABEL_15:
    v14 = v10 + 1;
    v10 = 2 * (v10 + 1) - 1;
    *result = _mm_loadu_si128((const __m128i *)(a1 + 32 * v14 - 16));
    result = (__m128i *)(a1 + 16 * v10);
  }
  v12 = (v10 - 1) / 2;
  if ( v10 > v5 )
  {
    while ( 1 )
    {
      v13 = (__m128i *)(a1 + 16 * v12);
      result = (__m128i *)(a1 + 16 * v10);
      if ( *(_QWORD *)v13->m128i_i64[0] >= *a4 )
        break;
      *result = _mm_loadu_si128(v13);
      v10 = v12;
      if ( v5 >= v12 )
      {
        v13->m128i_i64[0] = (__int64)a4;
        v13->m128i_i32[2] = a5;
        return (__m128i *)(a1 + 16 * v12);
      }
      v12 = (v12 - 1) / 2;
    }
  }
LABEL_13:
  result->m128i_i64[0] = (__int64)a4;
  result->m128i_i32[2] = a5;
  return result;
}

