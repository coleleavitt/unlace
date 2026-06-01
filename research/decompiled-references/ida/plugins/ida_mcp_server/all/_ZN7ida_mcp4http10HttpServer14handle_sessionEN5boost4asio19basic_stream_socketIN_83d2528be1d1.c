void __fastcall ida_mcp::http::HttpServer::handle_session(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        __int64 a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        int a37,
        __int128 a38,
        __int64 a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        char a60,
        int a61,
        int a62,
        int a63,
        int a64,
        __int128 a65,
        __int64 a66,
        int a67,
        int a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        int a77,
        int a78,
        int a79,
        __int128 a80)
{
  char *v80; // r12
  char *v81; // rbx
  unsigned __int64 v82; // rax
  signed __int64 v83; // r8
  unsigned __int64 v84; // rbp
  unsigned __int64 v85; // r14
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // r8d
  int v91; // r9d
  __m128i *v92; // rbx
  __m128i v93; // xmm0
  __m128 v94; // xmm2
  __m128i v95; // xmm1
  __int64 v96; // rdx
  _QWORD *v97; // rdx
  __int64 v98; // rcx
  __m128i v99; // xmm1
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdx
  char *v103; // rax
  void **v104; // r12
  unsigned __int16 *v105; // rdi
  __m128i v106; // xmm2
  __int64 v107; // rdx
  __m128i v108; // xmm1
  __m128i v109; // xmm0
  _QWORD *v110; // rax
  void *v111; // rdx
  __int64 v112; // rax
  void **v113; // rcx
  void **v114; // rsi
  __m128i *v115; // rdi
  __m128i *v116; // r10
  __m128i *v117; // r8
  void *v118; // r9
  void *v119; // rsi
  __m128i v120; // xmm1
  __m128i v121; // xmm0
  double *v122; // rax
  __m128i v123; // xmm0
  double *v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdi
  int v127; // r13d
  char v128; // cl
  ssize_t v129; // rax
  ssize_t v130; // rdx
  __m128i v131; // xmm0
  int v132; // eax
  __int64 (__fastcall ***v133)(boost::system::detail::system_error_category *__hidden); // rbp
  __int64 v134; // rcx
  bool (__fastcall *v135)(boost::system::error_category *, int); // rdx
  __m128i v136; // xmm0
  size_t v137; // r14
  int v138; // r15d
  struct pollfd *v139; // rcx
  __int64 v140; // rbp
  int v141; // edx
  int v142; // edi
  char *v143; // rax
  __m128i v144; // xmm0
  __m128i v145; // xmm0
  unsigned __int64 v146; // r12
  char *v147; // rax
  void *v148; // rbx
  size_t v149; // r8
  char *v150; // r13
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  unsigned int v153; // ecx
  __int64 v154; // rsi
  unsigned int v155; // ecx
  unsigned int v156; // ecx
  unsigned int v157; // esi
  __int64 v158; // rdi
  unsigned __int64 v159; // rsi
  char *v160; // rax
  char *v161; // rbp
  unsigned int v162; // ecx
  unsigned int v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __m128i v170; // xmm0
  char *dest; // [rsp+0h] [rbp-4A8h]
  void *desta; // [rsp+0h] [rbp-4A8h]
  void *destb; // [rsp+0h] [rbp-4A8h]
  char v174[8]; // [rsp+8h] [rbp-4A0h] BYREF
  size_t v175[2]; // [rsp+10h] [rbp-498h] BYREF
  int v176[2]; // [rsp+20h] [rbp-488h] BYREF
  char v177[8]; // [rsp+28h] [rbp-480h]
  int v178[2]; // [rsp+30h] [rbp-478h]
  __int64 v179; // [rsp+38h] [rbp-470h]
  size_t n[2]; // [rsp+40h] [rbp-468h] BYREF
  void *buf[2]; // [rsp+50h] [rbp-458h] BYREF
  int v182[2]; // [rsp+60h] [rbp-448h]
  int v183[2]; // [rsp+68h] [rbp-440h]
  int v184[4]; // [rsp+70h] [rbp-438h] BYREF
  int v185[4]; // [rsp+80h] [rbp-428h] BYREF
  int v186[2]; // [rsp+90h] [rbp-418h]
  int v187[2]; // [rsp+98h] [rbp-410h]
  int v188[4]; // [rsp+A0h] [rbp-408h] BYREF
  void *src; // [rsp+B0h] [rbp-3F8h]
  int v190; // [rsp+B8h] [rbp-3F0h]
  char v191; // [rsp+BFh] [rbp-3E9h]
  __m128i v192; // [rsp+C0h] [rbp-3E8h] BYREF
  __int64 v193; // [rsp+D0h] [rbp-3D8h]
  int v194; // [rsp+D8h] [rbp-3D0h]
  struct pollfd fds[2]; // [rsp+E0h] [rbp-3C8h] BYREF
  __int64 v196; // [rsp+F0h] [rbp-3B8h]
  __int64 v197; // [rsp+F8h] [rbp-3B0h]
  int v198[4]; // [rsp+100h] [rbp-3A8h] BYREF
  int v199[2]; // [rsp+110h] [rbp-398h]
  int v200; // [rsp+118h] [rbp-390h]
  void *v201[2]; // [rsp+120h] [rbp-388h] BYREF
  size_t v202; // [rsp+130h] [rbp-378h]
  int v203; // [rsp+138h] [rbp-370h]
  __m128i v204; // [rsp+140h] [rbp-368h]
  __int64 v205; // [rsp+150h] [rbp-358h]
  __int64 v206; // [rsp+158h] [rbp-350h]
  _BYTE v207[24]; // [rsp+160h] [rbp-348h] BYREF
  __int64 v208; // [rsp+178h] [rbp-330h]
  void *v209[2]; // [rsp+180h] [rbp-328h] BYREF
  void *v210[2]; // [rsp+190h] [rbp-318h]
  void *v211[2]; // [rsp+1A0h] [rbp-308h]
  int v212[2]; // [rsp+1B0h] [rbp-2F8h]
  void *v213; // [rsp+1B8h] [rbp-2F0h]
  __m128 v214; // [rsp+1C0h] [rbp-2E8h] BYREF
  int v215[4]; // [rsp+1E0h] [rbp-2C8h] BYREF
  __int64 v216; // [rsp+1F0h] [rbp-2B8h]
  void *v217; // [rsp+238h] [rbp-270h] BYREF
  __int64 v218; // [rsp+248h] [rbp-260h] BYREF
  _BYTE v219[24]; // [rsp+260h] [rbp-248h] BYREF
  __int64 v220; // [rsp+278h] [rbp-230h]
  __m128i v221; // [rsp+280h] [rbp-228h] BYREF
  __m128i v222; // [rsp+290h] [rbp-218h] BYREF
  __m128i v223; // [rsp+2A0h] [rbp-208h] BYREF
  __int64 v224; // [rsp+2B0h] [rbp-1F8h]
  double *v225; // [rsp+2B8h] [rbp-1F0h]
  __int64 v226; // [rsp+2C0h] [rbp-1E8h]
  double v227[3]; // [rsp+2C8h] [rbp-1E0h] BYREF
  __m128 v228; // [rsp+2E0h] [rbp-1C8h] BYREF
  __m128i si128; // [rsp+2F0h] [rbp-1B8h]
  unsigned __int64 v230; // [rsp+300h] [rbp-1A8h]
  void *v231; // [rsp+308h] [rbp-1A0h]
  __int64 v232; // [rsp+310h] [rbp-198h]
  __int64 v233; // [rsp+318h] [rbp-190h]
  __int64 v234; // [rsp+320h] [rbp-188h]
  _BYTE v235[24]; // [rsp+328h] [rbp-180h] BYREF
  __int64 v236; // [rsp+340h] [rbp-168h]
  int v237[4]; // [rsp+348h] [rbp-160h] BYREF
  __int64 v238; // [rsp+358h] [rbp-150h]
  __int64 v239; // [rsp+360h] [rbp-148h] BYREF
  __m128i v240; // [rsp+368h] [rbp-140h]
  __int64 v241; // [rsp+378h] [rbp-130h]
  void *v242; // [rsp+380h] [rbp-128h] BYREF
  __int64 v243; // [rsp+388h] [rbp-120h]
  int v244[2]; // [rsp+390h] [rbp-118h] BYREF
  void **v245; // [rsp+3A0h] [rbp-108h]
  __int16 v246; // [rsp+3A8h] [rbp-100h]
  char v247; // [rsp+3AAh] [rbp-FEh]
  __int128 v248; // [rsp+3B0h] [rbp-F8h] BYREF
  void (__fastcall *v249)(__int128 *, __int128 *, __int64); // [rsp+3C0h] [rbp-E8h]
  __int64 v250; // [rsp+3C8h] [rbp-E0h]
  __int128 v251; // [rsp+3D0h] [rbp-D8h] BYREF
  void (__fastcall *v252)(__int128 *, __int128 *, __int64); // [rsp+3E0h] [rbp-C8h]
  __int64 v253; // [rsp+3E8h] [rbp-C0h]
  unsigned __int8 v254; // [rsp+400h] [rbp-A8h]
  char v255[72]; // [rsp+408h] [rbp-A0h] BYREF
  unsigned __int8 v256; // [rsp+450h] [rbp-58h]
  __int64 v257; // [rsp+458h] [rbp-50h]
  int v258; // [rsp+460h] [rbp-48h]
  __int16 v259; // [rsp+464h] [rbp-44h]
  char v260; // [rsp+466h] [rbp-42h]
  unsigned __int64 v261; // [rsp+468h] [rbp-40h]

  v80 = nullptr;
  v81 = nullptr;
  *(_QWORD *)v186 = a1;
  *(_QWORD *)v178 = a2;
  v261 = __readfsqword(0x28u);
  v179 = (__int64)v235;
  *(_QWORD *)v174 = v207;
  v210[0] = nullptr;
  v210[1] = nullptr;
  v211[0] = nullptr;
  v211[1] = nullptr;
  *(_QWORD *)v187 = v237;
  *(_QWORD *)v212 = 11;
  v214.m128_u64[0] = 0;
  *(__m128i *)v188 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v235, (__m128i)(unsigned __int64)v235);
  *(__m128i *)v184 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v209, (__m128i)(unsigned __int64)v209);
  *(__m128i *)v185 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v207, (__m128i)(unsigned __int64)v207);
  v208 = 0;
  *(_QWORD *)v207 = 0;
  v214.m128_u64[1] = 0;
  *(_QWORD *)v235 = 0;
  v236 = 0;
  v228.m128_u64[0] = (unsigned __int64)&off_444D68;
  *(_QWORD *)v176 = v244;
  v242 = v244;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2080);
  *(_QWORD *)v182 = &v214.m128_u64[1];
  v213 = &v214.m128_u16[4];
  v228.m128_u64[1] = 1;
  v230 = 0;
  v231 = nullptr;
  v232 = 0;
  v233 = 0x2000;
  v234 = 0x200000000LL;
  v238 = 0;
  v239 = 0;
  v240 = 0u;
  v241 = 11;
  LOBYTE(v244[0]) = 0;
  v243 = 0;
  v245 = &v242;
  v246 = 0;
  v247 = 0;
  v249 = nullptr;
  *(_OWORD *)&v235[8] = *(_OWORD *)v188;
  *(_OWORD *)&v207[8] = *(_OWORD *)v185;
  *(__m128i *)v237 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v237, (__m128i)(unsigned __int64)v237);
  *(_OWORD *)v209 = *(_OWORD *)v184;
  v248 = 0;
  v250 = 0;
  v252 = nullptr;
  v253 = 0;
  *(_QWORD *)v177 = 0;
  *(_QWORD *)v183 = 0;
  dest = nullptr;
  v251 = 0;
  do
  {
    *(_QWORD *)v199 = 0;
    *(_OWORD *)v198 = 0;
    if ( v80 == v81 )
    {
      v85 = *(_QWORD *)v177 - (_QWORD)dest;
      if ( *(_QWORD *)v177 - (_QWORD)dest > 0x200u )
      {
        if ( v85 > 0x10000 )
        {
          if ( *(_QWORD *)v177 - (_QWORD)v80 <= 0xFFFFu )
          {
            v143 = dest;
            v83 = 0;
            v84 = 0x10000;
            src = dest;
            goto LABEL_121;
          }
          src = v81;
          v84 = 0x10000;
LABEL_73:
          *(_QWORD *)v183 = &v81[v84];
          goto LABEL_74;
        }
        src = v81;
        v84 = *(_QWORD *)v177 - (_QWORD)dest;
        v86 = *(_QWORD *)v177 - (_QWORD)dest;
        v83 = 0;
      }
      else
      {
        src = v81;
        v86 = *(_QWORD *)v177 - (_QWORD)dest;
        v83 = 0;
        v84 = 512;
      }
      goto LABEL_71;
    }
    while ( 1 )
    {
      v82 = boost::beast::http::basic_parser<true>::put();
      if ( v82 >= v80 - v81 )
      {
        boost::beast::http::make_error_code();
        if ( !(unsigned __int8)boost::system::operator==() )
        {
          v80 = dest;
          v81 = dest;
LABEL_11:
          v87 = *(_QWORD *)v199;
          v88 = v199[0] & 1;
LABEL_12:
          if ( !v88 )
            goto LABEL_65;
          if ( v87 != 1 )
            goto LABEL_14;
          goto LABEL_29;
        }
        v81 = dest;
        v83 = 0;
        src = dest;
LABEL_200:
        v85 = *(_QWORD *)v177 - (_QWORD)dest;
        v84 = 512;
        v86 = *(_QWORD *)v177 - (_QWORD)dest - v83;
        if ( v86 > 0x200 )
        {
          v84 = 0x10000;
          if ( v86 <= 0x10000 )
            v84 = *(_QWORD *)v177 - (_QWORD)dest - v83;
        }
LABEL_71:
        LOBYTE(v201[0]) = 0;
        if ( v83 < 0 )
        {
          v196 = 324;
          *(__m128i *)&fds[0].fd = _mm_unpacklo_epi64(
                                     _mm_loadl_epi64((const __m128i *)off_442A18),
                                     (__m128i)(unsigned __int64)"prepare");
          std::length_error::length_error((std::length_error *)v219, "basic_flat_buffer too long");
          ida_mcp::http::HttpServer::handle_session(
            (__int64)v219,
            (__int64)"basic_flat_buffer too long",
            v166,
            v167,
            v168,
            v169,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            a15,
            a16,
            a17,
            a18,
            a19,
            a20,
            a21,
            a22,
            a23,
            a24,
            a25,
            a26,
            a27,
            a28,
            a29,
            a30,
            a31,
            a32,
            a33,
            a34,
            a35,
            a36,
            a37,
            a38,
            a39,
            a40,
            a41,
            a42,
            a43,
            a44,
            a45,
            a46,
            a47,
            a48,
            a49,
            a50,
            a51,
            a52,
            a53,
            a54,
            a55,
            a56,
            a57,
            a58,
            a59,
            a60,
            a61,
            a62,
            a63,
            a64,
            a65,
            a66,
            a67,
            a68,
            a69,
            a70,
            a71,
            a72,
            a73,
            a74,
            a75,
            a76,
            a77,
            a78,
            a79,
            a80);
        }
        goto LABEL_72;
      }
      v81 += v82;
      boost::beast::http::make_error_code();
      if ( !(unsigned __int8)boost::system::operator==() )
        goto LABEL_11;
      v83 = v80 - v81;
      v84 = 0x7FFFFFFFFFFFFFFFLL - (v80 - v81);
      if ( (unsigned __int64)(v80 - v81 - 0x7FFFFFFFFFFF0000LL) > 0xFFFF )
      {
        src = v81;
        v81 = v80;
        goto LABEL_200;
      }
      v85 = *(_QWORD *)v177 - (_QWORD)dest;
      v86 = *(_QWORD *)v177 - (_QWORD)dest - v83;
      if ( v86 > 0x200 )
      {
        if ( v84 >= v86 )
        {
          src = v81;
          v84 = *(_QWORD *)v177 - (_QWORD)dest - v83;
          v81 = v80;
          goto LABEL_72;
        }
      }
      else if ( (unsigned __int64)(v83 - 0x7FFFFFFFFFFFFE00LL) > 0x1FF )
      {
        src = v81;
        v84 = 512;
        v81 = v80;
        goto LABEL_72;
      }
      if ( v83 == 0x7FFFFFFFFFFFFFFFLL )
      {
        boost::beast::http::make_error_code();
        v87 = *(_QWORD *)&v219[16];
        *(__m128i *)v215 = _mm_load_si128((const __m128i *)v219);
        if ( *(_QWORD *)&v219[16] > 1u )
          v87 = (unsigned __int64)boost::beast::http::detail::read_some<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>,boost::beast::basic_flat_buffer<std::allocator<char>>,true>(boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::beast::basic_flat_buffer<std::allocator<char>> &,boost::beast::http::basic_parser<true> &,boost::system::error_code &)::loc_bb_
              | v219[16] & 1;
        v170 = _mm_load_si128((const __m128i *)v215);
        v216 = v87;
        *(_QWORD *)v199 = v87;
        v88 = v87 & 1;
        *(__m128i *)v198 = v170;
        goto LABEL_12;
      }
      src = v81;
      v81 = v80;
LABEL_72:
      if ( *(_QWORD *)v177 - (_QWORD)v81 >= v84 )
        goto LABEL_73;
      if ( v86 >= v84 )
      {
        if ( v83 )
        {
          v175[0] = v83;
          memmove(dest, src, v83);
          v83 = v175[0];
        }
        v143 = dest;
        src = dest;
LABEL_121:
        v81 = &v143[v83];
        goto LABEL_73;
      }
      v146 = v84 + v83;
      v175[0] = v83;
      if ( v84 + v83 < 2 * v83 )
        v146 = 2 * v83;
      if ( v146 > 0x7FFFFFFFFFFFFFFFLL )
        v146 = 0x7FFFFFFFFFFFFFFFLL;
      v147 = (char *)operator new(v146);
      v148 = dest;
      v149 = v175[0];
      v150 = v147;
      if ( dest )
      {
        destb = (void *)v175[0];
        memcpy(v147, src, v175[0]);
        operator delete(v148, v85);
        v149 = (size_t)destb;
      }
      v81 = &v150[v149];
      src = v150;
      dest = v150;
      *(_QWORD *)v183 = &v150[v149 + v84];
      *(_QWORD *)v177 = &v150[v146];
LABEL_74:
      v201[1] = v81;
      v202 = v84;
      *(_QWORD *)v199 = 0;
      *(_OWORD *)v198 = 0;
      v127 = *(_DWORD *)(*(_QWORD *)v178 + 8LL);
      if ( v127 == -1 )
      {
        boost::asio::error::make_error_code();
        v152 = _mm_loadu_si128(&v192);
        *(_QWORD *)v199 = v193;
        *(__m128i *)v198 = v152;
        goto LABEL_83;
      }
      v128 = *(_BYTE *)(*(_QWORD *)v178 + 12LL);
      n[0] = v202;
      v191 = v128;
      if ( !v202 && (v128 & 0x10) != 0 )
      {
        *(_QWORD *)v199 = 0;
        *(_OWORD *)v198 = 0;
        goto LABEL_83;
      }
      buf[0] = v201[1];
      if ( (v191 & 1) != 0 )
      {
        v129 = recv(v127, v201[1], n[0], 0);
        if ( v129 < 0 )
        {
          boost::asio::detail::socket_ops::get_last_error((__m128i *)v198);
          goto LABEL_83;
        }
      }
      else
      {
        while ( 1 )
        {
          v129 = recv(v127, buf[0], n[0], 0);
          if ( v129 >= 0 )
            break;
          boost::asio::detail::socket_ops::get_last_error((__m128i *)v198);
          *(_QWORD *)v219 = 11;
          *(_QWORD *)&v219[8] = &boost::system::detail::system_cat_holder<void>::instance;
          v144 = _mm_load_si128((const __m128i *)v219);
          *(_QWORD *)&v219[16] = 3;
          v216 = 3;
          *(__m128i *)v215 = v144;
          *(__m128i *)v175 = v144;
          if ( !(unsigned __int8)boost::system::operator==() )
          {
            v145 = _mm_load_si128((const __m128i *)v175);
            v205 = 3;
            v204 = v145;
            if ( !(unsigned __int8)boost::system::operator==() )
              goto LABEL_83;
          }
          fds[0].fd = v127;
          *(_DWORD *)&fds[0].events = 1;
          if ( poll(fds, 1u, -1) < 0 )
          {
            boost::asio::detail::socket_ops::get_last_error((__m128i *)v198);
            goto LABEL_83;
          }
          *(_QWORD *)v199 = 0;
          *(_OWORD *)v198 = 0;
        }
      }
      *(_QWORD *)v199 = 0;
      *(_OWORD *)v198 = 0;
      if ( (v191 & 0x10) == 0 || v129 )
      {
        v130 = *(_QWORD *)v183 - (_QWORD)v81;
        if ( *(_QWORD *)v183 - (_QWORD)v81 > (unsigned __int64)v129 )
          v130 = v129;
        v81 += v130;
      }
      else
      {
        *(_QWORD *)v219 = 2;
        *(_QWORD *)v199 = 3;
        *(_QWORD *)&v219[8] = &boost::asio::error::get_misc_category(void)::instance;
        *(__m128i *)v198 = _mm_load_si128((const __m128i *)v219);
      }
LABEL_83:
      *(_QWORD *)&v219[8] = &boost::asio::error::get_misc_category(void)::instance;
      *(_QWORD *)v219 = 2;
      v131 = _mm_load_si128((const __m128i *)v219);
      *(_QWORD *)&v219[16] = 3;
      v216 = 3;
      *(__m128i *)v215 = v131;
      if ( (unsigned __int8)boost::system::operator==() )
      {
        v132 = v234;
        if ( (_DWORD)v234 )
        {
          if ( *(_QWORD *)v199 )
          {
            v133 = *(__int64 (__fastcall ****)(boost::system::detail::system_error_category *__hidden))&v198[2];
            if ( *(_QWORD *)v199 == 1 )
              v133 = &boost::system::detail::interop_cat_holder<void>::instance;
          }
          else
          {
            v133 = &boost::system::detail::system_cat_holder<void>::instance;
          }
          *(_DWORD *)&v219[4] = 0;
          v134 = 2;
          if ( (unsigned __int64)(v133[1] + 0x9AA9DD0BB502406LL) > 1 )
          {
            v135 = (bool (__fastcall *)(boost::system::error_category *, int))(*v133)[6];
            if ( v135 != boost::system::error_category::failed )
            {
              v165 = ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(boost::system::detail::system_error_category *__hidden), _QWORD, bool (__fastcall *)(boost::system::error_category *, int), __int64))v135)(
                       v133,
                       0,
                       v135,
                       2);
              v132 = v234;
              v134 = v165 + 2;
            }
          }
          *(_DWORD *)v219 = 0;
          *(_QWORD *)&v219[8] = v133;
          v136 = _mm_load_si128((const __m128i *)v219);
          *(_QWORD *)&v219[16] = v134;
          *(_QWORD *)v199 = v134;
          *(__m128i *)v198 = v136;
          if ( (unsigned int)(v132 - 1) <= 1 )
          {
            boost::beast::http::make_error_code();
            v87 = *(_QWORD *)&v219[16];
            *(__m128i *)v215 = _mm_load_si128((const __m128i *)v219);
            if ( *(_QWORD *)&v219[16] > 1u )
              v87 = (unsigned __int64)boost::beast::http::basic_parser<true>::put_eof(boost::system::error_code &)::loc_bb_
                  | v219[16] & 1;
          }
          else
          {
            if ( (v234 & 0xC0000000000LL) == 0 )
            {
              LODWORD(v234) = 11;
LABEL_186:
              v80 = v81;
              v87 = 0;
              v88 = 0;
              v81 = (char *)src;
              *(_OWORD *)v198 = 0;
              *(_QWORD *)v199 = 0;
              goto LABEL_65;
            }
            if ( v132 == 11 )
              goto LABEL_186;
            boost::beast::http::make_error_code();
            v87 = *(_QWORD *)&v219[16];
            *(__m128i *)v215 = _mm_load_si128((const __m128i *)v219);
            if ( *(_QWORD *)&v219[16] > 1u )
              v87 = (unsigned __int64)boost::beast::http::basic_parser<true>::put_eof(boost::system::error_code &)::loc_bb_
                  | v219[16] & 1;
          }
        }
        else
        {
          boost::beast::http::make_error_code();
          v87 = *(_QWORD *)&v219[16];
          *(__m128i *)v215 = _mm_load_si128((const __m128i *)v219);
          if ( *(_QWORD *)&v219[16] > 1u )
            v87 = (unsigned __int64)boost::beast::http::detail::read_some<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>,boost::beast::basic_flat_buffer<std::allocator<char>>,true>(boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::beast::basic_flat_buffer<std::allocator<char>> &,boost::beast::http::basic_parser<true> &,boost::system::error_code &)::loc_bb_
                | v219[16] & 1;
        }
        v151 = _mm_load_si128((const __m128i *)v215);
        v80 = v81;
        v216 = v87;
        *(_QWORD *)v199 = v87;
        v81 = (char *)src;
        v88 = v87 & 1;
        *(__m128i *)v198 = v151;
        goto LABEL_12;
      }
      if ( (v199[0] & 1) != 0 )
      {
        if ( *(_QWORD *)v199 != 1 )
          goto LABEL_14;
        if ( v198[0] )
          break;
      }
      v80 = v81;
      v81 = (char *)src;
    }
    v80 = v81;
    v81 = (char *)src;
