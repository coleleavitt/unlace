__m128i *__fastcall sub_9530(__m128i *a1, int a2)
{
  __m128i *result; // rax
  __int16 v3; // dx
  __int32 v4; // ecx
  __m128i v5; // xmm0
  char *v6; // rcx
  __m128i v7; // xmm0

  result = a1;
  v3 = *((_WORD *)off_FBC0[a2] + 2);
  *(_QWORD *)(a1[1].m128i_i64[0] + 56) = (char *)a1 + 456;
  v4 = a1[14].m128i_i32[0];
  if ( (v3 & 8) != 0 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)&off_10C48);
    a1[32].m128i_i64[0] = (__int64)"cc";
    a1[36] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)"pc");
    if ( v4 == 1 )
    {
      a1[186].m128i_i8[11] = 17;
      a1[36].m128i_i64[0] = (__int64)"dp.unused2";
    }
  }
  else
  {
    v5 = _mm_loadl_epi64((const __m128i *)off_10C40);
    a1[32].m128i_i64[0] = (__int64)"ccr";
    a1[36] = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)"pcr");
    if ( v4 == 1 )
      a1[186].m128i_i8[11] = 15;
  }
  v6 = "ora";
  if ( (v3 & 0x10) != 0 )
    v6 = "or";
  a1[85 - *(_DWORD *)(a1[1].m128i_i64[0] + 104) + 38].m128i_i64[1] = (__int64)v6;
  return result;
}

