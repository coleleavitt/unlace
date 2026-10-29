__int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_field_impl(
        __int64 a1,
        __int16 a2,
        const void *a3,
        size_t a4,
        _BYTE *a5,
        unsigned __int64 a6,
        __m128i *a7)
{
  __int64 result; // rax

  a7[1].m128i_i64[0] = 0;
  *a7 = 0;
  boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(a2, a3, a4, a5, a6, a7);
  result = a7[1].m128i_i64[0];
  if ( (result & 1) == 0 )
    return boost::beast::http::basic_fields<std::allocator<char>>::insert_element();
  if ( result == 1 )
  {
    result = a7->m128i_u32[0];
    if ( !(_DWORD)result )
      return boost::beast::http::basic_fields<std::allocator<char>>::insert_element();
  }
  return result;
}

