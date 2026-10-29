unsigned __int64 __fastcall boost::beast::http::detail::basic_parser_base::parse_field(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  _BYTE *v22; // rsi
  _BYTE *v23; // rax
  char v24; // dl
  size_t v25; // rax
  _QWORD *v26; // rbp
  __int64 *v27; // r11
  _QWORD *v28; // r8
  unsigned __int64 v29; // r10
  _BYTE *v30; // rdi
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE *v34; // rax
  char v35; // dl
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rax
  void *src; // [rsp+0h] [rbp-98h]
  void *srca; // [rsp+0h] [rbp-98h]
  unsigned __int64 v41; // [rsp+8h] [rbp-90h]
  _QWORD *v42; // [rsp+8h] [rbp-90h]
  unsigned __int64 v43; // [rsp+8h] [rbp-90h]
  _QWORD *v44; // [rsp+8h] [rbp-90h]
  __int64 *v45; // [rsp+10h] [rbp-88h]
  __int64 *v46; // [rsp+10h] [rbp-88h]
  _QWORD *v47; // [rsp+18h] [rbp-80h]
  unsigned __int64 v48; // [rsp+18h] [rbp-80h]
  _QWORD *v49; // [rsp+18h] [rbp-80h]
  unsigned __int64 v50; // [rsp+18h] [rbp-80h]
  _BYTE *v51; // [rsp+28h] [rbp-70h]
  __m128i v52; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-58h]
  __m128i v54; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-38h]
  unsigned __int64 v56; // [rsp+68h] [rbp-30h]

  v6 = a1;
  v7 = a2;
  v8 = (unsigned __int8 *)*a1;
  v56 = __readfsqword(0x28u);
  if ( (unsigned __int64)v8 >= a2 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  v12 = v8;
  while ( 1 )
  {
    v13 = *v12;
    if ( (_BYTE)v13 == 58 )
      break;
    if ( !*((_BYTE *)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::is_token
          + v13) )
    {
      boost::beast::http::make_error_code();
      v20 = v53;
      v54 = _mm_load_si128(&v52);
      if ( v53 > 1 )
        v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
            | v53 & 1;
      goto LABEL_17;
    }
    *v6 = (unsigned __int64)++v12;
    if ( v12 == (unsigned __int8 *)v7 )
    {
      boost::beast::http::make_error_code();
      v20 = v53;
      v54 = _mm_load_si128(&v52);
      if ( v53 > 1 )
        v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
            | v53 & 1;
      goto LABEL_17;
    }
  }
  if ( v8 == v12 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  *a3 = v8;
  a3[1] = v12 - v8;
  v51 = nullptr;
  v14 = (_BYTE *)(*v6 + 1);
  v15 = *v6 + 2;
  *v6 = (unsigned __int64)v14;
  if ( v7 < v15 )
    goto LABEL_15;
LABEL_8:
  if ( *v14 == 32 || *v14 == 9 )
  {
    *v6 = v15;
    v14 = (_BYTE *)v15;
    goto LABEL_14;
  }
  v47 = a5;
  v45 = (__int64 *)v6;
  v41 = v7;
  v16 = boost::beast::http::detail::basic_parser_base::parse_token_to_eol();
  v6 = (unsigned __int64 *)v45;
  v17 = (_BYTE *)v16;
  v7 = v41;
  a5 = v47;
  *v45 = v16;
  v18 = *(_QWORD *)(a6 + 16);
  if ( (v18 & 1) != 0 && (v18 != 1 || *(_DWORD *)a6) )
    return v56 - __readfsqword(0x28u);
  if ( !v17 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  v22 = v17 + 1;
  if ( v41 < (unsigned __int64)(v17 + 1) )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  v23 = v51;
  if ( v51 == v14 )
  {
    if ( *v17 == 32 || *v17 == 9 )
      goto LABEL_38;
LABEL_43:
    v23 = v14;
LABEL_44:
    *a4 = v14;
    a4[1] = v23 - v14;
    return v56 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v24 = *(v23 - 1);
    if ( v24 != 32 && v24 != 9 )
      break;
    if ( --v23 == v14 )
    {
      v51 = v14;
      if ( *v17 != 9 && *v17 != 32 )
        goto LABEL_43;
LABEL_38:
      *v45 = (__int64)v22;
LABEL_29:
      v14 = v17 + 1;
LABEL_14:
      v15 = (unsigned __int64)(v14 + 1);
      if ( v7 < (unsigned __int64)(v14 + 1) )
      {
LABEL_15:
        boost::beast::http::make_error_code();
        v20 = v53;
        v54 = _mm_load_si128(&v52);
        if ( v53 > 1 )
          v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
              | v53 & 1;
        goto LABEL_17;
      }
      goto LABEL_8;
    }
  }
  v51 = v23;
  if ( *v17 != 32 && *v17 != 9 )
    goto LABEL_44;
  *v45 = (__int64)v22;
  if ( v14 == v23 )
    goto LABEL_29;
  v25 = v23 - v14;
  *v47 = 0;
  if ( v25 > 0x1000 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  v48 = v41;
  v26 = a5 + 1;
  v42 = a5;
  src = (void *)v25;
  memmove(a5 + 1, v14, v25);
  v27 = v45;
  v28 = v42;
  v29 = v48;
  v30 = (_BYTE *)*v45;
  *v42 = src;
  v31 = v30 + 1;
  if ( v48 < (unsigned __int64)(v30 + 1) )
  {
LABEL_73:
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  while ( 2 )
  {
    if ( *v30 == 32 || *v30 == 9 )
    {
      v30 = v31;
LABEL_72:
      v31 = v30 + 1;
      *v27 = (__int64)v30;
      if ( v29 < (unsigned __int64)(v30 + 1) )
        goto LABEL_73;
      continue;
    }
    break;
  }
  v49 = v28;
  v46 = v27;
  v43 = v29;
  v32 = boost::beast::http::detail::basic_parser_base::parse_token_to_eol();
  v33 = *(_QWORD *)(a6 + 16);
  v27 = v46;
  v29 = v43;
  *v46 = v32;
  v28 = v49;
  if ( (v33 & 1) != 0 && (v33 != 1 || *(_DWORD *)a6) )
    return v56 - __readfsqword(0x28u);
  if ( !v32 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  if ( v43 < v32 + 1 )
  {
    boost::beast::http::make_error_code();
    v20 = v53;
    v54 = _mm_load_si128(&v52);
    if ( v53 > 1 )
      v20 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::core::basic_string_view<char> &,boost::core::basic_string_view<char> &,boost::beast::detail::char_buffer<4096ul> &,boost::system::error_code &)::loc_bb_
          | v53 & 1;
    goto LABEL_17;
  }
  v34 = v51;
  if ( v51 == v30 )
  {
LABEL_69:
    v37 = *(_BYTE *)*v27;
    if ( v37 != 32 && v37 != 9 )
    {
      v38 = *v28;
      *a4 = v26;
      a4[1] = v38;
      return v56 - __readfsqword(0x28u);
    }
    v30 = (_BYTE *)(*v27 + 1);
    goto LABEL_72;
  }
  while ( 1 )
  {
    v35 = *(v34 - 1);
    if ( v35 != 32 && v35 != 9 )
      break;
    if ( --v34 == v30 )
    {
      v51 = v34;
      goto LABEL_69;
    }
  }
  v51 = v34;
  if ( v30 == v34 )
    goto LABEL_69;
  v36 = *v49;
  if ( *v49 != 4096 )
  {
    *v49 = v36 + 1;
    *((_BYTE *)v49 + v36 + 8) = 32;
    if ( 4096 - (v36 + 1) >= (unsigned __int64)(v34 - v30) )
    {
      v44 = v49;
      srca = (void *)(v34 - v30);
      v50 = v29;
      memmove((char *)v28 + v36 + 9, v30, v34 - v30);
      v28 = v44;
      v27 = v46;
      v29 = v50;
      *v44 += srca;
      goto LABEL_69;
    }
  }
  boost::beast::http::make_error_code();
  v20 = v53;
  v54 = _mm_load_si128(&v52);
  if ( v53 > 1 )
    v20 = (unsigned __int64)ZZN5boost5beast4http6detail17basic_parser_base11parse_fieldERPKcS5_RNS_4core17basic_string_viewIcEESA_RNS0_6detail11char_bufferILm4096EEERNS_6system10error_codeEE7loc_bb___10_
        | v53 & 1;
LABEL_17:
  v21 = _mm_load_si128(&v54);
  v55 = v20;
  *(_QWORD *)(a6 + 16) = v20;
  *(__m128i *)a6 = v21;
  return v56 - __readfsqword(0x28u);
}

