__int64 __fastcall sub_288310(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // r14
  const __m128i **v4; // rbp
  const __m128i *v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *(_DWORD *)(a2 + 8) != 71 )
  {
LABEL_29:
    if ( !under_debugger )
      sub_383060(0xC5B7u, *(double *)a3.m128_u64);
    BUG();
  }
  v3 = a2;
  while ( 1 )
  {
    v4 = *(const __m128i ***)(v3 + 24);
    v5 = *v4;
    if ( *v4 == (const __m128i *)v4 )
      return 0;
    while ( 1 )
    {
      v6 = sub_287D00((__int64 *)a1, (__int64)v5[1].m128i_i64, 1);
      v7 = v6;
      if ( v6 == 7 )
      {
        if ( *(_BYTE *)(a1 + 128) )
          return 5;
        if ( v4 != (const __m128i **)v5 )
          goto LABEL_10;
LABEL_22:
        *(_BYTE *)(a1 + 128) = 1;
        *(_QWORD *)(a1 + 104) = v5;
        *(_QWORD *)(a1 + 112) = v4;
        v10 = v5[1].m128i_i64[0];
        if ( v10 == -1 )
          v10 = *(_QWORD *)v3;
        *(_QWORD *)(a1 + 120) = v10;
        return 0;
      }
      if ( v6 > 7 )
      {
        if ( v6 != 8 || v4 != (const __m128i **)v5->m128i_i64[0] )
          return 5;
        return v7;
      }
      if ( v6 )
        break;
      v5 = (const __m128i *)v5->m128i_i64[0];
      if ( v4 == (const __m128i **)v5 )
        return 0;
    }
    if ( v6 - 1 > 3 || *(_BYTE *)(a1 + 128) )
      return 5;
    if ( v4 != (const __m128i **)v5 )
      break;
LABEL_25:
    if ( v7 != 4 )
      goto LABEL_22;
    v11 = *(_QWORD *)(a1 + 56);
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 48, v12, v11 + 1, 24);
      v11 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = v14;
      v12 = v14;
    }
    v13 = v12 + 24 * v11;
    *(_OWORD *)v13 = 0;
    ++*(_QWORD *)(a1 + 56);
    a3 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(v5), (__m128i)(unsigned __int64)v4);
    *(__m128 *)v13 = a3;
    *(_QWORD *)(v13 + 16) = v5[1].m128i_i64[0];
    v3 = *(_QWORD *)(v5[2].m128i_i64[1] + 64);
    if ( *(_DWORD *)(v3 + 8) != 71 )
      goto LABEL_29;
  }
LABEL_10:
  v8 = (__int64 *)v5;
  while ( !(unsigned __int8)sub_285490((__int64)(v8 + 2), 0) )
  {
    v8 = (__int64 *)*v8;
    if ( v4 == (const __m128i **)v8 )
      goto LABEL_25;
  }
  return 5;
}

