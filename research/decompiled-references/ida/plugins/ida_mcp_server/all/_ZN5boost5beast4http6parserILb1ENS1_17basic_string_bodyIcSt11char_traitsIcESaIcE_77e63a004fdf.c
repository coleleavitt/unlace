unsigned __int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_request_impl(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        size_t a6,
        int a7,
        __m128i *a8)
{
  unsigned __int64 v8; // rbp
  int v9; // r11d
  unsigned __int64 v10; // rsi
  size_t v12; // r14
  _BYTE *v13; // rax
  _BYTE *v14; // r10
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  _BYTE *v17; // rax
  _BYTE *v18; // [rsp+8h] [rbp-90h]
  _BYTE *v19; // [rsp+8h] [rbp-90h]
  __m128i v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-58h]
  __m128i v26; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 201) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = a2;
    *(_BYTE *)(a1 + 201) = 1;
    if ( v8 )
    {
      if ( !a6 )
      {
        operator delete(*(void **)(a1 + 136), v8);
        v9 = a2;
        *(_QWORD *)(a1 + 136) = 0;
        *(_QWORD *)(a1 + 144) = 0;
        goto LABEL_5;
      }
      v12 = a6 + 1;
      if ( (__int64)(a6 + 1) >= 0 )
      {
        v17 = (_BYTE *)operator new(a6 + 1);
        *v17 = 32;
        v19 = v17;
        memcpy(v17 + 1, a5, a6);
        operator delete(*(void **)(a1 + 136), v8);
        v14 = v19;
        v9 = a2;
LABEL_13:
        *(_QWORD *)(a1 + 136) = v14;
        *(_QWORD *)(a1 + 144) = v12;
        if ( v9 )
        {
LABEL_6:
          v10 = *(_QWORD *)(a1 + 128);
          *(_DWORD *)(a1 + 156) = v9;
          if ( v10 )
          {
            operator delete(*(void **)(a1 + 120), v10);
            *(_QWORD *)(a1 + 120) = 0;
            *(_QWORD *)(a1 + 128) = 0;
          }
          goto LABEL_8;
        }
LABEL_14:
        boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string();
LABEL_8:
        *(_DWORD *)(a1 + 152) = a7;
        return v27 - __readfsqword(0x28u);
      }
    }
    else
    {
      if ( !a6 )
      {
LABEL_5:
        if ( v9 )
          goto LABEL_6;
        goto LABEL_14;
      }
      v12 = a6 + 1;
      if ( (__int64)(a6 + 1) >= 0 )
      {
        v13 = (_BYTE *)operator new(a6 + 1);
        *v13 = 32;
        v18 = v13;
        memcpy(v13 + 1, a5, a6);
        v14 = v18;
        v9 = a2;
        goto LABEL_13;
      }
    }
    std::__throw_bad_alloc();
  }
  boost::beast::http::make_error_code();
  v15 = v25;
  v26 = _mm_load_si128(&v24);
  if ( v25 > 1 )
    v15 = (unsigned __int64)boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_request_impl(boost::beast::http::verb,boost::core::basic_string_view<char>,boost::core::basic_string_view<char>,int,boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
        | v25 & 1;
  v16 = _mm_load_si128(&v26);
  a8[1].m128i_i64[0] = v15;
  *a8 = v16;
  return v27 - __readfsqword(0x28u);
}

