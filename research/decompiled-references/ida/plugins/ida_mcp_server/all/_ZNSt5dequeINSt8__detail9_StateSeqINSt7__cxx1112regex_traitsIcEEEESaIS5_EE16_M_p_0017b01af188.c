__int64 __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>(
        __m128i *a1,
        const __m128i *a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbp
  __int64 result; // rax
  __m128i v5; // xmm0
  __m128i *v6; // rdx

  v2 = a1[4].m128i_i64[1];
  if ( 0xAAAAAAAAAAAAAAABLL * ((a1[3].m128i_i64[0] - a1[3].m128i_i64[1]) >> 3)
     + 21 * ((v2 == 0) + ((v2 - a1[2].m128i_i64[1]) >> 3) - 1)
     - 0x5555555555555555LL * ((a1[2].m128i_i64[0] - a1[1].m128i_i64[0]) >> 3) == 0x555555555555555LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1->m128i_i64[1] - ((v2 - a1->m128i_i64[0]) >> 3)) <= 1 )
  {
    std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reallocate_map();
    v2 = a1[4].m128i_i64[1];
  }
  v3 = (__int64 *)(v2 + 8);
  result = operator new(0x1F8u);
  v5 = _mm_loadu_si128(a2);
  *v3 = result;
  v6 = (__m128i *)a1[3].m128i_i64[0];
  *v6 = v5;
  v6[1].m128i_i64[0] = a2[1].m128i_i64[0];
  a1[4].m128i_i64[1] = (__int64)v3;
  a1[4].m128i_i64[0] = result + 504;
  a1[3] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