LABEL_29:
    if ( v198[0] )
    {
      v92 = &v221;
      *(__m128i *)buf = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v219, (__m128i)(unsigned __int64)v219);
      *(__m128i *)v175 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v221, (__m128i)(unsigned __int64)&v221);
      v93 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v219);
      v94 = _mm_loadh_ps((const double *)v174);
      goto LABEL_31;
    }
    v87 = 1;
    v88 = 1;
LABEL_65:
    ;
  }
  while ( (_DWORD)v234 != 11 );
  v92 = &v221;
  v94 = _mm_loadh_ps((const double *)v174);
  *(__m128i *)v175 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v221, (__m128i)(unsigned __int64)&v221);
  *(__m128i *)buf = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v219, (__m128i)(unsigned __int64)v219);
  v93 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v219);
  if ( !v88 )
  {
LABEL_32:
    v95 = _mm_loadu_si128((const __m128i *)v235);
    v96 = *(_QWORD *)&v235[16];
    v220 = 0;
    *(_QWORD *)&v235[16] = v219;
    *(_QWORD *)&v219[16] = v96;
    *(__m128i *)v219 = v95;
    *(__m128i *)v235 = v93;
    if ( v95.m128i_i64[0] )
    {
      *(_QWORD *)v95.m128i_i64[0] = v219;
      if ( *(_QWORD *)v235 )
      {
        **(_QWORD **)v235 = v179;
        goto LABEL_35;
      }
    }
    else
    {
      *(__m128i *)&v219[8] = _mm_load_si128((const __m128i *)buf);
    }
    *(__m128i *)&v235[8] = _mm_load_si128((const __m128i *)v188);
LABEL_35:
    v221 = _mm_load_si128((const __m128i *)v175);
    if ( *(_QWORD *)v237 )
    {
      v97 = *(_QWORD **)&v237[2];
      v98 = **(_QWORD **)&v237[2];
      v221.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)v237 + 8LL);
      *(_QWORD *)(*(_QWORD *)v237 + 8LL) = &v221;
      v221.m128i_i64[0] = v98;
      *v97 = &v221;
      v99 = _mm_loadu_si128((const __m128i *)v237);
      *(__m128i *)v237 = _mm_load_si128(&v221);
      v221 = v99;
    }
    else
    {
      v221.m128i_i64[1] = *(_QWORD *)v187;
      v221.m128i_i64[0] = *(_QWORD *)v187;
      *(__m128i *)v237 = _mm_load_si128(&v221);
      v221 = 0;
    }
    v100 = v239;
    v101 = v238;
    v238 = 0;
    v239 = 0;
    v222.m128i_i64[1] = v100;
    v222.m128i_i64[0] = v101;
    v223 = v240;
    v102 = v243;
    v224 = v241;
    v103 = (char *)v242;
    v240 = 0u;
    v225 = v227;
    if ( v242 == *(void **)v176 )
    {
      v153 = v243 + 1;
      if ( (unsigned int)(v243 + 1) >= 8 )
      {
        v154 = v153;
        v155 = v243;
        *(__int64 *)((char *)&v227[-1] + v154) = *(_QWORD *)(*(_QWORD *)v176 + v154 - 8);
        if ( v155 >= 8 )
        {
          v156 = v155 & 0xFFFFFFF8;
          v157 = 0;
          do
          {
            v158 = v157;
            v157 += 8;
            *(double *)((char *)v227 + v158) = *(double *)&v103[v158];
          }
          while ( v157 < v156 );
        }
      }
      else if ( (v153 & 4) != 0 )
      {
        LODWORD(v227[0]) = **(_DWORD **)v176;
        *(_DWORD *)((char *)&v226 + v153 + 4) = *(_DWORD *)(*(_QWORD *)v176 + v153 - 4LL);
      }
      else if ( (_DWORD)v243 != -1 )
      {
        LOBYTE(v227[0]) = **(_BYTE **)v176;
        if ( (v153 & 2) != 0 )
          *(_WORD *)((char *)&v226 + v153 + 6) = *(_WORD *)(*(_QWORD *)v176 + v153 - 2LL);
      }
    }
    else
    {
      v225 = (double *)v242;
      v227[0] = *(double *)v244;
    }
    v104 = (void **)v209[0];
    v226 = v102;
    v243 = 0;
    v242 = *(void **)v176;
    LOBYTE(v244[0]) = 0;
    if ( v209[0] != v209 )
    {
      *(__m128 *)n = v94;
      do
      {
        v105 = (unsigned __int16 *)v104;
        v104 = (void **)*v104;
        operator delete(v105, (v105[24] + v105[25] + 65) & 0x3FFF8);
      }
      while ( v104 != v209 );
      v94 = (__m128)_mm_load_si128((const __m128i *)n);
    }
    *(__m128 *)v207 = v94;
    v106 = _mm_load_si128((const __m128i *)v184);
    LODWORD(v208) = 0;
    *(_QWORD *)&v207[16] = *(_QWORD *)v174;
    *(__m128i *)v209 = v106;
    if ( v210[1] )
      operator delete(v210[0], (unsigned __int64)v210[1]);
    if ( v211[1] )
      operator delete(v211[0], (unsigned __int64)v211[1]);
    v107 = *(_QWORD *)&v207[16];
    v108 = _mm_load_si128((const __m128i *)v219);
    v109 = _mm_load_si128((const __m128i *)v207);
    *(_QWORD *)&v207[16] = *(_QWORD *)&v219[16];
    *(_QWORD *)&v219[16] = v107;
    *(__m128i *)v207 = v108;
    *(__m128i *)v219 = v109;
    if ( v108.m128i_i64[0] )
    {
      *(_QWORD *)v108.m128i_i64[0] = *(_QWORD *)v174;
      v110 = *(_QWORD **)v219;
    }
    else
    {
      v110 = (_QWORD *)v109.m128i_i64[0];
      *(__m128i *)&v207[8] = _mm_load_si128((const __m128i *)v185);
    }
    if ( v110 )
      *v110 = v219;
    else
      *(__m128i *)&v219[8] = _mm_load_si128((const __m128i *)buf);
    v111 = v209[0];
    v112 = v221.m128i_i64[0];
    if ( v209[0] )
    {
      v113 = (void **)v209[1];
      v114 = (void **)v209[0];
    }
    else
    {
      v113 = v209;
      v114 = v209;
      *(__m128i *)v209 = _mm_load_si128((const __m128i *)v184);
    }
    if ( v221.m128i_i64[0] )
    {
      v115 = (__m128i *)v221.m128i_i64[1];
      v116 = *(__m128i **)(v221.m128i_i64[0] + 8);
      v117 = (__m128i *)v221.m128i_i64[0];
      v92 = *(__m128i **)v221.m128i_i64[1];
    }
    else
    {
      v116 = &v221;
      v115 = &v221;
      v117 = &v221;
      v221 = _mm_load_si128((const __m128i *)v175);
    }
    v118 = v114[1];
    v114[1] = v116;
    v119 = *v113;
    v117->m128i_i64[1] = (__int64)v118;
    *v113 = v92;
    v115->m128i_i64[0] = (__int64)v119;
    v120 = _mm_load_si128((const __m128i *)v209);
    *(__m128i *)v209 = _mm_load_si128(&v221);
    if ( v111 )
      v221 = v120;
    else
      v221 = 0;
    if ( !v112 )
      *(_OWORD *)v209 = 0;
    v121 = _mm_load_si128(&v222);
    v222 = 0u;
    *(_QWORD *)v212 = v224;
    v122 = (double *)v213;
    *(__m128i *)v210 = v121;
    v123 = _mm_load_si128(&v223);
    v223 = 0u;
    v124 = (double *)v213;
    *(__m128i *)v211 = v123;
    if ( v213 == *(void **)v182 )
    {
      if ( v225 != v227 )
      {
        v213 = v225;
        v214 = _mm_loadh_ps(v227);
        goto LABEL_147;
      }
      v125 = v226;
    }
    else
    {
      v125 = v226;
      if ( v225 != v227 )
      {
        v126 = v214.m128_i64[1];
        v213 = v225;
        v214 = _mm_loadh_ps(v227);
        if ( v122 )
        {
          v225 = v122;
          *(_QWORD *)&v227[0] = v126;
LABEL_63:
          v226 = 0;
          *(_BYTE *)v124 = 0;
          std::string::_M_dispose();
          boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
          goto LABEL_14;
        }
LABEL_147:
        v225 = v227;
        v124 = v227;
        goto LABEL_63;
      }
    }
    if ( v125 )
    {
      if ( v125 == 1 )
      {
        *(_BYTE *)v213 = LOBYTE(v227[0]);
        v122 = (double *)v213;
        v125 = v226;
        goto LABEL_176;
      }
      if ( (unsigned int)v125 >= 8 )
      {
        *(double *)v213 = v227[0];
        *(_QWORD *)((char *)v122 + (unsigned int)v125 - 8) = *(__int64 *)((char *)&v227[-1] + (unsigned int)v125);
        v159 = (unsigned __int64)(v122 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v160 = (char *)v122 - v159;
        v161 = (char *)((char *)v227 - v160);
        if ( (((_DWORD)v160 + (_DWORD)v125) & 0xFFFFFFF8) >= 8 )
        {
          v162 = ((_DWORD)v160 + v125) & 0xFFFFFFF8;
          v163 = 0;
          do
          {
            v164 = v163;
            v163 += 8;
            *(_QWORD *)(v159 + v164) = *(_QWORD *)&v161[v164];
          }
          while ( v163 < v162 );
        }
LABEL_175:
        v122 = (double *)v213;
        v125 = v226;
        goto LABEL_176;
      }
      if ( (v125 & 4) != 0 )
      {
        *(_DWORD *)v213 = LODWORD(v227[0]);
        *(_DWORD *)((char *)v122 + (unsigned int)v125 - 4) = *(_DWORD *)((char *)&v226 + (unsigned int)v125 + 4);
        v122 = (double *)v213;
        v125 = v226;
        goto LABEL_176;
      }
      if ( (_DWORD)v125 )
      {
        *(_BYTE *)v213 = LOBYTE(v227[0]);
        if ( (v125 & 2) != 0 )
        {
          *(_WORD *)((char *)v122 + (unsigned int)v125 - 2) = *(_WORD *)((char *)&v226 + (unsigned int)v125 + 6);
          v122 = (double *)v213;
          v125 = v226;
          goto LABEL_176;
        }
        goto LABEL_175;
      }
    }
LABEL_176:
    v214.m128_u64[0] = v125;
    *((_BYTE *)v122 + v125) = 0;
    v124 = v225;
    goto LABEL_63;
  }
  if ( v87 == 1 )
  {
LABEL_31:
    if ( !v198[0] )
      goto LABEL_32;
  }
