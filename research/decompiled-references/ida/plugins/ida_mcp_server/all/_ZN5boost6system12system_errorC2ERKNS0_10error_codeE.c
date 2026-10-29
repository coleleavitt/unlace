// Alternative name is '_ZN5boost6system12system_errorC1ERKNS0_10error_codeE'
unsigned __int64 __fastcall boost::system::system_error::system_error(__m128i *a1, const __m128i *a2)
{
  __int64 *v3; // [rsp+0h] [rbp-48h]
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  boost::system::error_code::what[abi:cxx11]();
  std::runtime_error::runtime_error();
  if ( v3 != &v4 )
    operator delete(v3, v4 + 1);
  a1[1] = _mm_loadu_si128(a2);
  a1->m128i_i64[0] = (__int64)off_444638;
  a1[2].m128i_i64[0] = a2[1].m128i_i64[0];
  return v5 - __readfsqword(0x28u);
}

