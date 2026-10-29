unsigned __int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl(
        __int64 a1,
        __int64 a2,
        __m128i *a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rcx
  __m128i v6; // xmm0
  __m128i *v7; // [rsp+8h] [rbp-50h]
  __m128i v8; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+20h] [rbp-38h]
  __m128i v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v3 = a1;
  if ( !*(_BYTE *)a2 )
    goto LABEL_4;
  v7 = a3;
  if ( *(_QWORD *)(a2 + 8) <= 0x7FFFFFFFFFFFFFFEuLL )
  {
    std::string::reserve();
    a3 = v7;
    v3 = a1;
LABEL_4:
    a3[1].m128i_i64[0] = 0;
    *a3 = 0;
    goto LABEL_5;
  }
  boost::beast::http::make_error_code();
  v5 = v9;
  v3 = a1;
  v10 = _mm_load_si128(&v8);
  if ( v9 > 1 )
    v5 = (unsigned __int64)boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::init(boost::optional<unsigned long> const&,boost::system::error_code &)::loc_bb_
       | v9 & 1;
  v6 = _mm_load_si128(&v10);
  v7[1].m128i_i64[0] = v5;
  *v7 = v6;
LABEL_5:
  *(_BYTE *)(v3 + 200) = 1;
  return v11 - __readfsqword(0x28u);
}

