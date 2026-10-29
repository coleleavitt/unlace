__int64 *__fastcall sub_6BE10(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __int64 *v11; // rdx
  __int64 v12; // rsi

  v6 = a4;
  v7 = a5;
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: find_source_items(sf=%s, lnnum=%d, colnum=%d)\n");
  v8 = operator new(0x60u);
  v9 = (__m128i *)operator new(0x28u);
  v10 = _mm_loadl_epi64((const __m128i *)(a3 + 56));
  v11 = *(__int64 **)(a3 + 24);
  v9->m128i_i64[1] = 0;
  v12 = *(_QWORD *)(a3 + 16);
  v9->m128i_i64[0] = (__int64)off_C8AA0;
  v9[2].m128i_i64[0] = v7;
  v9[1] = _mm_unpacklo_epi64(v10, (__m128i)v6);
  sub_6BBE0(v8, v12, v11, (__int64)v9);
  *a1 = v8;
  return a1;
}