LABEL_14:
  v228.m128_u64[0] = (unsigned __int64)&off_444D68;
  if ( v252 )
    v252(&v251, &v251, 3);
  if ( v249 )
    v249(&v248, &v248, 3);
  if ( v242 != *(void **)v176 )
    operator delete(v242, *(_QWORD *)v244 + 1LL);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
  if ( v231 )
    operator delete[](v231);
  if ( (v199[0] & 1) != 0 && (*(_QWORD *)v199 != 1 || v198[0]) )
  {
    v196 = 662;
    *(__m128i *)&fds[0].fd = _mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_442A20),
                               (__m128i)(unsigned __int64)"read<boost::asio::basic_stream_socket<boost::asio::ip::tcp>, b"
                                                          "oost::beast::basic_flat_buffer<std::allocator<char> >, true, b"
                                                          "oost::beast::http::basic_string_body<char>, std::allocator<char> >");
    boost::system::error_code::what[abi:cxx11]();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    si128 = _mm_load_si128((const __m128i *)v198);
    v228.m128_u64[0] = (unsigned __int64)off_444638;
    v230 = *(_QWORD *)v199;
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&v228);
  }
  ida_mcp::http::HttpServer::handle_request(
    (int)v215,
    v186[0],
    *(int *)v174,
    v89,
    v90,
    v91,
    (int)dest,
    v174[0],
    v175[0],
    v175[1],
    v176[0],
    v177[0],
    v178[0],
    v179,
    n[0],
    n[1],
    (int)buf[0],
    (__int64)buf[1],
    v182[0],
    v183[0],
    v184[0],
    v184[2],
    v185[0],
    *(__int64 *)&v185[2],
    v186[0],
    v187[0],
    v188[0],
    v188[2],
    (int)src,
    v190,
    v192.m128i_i32[0],
    v192.m128i_i32[2],
    v193,
    v194,
    fds[0].fd,
    fds[1].fd,
    v196,
    v197,
    v198[0],
    v198[2],
    v199[0],
    v200,
    (int)v201[0],
    (int)v201[1],
    v202,
    v203,
    v204.m128i_i32[0],
    (void *)v204.m128i_i64[1],
    v205,
    v206,
    *(void **)v207,
    *(int *)&v207[8],
    *(__int64 *)&v207[16],
    v208,
    (int)v209[0],
    (int)v209[1],
    (int)v210[0],
    (int)v210[1],
    (int)v211[0],
    (int)v211[1],
    v212[0],
    (int)v213,
    v214.m128_i64[0]);
  si128.m128i_i8[0] = 0;
  v137 = 0;
  *(_QWORD *)v176 = &v217;
  v138 = 0;
  v254 = 0;
  v139 = fds;
  v256 = 0;
  v257 = -1;
  v258 = 0;
  v259 = 0;
  v260 = 0;
  *(_OWORD *)v201 = 0;
  v228 = _mm_loadh_ps((const double *)v176);
  while ( 2 )
  {
    LOBYTE(fds[1].fd) = 0;
    fds[0] = *(struct pollfd *)v178;
    v196 = 0;
    LODWORD(v201[0]) = v138;
    v202 = v137;
    v175[0] = (size_t)v139;
    boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::next<boost::beast::http::detail::write_some_lambda<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>> &>();
    v137 = v202;
    v138 = (int)v201[0];
    v139 = (struct pollfd *)v175[0];
    v140 = v202 & 1;
    if ( (v202 & 1) == 0 )
    {
      if ( LOBYTE(fds[1].fd) )
      {
        boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::consume();
        v141 = v258;
        v139 = (struct pollfd *)v175[0];
      }
      else
      {
        v141 = v258;
      }
      goto LABEL_105;
    }
    if ( v202 != 1 )
      goto LABEL_106;
    if ( !LODWORD(v201[0]) )
    {
      if ( LOBYTE(fds[1].fd) )
      {
        boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::consume();
        v139 = (struct pollfd *)v175[0];
      }
      v141 = v258;
      v140 = 1;
LABEL_105:
      if ( v141 == 120 )
        goto LABEL_106;
      continue;
    }
    break;
  }
  v140 = 1;
