__int64 __fastcall sub_2886D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  const __m128i **v3; // rbp
  const __m128i *v4; // r12
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 *v7; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *(_DWORD *)(a2 + 8) != 71 )
  {
LABEL_29:
    if ( !under_debugger )
      sub_3835A0(50615);
    BUG();
  }
  v2 = a2;
  while ( 1 )
  {
    v3 = *(const __m128i ***)(v2 + 24);
    v4 = *v3;
    if ( *v3 == (const __m128i *)v3 )
      return 0;
    while ( 1 )
    {
      v5 = sub_2880C0((__int64 *)a1, (__int64)v4[1].m128i_i64, 1);
      v6 = v5;
      if ( v5 == 7 )
      {
        if ( *(_BYTE *)(a1 + 128) )
          return 5;
        if ( v3 != (const __m128i **)v4 )
          goto LABEL_10;
LABEL_22:
        *(_BYTE *)(a1 + 128) = 1;
        *(_QWORD *)(a1 + 104) = v4;
        *(_QWORD *)(a1 + 112) = v3;
        v9 = v4[1].m128i_i64[0];
        if ( v9 == -1 )
          v9 = *(_QWORD *)v2;
        *(_QWORD *)(a1 + 120) = v9;
        return 0;
      }
      if ( v5 > 7 )
      {
        if ( v5 != 8 || v3 != (const __m128i **)v4->m128i_i64[0] )
          return 5;
        return v6;
      }
      if ( v5 )
        break;
      v4 = (const __m128i *)v4->m128i_i64[0];
      if ( v3 == (const __m128i **)v4 )
        return 0;
    }
    if ( v5 - 1 > 3 || *(_BYTE *)(a1 + 128) )
      return 5;
    if ( v3 != (const __m128i **)v4 )
      break;
LABEL_25:
    if ( v6 != 4 )
      goto LABEL_22;
    v10 = *(_QWORD *)(a1 + 56);
    v11 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve();
      v10 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = v13;
      v11 = v13;
    }
    v12 = v11 + 24 * v10;
    *(_OWORD *)v12 = 0;
    ++*(_QWORD *)(a1 + 56);
    *(__m128i *)v12 = _mm_unpacklo_epi64(_mm_loadl_epi64(v4), (__m128i)(unsigned __int64)v3);
    *(_QWORD *)(v12 + 16) = v4[1].m128i_i64[0];
    v2 = *(_QWORD *)(v4[2].m128i_i64[1] + 64);
    if ( *(_DWORD *)(v2 + 8) != 71 )
      goto LABEL_29;
  }
LABEL_10:
  v7 = (__int64 *)v4;
  while ( !(unsigned __int8)sub_285850((__int64)(v7 + 2), 0) )
  {
    v7 = (__int64 *)*v7;
    if ( v3 == (const __m128i **)v7 )
      goto LABEL_25;
  }
  return 5;
}

