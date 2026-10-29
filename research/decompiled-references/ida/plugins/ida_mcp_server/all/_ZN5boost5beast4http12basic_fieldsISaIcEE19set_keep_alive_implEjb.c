unsigned __int64 __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set_keep_alive_impl(
        _QWORD *a1,
        unsigned int a2,
        char a3)
{
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v7; // r13
  char *v8; // r12
  char *v9; // r12
  char *v10; // rax
  char *v11; // rax
  _BYTE v12[40]; // [rsp+90h] [rbp-1048h] BYREF
  void *v13; // [rsp+1090h] [rbp-48h]
  __m128i si128; // [rsp+1098h] [rbp-40h]
  unsigned __int64 v15; // [rsp+10A8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  boost::beast::http::basic_fields<std::allocator<char>>::operator[]();
  v13 = v12;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2040);
  if ( a2 <= 0xA )
  {
    if ( a3 )
    {
      boost::beast::http::detail::filter_token_list();
      v4 = si128.m128i_i64[1];
      if ( si128.m128i_i64[1] )
      {
        if ( (unsigned __int8)boost::beast::http::token_list::exists() )
        {
LABEL_19:
          boost::beast::http::basic_fields<std::allocator<char>>::set();
          goto LABEL_11;
        }
        goto LABEL_5;
      }
      v8 = (char *)v13;
      if ( si128.m128i_i64[0] <= 9uLL )
      {
        v11 = (char *)operator new[](0x14u);
        v13 = v11;
        if ( v8 != v12 && v8 )
        {
          operator delete[](v8);
          v11 = (char *)v13;
          v4 = si128.m128i_i64[1];
        }
        si128.m128i_i64[0] = 20;
        v8 = v11;
      }
      qmemcpy(&v8[v4], "keep-alive", 10);
      v5 = si128.m128i_i64[1] + 10;
      si128.m128i_i64[1] += 10;
      goto LABEL_9;
    }
LABEL_7:
    boost::beast::http::detail::filter_token_list();
    goto LABEL_8;
  }
  if ( a3 )
    goto LABEL_7;
  boost::beast::http::detail::filter_token_list();
  v7 = si128.m128i_i64[1];
  if ( si128.m128i_i64[1] )
  {
    if ( (unsigned __int8)boost::beast::http::token_list::exists() )
      goto LABEL_19;
LABEL_5:
    boost::beast::detail::temporary_buffer::append();
LABEL_8:
    v5 = si128.m128i_i64[1];
    goto LABEL_9;
  }
  v9 = (char *)v13;
  if ( si128.m128i_i64[0] <= 4uLL )
  {
    v10 = (char *)operator new[](0xAu);
    v13 = v10;
    if ( v9 != v12 && v9 )
    {
      operator delete[](v9);
      v10 = (char *)v13;
      v7 = si128.m128i_i64[1];
    }
    si128.m128i_i64[0] = 10;
    v9 = v10;
  }
  *(_DWORD *)&v9[v7] = 1936682083;
  v9[v7 + 4] = 101;
  v5 = si128.m128i_i64[1] + 5;
  si128.m128i_i64[1] += 5;
LABEL_9:
  if ( v5 )
    goto LABEL_19;
  boost::beast::http::basic_fields<std::allocator<char>>::erase(a1, 0x19u);
LABEL_11:
  if ( v13 && v13 != v12 )
    operator delete[](v13);
  return v15 - __readfsqword(0x28u);
}

