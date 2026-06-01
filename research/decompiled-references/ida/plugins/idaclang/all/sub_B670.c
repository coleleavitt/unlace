__int64 __fastcall sub_B670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  void (__fastcall *v8)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v9; // xmm0
  __m128i v11; // [rsp+0h] [rbp-38h]

  v8 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a2 + 768);
  if ( !v8 )
  {
    if ( !under_debugger )
      interr(0);
    BUG();
  }
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = _mm_loadu_si128((const __m128i *)&a8);
  v8(a1, (unsigned int)a3, a3, a4, a5, a6, v11.m128i_i64[0], v11.m128i_i64[1], v9.m128i_i64[0], v9.m128i_i64[1]);
  return a1;
}

