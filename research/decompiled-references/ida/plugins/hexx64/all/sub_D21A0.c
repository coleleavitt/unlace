__m128i *__fastcall sub_D21A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __m128i *v7; // rbx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  if ( *(_DWORD *)(a1 + 64) <= 1u )
    goto LABEL_16;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
  if ( *(_DWORD *)(v5 + 352) == 1 && !**(_DWORD **)(v5 + 344) )
    return *(__m128i **)(*(_QWORD *)(a1 + 528) + 8LL);
  v6 = sub_68AC0(a1, 1, 1, a4, a5);
  *(_DWORD *)(v6 + 24) |= 2u;
  v7 = (__m128i *)v6;
  if ( !*(_DWORD *)(a1 + 64) )
LABEL_16:
    sub_CF110(a5);
  **(_DWORD **)(**(_QWORD **)(a1 + 528) + 368LL) = 1;
  v8 = *(_DWORD **)(v5 + 344);
  v9 = &v8[*(_QWORD *)(v5 + 352)];
  if ( v8 == v9 )
    goto LABEL_17;
  while ( *v8 )
  {
    if ( v9 == ++v8 )
      goto LABEL_17;
  }
  if ( v9 == v8 )
  {
LABEL_17:
    if ( !under_debugger )
      sub_383060(0xCDB3u, a5);
    BUG();
  }
  *v8 = 1;
  v10 = v7[22].m128i_i64[0];
  v11 = v7[21].m128i_i64[1];
  if ( v7[22].m128i_i64[1] < (unsigned __int64)(v10 + 1) )
  {
    v16 = qvector_reserve((__int64)&v7[21].m128i_i64[1], v11, v10 + 1, 4);
    v7[21].m128i_i64[1] = v16;
    v11 = v16;
    v10 = v7[22].m128i_i64[0];
  }
  *(_DWORD *)(v11 + 4 * v10) = 0;
  v12 = v7[23].m128i_i64[1];
  ++v7[22].m128i_i64[0];
  v13 = v7[23].m128i_i64[0];
  if ( v7[24].m128i_i64[0] < (unsigned __int64)(v12 + 1) )
  {
    v15 = qvector_reserve((__int64)v7[23].m128i_i64, v13, v12 + 1, 4);
    v7[23].m128i_i64[0] = v15;
    v13 = v15;
    v12 = v7[23].m128i_i64[1];
  }
  *(_DWORD *)(v13 + 4 * v12) = 2;
  v7[4].m128i_i32[3] = 3;
  ++v7[23].m128i_i64[1];
  v7[2] = _mm_unpacklo_epi64(
            (__m128i)*(unsigned __int64 *)(a1 + 40),
            (__m128i)(unsigned __int64)(*(_QWORD *)(a1 + 40) + 1LL));
  return v7;
}

