unsigned __int64 __fastcall boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::{lambda(void)#1}::operator()(
        __m128i *a1)
{
  __m128i *v1; // rdx
  __m128i v2; // xmm0
  int v4; // eax
  __m128i v5; // [rsp+30h] [rbp-28h] BYREF
  char *v6; // [rsp+40h] [rbp-18h]
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v1 = a1;
  if ( !LOBYTE(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat[0]) )
  {
    v4 = __cxa_guard_acquire(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat);
    v1 = a1;
    if ( v4 )
    {
      boost::beast::http::make_error_code(boost::beast::http::error)::cat[1] = 0x964627DA815BF210LL;
      LODWORD(boost::beast::http::make_error_code(boost::beast::http::error)::cat[6]) = 0;
      boost::beast::http::make_error_code(boost::beast::http::error)::cat[0] = &off_444858;
      *(_OWORD *)&boost::beast::http::make_error_code(boost::beast::http::error)::cat[2] = 0;
      *(_OWORD *)&boost::beast::http::make_error_code(boost::beast::http::error)::cat[4] = 0;
      __cxa_guard_release(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat);
      v1 = a1;
    }
  }
  v5.m128i_i64[1] = (__int64)boost::beast::http::make_error_code(boost::beast::http::error)::cat;
  v5.m128i_i64[0] = 19;
  v2 = _mm_load_si128(&v5);
  v6 = (char *)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::{lambda(void)#1}::operator() const(void)::loc_bb_
     + 1;
  v1[1].m128i_i64[0] = (__int64)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::{lambda(void)#1}::operator() const(void)::loc_bb_
                     + 1;
  *v1 = v2;
  return v7 - __readfsqword(0x28u);
}

