unsigned __int64 __fastcall boost::asio::detail::socket_ops::get_last_error(__m128i *a1)
{
  unsigned int v1; // eax
  __m128i v2; // xmm0
  __m128i v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = *__errno_location();
  v4.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
  v4.m128i_i64[0] = v1;
  v2 = _mm_load_si128(&v4);
  a1[1].m128i_i64[0] = 2 - ((v1 == 0) - 1LL);
  *a1 = v2;
  return v5 - __readfsqword(0x28u);
}

