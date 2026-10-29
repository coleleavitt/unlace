char *__fastcall boost::beast::http::basic_parser<true>::put(__int64 a1, _BYTE *a2, size_t a3, __m128i *a4)
{
  unsigned __int8 *v4; // r14
  _BYTE *v7; // r12
  size_t v8; // r13
  __int64 v9; // rax
  size_t v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, const void *, size_t, __m128i *); // rax
  bool v12; // zf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // r10
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __m128i v21; // xmm0
  unsigned __int64 v22; // rdx
  size_t v23; // r15
  unsigned __int64 v24; // r15
  unsigned __int8 *v25; // rax
  char v26; // di
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // r8
  __int64 v29; // rsi
  unsigned __int8 *v30; // rax
  char v31; // dl
  unsigned __int8 *v32; // rdi
  unsigned __int8 *v33; // rcx
  char v34; // r9
  unsigned __int8 *v35; // r11
  char v36; // si
  unsigned __int64 (__fastcall *v37)(__int64, __int64, __m128i *); // rax
  size_t v38; // r15
  size_t (__fastcall *v39)(__int64, const void *, unsigned __int64, __m128i *); // rax
  __int64 v40; // r13
  char *v41; // rcx
  size_t v42; // rax
  __int64 v43; // rdx
  _BYTE *v44; // r13
  unsigned __int64 (__fastcall *v46)(__int64, __int64, __m128i *); // rax
  unsigned __int64 v47; // rax
  size_t (__fastcall *v48)(__int64, const void *, unsigned __int64, __m128i *); // r8
  __int64 v49; // r15
  unsigned __int64 (__fastcall *v50)(__int64, __int64, __m128i *); // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  void (__fastcall *v54)(__int64, __int64); // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __m128i v57; // xmm0
  int v58; // eax
  void (__fastcall *v59)(__int64, __int64); // rax
  unsigned __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  int v63; // ecx
  _BYTE *v64; // r11
  unsigned __int64 (__fastcall *v65)(__int64, int, __int64, __int64, const void *, size_t, int, __m128i *); // r15
  int v66; // eax
  int v67; // ecx
  _BYTE *v68; // r11
  unsigned __int64 v69; // r8
  _BYTE *v70; // rax
  _BYTE *v71; // r15
  size_t v72; // r9
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  void (__fastcall *v77)(__int64, __int64); // rax
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rax
  __m128i v80; // xmm0
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rsi
  unsigned __int64 v83; // rax
  __m128i v84; // xmm0
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rax
  __m128i v88; // xmm0
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rax
  __m128i v91; // xmm0
  unsigned __int64 v92; // rdx
  __m128i v93; // xmm0
  unsigned __int64 v94; // rax
  __m128i v95; // xmm0
  unsigned __int64 v96; // rax
  unsigned __int8 *v97; // r8
  __m128i v98; // xmm0
  void (__fastcall *v99)(__int64, __int64); // rax
  __m128i v100; // xmm0
  __int64 v101; // r15
  char *v102; // rcx
  unsigned __int64 v103; // rax
  __m128i v104; // xmm0
  unsigned __int64 v105; // rax
  __m128i v106; // xmm0
  unsigned __int64 v107; // rax
  __m128i v108; // xmm0
  unsigned __int64 v109; // rax
  __m128i v110; // xmm0
  _BYTE *v111; // rax
  unsigned __int64 v112; // [rsp+8h] [rbp-F0h]
  int v113; // [rsp+10h] [rbp-E8h]
  __int64 v114; // [rsp+10h] [rbp-E8h]
  int v115; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v116; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v117; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v119; // [rsp+28h] [rbp-D0h]
  _BYTE *v120; // [rsp+30h] [rbp-C8h]
  _BYTE *v121; // [rsp+30h] [rbp-C8h]
  int v122; // [rsp+30h] [rbp-C8h]
  size_t n; // [rsp+38h] [rbp-C0h]
  size_t na; // [rsp+38h] [rbp-C0h]
  _BYTE *v125; // [rsp+40h] [rbp-B8h]
  int v126; // [rsp+48h] [rbp-B0h]
  int v127; // [rsp+4Ch] [rbp-ACh]
  unsigned __int64 v128; // [rsp+50h] [rbp-A8h]
  _BYTE *v129; // [rsp+60h] [rbp-98h]
  __int64 v130; // [rsp+68h] [rbp-90h] BYREF
  _BYTE *v131; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v132; // [rsp+78h] [rbp-80h]
  __m128i v133; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v134; // [rsp+90h] [rbp-68h]
  __m128i v135; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v136; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v137; // [rsp+B8h] [rbp-40h]

  v137 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) == 11 )
  {
    boost::beast::http::make_error_code();
    v56 = v134;
    v135 = _mm_load_si128(&v133);
    if ( v134 > 1 )
      v56 = (unsigned __int64)&boost::beast::http::basic_parser<true>::put(boost::asio::const_buffer,boost::system::error_code &)::loc_bb_
          | v134 & 1;
    goto LABEL_119;
  }
  v129 = a2;
  v7 = a2;
  v8 = a3;
  v112 = (unsigned __int64)&a2[a3];
  a4[1].m128i_i64[0] = 0;
  *a4 = 0;
  v9 = *(unsigned int *)(a1 + 64);
  while ( 2 )
  {
    switch ( v9 )
    {
      case 0LL:
        if ( v8 )
        {
          *(_DWORD *)(a1 + 64) = 1;
LABEL_45:
          v23 = *(unsigned int *)(a1 + 56);
          v131 = v7;
          if ( v23 > v8 )
            v23 = v8;
          v24 = (unsigned __int64)&v7[v23];
          if ( v24 < (unsigned __int64)(v7 + 1) )
          {
            v4 = v7;
LABEL_127:
            boost::beast::http::make_error_code();
            v60 = v136;
            v133 = _mm_load_si128(&v135);
            if ( v136 > 1 )
              v60 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_method(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                  | v136 & 1;
            v61 = _mm_load_si128(&v133);
            a4[1].m128i_i64[0] = v60;
            v134 = v60;
            v114 = 0;
            v120 = nullptr;
            *a4 = v61;
          }
          else
          {
            v25 = v7;
            v26 = 0;
            while ( 1 )
            {
              v27 = v25++;
              v28 = v4;
              v29 = *v27;
              v4 = v25;
              if ( !boost::beast::http::detail::is_token_char(char)::tab[v29] )
                break;
              v26 = 1;
              if ( v25 == (unsigned __int8 *)v24 )
              {
                v131 = v25;
                goto LABEL_127;
              }
            }
            if ( v26 )
              v131 = v28;
            else
              v28 = v7;
            if ( (_BYTE)v29 == 32 )
            {
              if ( v27 != v7 )
              {
                v131 = v25;
                v114 = v27 - v7;
                v120 = v7;
                goto LABEL_56;
              }
              v117 = v28;
              boost::beast::http::make_error_code();
              v105 = v134;
              v97 = v117;
              v135 = _mm_load_si128(&v133);
              if ( v134 > 1 )
                v105 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_method(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                     | v134 & 1;
              v106 = _mm_load_si128(&v135);
              v136 = v105;
              a4[1].m128i_i64[0] = v105;
              *a4 = v106;
            }
            else
            {
              v116 = v28;
              boost::beast::http::make_error_code();
              v96 = v136;
              v97 = v116;
              v133 = _mm_load_si128(&v135);
              if ( v136 > 1 )
                v96 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_method(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                    | v136 & 1;
              v98 = _mm_load_si128(&v133);
              v134 = v96;
              a4[1].m128i_i64[0] = v96;
              *a4 = v98;
            }
            v114 = 0;
            v4 = v97;
            v120 = nullptr;
          }
LABEL_56:
          v16 = a4[1].m128i_i64[0] & 1;
          if ( (a4[1].m128i_i64[0] & 1) != 0 && (a4[1].m128i_i64[0] != 1 || a4->m128i_i32[0]) )
            goto LABEL_25;
          if ( v24 < (unsigned __int64)(v4 + 1) )
          {
LABEL_19:
            boost::beast::http::make_error_code();
            v14 = v136;
            v133 = _mm_load_si128(&v135);
            if ( v136 > 1 )
              v14 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_target(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                  | v136 & 1;
LABEL_21:
            v134 = v14;
            v15 = _mm_load_si128(&v133);
LABEL_22:
            a4[1].m128i_i64[0] = v14;
            v4 = nullptr;
            n = 0;
            v16 = v14 & 1;
            *a4 = v15;
            goto LABEL_23;
          }
          v30 = v4;
          v31 = 0;
          v32 = v119;
          while ( 1 )
          {
            v33 = v30;
            v34 = v31;
            ++v30;
            v35 = v32;
            v36 = *v33;
            v32 = v30;
            v31 = boost::beast::http::detail::basic_parser_base::is_pathchar(char)::tab[*v33];
            if ( !v31 )
              break;
            if ( (unsigned __int8 *)v24 == v30 )
            {
              v119 = v30;
              v131 = (_BYTE *)v24;
              goto LABEL_19;
            }
          }
          v119 = v30;
          v14 = a4[1].m128i_u64[0];
          if ( v34 )
            v131 = v35;
          if ( v36 != 32 )
          {
            boost::beast::http::make_error_code();
            v14 = v136;
            v133 = _mm_load_si128(&v135);
            if ( v136 > 1 )
              v14 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_target(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                  | v136 & 1;
            goto LABEL_21;
          }
          if ( v33 == v4 )
          {
            boost::beast::http::make_error_code();
            v14 = v134;
            v135 = _mm_load_si128(&v133);
            if ( v134 > 1 )
              v14 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_target(char const*&,char const*,boost::core::basic_string_view<char> &,boost::system::error_code &)::loc_bb_
                  | v134 & 1;
            v136 = v14;
            v15 = _mm_load_si128(&v135);
            goto LABEL_22;
          }
          v131 = v30;
          n = v33 - v4;
LABEL_23:
          if ( v16 && (v14 != 1 || a4->m128i_i32[0]) )
            goto LABEL_25;
          LODWORD(v130) = 0;
          boost::beast::http::detail::basic_parser_base::parse_version();
          v62 = a4[1].m128i_i64[0];
          if ( (v62 & 1) != 0 && (v62 != 1 || a4->m128i_i32[0]) )
            goto LABEL_25;
          v63 = v130;
          if ( (unsigned int)(v130 - 10) > 1 )
          {
            boost::beast::http::make_error_code();
            v103 = v134;
            v135 = _mm_load_si128(&v133);
            if ( v134 > 1 )
              v103 = (unsigned __int64)boost::beast::http::basic_parser<true>::inner_parse_start_line(char const*&,char const*,boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
                   | v134 & 1;
            goto LABEL_229;
          }
          v64 = v131 + 2;
          if ( v24 < (unsigned __int64)(v131 + 2) )
          {
            boost::beast::http::make_error_code();
            v103 = v134;
            v135 = _mm_load_si128(&v133);
            if ( v134 > 1 )
              v103 = (unsigned __int64)boost::beast::http::basic_parser<true>::inner_parse_start_line(char const*&,char const*,boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
                   | v134 & 1;
            goto LABEL_229;
          }
          if ( *v131 != 13 || v131[1] != 10 )
          {
            boost::beast::http::make_error_code();
            v103 = v134;
            v135 = _mm_load_si128(&v133);
            if ( v134 > 1 )
              v103 = (unsigned __int64)boost::beast::http::basic_parser<true>::inner_parse_start_line(char const*&,char const*,boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
                   | v134 & 1;
LABEL_229:
            v104 = _mm_load_si128(&v135);
            v136 = v103;
            a4[1].m128i_i64[0] = v103;
            *a4 = v104;
            goto LABEL_25;
          }
          if ( (_DWORD)v130 == 11 )
            *(_DWORD *)(a1 + 68) |= 0x10u;
          v125 = v64;
          v126 = v63;
          v65 = *(unsigned __int64 (__fastcall **)(__int64, int, __int64, __int64, const void *, size_t, int, __m128i *))(*(_QWORD *)a1 + 16LL);
          v66 = boost::beast::http::string_to_verb();
          v67 = v126;
          v127 = v66;
          v68 = v125;
          if ( v65 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_request_impl )
          {
            v65(a1, v66, (__int64)v120, v114, v4, n, v126, a4);
            v68 = v125;
            goto LABEL_151;
          }
          if ( !*(_BYTE *)(a1 + 201) )
          {
            v69 = *(_QWORD *)(a1 + 144);
            *(_BYTE *)(a1 + 201) = 1;
            if ( v69 )
            {
              if ( n )
              {
                if ( (__int64)(n + 1) < 0 )
LABEL_258:
                  std::__throw_bad_alloc();
                v128 = v69;
                v111 = (_BYTE *)operator new(n + 1);
                *v111 = 32;
                v71 = v111;
                memcpy(v111 + 1, v4, n);
                operator delete(*(void **)(a1 + 136), v128);
                v72 = n + 1;
                v67 = v126;
                v68 = v125;
LABEL_146:
                *(_QWORD *)(a1 + 136) = v71;
                *(_QWORD *)(a1 + 144) = v72;
              }
              else
              {
                operator delete(*(void **)(a1 + 136), v69);
                v67 = v126;
                v68 = v125;
                *(_QWORD *)(a1 + 136) = 0;
                *(_QWORD *)(a1 + 144) = 0;
              }
            }
            else if ( n )
            {
              if ( (__int64)(n + 1) < 0 )
                goto LABEL_258;
              v70 = (_BYTE *)operator new(n + 1);
              *v70 = 32;
              v71 = v70;
              memcpy(v70 + 1, v4, n);
              v72 = n + 1;
              v67 = v126;
              v68 = v125;
              goto LABEL_146;
            }
            if ( v127 )
            {
              v73 = *(_QWORD *)(a1 + 128);
              *(_DWORD *)(a1 + 156) = v127;
              if ( v73 )
              {
                v121 = v68;
                v115 = v67;
                operator delete(*(void **)(a1 + 120), v73);
                v67 = v115;
                v68 = v121;
                *(_QWORD *)(a1 + 120) = 0;
                *(_QWORD *)(a1 + 128) = 0;
              }
            }
            else
            {
              na = (size_t)v68;
              v122 = v67;
              boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string();
              v68 = (_BYTE *)na;
              v67 = v122;
            }
            *(_DWORD *)(a1 + 152) = v67;
            goto LABEL_151;
          }
          boost::beast::http::make_error_code();
          v109 = v134;
          v68 = v125;
          v135 = _mm_load_si128(&v133);
          if ( v134 > 1 )
            v109 = (unsigned __int64)boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_request_impl(boost::beast::http::verb,boost::core::basic_string_view<char>,boost::core::basic_string_view<char>,int,boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
                 | v134 & 1;
          v110 = _mm_load_si128(&v135);
          v136 = v109;
          a4[1].m128i_i64[0] = v109;
          *a4 = v110;
LABEL_151:
          v74 = a4[1].m128i_i64[0];
          if ( (v74 & 1) == 0 || v74 == 1 && !a4->m128i_i32[0] )
          {
            v129 = v68;
            v75 = (_DWORD)v68 - (_DWORD)v7;
            *(_DWORD *)(a1 + 64) = 2;
            v7 = v68;
            v113 = v75;
            goto LABEL_26;
          }
LABEL_25:
          v113 = 0;
LABEL_26:
          boost::beast::http::make_error_code();
          v12 = (unsigned __int8)boost::system::operator==() == 0;
          v17 = *(_DWORD *)(a1 + 56);
          if ( !v12 && v8 >= v17 )
          {
            boost::beast::http::make_error_code();
            v94 = v136;
            v133 = _mm_load_si128(&v135);
            if ( v136 > 1 )
              v94 = (unsigned __int64)&boost::beast::http::basic_parser<true>::parse_start_line(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
                  | v136 & 1;
            v95 = _mm_load_si128(&v133);
            v134 = v94;
            a4[1].m128i_i64[0] = v94;
            *a4 = v95;
            v17 = *(_DWORD *)(a1 + 56);
          }
          *(_DWORD *)(a1 + 56) = v17 - v113;
          v18 = a4[1].m128i_i64[0];
          if ( (v18 & 1) != 0 && (v18 != 1 || a4->m128i_i32[0]) )
          {
LABEL_82:
            v44 = a2;
            return (char *)(v7 - v44);
          }
LABEL_31:
          boost::beast::http::basic_parser<true>::parse_fields();
          v19 = a4[1].m128i_i64[0];
          if ( (v19 & 1) != 0 && (v19 != 1 || a4->m128i_i32[0]) )
            goto LABEL_116;
          v20 = *(_DWORD *)(a1 + 68);
          if ( (v20 & 1) == 0 )
          {
            if ( (v20 & 0x400) != 0 )
            {
              if ( *(_BYTE *)(a1 + 8) && *(_QWORD *)(a1 + 16) < *(_QWORD *)(a1 + 24) )
              {
                boost::beast::http::make_error_code();
                v13 = v134;
                v135 = _mm_load_si128(&v133);
                if ( v134 > 1 )
                  v13 = (unsigned __int64)boost::beast::http::basic_parser<true>::finish_header(boost::system::error_code &,std::integral_constant<bool,true>)::loc_bb_
                      | v134 & 1;
                v21 = _mm_load_si128(&v135);
                v136 = v13;
                a4[1].m128i_i64[0] = v13;
                v22 = v13 & 1;
                *a4 = v21;
LABEL_41:
                v7 = v129;
                if ( v22 )
                {
LABEL_12:
                  if ( v13 != 1 || a4->m128i_i32[0] )
                    goto LABEL_82;
                }
                goto LABEL_14;
              }
              if ( *(_QWORD *)(a1 + 24) )
              {
                *(_DWORD *)(a1 + 68) = v20 | 8;
                v58 = 3;
                goto LABEL_122;
              }
            }
            else
            {
              if ( (v20 & 0x800) != 0 )
              {
                *(_DWORD *)(a1 + 68) = v20 | 8;
                v58 = 7;
                goto LABEL_122;
              }
              *(_OWORD *)(a1 + 24) = 0;
            }
          }
          v58 = 11;
LABEL_122:
          *(_DWORD *)(a1 + 64) = v58;
          a4[1].m128i_i64[0] = 0;
          *a4 = 0;
          v59 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL);
          if ( v59 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_header_impl )
          {
            v59(a1, (__int64)a4);
            v55 = a4[1].m128i_i64[0];
            if ( (v55 & 1) != 0 && (v55 != 1 || a4->m128i_i32[0]) )
              goto LABEL_116;
          }
          if ( *(_DWORD *)(a1 + 64) != 11 )
          {
            v7 = v129;
            if ( (unsigned __int64)v129 >= v112 )
              goto LABEL_82;
            v9 = *(unsigned int *)(a1 + 64);
            goto LABEL_16;
          }
          v99 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL);
          if ( v99 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_finish_impl )
          {
            v99(a1, (__int64)a4);
            v13 = a4[1].m128i_u64[0];
            v22 = v13 & 1;
            goto LABEL_41;
          }
          a4[1].m128i_i64[0] = 0;
          v7 = v129;
          *a4 = 0;
LABEL_14:
          if ( (unsigned __int64)v7 >= v112 )
            goto LABEL_82;
          v9 = *(unsigned int *)(a1 + 64);
          if ( (_DWORD)v9 == 11 )
            goto LABEL_82;
LABEL_16:
          if ( (*(_BYTE *)(a1 + 68) & 2) == 0 )
            goto LABEL_82;
          v8 = v112 - (_QWORD)v7;
          continue;
        }
        boost::beast::http::make_error_code();
        v56 = v134;
        v135 = _mm_load_si128(&v133);
        if ( v134 > 1 )
          v56 = (unsigned __int64)&boost::beast::http::basic_parser<true>::put(boost::asio::const_buffer,boost::system::error_code &)::loc_bb_
              | v134 & 1;
LABEL_119:
        v57 = _mm_load_si128(&v135);
        v136 = v56;
        a4[1].m128i_i64[0] = v56;
        *a4 = v57;
        return nullptr;
      case 1LL:
        goto LABEL_45;
      case 2LL:
        goto LABEL_31;
      case 3LL:
        v37 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)a1 + 56LL);
        if ( (*(_BYTE *)(a1 + 69) & 4) == 0 )
        {
          LOBYTE(v131) = 0;
          v132 = 0;
          if ( v37 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
            goto LABEL_70;
LABEL_198:
          v37(a1, (__int64)&v131, a4);
          v79 = a4[1].m128i_u64[0];
          v81 = v79 & 1;
          goto LABEL_162;
        }
        v78 = *(_QWORD *)(a1 + 32);
        LOBYTE(v131) = 1;
        v132 = v78;
        if ( v37 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
          goto LABEL_198;
        if ( v78 <= 0x7FFFFFFFFFFFFFFELL )
        {
          std::string::reserve();
LABEL_70:
          *(_BYTE *)(a1 + 200) = 1;
          goto LABEL_71;
        }
        boost::beast::http::make_error_code();
        v79 = v134;
        v135 = _mm_load_si128(&v133);
        if ( v134 > 1 )
          v79 = (unsigned __int64)boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::init(boost::optional<unsigned long> const&,boost::system::error_code &)::loc_bb_
              | v134 & 1;
        v80 = _mm_load_si128(&v135);
        a4[1].m128i_i64[0] = v79;
        v136 = v79;
        v81 = v79 & 1;
        *a4 = v80;
        *(_BYTE *)(a1 + 200) = 1;
LABEL_162:
        if ( v81 && (v79 != 1 || a4->m128i_i32[0]) )
          goto LABEL_82;
LABEL_71:
        *(_DWORD *)(a1 + 64) = 4;
LABEL_72:
        a4[1].m128i_i64[0] = 0;
        *a4 = 0;
        v38 = *(_QWORD *)(a1 + 24);
        v39 = *(size_t (__fastcall **)(__int64, const void *, unsigned __int64, __m128i *))(*(_QWORD *)a1 + 64LL);
        if ( v8 <= v38 )
          v38 = v8;
        if ( v39 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_impl )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
          if ( 0x7FFFFFFFFFFFFFFELL - v40 < v38 )
          {
            boost::beast::http::make_error_code();
            v90 = v134;
            v135 = _mm_load_si128(&v133);
            if ( v134 > 1 )
              v90 = (unsigned __int64)&boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffer>(boost::asio::const_buffer const&,boost::system::error_code &)::loc_bb_
                  | v134 & 1;
            v91 = _mm_load_si128(&v135);
            v136 = v90;
            v38 = 0;
            a4[1].m128i_i64[0] = v90;
            *a4 = v91;
          }
          else
          {
            std::string::resize();
            v41 = &v7[v38];
            a4[1].m128i_i64[0] = 0;
            *a4 = 0;
            if ( v38 )
            {
              memcpy((void *)(v40 + **(_QWORD **)(a1 + 192)), v7, v38);
              v41 = &v7[v38];
            }
            v7 = v41;
          }
        }
        else
        {
          v38 = v39(a1, v7, v38, a4);
          v7 += v38;
        }
        v129 = v7;
        v42 = *(_QWORD *)(a1 + 24) - v38;
        *(_QWORD *)(a1 + 24) = v42;
        v43 = a4[1].m128i_i64[0];
        if ( (v43 & 1) != 0 && (v43 != 1 || a4->m128i_i32[0]) )
          goto LABEL_82;
        if ( v42 )
          goto LABEL_14;
        v53 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 64) = 11;
        v54 = *(void (__fastcall **)(__int64, __int64))(v53 + 88);
        if ( v54 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_finish_impl )
        {
          a4[1].m128i_i64[0] = 0;
          *a4 = 0;
          goto LABEL_14;
        }
        v54(a1, (__int64)a4);
        v13 = a4[1].m128i_u64[0];
        if ( (v13 & 1) != 0 )
          goto LABEL_12;
        goto LABEL_14;
      case 4LL:
        goto LABEL_72;
      case 5LL:
        v46 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)a1 + 56LL);
        if ( (*(_BYTE *)(a1 + 69) & 4) == 0 )
        {
          LOBYTE(v131) = 0;
          v132 = 0;
          if ( v46 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
            goto LABEL_86;
LABEL_197:
          v46(a1, (__int64)&v131, a4);
          v83 = a4[1].m128i_u64[0];
          v85 = v83 & 1;
          goto LABEL_171;
        }
        v82 = *(_QWORD *)(a1 + 32);
        LOBYTE(v131) = 1;
        v132 = v82;
        if ( v46 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
          goto LABEL_197;
        if ( v82 <= 0x7FFFFFFFFFFFFFFELL )
        {
          std::string::reserve();
LABEL_86:
          a4[1].m128i_i64[0] = 0;
          *a4 = 0;
          *(_BYTE *)(a1 + 200) = 1;
          goto LABEL_87;
        }
        boost::beast::http::make_error_code();
        v83 = v134;
        v135 = _mm_load_si128(&v133);
        if ( v134 > 1 )
          v83 = (unsigned __int64)boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::init(boost::optional<unsigned long> const&,boost::system::error_code &)::loc_bb_
              | v134 & 1;
        v84 = _mm_load_si128(&v135);
        a4[1].m128i_i64[0] = v83;
        v136 = v83;
        v85 = v83 & 1;
        *a4 = v84;
        *(_BYTE *)(a1 + 200) = 1;
LABEL_171:
        if ( v85 && (v83 != 1 || a4->m128i_i32[0]) )
          goto LABEL_82;
LABEL_87:
        *(_DWORD *)(a1 + 64) = 6;
LABEL_88:
        if ( !*(_BYTE *)(a1 + 8) )
          goto LABEL_91;
        v47 = *(_QWORD *)(a1 + 16);
        if ( v47 < v8 )
        {
          boost::beast::http::make_error_code();
          v13 = v134;
          v135 = _mm_load_si128(&v133);
          if ( v134 > 1 )
            v13 = (unsigned __int64)boost::beast::http::basic_parser<true>::parse_body_to_eof(char const*&,unsigned long,boost::system::error_code &)::loc_bb_
                | v134 & 1;
          v100 = _mm_load_si128(&v135);
          v136 = v13;
          a4[1].m128i_i64[0] = v13;
          v92 = v13 & 1;
          *a4 = v100;
        }
        else
        {
          *(_QWORD *)(a1 + 16) = v47 - v8;
LABEL_91:
          a4[1].m128i_i64[0] = 0;
          *a4 = 0;
          v48 = *(size_t (__fastcall **)(__int64, const void *, unsigned __int64, __m128i *))(*(_QWORD *)a1 + 64LL);
          if ( v48 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_impl )
          {
            v49 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
            if ( 0x7FFFFFFFFFFFFFFELL - v49 < v8 )
            {
              boost::beast::http::make_error_code();
              v13 = v134;
              v135 = _mm_load_si128(&v133);
              if ( v134 > 1 )
                v13 = (unsigned __int64)&boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffer>(boost::asio::const_buffer const&,boost::system::error_code &)::loc_bb_
                    | v134 & 1;
              v93 = _mm_load_si128(&v135);
              v136 = v13;
              a4[1].m128i_i64[0] = v13;
              v92 = v13 & 1;
              *a4 = v93;
            }
            else
            {
              std::string::resize();
              a4[1].m128i_i64[0] = 0;
              *a4 = 0;
              if ( !v8 )
              {
                v129 = v7;
                goto LABEL_14;
              }
              memcpy((void *)(v49 + **(_QWORD **)(a1 + 192)), v7, v8);
              v13 = a4[1].m128i_u64[0];
              v7 += v8;
              v92 = v13 & 1;
            }
          }
          else
          {
            v7 += v48(a1, v7, v8, a4);
            v13 = a4[1].m128i_u64[0];
            v92 = v13 & 1;
          }
          v129 = v7;
        }
        if ( !v92 )
          goto LABEL_14;
        goto LABEL_12;
      case 6LL:
        goto LABEL_88;
      case 7LL:
        v50 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)a1 + 56LL);
        if ( (*(_BYTE *)(a1 + 69) & 4) == 0 )
        {
          LOBYTE(v131) = 0;
          v132 = 0;
          if ( v50 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
            goto LABEL_97;
LABEL_196:
          v50(a1, (__int64)&v131, a4);
          v87 = a4[1].m128i_u64[0];
          v89 = v87 & 1;
          goto LABEL_180;
        }
        v86 = *(_QWORD *)(a1 + 32);
        LOBYTE(v131) = 1;
        v132 = v86;
        if ( v50 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_init_impl )
          goto LABEL_196;
        if ( v86 <= 0x7FFFFFFFFFFFFFFELL )
        {
          std::string::reserve();
LABEL_97:
          a4[1].m128i_i64[0] = 0;
          *a4 = 0;
          *(_BYTE *)(a1 + 200) = 1;
          goto LABEL_98;
        }
        boost::beast::http::make_error_code();
        v87 = v134;
        v135 = _mm_load_si128(&v133);
        if ( v134 > 1 )
          v87 = (unsigned __int64)boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::init(boost::optional<unsigned long> const&,boost::system::error_code &)::loc_bb_
              | v134 & 1;
        v88 = _mm_load_si128(&v135);
        a4[1].m128i_i64[0] = v87;
        v136 = v87;
        v89 = v87 & 1;
        *a4 = v88;
        *(_BYTE *)(a1 + 200) = 1;
LABEL_180:
        if ( v89 && (v87 != 1 || a4->m128i_i32[0]) )
          goto LABEL_82;
LABEL_98:
        *(_DWORD *)(a1 + 64) = 8;
LABEL_99:
        boost::beast::http::basic_parser<true>::parse_chunk_header();
        v51 = a4[1].m128i_i64[0];
        if ( (v51 & 1) != 0 && (v51 != 1 || a4->m128i_i32[0]) )
        {
LABEL_116:
          v44 = a2;
          v7 = v129;
          return (char *)(v7 - v44);
        }
        v7 = v129;
        if ( *(_DWORD *)(a1 + 64) != 10 )
          goto LABEL_14;
        v44 = a2;
LABEL_105:
        boost::beast::http::basic_parser<true>::parse_fields();
        v52 = a4[1].m128i_i64[0];
        if ( (v52 & 1) != 0 && (v52 != 1 || a4->m128i_i32[0]) )
          goto LABEL_108;
        v76 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 64) = 11;
        v77 = *(void (__fastcall **)(__int64, __int64))(v76 + 88);
        if ( v77 != boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_finish_impl )
        {
          v77(a1, (__int64)a4);
LABEL_108:
          v7 = v129;
          return (char *)(v7 - v44);
        }
        a4[1].m128i_i64[0] = 0;
        v7 = v129;
        *a4 = 0;
        return (char *)(v7 - v44);
      case 8LL:
        goto LABEL_99;
      case 9LL:
        a4[1].m128i_i64[0] = 0;
        *a4 = 0;
        v10 = *(_QWORD *)(a1 + 24);
        v11 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, __m128i *))(*(_QWORD *)a1 + 80LL);
        if ( v8 > v10 )
          v8 = *(_QWORD *)(a1 + 24);
        if ( v11 == boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_body_impl )
        {
          if ( *(_QWORD *)(a1 + 256) )
          {
            v130 = *(_QWORD *)(a1 + 24);
            v131 = v7;
            v132 = v8;
            v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _BYTE **, __m128i *))(a1 + 264))(
                   a1 + 240,
                   &v130,
                   &v131,
                   a4);
            v7 += v8;
          }
          else
          {
            v101 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
            if ( 0x7FFFFFFFFFFFFFFELL - v101 < v8 )
            {
              boost::beast::http::make_error_code();
              v107 = v134;
              v135 = _mm_load_si128(&v133);
              if ( v134 > 1 )
                v107 = (unsigned __int64)&boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffer>(boost::asio::const_buffer const&,boost::system::error_code &)::loc_bb_
                     | v134 & 1;
              v108 = _mm_load_si128(&v135);
              v136 = v107;
              v8 = 0;
              a4[1].m128i_i64[0] = v107;
              *a4 = v108;
            }
            else
            {
              std::string::resize();
              v102 = &v7[v8];
              a4[1].m128i_i64[0] = 0;
              *a4 = 0;
              if ( v8 )
              {
                memcpy((void *)(v101 + **(_QWORD **)(a1 + 192)), v7, v8);
                v102 = &v7[v8];
              }
              v7 = v102;
            }
          }
        }
        else
        {
          v8 = v11(a1, v10, v7, v8, a4);
          v7 += v8;
        }
        v12 = *(_QWORD *)(a1 + 24) == v8;
        *(_QWORD *)(a1 + 24) -= v8;
        v129 = v7;
        if ( v12 )
          *(_DWORD *)(a1 + 64) = 8;
        v13 = a4[1].m128i_u64[0];
        if ( (v13 & 1) != 0 )
          goto LABEL_12;
        goto LABEL_14;
      case 10LL:
        v44 = a2;
        goto LABEL_105;
      case 11LL:
        a4[1].m128i_i64[0] = 0;
        v44 = a2;
        *a4 = 0;
        return (char *)(v7 - v44);
      default:
        goto LABEL_14;
    }
  }
}

