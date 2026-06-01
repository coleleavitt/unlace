__int64 __fastcall sub_B7C0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  void (__fastcall *v8)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v9; // xmm0

  v8 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a2 + 808);
  if ( !v8 )
  {
    if ( !under_debugger )
      interr(0);
    BUG();
  }
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v8(a1, a3, a8, a4, a5, a6, v9.m128i_i64[0], v9.m128i_i64[1], a8);
  return a1;
}

