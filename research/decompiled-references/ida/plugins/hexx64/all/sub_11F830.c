__int64 __fastcall sub_11F830(const __m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  v2 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 4), (__m128i)(unsigned __int64)a1);
  *(__m128i *)(a2 + 8) = v2;
  v3 = a1[3].m128i_i64[0];
  if ( !v3 )
    return 0;
  v5 = a1[31].m128i_i64[0];
  v6 = a1[30].m128i_i64[1];
  while ( 1 )
  {
    if ( a1[31].m128i_i64[1] < (unsigned __int64)(v5 + 1) )
    {
      v9 = qvector_reserve((__int64)&a1[30].m128i_i64[1], v6, v5 + 1, 8);
      v5 = a1[31].m128i_i64[0];
      a1[30].m128i_i64[1] = v9;
      v6 = v9;
    }
    *(_QWORD *)(v6 + 8 * v5) = v3;
    ++a1[31].m128i_i64[0];
    *(_QWORD *)(a2 + 24) = v3;
    result = sub_11F760((_BYTE *)v3, (_QWORD *)a2);
    v8 = a1[31].m128i_i64[0];
    if ( (_DWORD)result )
      break;
    if ( !v8 || (v6 = a1[30].m128i_i64[1], *(_QWORD *)(v6 + 8 * v8 - 8) != v3) )
    {
      if ( !under_debugger )
        sub_383060(0xCD23u, *(double *)v2.m128i_i64);
      goto LABEL_17;
    }
    v5 = v8 - 1;
    a1[31].m128i_i64[0] = v5;
    v3 = *(_QWORD *)(v3 + 8);
    if ( !v3 )
      return 0;
  }
  if ( !v8 || v3 != *(_QWORD *)(a1[30].m128i_i64[1] + 8 * v8 - 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCD23u, *(double *)v2.m128i_i64);
LABEL_17:
    BUG();
  }
  a1[31].m128i_i64[0] = v8 - 1;
  return result;
}

