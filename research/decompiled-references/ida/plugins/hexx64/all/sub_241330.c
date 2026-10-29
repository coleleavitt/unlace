_QWORD *__fastcall sub_241330(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i *v7; // rax

  v4 = (_QWORD *)j__qalloc_or_throw(32, a2, a3, a4);
  *v4 = -1;
  v4[1] = -4294967225LL;
  v4[2] = 0xFFFFFFFFLL;
  v4[3] = 0;
  v7 = (__m128i *)qalloc_or_throw(24, a2, v5, v6);
  v7[1].m128i_i64[0] = 0;
  *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  v4[3] = v7;
  return v4;
}

