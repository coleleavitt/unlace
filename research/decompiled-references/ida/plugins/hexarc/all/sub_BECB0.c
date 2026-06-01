__m128i *__fastcall sub_BECB0(__int64 a1, int a2)
{
  __int64 v4; // r9
  __m128i *v5; // rcx
  __m128i *v6; // rdi
  __m128i v7; // xmm0
  __int32 v8; // ebx
  int v9; // r10d
  int v10; // ebp
  __int8 *v11; // r11
  __m128i *v12; // rax
  __m128i *result; // rax
  __m128i *v14; // rsi
  int v15; // esi

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(__m128i **)a1;
  v6 = *(__m128i **)(a1 + 8);
  v7 = _mm_loadl_epi64(v5);
  v8 = v5->m128i_i32[2];
  v9 = _mm_cvtsi128_si32(v7);
  v10 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v7, 229));
  if ( v5 == v6 )
  {
    v6 = *(__m128i **)(v4 - 8);
    v4 -= 8;
    v12 = (__m128i *)((char *)v6 + 504);
    v11 = &v6[31].m128i_i8[8];
  }
  else
  {
    v11 = *(__int8 **)(a1 + 16);
    v12 = v5;
  }
  for ( result = (__m128i *)((char *)v12 - 12); ; result = (__m128i *)((char *)v14 - 12) )
  {
    v15 = result->m128i_i32[0];
    if ( a2 != v9 )
      break;
    if ( a2 == v15 && result->m128i_i32[1] >= v10 )
      goto LABEL_17;
LABEL_11:
    v5->m128i_i64[0] = result->m128i_i64[0];
    v5->m128i_i32[2] = result->m128i_i32[2];
    v14 = result;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v4;
    if ( result == v6 )
    {
      v6 = *(__m128i **)(v4 - 8);
      v4 -= 8;
      v14 = (__m128i *)((char *)v6 + 504);
      v11 = &v6[31].m128i_i8[8];
    }
    v5 = result;
  }
  if ( a2 == v15 )
    goto LABEL_17;
  if ( !(v15 | v9) )
  {
    if ( result->m128i_i32[1] <= v10 )
      goto LABEL_17;
    goto LABEL_11;
  }
  if ( result->m128i_i32[2] <= v8
    && (result->m128i_i32[2] < v8 || v9 >= v15 && (v9 > v15 || v10 >= result->m128i_i32[1])) )
  {
    goto LABEL_11;
  }
LABEL_17:
  v5->m128i_i32[2] = v8;
  v5->m128i_i64[0] = v7.m128i_i64[0];
  return result;
}

