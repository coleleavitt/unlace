unsigned __int64 __fastcall boost::beast::http::basic_parser<true>::parse_fields(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __m128i *a4)
{
  __int64 v5; // r14
  bool v7; // zf
  unsigned int v8; // eax
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v5 = *a2;
  v16 = __readfsqword(0x28u);
  boost::beast::http::basic_parser<true>::inner_parse_fields();
  boost::beast::http::make_error_code();
  v7 = (unsigned __int8)boost::system::operator==() == 0;
  v8 = *(_DWORD *)(a1 + 56);
  if ( !v7 && a3 >= v8 )
  {
    boost::beast::http::make_error_code();
    v10 = v13;
    v14 = _mm_load_si128(&v12);
    if ( v13 > 1 )
      v10 = (unsigned __int64)&boost::beast::http::basic_parser<true>::parse_fields(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
          | v13 & 1;
    v11 = _mm_load_si128(&v14);
    v15 = v10;
    a4[1].m128i_i64[0] = v10;
    *a4 = v11;
    v8 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v5 + v8 - *(_DWORD *)a2;
  return v16 - __readfsqword(0x28u);
}

