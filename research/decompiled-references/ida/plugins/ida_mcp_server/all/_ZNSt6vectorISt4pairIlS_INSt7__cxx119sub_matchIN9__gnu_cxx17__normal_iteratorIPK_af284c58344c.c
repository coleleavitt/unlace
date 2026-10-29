unsigned __int64 __fastcall std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
        __int64 a1,
        _QWORD *a2,
        const __m128i **a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 result; // rax
  const __m128i *v10; // rcx
  const __m128i *v11; // r10
  const __m128i *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  unsigned __int64 v15; // [rsp+0h] [rbp-28h]
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  const __m128i **v18; // [rsp+18h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::_M_realloc_append<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>();
  v4 = a1;
  v5 = 0;
  *(_QWORD *)v3 = *a2;
  v6 = (char *)a3[1] - (char *)*a3;
  v7 = v6;
  if ( v6 )
  {
    v18 = a3;
    v17 = v4;
    v16 = v3;
    v15 = (char *)a3[1] - (char *)*a3;
    v8 = operator new(v6);
    a3 = v18;
    v4 = v17;
    v3 = v16;
    v7 = v15;
    v5 = v8;
  }
  result = v5 + v7;
  *(_QWORD *)(v3 + 24) = v5 + v7;
  *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  v10 = a3[1];
  v11 = *a3;
  if ( v10 != *a3 )
  {
    v12 = *a3;
    v13 = v5;
    do
    {
      v14 = _mm_loadu_si128(v12);
      v12 = (const __m128i *)((char *)v12 + 24);
      v13 += 24;
      *(__m128i *)(v13 - 24) = v14;
      *(_QWORD *)(v13 - 8) = v12[-1].m128i_i64[1];
    }
    while ( v10 != v12 );
    result = 3
           * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v10[-2].m128i_u64[1] - (char *)v11) >> 3))
            & 0x1FFFFFFFFFFFFFFFLL)
           + 3;
    v5 += 8 * result;
  }
  *(_QWORD *)(v3 + 16) = v5;
  *(_QWORD *)(v4 + 8) = v3 + 32;
  return result;
}

