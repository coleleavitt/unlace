__int64 __fastcall sub_1D930(__int64 *a1, __int64 a2, const char *a3, double a4, double a5)
{
  const char *v8; // rdx
  void *v9; // r13
  size_t v10; // r12
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18[3]; // [rsp+0h] [rbp-38h] BYREF

  v8 = src;
  if ( *(_QWORD *)(a2 + 24) )
    v8 = *(const char **)(a2 + 16);
  v9 = nullptr;
  sub_1D740((__int64)"Found DWARF for %s:\n  path: %s\n  loadaddr: %a\n  declared: %a\n", a3, v8, a4, a5);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = _mm_loadl_epi64((const __m128i *)a2);
  v12 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  if ( v10 )
  {
    v16 = *(_QWORD *)(a2 + 24);
    v18[0].m128i_i64[1] = v12.m128i_i64[0];
    v18[0].m128i_i64[0] = v11.m128i_i64[0];
    v9 = (void *)qalloc_or_throw(v16);
    memcpy(v9, *(const void **)(a2 + 16), v10);
    v12 = _mm_loadl_epi64((const __m128i *)&v18[0].m128i_u64[1]);
    v11 = _mm_loadl_epi64(v18);
  }
  v13 = a1[1];
  v14 = *a1;
  if ( a1[2] < (unsigned __int64)(v13 + 1) )
  {
    v18[0].m128i_i64[1] = v12.m128i_i64[0];
    v18[0].m128i_i64[0] = v11.m128i_i64[0];
    v17 = qvector_reserve(a1, v14, v13 + 1, 40);
    *a1 = v17;
    v13 = a1[1];
    v14 = v17;
    v12 = _mm_loadl_epi64((const __m128i *)&v18[0].m128i_u64[1]);
    v11 = _mm_loadl_epi64(v18);
  }
  result = v14 + 40 * v13;
  *(__m128i *)result = _mm_unpacklo_epi64(v11, v12);
  *(_QWORD *)(result + 16) = v9;
  *(__m128i *)(result + 24) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  ++a1[1];
  return result;
}
