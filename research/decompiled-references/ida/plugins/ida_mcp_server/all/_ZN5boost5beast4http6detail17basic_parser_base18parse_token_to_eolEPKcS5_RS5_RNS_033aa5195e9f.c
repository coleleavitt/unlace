unsigned __int8 *__fastcall boost::beast::http::detail::basic_parser_base::parse_token_to_eol(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int8 **a3,
        __m128i *a4)
{
  unsigned __int8 v7; // dl
  unsigned __int8 *result; // rax
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm0
  unsigned __int64 v11; // [rsp+8h] [rbp-50h]
  unsigned __int64 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+8h] [rbp-50h]
  __m128i v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-38h]
  __m128i v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-18h]
  unsigned __int64 v18; // [rsp+48h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned __int64)a1 >= a2 )
  {
    a2 = (unsigned __int64)a1;
LABEL_11:
    v11 = a2;
    boost::beast::http::make_error_code();
    v9 = v15;
    result = (unsigned __int8 *)v11;
    v16 = _mm_load_si128(&v14);
    if ( v15 > 1 )
      v9 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_token_to_eol(char const*,char const*,char const*&,boost::system::error_code &)::loc_bb_
         | v15 & 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v7 = *a1;
    if ( (unsigned __int8)(*a1 - 32) <= 0x5Eu )
      goto LABEL_3;
    if ( v7 <= 0x1Fu )
      break;
    if ( v7 == 127 )
      return nullptr;
LABEL_3:
    if ( (unsigned __int8 *)a2 == ++a1 )
      goto LABEL_11;
  }
  if ( v7 == 9 )
    goto LABEL_3;
  if ( v7 != 13 )
    return nullptr;
  if ( (unsigned __int64)(a1 + 1) >= a2 )
  {
    v12 = a2;
    boost::beast::http::make_error_code();
    v9 = v15;
    result = (unsigned __int8 *)v12;
    v16 = _mm_load_si128(&v14);
    if ( v15 > 1 )
      v9 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_token_to_eol(char const*,char const*,char const*&,boost::system::error_code &)::loc_bb_
         | v15 & 1;
  }
  else
  {
    if ( a1[1] == 10 )
    {
      *a3 = a1;
      return a1 + 2;
    }
    v13 = a2;
    boost::beast::http::make_error_code();
    v9 = v15;
    result = (unsigned __int8 *)v13;
    v16 = _mm_load_si128(&v14);
    if ( v15 > 1 )
      v9 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_token_to_eol(char const*,char const*,char const*&,boost::system::error_code &)::loc_bb_
         | v15 & 1;
  }
LABEL_13:
  v10 = _mm_load_si128(&v16);
  v17 = v9;
  a4[1].m128i_i64[0] = v9;
  *a4 = v10;
  return result;
}

