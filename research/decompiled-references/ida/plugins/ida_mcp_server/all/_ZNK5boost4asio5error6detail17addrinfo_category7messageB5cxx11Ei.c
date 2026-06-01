__int64 *__fastcall boost::asio::error::detail::addrinfo_category::message[abi:cxx11](__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rdx

  *a1 = (__int64)(a1 + 2);
  if ( a3 == -8 )
  {
    v10 = std::string::_M_create();
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E1DF0);
    *a1 = v10;
    a1[2] = 17;
    *(_BYTE *)(v10 + 16) = 100;
    *(__m128i *)v10 = si128;
    v12 = *a1;
    a1[1] = 17;
    *(_BYTE *)(v12 + 17) = 0;
  }
  else if ( a3 == -7 )
  {
    v7 = std::string::_M_create();
    v8 = _mm_load_si128((const __m128i *)&xmmword_3E1E00);
    *a1 = v7;
    a1[2] = 25;
    *(__m128i *)v7 = v8;
    *(__m128i *)(v7 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E1E10);
    v9 = *a1;
    a1[1] = 25;
    *(_BYTE *)(v9 + 25) = 0;
  }
  else
  {
    v3 = std::string::_M_create();
    v4 = _mm_load_si128((const __m128i *)&xmmword_3E1E20);
    *a1 = v3;
    a1[2] = 19;
    *(__m128i *)v3 = v4;
    *(_DWORD *)(v3 + 15) = 1919906418;
    v5 = *a1;
    a1[1] = 19;
    *(_BYTE *)(v5 + 19) = 0;
  }
  return a1;
}

