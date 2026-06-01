__m128i *__fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(__m128i *a1, _QWORD *a2)
{
  char *v3; // rdi
  __m128i v4; // xmm0
  __int64 v5; // rcx
  const __m128i *v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __m128i *v12; // [rsp+0h] [rbp-18h]

  v3 = (char *)a2[44];
  if ( v3 == (char *)a2[45] )
  {
    v7 = *(const __m128i **)(a2[47] - 8LL);
    v12 = a1;
    v8 = _mm_loadu_si128(v7 + 30);
    v9 = v7[31].m128i_i64[0];
    *a1 = v8;
    a1[1].m128i_i64[0] = v9;
    operator delete(v3, 0x1F8u);
    v10 = (__int64 *)(a2[47] - 8LL);
    v11 = *v10;
    a2[47] = v10;
    a2[45] = v11;
    a2[46] = v11 + 504;
    a2[44] = v11 + 480;
    return v12;
  }
  else
  {
    v4 = _mm_loadu_si128((const __m128i *)(v3 - 24));
    v5 = *((_QWORD *)v3 - 1);
    a2[44] = v3 - 24;
    a1[1].m128i_i64[0] = v5;
    *a1 = v4;
    return a1;
  }
}

