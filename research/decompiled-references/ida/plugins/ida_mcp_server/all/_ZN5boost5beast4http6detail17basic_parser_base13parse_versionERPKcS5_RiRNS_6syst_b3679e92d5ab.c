unsigned __int64 __fastcall boost::beast::http::detail::basic_parser_base::parse_version(
        _BYTE **a1,
        unsigned __int64 a2,
        int *a3,
        __m128i *a4)
{
  _BYTE *v4; // rax
  int v6; // ecx
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-38h]
  __m128i v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v4 = *a1;
  v14 = __readfsqword(0x28u);
  if ( a2 < (unsigned __int64)(v4 + 8) )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 1;
  if ( *v4 != 72 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 2;
  if ( v4[1] != 84 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 3;
  if ( v4[2] != 84 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 4;
  if ( v4[3] != 80 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 5;
  if ( v4[4] != 47 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)(v4[5] - 48) > 9u )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  *a1 = v4 + 6;
  v6 = 2 * (5 * (char)v4[5] - 240);
  *a3 = v6;
  *a1 = v4 + 7;
  if ( v4[6] != 46 )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)(v4[7] - 48) > 9u )
  {
    boost::beast::http::make_error_code();
    v7 = v11;
    v12 = _mm_load_si128(&v10);
    if ( v11 > 1 )
      v7 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_version(char const*&,char const*,int &,boost::system::error_code &)::loc_bb_
         | v11 & 1;
LABEL_13:
    v8 = _mm_load_si128(&v12);
    v13 = v7;
    a4[1].m128i_i64[0] = v7;
    *a4 = v8;
    return v14 - __readfsqword(0x28u);
  }
  *a1 = v4 + 8;
  *a3 = v6 + (char)v4[7] - 48;
  return v14 - __readfsqword(0x28u);
}

