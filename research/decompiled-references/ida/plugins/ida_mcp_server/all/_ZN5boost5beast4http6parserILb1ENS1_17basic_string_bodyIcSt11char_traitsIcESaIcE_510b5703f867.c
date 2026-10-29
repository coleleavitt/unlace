unsigned __int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_trailer_field_impl(
        __int64 a1,
        int a2,
        const void *a3,
        size_t a4,
        _BYTE *a5,
        unsigned __int64 a6,
        __m128i *a7)
{
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  boost::beast::http::basic_fields<std::allocator<char>>::operator[]();
  if ( !(unsigned __int8)boost::beast::http::token_list::exists() )
    return v14 - __readfsqword(0x28u);
  if ( (unsigned __int16)a2 > 0x64u )
    goto LABEL_6;
  if ( (unsigned __int16)a2 > 0x2Bu )
  {
    v10 = 0x182000800020009LL;
    if ( !_bittest64(&v10, (unsigned int)(a2 - 44)) )
      goto LABEL_6;
  }
  else if ( (_WORD)a2 != 20 && (_WORD)a2 != 26 )
  {
LABEL_6:
    if ( !*(_BYTE *)(a1 + 202) )
      return v14 - __readfsqword(0x28u);
  }
  a7[1].m128i_i64[0] = 0;
  *a7 = 0;
  boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(a2, a3, a4, a5, a6, a7);
  v8 = a7[1].m128i_i64[0];
  if ( (v8 & 1) == 0 || v8 == 1 && !a7->m128i_i32[0] )
    boost::beast::http::basic_fields<std::allocator<char>>::insert_element();
  return v14 - __readfsqword(0x28u);
}

