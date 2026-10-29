__int64 __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
        _QWORD *a1,
        const __m128i *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  const __m128i *v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __m128i *v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-20h]
  _QWORD *v9; // [rsp+8h] [rbp-18h]
  const __m128i *v10; // [rsp+10h] [rbp-10h]

  v2 = a1[6];
  v3 = a1;
  v4 = a2;
  if ( v2 == a1[8] - 24LL )
  {
    v6 = a1[9];
    if ( 0xAAAAAAAAAAAAAAABLL * ((v2 - a1[7]) >> 3)
       + 21 * ((v6 == 0) + ((v6 - a1[5]) >> 3) - 1)
       - 0x5555555555555555LL * ((__int64)(a1[4] - a1[2]) >> 3) == 0x555555555555555LL )
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
        0xAAAAAAAAAAAAAAABLL,
        0x555555555555555LL,
        v6,
        a1,
        a2);
    if ( (unsigned __int64)(a1[1] - ((v6 - *a1) >> 3)) <= 1 )
    {
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reallocate_map();
      v3 = a1;
      v4 = a2;
      v6 = a1[9];
    }
    v10 = v4;
    v9 = v3;
    v8 = v6;
    result = operator new(0x1F8u);
    *(_QWORD *)(v8 + 8) = result;
    v7 = (__m128i *)v9[6];
    *v7 = _mm_loadu_si128(v10);
    v7[1].m128i_i64[0] = v10[1].m128i_i64[0];
    v9[9] = v8 + 8;
    v9[7] = result;
    v9[8] = result + 504;
    v9[6] = result;
  }
  else
  {
    result = v2 + 24;
    *(__m128i *)(result - 24) = _mm_loadu_si128(a2);
    *(_QWORD *)(result - 8) = a2[1].m128i_i64[0];
    a1[6] = result;
  }
  return result;
}

