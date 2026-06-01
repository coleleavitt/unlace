_QWORD *__fastcall sub_3EFA50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  _QWORD *result; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm1

  result = (_QWORD *)a1[100];
  if ( *((_BYTE *)result + 148) == 2 )
  {
    result = (_QWORD *)a1[104];
    if ( *((_DWORD *)result + 21) == 8 )
    {
      v6 = a1[1];
      if ( *(_DWORD *)(v6 + 64) <= 1u )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a5);
        BUG();
      }
      result = *(_QWORD **)(v6 + 528);
      v7 = result[1];
      if ( v7 )
      {
        v8 = j__qalloc_or_throw(80, a2, a3, a4);
        v9 = *(_QWORD *)(a1[1] + 40LL);
        *(_QWORD *)(v8 + 40) = 0;
        *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v8 + 56) = 0;
        *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v8 + 72) = 0;
        sub_330970(v8, v9);
        *(_DWORD *)v8 = 4;
        sub_120A10(v8 + 32, (unsigned __int64 *)a1[104], 0, 16, *(_QWORD *)(v8 + 24), 0);
        v10 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 36));
        v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 620LL));
        *(_BYTE *)(v8 + 64) = 1;
        v10.m128i_i64[0] = _mm_unpacklo_epi32(v10, v11).m128i_u64[0];
        *(_QWORD *)(v8 + 68) = v10.m128i_i64[0];
        return sub_A3160(v7, (_QWORD *)v8, 0, *(double *)v10.m128i_i64);
      }
    }
  }
  return result;
}

