unsigned __int64 __fastcall boost::beast::http::basic_parser<true>::parse_chunk_header(
        __int64 a1,
        unsigned __int8 **a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int8 *v6; // rsi
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int8 *v14; // r11
  unsigned __int8 v15; // dl
  unsigned __int8 *v16; // rcx
  unsigned __int64 v17; // r9
  bool v18; // cf
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int8 *v22; // r11
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int8 *v32; // [rsp+0h] [rbp-A8h]
  __int64 v33; // [rsp+0h] [rbp-A8h]
  __int64 v34; // [rsp+0h] [rbp-A8h]
  unsigned __int8 *v35; // [rsp+8h] [rbp-A0h]
  unsigned __int8 *v37; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v38; // [rsp+10h] [rbp-98h]
  unsigned __int64 v39; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v40; // [rsp+20h] [rbp-88h]
  unsigned __int64 v41; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v42[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v43; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-58h]
  __m128i v45; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-38h]
  unsigned __int64 v47; // [rsp+78h] [rbp-30h]

  v47 = __readfsqword(0x28u);
  if ( a3 <= 1 )
  {
    boost::beast::http::make_error_code();
    v7 = v44;
    v45 = _mm_load_si128(&v43);
    if ( v44 > 1 )
      v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
         | v44 & 1;
    goto LABEL_6;
  }
  v6 = *a2;
  if ( (*(_BYTE *)(a1 + 68) & 0x40) != 0 )
  {
    if ( *v6 != 13 || (v10 = v6 + 2, v6[1] != 10) )
    {
      boost::beast::http::make_error_code();
      v7 = v44;
      v45 = _mm_load_si128(&v43);
      if ( v44 > 1 )
        v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
           | v44 & 1;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = v6;
  }
  v11 = &v6[a3];
  v12 = v10;
  if ( v11 == v10 )
    goto LABEL_22;
  while ( 1 )
  {
    v13 = *v12;
    v14 = v12++;
    if ( v13 == 13 )
      break;
    if ( v11 == v12 )
      goto LABEL_22;
  }
  if ( v11 == v12 )
  {
LABEL_22:
    *(_QWORD *)(a4 + 16) = 0;
    *(_OWORD *)a4 = 0;
LABEL_23:
    boost::beast::http::make_error_code();
    v7 = v44;
    v45 = _mm_load_si128(&v43);
    if ( v44 > 1 )
      v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
         | v44 & 1;
LABEL_6:
    v8 = _mm_load_si128(&v45);
    v46 = v7;
    *(_QWORD *)(a4 + 16) = v7;
    *(__m128i *)a4 = v8;
    return v47 - __readfsqword(0x28u);
  }
  if ( v14[1] != 10 )
  {
    boost::beast::http::make_error_code();
    v28 = v46;
    v29 = _mm_load_si128(&v45);
    v44 = v46;
    v43 = v29;
    if ( v46 <= 1 )
    {
      *(_QWORD *)(a4 + 16) = v46;
      *(__m128i *)a4 = v29;
      if ( v28 && *(_DWORD *)a4 )
        return v47 - __readfsqword(0x28u);
    }
    else
    {
      v30 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::find_eol(char const*,char const*,boost::system::error_code &)::loc_bb_
          | v46 & 1;
      *(__m128i *)a4 = v29;
      v44 = v30;
      *(_QWORD *)(a4 + 16) = v30;
      if ( (v30 & 1) != 0 )
        return v47 - __readfsqword(0x28u);
    }
    goto LABEL_23;
  }
  *(_QWORD *)(a4 + 16) = 0;
  *(_OWORD *)a4 = 0;
  v15 = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[*v10];
  if ( v15 == 0xFF )
  {
LABEL_20:
    boost::beast::http::make_error_code();
    v7 = v44;
    v45 = _mm_load_si128(&v43);
    if ( v44 > 1 )
      v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
         | v44 & 1;
    goto LABEL_6;
  }
  v16 = v10 + 1;
  v17 = v15;
  while ( 1 )
  {
    v19 = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[*v16];
    if ( (_BYTE)v19 == 0xFF )
      break;
    if ( v17 <= 0xFFFFFFFFFFFFFFFLL )
    {
      ++v16;
      v18 = __CFADD__(v19, 16 * v17);
      v17 = v19 + 16 * v17;
      if ( !v18 )
        continue;
    }
    goto LABEL_20;
  }
  v40 = v16;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v20 = *(_QWORD *)(a1 + 16);
    if ( v20 < v17 )
    {
      boost::beast::http::make_error_code();
      v7 = v44;
      v45 = _mm_load_si128(&v43);
      if ( v44 > 1 )
        v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
           | v44 & 1;
      goto LABEL_6;
    }
    *(_QWORD *)(a1 + 16) = v20 - v17;
  }
  v39 = v17;
  v35 = v16;
  v32 = v14;
  boost::beast::http::detail::basic_parser_base::parse_chunk_extensions();
  v21 = *(_QWORD *)(a4 + 16);
  v22 = v32;
  v23 = a1;
  v24 = v39;
  v25 = v21 & 1;
  if ( (v21 & 1) != 0 && (v21 != 1 || *(_DWORD *)a4) )
    return v47 - __readfsqword(0x28u);
  if ( v40 != v32 )
  {
    boost::beast::http::make_error_code();
    v7 = v44;
    v45 = _mm_load_si128(&v43);
    if ( v44 > 1 )
      v7 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_chunk_header(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
         | v44 & 1;
    goto LABEL_6;
  }
  v26 = v32 - v35;
  v27 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 72LL);
  if ( v27 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_header_impl )
  {
    if ( *(_QWORD *)(a1 + 224) )
    {
      v37 = v32;
      v41 = v39;
      v42[0] = v35;
      v33 = v23;
      v42[1] = v26;
      (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD *, __int64))(v23 + 232))(v23 + 208, &v41, v42, a4);
      v21 = *(_QWORD *)(a4 + 16);
      v23 = v33;
      v24 = v39;
      v22 = v37;
      v25 = v21 & 1;
    }
  }
  else
  {
    v31 = a1;
    v38 = v32;
    v34 = v23;
    v27(v31, v39, (__int64)v35, v22 - v35, a4);
    v21 = *(_QWORD *)(a4 + 16);
    v22 = v38;
    v24 = v39;
    v23 = v34;
    v25 = v21 & 1;
  }
  if ( !v25 || v21 == 1 && !*(_DWORD *)a4 )
  {
    *(_QWORD *)(v23 + 24) = v24;
    *a2 = v22 + 2;
    *(_DWORD *)(v23 + 68) |= 0x40u;
    if ( v24 )
    {
      *(_DWORD *)(v23 + 64) = 9;
    }
    else
    {
      *(_DWORD *)(v23 + 56) += 2;
      *(_DWORD *)(v23 + 64) = 10;
    }
  }
  return v47 - __readfsqword(0x28u);
}

