unsigned __int64 __fastcall boost::beast::http::basic_parser<true>::inner_parse_fields(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __m128i *a4)
{
  _BYTE *v4; // rax
  unsigned __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int8 v9; // cl
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int16, const void *, size_t, _BYTE *, unsigned __int64, __m128i *); // r10
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  _BYTE *v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  _BYTE *v20; // rdi
  int *v21; // rdx
  __int64 v22; // r10
  unsigned int v23; // eax
  int v24; // r11d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 *v28; // r11
  unsigned __int64 v29; // rax
  __m128i v30; // xmm0
  unsigned int v33; // [rsp+24h] [rbp-10C4h]
  _BYTE *v35; // [rsp+38h] [rbp-10B0h]
  __m128i v36; // [rsp+60h] [rbp-1088h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-1078h]
  __m128i v38; // [rsp+80h] [rbp-1068h] BYREF
  unsigned __int64 v39; // [rsp+90h] [rbp-1058h]
  __int64 v40; // [rsp+A0h] [rbp-1048h]
  unsigned __int64 v41; // [rsp+10A8h] [rbp-40h]

  v4 = (_BYTE *)*a2;
  v5 = *a2 + 2;
  v41 = __readfsqword(0x28u);
  v35 = v4;
  v40 = 0;
  if ( a3 < v5 )
  {
LABEL_22:
    boost::beast::http::make_error_code();
    v15 = v37;
    v38 = _mm_load_si128(&v36);
    if ( v37 > 1 )
      v15 = (unsigned __int64)boost::beast::http::basic_parser<true>::inner_parse_fields(char const*&,char const*,boost::system::error_code &)::loc_bb_
          | v37 & 1;
    v16 = _mm_load_si128(&v38);
    v39 = v15;
    a4[1].m128i_i64[0] = v15;
    *a4 = v16;
    return v41 - __readfsqword(0x28u);
  }
  while ( *v4 != 13 )
  {
    boost::beast::http::detail::basic_parser_base::parse_field();
    v7 = a4[1].m128i_i64[0];
    if ( (v7 & 1) != 0 && (v7 != 1 || a4->m128i_i32[0]) )
      return v41 - __readfsqword(0x28u);
    if ( !LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0])
      && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
    {
      v17 = &boost::beast::http::detail::get_field_table(void)::tab[16];
      v18 = 1;
      qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
      memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
      *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
      *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
      boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
      do
      {
        v19 = *((_QWORD *)v17 + 1);
        v20 = *(_BYTE **)v17;
        if ( v19 <= 3 )
        {
          v23 = 0;
        }
        else
        {
          v21 = *(int **)v17;
          v22 = (v19 >> 2) - 1;
          v23 = 0;
          do
          {
            v24 = 5 * v23;
            v25 = *v21++;
            v23 = v24 + (v25 | 0x20202020);
          }
          while ( v21 != (int *)&v20[4 * (v19 >> 2)] );
          v19 = *((_QWORD *)v17 + 1) & 3LL;
          v20 += 4 * v22 + 4;
        }
        if ( v19 )
        {
          v23 = 5 * v23 + (*v20 | 0x20);
          if ( v19 != 1 )
          {
            v23 = 5 * v23 + (v20[1] | 0x20);
            if ( v19 != 2 )
              v23 = 5 * v23 + (v20[2] | 0x20);
          }
        }
        v17 += 16;
        boost::beast::http::detail::get_field_table(void)::tab[v23 % 0x557 + 2064] = v18++;
      }
      while ( v18 != 129 );
      __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    }
    v9 = boost::beast::http::detail::get_field_table(void)::tab[2064];
    v10 = 0;
    if ( v9 && !*(_QWORD *)&boost::beast::http::detail::get_field_table(void)::tab[16 * v9 + 8] )
      v10 = v9;
    v33 = v10;
    boost::beast::http::basic_parser<true>::do_field();
    v11 = a4[1].m128i_i64[0];
    if ( (v11 & 1) != 0 && (v11 != 1 || a4->m128i_i32[0]) )
      return v41 - __readfsqword(0x28u);
    v12 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a1 + 64) != 10 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, __int16, const void *, size_t, _BYTE *, unsigned __int64, __m128i *))(v12 + 32);
      if ( v13 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_field_impl )
      {
        a4[1].m128i_i64[0] = 0;
        *a4 = 0;
        boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(v33, nullptr, 0, nullptr, 0, a4);
        v14 = a4[1].m128i_i64[0];
        if ( (v14 & 1) != 0 )
        {
          if ( v14 != 1 )
            return v41 - __readfsqword(0x28u);
          if ( !a4->m128i_i32[0] )
            boost::beast::http::basic_fields<std::allocator<char>>::insert_element();
LABEL_20:
          if ( a4->m128i_i32[0] )
            return v41 - __readfsqword(0x28u);
          goto LABEL_21;
        }
        boost::beast::http::basic_fields<std::allocator<char>>::insert_element();
        goto LABEL_21;
      }
LABEL_37:
      v13(a1, v33, nullptr, 0, nullptr, 0, a4);
      v26 = a4[1].m128i_i64[0];
      v27 = v26 & 1;
      goto LABEL_38;
    }
    v13 = *(__int64 (__fastcall **)(__int64, __int16, const void *, size_t, _BYTE *, unsigned __int64, __m128i *))(v12 + 40);
    if ( (char *)v13 != (char *)boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_trailer_field_impl )
      goto LABEL_37;
    boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_trailer_field_impl(
      a1,
      v33,
      0,
      0,
      0,
      0,
      (__int64)a4);
    v26 = a4[1].m128i_i64[0];
    v27 = v26 & 1;
LABEL_38:
    if ( v27 )
    {
      if ( v26 != 1 )
        return v41 - __readfsqword(0x28u);
      goto LABEL_20;
    }
LABEL_21:
    v4 = v35;
    v5 = (unsigned __int64)(v35 + 2);
    *a2 = (unsigned __int64)v35;
    if ( a3 < (unsigned __int64)(v35 + 2) )
      goto LABEL_22;
  }
  v28 = a2;
  if ( v4[1] != 10 )
  {
    boost::beast::http::make_error_code();
    v29 = v37;
    v28 = a2;
    v38 = _mm_load_si128(&v36);
    if ( v37 > 1 )
      v29 = (unsigned __int64)boost::beast::http::basic_parser<true>::inner_parse_fields(char const*&,char const*,boost::system::error_code &)::loc_bb_
          | v37 & 1;
    v30 = _mm_load_si128(&v38);
    v39 = v29;
    a4[1].m128i_i64[0] = v29;
    *a4 = v30;
  }
  *v28 = v5;
  return v41 - __readfsqword(0x28u);
}