LABEL_106:
  v175[0] = (size_t)v139;
  boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
    v256,
    (__int64)v255);
  boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
    v254,
    (unsigned __int8 *)&v239);
  if ( v140 && (v137 != 1 || v138) )
  {
    LODWORD(v201[0]) = v138;
    v196 = 820;
    v202 = v137;
    *(__m128i *)&fds[0].fd = _mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_442A28),
                               (__m128i)(unsigned __int64)"write<boost::asio::basic_stream_socket<boost::asio::ip::tcp>, "
                                                          "false, boost::beast::http::basic_string_body<char>, boost::bea"
                                                          "st::http::basic_fields<std::allocator<char> > >");
    boost::system::error_code::what[abi:cxx11]();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    si128 = _mm_load_si128((const __m128i *)v201);
    v228.m128_u64[0] = (unsigned __int64)off_444638;
    v230 = v202;
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&v228);
  }
  v142 = *(_DWORD *)(*(_QWORD *)v178 + 8LL);
  if ( v142 != -1 )
    shutdown(v142, 1);
  if ( v217 != &v218 )
    operator delete(v217, v218 + 1);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
  if ( v213 != *(void **)v182 )
    operator delete(v213, v214.m128_u64[1] + 1);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
  if ( desta )
    operator delete(desta, *(_QWORD *)v177 - (_QWORD)desta);
}

