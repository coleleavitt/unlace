unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
        __int64 a1,
        const __m128i *a2)
{
  __int64 v2; // rdx
  __m128i *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128i v9; // xmm0

  v2 = a1;
  v3 = *(__m128i **)(a1 + 64);
  if ( v3 == *(__m128i **)(a1 + 72) )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v2 = a1;
    v4 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    *v3 = _mm_loadu_si128(a2);
    v3[1] = _mm_loadu_si128(a2 + 1);
    v3[2] = _mm_loadu_si128(a2 + 2);
    if ( a2->m128i_i32[0] == 11 )
    {
      v7 = a2[2].m128i_i64[1];
      v3[2].m128i_i64[0] = 0;
      v3[1] = 0;
      v3[2].m128i_i64[1] = v7;
      v8 = a2[2].m128i_i64[0];
      if ( v8 )
      {
        v9 = _mm_loadu_si128(a2 + 1);
        v3[2].m128i_i64[0] = v8;
        v3[1] = v9;
        a2[2] = 0;
      }
    }
    v4 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v4;
  }
  v5 = v4 - *(_QWORD *)(v2 + 56);
  if ( v5 > 4800000 )
    std::__throw_regex_error();
  return 0xAAAAAAAAAAAAAAABLL * (v5 >> 4) - 1;
}

