__m128i **__fastcall sub_6B760(__m128i **a1, __m128i *a2)
{
  __int64 v2; // rdx
  int v4; // edx
  __m128i *v5; // rax
  __m128i v6; // xmm1
  __m128i si128; // xmm0
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a2[5].m128i_i32[2];
  if ( (int)v2 >= 0 && a2[4].m128i_i64[0] )
  {
    v4 = *(_QWORD *)(a2[3].m128i_i64[1] + 8 * v2);
    v8[0] = _mm_unpacklo_epi64(
              (__m128i)*(unsigned __int64 *)(a2[2].m128i_i64[1] + 8LL * v4),
              (__m128i)(unsigned __int64)sub_6B650(a2, *(_QWORD *)(a2[2].m128i_i64[1] + 8LL * v4), v4));
    v5 = (__m128i *)operator new(0x30u);
    v6 = _mm_loadu_si128(a2 + 1);
    si128 = _mm_load_si128(v8);
    v5->m128i_i32[2] = 1;
    v5->m128i_i64[0] = (__int64)&off_C8970;
    *a1 = v5;
    v5[1] = v6;
    v5[2] = si128;
    return a1;
  }
  else
  {
    *a1 = nullptr;
    return a1;
  }
}
