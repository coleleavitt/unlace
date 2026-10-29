_WORD *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(
        __int16 a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5,
        __m128i *a6)
{
  _BYTE *v6; // r8
  _BYTE *v8; // rbx
  int v9; // eax
  size_t v10; // rbp
  __int16 v11; // r15
  __int64 v12; // r14
  _WORD *v13; // rax
  char *v14; // rdi
  _WORD *v15; // r13
  char v17; // al
  unsigned __int64 v18; // rax
  __m128i *v19; // r9
  __m128i v20; // xmm0
  __m128i v24; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-68h]
  __m128i v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a3 > 0xFFFD )
  {
    boost::beast::http::make_error_code();
    v18 = v27;
    v19 = a6;
    v24 = _mm_load_si128(&v26);
    if ( v27 > 1 )
      v18 = (unsigned __int64)boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(boost::beast::http::field,boost::core::basic_string_view<char>,boost::core::basic_string_view<char>,boost::system::error_code &)::loc_bb_
          | v27 & 1;
    goto LABEL_22;
  }
  if ( a5 > 0xFFFD )
  {
    boost::beast::http::make_error_code();
    v18 = v27;
    v19 = a6;
    v24 = _mm_load_si128(&v26);
    if ( v27 > 1 )
      v18 = (unsigned __int64)boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(boost::beast::http::field,boost::core::basic_string_view<char>,boost::core::basic_string_view<char>,boost::system::error_code &)::loc_bb_
          | v27 & 1;
LABEL_22:
    v20 = _mm_load_si128(&v24);
    v25 = v18;
    v15 = nullptr;
    v19[1].m128i_i64[0] = v18;
    *v19 = v20;
    return v15;
  }
  v6 = &a4[a5];
  v8 = a4;
  if ( v6 != a4 )
  {
    while ( *v8 == 32 || *v8 == 9 )
    {
      if ( v6 == ++v8 )
        goto LABEL_7;
    }
    while ( v6 != v8 )
    {
      v17 = *(v6 - 1);
      if ( v17 != 32 && v17 != 9 )
      {
        if ( v6 == v8 )
          break;
        v10 = v6 - v8;
        v9 = (unsigned __int16)((_WORD)v6 - (_WORD)v8);
        goto LABEL_8;
      }
      --v6;
    }
  }
LABEL_7:
  v9 = 0;
  v10 = 0;
  v8 = nullptr;
LABEL_8:
  v11 = a3 + 2;
  v12 = (unsigned __int16)(a3 + 2);
  v13 = (_WORD *)operator new((v9 + (_DWORD)v12 + 65) & 0x3FFF8);
  v14 = (char *)(v13 + 28);
  v13[24] = v11;
  v15 = v13;
  v13[25] = v10;
  v13[26] = a1;
  v14[v12 - 2] = 58;
  v14[(unsigned __int16)v13[24] - 1] = 32;
  *((_BYTE *)v13 + (unsigned __int16)v13[25] + (unsigned __int16)v13[24] + 56) = 13;
  *((_BYTE *)v13 + (unsigned __int16)v13[24] + (unsigned __int16)v13[25] + 57) = 10;
  if ( a3 )
  {
    v14 = (char *)memcpy(v14, a2, a3);
    if ( !v10 )
      return v15;
    goto LABEL_17;
  }
  if ( v10 )
LABEL_17:
    memcpy(&v14[(unsigned __int16)v15[24]], v8, v10);
  return v15;
}

