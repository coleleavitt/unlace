size_t __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_impl(
        __int64 a1,
        const void *a2,
        unsigned __int64 a3,
        __m128i *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  size_t v8; // rbx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-58h]
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 192);
  v15 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 8);
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < a3 )
  {
    boost::beast::http::make_error_code();
    v10 = v13;
    v14 = _mm_load_si128(&v12);
    if ( v13 > 1 )
      v10 = (unsigned __int64)&boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffer>(boost::asio::const_buffer const&,boost::system::error_code &)::loc_bb_
          | v13 & 1;
    v11 = _mm_load_si128(&v14);
    a4[1].m128i_i64[0] = v10;
    v8 = 0;
    *a4 = v11;
  }
  else
  {
    v8 = a3;
    std::string::resize();
    a4[1].m128i_i64[0] = 0;
    *a4 = 0;
    if ( v8 )
      memcpy((void *)(v7 + **(_QWORD **)(a1 + 192)), a2, v8);
  }
  return v8;
}

