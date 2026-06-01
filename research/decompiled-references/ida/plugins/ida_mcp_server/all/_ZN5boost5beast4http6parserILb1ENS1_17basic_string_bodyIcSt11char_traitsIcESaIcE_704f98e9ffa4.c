__int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_body_impl(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4,
        __m128i *a5)
{
  size_t v5; // r9
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v16; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-38h]
  __m128i v18; // [rsp+70h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 256) )
  {
    v14 = a2;
    v15[1] = a4;
    v15[0] = a3;
    return (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, __m128i *))(a1 + 264))(a1 + 240, &v14, v15, a5);
  }
  else if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) < a4 )
  {
    boost::beast::http::make_error_code();
    v7 = v17;
    v18 = _mm_load_si128(&v16);
    if ( v17 > 1 )
      v7 = (unsigned __int64)&boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffer>(boost::asio::const_buffer const&,boost::system::error_code &)::loc_bb_
         | v17 & 1;
    v8 = _mm_load_si128(&v18);
    a5[1].m128i_i64[0] = v7;
    v5 = 0;
    *a5 = v8;
  }
  else
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    std::string::resize();
    v5 = a4;
    a5[1].m128i_i64[0] = 0;
    *a5 = 0;
    if ( a4 )
    {
      memcpy((void *)(**(_QWORD **)(a1 + 192) + v12), a3, a4);
      return a4;
    }
  }
  return v5;
}

