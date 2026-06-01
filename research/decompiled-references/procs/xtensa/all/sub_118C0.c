__int64 __fastcall sub_118C0(__m128i *a1)
{
  __m128i *v1; // rbp
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  int v5; // eax

  v1 = a1 + 8;
  v3 = (unsigned __int64)&a1[8].m128i_u64[1];
  *(_QWORD *)(v3 - 8) = "a0";
  *(_QWORD *)(v3 + 440) = "m3";
  qmemcpy(
    (void *)(v3 & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&off_1C820 - ((char *)v1 - (v3 & 0xFFFFFFFFFFFFFFF8LL))),
    8 * (((unsigned int)v1 - (v3 & 0xFFFFFFF8) + 456) >> 3));
  if ( a1[37].m128i_i8[10]
    && (a1[8] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C9E8), (__m128i)(unsigned __int64)"sp"),
        v5 = sub_EEF0((__int64)a1),
        v5 >= 0) )
  {
    a1[8].m128i_i64[v5] = (__int64)"fp";
    result = a1[1].m128i_i64[0];
    *(_QWORD *)(result + 56) = v1;
  }
  else
  {
    result = a1[1].m128i_i64[0];
    *(_QWORD *)(result + 56) = v1;
  }
  return result;
}
