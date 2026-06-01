unsigned __int64 __fastcall boost::beast::http::basic_parser<true>::do_field(
        __int64 a1,
        __int16 a2,
        const __m128i *a3,
        __int64 a4,
        __m128i *a5)
{
  unsigned __int8 *v9; // rcx
  __m128i *i; // rdx
  unsigned __int8 v11; // si
  unsigned __int8 *v12; // rax
  signed __int64 v13; // rdi
  unsigned __int8 *v14; // rsi
  bool v15; // r8
  unsigned __int8 v16; // dl
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  const __m128i *v20; // rsi
  const __m128i *v21; // rax
  __m128i v22; // xmm0
  const __m128i *v23; // rdx
  __m128i v24; // xmm4
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm7
  __m128i v32; // xmm6
  __m128i v33; // xmm3
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128i v36; // xmm7
  __m128i v37; // xmm0
  __m128i v38; // xmm6
  __m128i v39; // xmm0
  __m128i v40; // xmm3
  __m128i v41; // xmm0
  __m128i v42; // xmm2
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rsi
  __int8 v46; // cl
  __int64 v47; // rsi
  __int8 v48; // cl
  __int64 v49; // r13
  _BYTE *v50; // rdi
  unsigned __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int8 *v55; // r12
  __m128i v56; // xmm0
  __int64 v57; // r13
  __m128 v58; // xmm5
  __m128i v59; // rax
  __m128 k; // xmm0
  __int64 v61; // xmm5_8
  __m128i v62; // xmm4
  __m128i v63; // xmm4
  __m128i v64; // kr10_16
  __m128i si128; // xmm0
  char *v66; // rdi
  __int64 v67; // r8
  char *v68; // rsi
  int v69; // r11d
  unsigned int v70; // r14d
  char v71; // r10
  char v72; // r11
  int v73; // r10d
  unsigned int v74; // r14d
  char v75; // r11
  char v76; // r10
  bool v77; // cf
  int v78; // r14d
  char v79; // r10
  int v80; // r10d
  unsigned int v81; // r15d
  char v82; // r11
  char v83; // r10
  int v84; // r15d
  unsigned int v85; // r14d
  char v86; // r10
  char v87; // r15
  int v88; // r10d
  int v89; // r15d
  unsigned int v90; // r14d
  char v91; // r11
  char v92; // r10
  unsigned int v93; // r14d
  char v94; // r10
  char v95; // r15
  int v96; // r11d
  int v97; // r15d
  unsigned int v98; // r14d
  char v99; // r10
  char v100; // r15
  int v101; // r15d
  int v102; // r11d
  char v103; // r10
  unsigned int v104; // r14d
  char v105; // r15
  int v106; // esi
  int v107; // r8d
  char v108; // di
  __m128i v109; // xmm0
  __m128i v110; // xmm0
  __int64 v111; // r9
  char *v112; // rdx
  int v113; // edi
  int v114; // r8d
  int v115; // edi
  int v116; // r8d
  int v117; // edi
  int v118; // r8d
  int v119; // edi
  int v120; // edx
  int v121; // edi
  char v122; // al
  char *v123; // r10
  __int64 v124; // r11
  __int64 j; // r8
  int v126; // edx
  int v127; // edi
  __int64 v128; // rdi
  char *v129; // rdx
  int v130; // r8d
  int v131; // r9d
  int v132; // r8d
  int v133; // r8d
  int v134; // r9d
  int v135; // r9d
  int v136; // r8d
  int v137; // r8d
  int v138; // r9d
  int v139; // r8d
  int v140; // r9d
  int v141; // edx
  int v142; // edi
  char v143; // al
  __int64 v144; // [rsp+8h] [rbp-1C0h] BYREF
  __m128i v145; // [rsp+10h] [rbp-1B8h] BYREF
  __m128i v146; // [rsp+20h] [rbp-1A8h] BYREF
  __m128i v147; // [rsp+30h] [rbp-198h] BYREF
  __m128 v148; // [rsp+40h] [rbp-188h] BYREF
  __int8 *v149; // [rsp+50h] [rbp-178h]
  _QWORD v150[2]; // [rsp+60h] [rbp-168h] BYREF
  __m128i v151; // [rsp+70h] [rbp-158h]
  __int8 *v152; // [rsp+80h] [rbp-148h]
  _QWORD v153[2]; // [rsp+90h] [rbp-138h] BYREF
  __m128i v154; // [rsp+A0h] [rbp-128h]
  __int8 *v155; // [rsp+B0h] [rbp-118h]
  __m128i v156; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v157; // [rsp+D0h] [rbp-F8h] BYREF
  __int8 *v158; // [rsp+E0h] [rbp-E8h]
  __m128i v159; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v160; // [rsp+100h] [rbp-C8h]
  __int8 *v161; // [rsp+110h] [rbp-B8h]
  unsigned __int128 v162; // [rsp+120h] [rbp-A8h] BYREF
  __m128 v163; // [rsp+130h] [rbp-98h] BYREF
  __int8 *v164; // [rsp+140h] [rbp-88h]
  __m128i v165; // [rsp+150h] [rbp-78h] BYREF
  unsigned __int64 v166; // [rsp+160h] [rbp-68h]
  __m128i v167; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v168; // [rsp+180h] [rbp-48h]
  unsigned __int64 v169; // [rsp+188h] [rbp-40h]

  v169 = __readfsqword(0x28u);
  if ( a2 == 25 || a2 == 72 )
  {
    v162 = __PAIR128__(a4, (unsigned __int64)a3);
    if ( !(unsigned __int8)boost::beast::http::validate_list<boost::beast::http::detail::opt_token_list_policy>() )
    {
      boost::beast::http::make_error_code();
      v18 = v166;
      v167 = _mm_load_si128(&v165);
      if ( v166 > 1 )
        v18 = (unsigned __int64)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::loc_bb_
            | v166 & 1;
      goto LABEL_32;
    }
    v9 = &a3->m128i_u8[a4];
    for ( i = (__m128i *)a3; ; i = (__m128i *)((char *)i + 1) )
    {
      if ( i == (__m128i *)v9 )
      {
LABEL_13:
        v13 = 0;
        v12 = nullptr;
        v14 = nullptr;
        goto LABEL_14;
      }
      while ( 1 )
      {
        v11 = i->m128i_i8[0];
        v12 = (unsigned __int8 *)i;
        if ( i->m128i_i8[0] != 32 && v11 != 9 )
          break;
        i = (__m128i *)((char *)i + 1);
        if ( v9 == (unsigned __int8 *)i )
          goto LABEL_13;
      }
      if ( boost::beast::http::detail::is_token_char(char)::tab[v11] )
        break;
      if ( v11 != 44 )
        goto LABEL_13;
    }
    v14 = (unsigned __int8 *)i;
    do
      ++v14;
    while ( v14 != v9 && boost::beast::http::detail::is_token_char(char)::tab[*v14] );
    v13 = v14 - (unsigned __int8 *)i;
LABEL_14:
    if ( !v14 )
    {
LABEL_28:
      a5[1].m128i_i64[0] = 0;
      *a5 = 0;
      return v169 - __readfsqword(0x28u);
    }
LABEL_15:
    if ( v13 == 5 )
    {
      if ( *v12 == 99 )
      {
        if ( v12[1] == 108 )
        {
          if ( v12[2] == 111 )
          {
            if ( v12[3] == 115 )
            {
              if ( v12[4] == 101 )
              {
LABEL_21:
                *(_DWORD *)(a1 + 68) |= 0x80u;
                goto LABEL_22;
              }
              v12 += 4;
              v111 = 0;
              v112 = "e";
            }
            else
            {
              v12 += 3;
              v111 = 1;
              v112 = "se";
            }
          }
          else
          {
            v12 += 2;
            v111 = 2;
            v112 = "ose";
          }
        }
        else
        {
          ++v12;
          v111 = 3;
          v112 = "lose";
        }
      }
      else
      {
        v111 = 4;
        v112 = "close";
      }
      v113 = (char)*v12;
      if ( (unsigned int)(v113 - 65) < 0x1A )
        LOBYTE(v113) = v113 + 32;
      if ( (_BYTE)v113 == *v112 )
      {
        if ( !v111 )
          goto LABEL_21;
        v114 = v112[1];
        if ( (unsigned int)(v114 - 65) < 0x1A )
          LOBYTE(v114) = v114 + 32;
        v115 = (char)v12[1];
        if ( (unsigned int)(v115 - 65) < 0x1A )
          LOBYTE(v115) = v115 + 32;
        if ( (_BYTE)v114 == (_BYTE)v115 )
        {
          if ( v111 == 1 )
            goto LABEL_21;
          v116 = v112[2];
          if ( (unsigned int)(v116 - 65) < 0x1A )
            LOBYTE(v116) = v116 + 32;
          v117 = (char)v12[2];
          if ( (unsigned int)(v117 - 65) < 0x1A )
            LOBYTE(v117) = v117 + 32;
          if ( (_BYTE)v116 == (_BYTE)v117 )
          {
            if ( v111 == 2 )
              goto LABEL_21;
            v118 = v112[3];
            if ( (unsigned int)(v118 - 65) < 0x1A )
              LOBYTE(v118) = v118 + 32;
            v119 = (char)v12[3];
            if ( (unsigned int)(v119 - 65) < 0x1A )
              LOBYTE(v119) = v119 + 32;
            if ( (_BYTE)v118 == (_BYTE)v119 )
            {
              if ( v111 == 3 )
                goto LABEL_21;
              v120 = v112[4];
              v121 = (char)v12[4];
              if ( (unsigned int)(v120 - 65) < 0x1A )
                LOBYTE(v120) = v120 + 32;
              v122 = v12[4];
              if ( (unsigned int)(v121 - 65) < 0x1A )
                v122 = v121 + 32;
              if ( v122 == (_BYTE)v120 )
                goto LABEL_21;
            }
          }
        }
      }
      goto LABEL_22;
    }
    if ( v13 == 10 )
    {
      if ( *v12 == 107 )
      {
        if ( v12[1] == 101 )
        {
          if ( v12[2] == 101 )
          {
            if ( v12[3] == 112 )
            {
              if ( v12[4] == 45 )
              {
                if ( v12[5] == 97 )
                {
                  if ( v12[6] == 108 )
                  {
                    if ( v12[7] == 105 )
                    {
                      if ( v12[8] == 118 )
                      {
                        if ( v12[9] == 101 )
                        {
LABEL_50:
                          *(_DWORD *)(a1 + 68) |= 0x200u;
                          goto LABEL_22;
                        }
                        v12 += 9;
                        v123 = "e";
                        v124 = 0;
                      }
                      else
                      {
                        v12 += 8;
                        v123 = "ve";
                        v124 = 1;
                      }
                    }
                    else
                    {
                      v12 += 7;
                      v123 = "ive";
                      v124 = 2;
                    }
                  }
                  else
                  {
                    v12 += 6;
                    v123 = "live";
                    v124 = 3;
                  }
                }
                else
                {
                  v12 += 5;
                  v123 = "alive";
                  v124 = 4;
                }
              }
              else
              {
                v12 += 4;
                v123 = "-alive";
                v124 = 5;
              }
            }
            else
            {
              v12 += 3;
              v123 = "p-alive";
              v124 = 6;
            }
          }
          else
          {
            v12 += 2;
            v123 = "ep-alive";
            v124 = 7;
          }
        }
        else
        {
          ++v12;
          v123 = "eep-alive";
          v124 = 8;
        }
      }
      else
      {
        v123 = "keep-alive";
        v124 = 9;
      }
      for ( j = 0; ; ++j )
      {
        v126 = v123[j];
        if ( (unsigned int)(v126 - 65) < 0x1A )
          LOBYTE(v126) = v126 + 32;
        v127 = (char)v12[j];
        if ( (unsigned int)(v127 - 65) < 0x1A )
          LOBYTE(v127) = v127 + 32;
        if ( (_BYTE)v127 != (_BYTE)v126 )
          break;
        if ( v124 == j )
          goto LABEL_50;
      }
      goto LABEL_22;
    }
    if ( v13 != 7 )
    {
LABEL_22:
      v15 = a3 != (const __m128i *)v14;
      while ( v9 != v14 )
      {
        v12 = v14;
        while ( 1 )
        {
          v16 = *v12;
          if ( *v12 != 32 && v16 != 9 )
            break;
          if ( v9 == ++v12 )
            goto LABEL_28;
        }
        if ( boost::beast::http::detail::is_token_char(char)::tab[v16] )
        {
          if ( v15 )
            goto LABEL_28;
          v14 = v12;
          do
          {
            if ( v9 == ++v14 )
            {
              v13 = v9 - v12;
              goto LABEL_15;
            }
          }
          while ( boost::beast::http::detail::is_token_char(char)::tab[*v14] );
          v13 = v14 - v12;
          goto LABEL_15;
        }
        if ( v16 != 44 )
          goto LABEL_28;
        v14 = v12 + 1;
        v15 = 0;
      }
      goto LABEL_28;
    }
    if ( *v12 == 117 )
    {
      if ( v12[1] == 112 )
      {
        if ( v12[2] == 103 )
        {
          if ( v12[3] == 114 )
          {
            if ( v12[4] == 97 )
            {
              if ( v12[5] == 100 )
              {
                if ( v12[6] == 101 )
                  goto LABEL_94;
                v12 += 6;
                v128 = 0;
                v129 = "e";
              }
              else
              {
                v12 += 5;
                v128 = 1;
                v129 = "de";
              }
            }
            else
            {
              v12 += 4;
              v128 = 2;
              v129 = "ade";
            }
          }
          else
          {
            v12 += 3;
            v128 = 3;
            v129 = "rade";
          }
        }
        else
        {
          v12 += 2;
          v128 = 4;
          v129 = "grade";
        }
      }
      else
      {
        ++v12;
        v128 = 5;
        v129 = "pgrade";
      }
    }
    else
    {
      v128 = 6;
      v129 = "upgrade";
    }
    v130 = (char)*v12;
    if ( (unsigned int)(v130 - 65) < 0x1A )
      LOBYTE(v130) = v130 + 32;
    if ( (_BYTE)v130 != *v129 )
      goto LABEL_22;
    if ( v128 )
    {
      v131 = v129[1];
      if ( (unsigned int)(v131 - 65) < 0x1A )
        LOBYTE(v131) = v131 + 32;
      v132 = (char)v12[1];
      if ( (unsigned int)(v132 - 65) < 0x1A )
        LOBYTE(v132) = v132 + 32;
      if ( (_BYTE)v131 != (_BYTE)v132 )
        goto LABEL_22;
      if ( v128 != 1 )
      {
        v133 = v129[2];
        if ( (unsigned int)(v133 - 65) < 0x1A )
          LOBYTE(v133) = v133 + 32;
        v134 = (char)v12[2];
        if ( (unsigned int)(v134 - 65) < 0x1A )
          LOBYTE(v134) = v134 + 32;
        if ( (_BYTE)v134 != (_BYTE)v133 )
          goto LABEL_22;
        if ( v128 != 2 )
        {
          v135 = v129[3];
          if ( (unsigned int)(v135 - 65) < 0x1A )
            LOBYTE(v135) = v135 + 32;
          v136 = (char)v12[3];
          if ( (unsigned int)(v136 - 65) < 0x1A )
            LOBYTE(v136) = v136 + 32;
          if ( (_BYTE)v135 != (_BYTE)v136 )
            goto LABEL_22;
          if ( v128 != 3 )
          {
            v137 = v129[4];
            if ( (unsigned int)(v137 - 65) < 0x1A )
              LOBYTE(v137) = v137 + 32;
            v138 = (char)v12[4];
            if ( (unsigned int)(v138 - 65) < 0x1A )
              LOBYTE(v138) = v138 + 32;
            if ( (_BYTE)v138 != (_BYTE)v137 )
              goto LABEL_22;
            if ( v128 != 4 )
            {
              v139 = v129[5];
              if ( (unsigned int)(v139 - 65) < 0x1A )
                LOBYTE(v139) = v139 + 32;
              v140 = (char)v12[5];
              if ( (unsigned int)(v140 - 65) < 0x1A )
                LOBYTE(v140) = v140 + 32;
              if ( (_BYTE)v140 != (_BYTE)v139 )
                goto LABEL_22;
              if ( v128 != 5 )
              {
                v141 = v129[6];
                v142 = (char)v12[6];
                if ( (unsigned int)(v141 - 65) < 0x1A )
                  LOBYTE(v141) = v141 + 32;
                v143 = v12[6];
                if ( (unsigned int)(v142 - 65) < 0x1A )
                  v143 = v142 + 32;
                if ( v143 != (_BYTE)v141 )
                  goto LABEL_22;
              }
            }
          }
        }
      }
    }
LABEL_94:
    *(_DWORD *)(a1 + 68) |= 0x100u;
    goto LABEL_22;
  }
  if ( a2 == 31 )
  {
    LODWORD(v144) = *(_DWORD *)(a1 + 68);
    if ( (v144 & 0x800) != 0 )
    {
LABEL_85:
      boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::{lambda(void)#1}::operator()(a5);
      return v169 - __readfsqword(0x28u);
    }
    v20 = (const __m128i *)((char *)a3 + a4);
    if ( a3 == (const __m128i *)&a3->m128i_i8[a4] )
    {
      v44 = 1;
      goto LABEL_73;
    }
    v21 = a3;
    if ( (unsigned __int64)(a4 - 1) <= 0xE )
    {
      v43 = 0;
    }
    else
    {
      v22 = 0;
      v23 = (const __m128i *)((char *)a3 + (a4 & 0xFFFFFFFFFFFFFFF0LL));
      v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2C2C2C2Cu), 0);
      do
      {
        v25 = _mm_loadu_si128(v21++);
        v26 = _mm_cmpeq_epi8(v25, v24);
        v27 = _mm_cmpgt_epi8((__m128i)0LL, v26);
        v28 = _mm_unpacklo_epi8(v26, v27);
        v29 = _mm_unpackhi_epi8(v26, v27);
        v30 = _mm_srai_epi16(v28, 0xFu);
        v31 = _mm_srai_epi16(v29, 0xFu);
        v32 = _mm_unpacklo_epi16(v28, v30);
        v33 = _mm_unpackhi_epi16(v28, v30);
        v34 = _mm_unpacklo_epi16(v29, v31);
        v35 = _mm_unpackhi_epi16(v29, v31);
        v36 = _mm_srai_epi32(v32, 0x1Fu);
        v37 = _mm_sub_epi64(_mm_sub_epi64(v22, _mm_unpacklo_epi32(v32, v36)), _mm_unpackhi_epi32(v32, v36));
        v38 = _mm_srai_epi32(v33, 0x1Fu);
        v39 = _mm_sub_epi64(_mm_sub_epi64(v37, _mm_unpacklo_epi32(v33, v38)), _mm_unpackhi_epi32(v33, v38));
        v40 = _mm_srai_epi32(v34, 0x1Fu);
        v41 = _mm_sub_epi64(_mm_sub_epi64(v39, _mm_unpacklo_epi32(v34, v40)), _mm_unpackhi_epi32(v34, v40));
        v42 = _mm_srai_epi32(v35, 0x1Fu);
        v22 = _mm_sub_epi64(_mm_sub_epi64(v41, _mm_unpacklo_epi32(v35, v42)), _mm_unpackhi_epi32(v35, v42));
      }
      while ( v21 != v23 );
      v43 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
      if ( a4 == (a4 & 0xFFFFFFFFFFFFFFF0LL) )
      {
LABEL_72:
        v44 = v43 + 1;
LABEL_73:
        v159.m128i_i64[1] = a4;
        v159.m128i_i64[0] = (__int64)a3;
        *(_QWORD *)&v162 = &v159;
        *((_QWORD *)&v162 + 1) = a3;
        v163 = 0u;
        LOBYTE(v164) = 0;
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
        if ( *((_QWORD *)&v162 + 1)
          && (unsigned __int8)boost::beast::http::validate_list<boost::beast::http::detail::opt_token_list_policy>() )
        {
          if ( (v144 & 0x400) != 0 )
          {
            v45 = *(_QWORD *)(a1 + 32);
            v46 = 1;
          }
          else
          {
            v45 = 0;
            v46 = 0;
          }
          v145.m128i_i8[0] = v46;
          v144 = v45;
          *(_QWORD *)&v162 = &v159;
          *((_QWORD *)&v162 + 1) = a3;
          v163 = 0u;
          LOBYTE(v164) = 0;
          boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
          if ( *((_QWORD *)&v162 + 1) )
          {
            v47 = v144;
            v48 = v145.m128i_i8[0];
            v49 = v44;
LABEL_79:
            v50 = (_BYTE *)v163.m128_u64[0];
            if ( v163.m128_u64[0] + v163.m128_u64[1] != v163.m128_u64[0] )
            {
              v51 = 0;
              while ( (unsigned __int8)(*v50 - 48) <= 9u )
              {
                if ( v51 > 0x1999999999999999LL )
                  break;
                v52 = (char)*v50 - 48;
                v53 = v52 + 10 * v51;
                if ( __CFADD__(v52, 10 * v51) )
                  break;
                ++v50;
                v51 = v52 + 10 * v51;
                if ( (_BYTE *)(v163.m128_u64[0] + v163.m128_u64[1]) == v50 )
                {
                  if ( v48 && v53 != v47 )
                  {
                    boost::beast::http::make_error_code();
                    v18 = v166;
                    v167 = _mm_load_si128(&v165);
                    if ( v166 > 1 )
                      v18 = (unsigned __int64)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::{lambda(void)#2}::operator() const(void)::loc_bb_
                          | v166 & 1;
                    goto LABEL_32;
                  }
                  v144 = v53;
                  --v49;
                  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
                  v48 = 1;
                  if ( *((_QWORD *)&v162 + 1) )
                  {
                    v47 = v144;
                    goto LABEL_79;
                  }
                  v109 = _mm_loadl_epi64((const __m128i *)&v144);
                  v110 = _mm_unpacklo_epi64(v109, v109);
                  if ( !v49 )
                  {
                    a5[1].m128i_i64[0] = 0;
                    *a5 = 0;
                    *(__m128i *)(a1 + 24) = v110;
                    *(_DWORD *)(a1 + 68) |= 0x400u;
                    return v169 - __readfsqword(0x28u);
                  }
                  goto LABEL_85;
                }
              }
            }
          }
        }
        goto LABEL_85;
      }
    }
    v43 += v21->m128i_i8[0] == 44;
    if ( v20 != (const __m128i *)&v21->m128i_i8[1] )
    {
      v43 += v21->m128i_i8[1] == 44;
      if ( v20 != (const __m128i *)&v21->m128i_i16[1] )
      {
        v43 += v21->m128i_i8[2] == 44;
        if ( v20 != (const __m128i *)((char *)v21->m128i_i32 + 3) )
        {
          v43 += v21->m128i_i8[3] == 44;
          if ( v20 != (const __m128i *)((char *)v21->m128i_i64 + 4) )
          {
            v43 += v21->m128i_i8[4] == 44;
            if ( v20 != (const __m128i *)&v21->m128i_u8[5] )
            {
              v43 += v21->m128i_i8[5] == 44;
              if ( v20 != (const __m128i *)&v21->m128i_u16[3] )
              {
                v43 += v21->m128i_i8[6] == 44;
                if ( v20 != (const __m128i *)((char *)&v21->m128i_u32[1] + 3) )
                {
                  v43 += v21->m128i_i8[7] == 44;
                  if ( v20 != (const __m128i *)&v21->m128i_u64[1] )
                  {
                    v43 += v21->m128i_i8[8] == 44;
                    if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 1) )
                    {
                      v43 += v21->m128i_i8[9] == 44;
                      if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 2) )
                      {
                        v43 += v21->m128i_i8[10] == 44;
                        if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 3) )
                        {
                          v43 += v21->m128i_i8[11] == 44;
                          if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 4) )
                          {
                            v43 += v21->m128i_i8[12] == 44;
                            if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 5) )
                            {
                              v43 += v21->m128i_i8[13] == 44;
                              if ( v20 != (const __m128i *)((char *)&v21->m128i_u64[1] + 6) )
                                v43 += v21->m128i_i8[14] == 44;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_72;
  }
  if ( a2 != 107 )
  {
    a5[1].m128i_i64[0] = 0;
    *a5 = 0;
    if ( a2 == 108 )
      *(_DWORD *)(a1 + 68) |= 0x1000u;
    return v169 - __readfsqword(0x28u);
  }
  v54 = *(_DWORD *)(a1 + 68);
  if ( (v54 & 0x800) != 0 )
  {
    boost::beast::http::make_error_code();
    v18 = v166;
    v167 = _mm_load_si128(&v165);
    if ( v166 > 1 )
      v18 = (unsigned __int64)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::loc_bb_
          | v166 & 1;
    goto LABEL_32;
  }
  if ( (v54 & 0x400) != 0 )
  {
    boost::beast::http::make_error_code();
    v18 = v166;
    v167 = _mm_load_si128(&v165);
    if ( v166 > 1 )
      v18 = (unsigned __int64)boost::beast::http::basic_parser<true>::do_field(boost::beast::http::field,boost::core::basic_string_view<char>,boost::system::error_code &)::loc_bb_
          | v166 & 1;
LABEL_32:
    v19 = _mm_load_si128(&v167);
    v168 = v18;
    a5[1].m128i_i64[0] = v18;
    *a5 = v19;
    return v169 - __readfsqword(0x28u);
  }
  a5[1].m128i_i64[0] = 0;
  *a5 = 0;
  v55 = &a3->m128i_i8[a4];
  v146 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3);
  v155 = &a3->m128i_i8[a4];
  v145 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)a3->m128i_u64 + a4),
           (__m128i)((unsigned __int64)a3->m128i_u64 + a4));
  v154 = v145;
  v153[0] = 0;
  v153[1] = 0;
  boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)v153);
  v56 = _mm_load_si128(&v146);
  v158 = v55;
  v144 = v154.m128i_i64[1];
  v57 = v154.m128i_i64[0];
  v157 = v56;
  v156 = 0u;
  boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)&v156);
  v59 = v156;
  for ( k = (__m128)_mm_load_si128(&v157); ; k = (__m128)_mm_load_si128((const __m128i *)&v163) )
  {
    v61 = _mm_movehl_ps(v58, k).m128_u64[0];
    if ( k.m128_u64[0] == v57 && v61 == v144 )
      break;
    if ( v59.m128i_i64[1] == 7 )
    {
      if ( *(_BYTE *)v59.m128i_i64[0] == 99 )
      {
        if ( *(_BYTE *)(v59.m128i_i64[0] + 1) == 104 )
        {
          if ( *(_BYTE *)(v59.m128i_i64[0] + 2) == 117 )
          {
            if ( *(_BYTE *)(v59.m128i_i64[0] + 3) == 110 )
            {
              if ( *(_BYTE *)(v59.m128i_i64[0] + 4) == 107 )
              {
                if ( *(_BYTE *)(v59.m128i_i64[0] + 5) == 101 )
                {
                  if ( *(_BYTE *)(v59.m128i_i64[0] + 6) == 100 )
                    break;
                  v66 = (char *)(v59.m128i_i64[0] + 6);
                  v67 = 0;
                  v68 = "d";
                }
                else
                {
                  v66 = (char *)(v59.m128i_i64[0] + 5);
                  v67 = 1;
                  v68 = "ed";
                }
              }
              else
              {
                v66 = (char *)(v59.m128i_i64[0] + 4);
                v67 = 2;
                v68 = "ked";
              }
            }
            else
            {
              v66 = (char *)(v59.m128i_i64[0] + 3);
              v67 = 3;
              v68 = "nked";
            }
          }
          else
          {
            v66 = (char *)(v59.m128i_i64[0] + 2);
            v67 = 4;
            v68 = "unked";
          }
        }
        else
        {
          v66 = (char *)(v59.m128i_i64[0] + 1);
          v67 = 5;
          v68 = "hunked";
        }
      }
      else
      {
        v66 = (char *)v59.m128i_i64[0];
        v67 = 6;
        v68 = "chunked";
      }
      v69 = *v66;
      v70 = v69 - 65;
      v71 = *v66;
      v72 = v69 + 32;
      if ( v70 < 0x1A )
        v71 = v72;
      if ( *v68 == v71 )
      {
        if ( !v67 )
          break;
        v73 = v68[1];
        v74 = v73 - 65;
        v75 = v68[1];
        v76 = v73 + 32;
        v77 = v74 < 0x1A;
        v78 = v66[1];
        if ( v77 )
          v75 = v76;
        v79 = v66[1];
        if ( (unsigned int)(v78 - 65) < 0x1A )
          v79 = v78 + 32;
        if ( v75 == v79 )
        {
          if ( v67 == 1 )
            break;
          v80 = v68[2];
          v81 = v80 - 65;
          v82 = v68[2];
          v83 = v80 + 32;
          v77 = v81 < 0x1A;
          v84 = v66[2];
          if ( v77 )
            v82 = v83;
          v85 = v84 - 65;
          v86 = v66[2];
          v87 = v84 + 32;
          if ( v85 < 0x1A )
            v86 = v87;
          if ( v82 == v86 )
          {
            if ( v67 == 2 )
              break;
            v88 = v68[3];
            v89 = v66[3];
            v90 = v88 - 65;
            v91 = v68[3];
            v92 = v88 + 32;
            v77 = v90 < 0x1A;
            v93 = v89 - 65;
            if ( v77 )
              v91 = v92;
            v94 = v66[3];
            v95 = v89 + 32;
            if ( v93 < 0x1A )
              v94 = v95;
            if ( v91 == v94 )
            {
              if ( v67 == 3 )
                break;
              v96 = v68[4];
              if ( (unsigned int)(v96 - 65) < 0x1A )
                LOBYTE(v96) = v96 + 32;
              v97 = v66[4];
              v98 = v97 - 65;
              v99 = v66[4];
              v100 = v97 + 32;
              if ( v98 < 0x1A )
                v99 = v100;
              if ( (_BYTE)v96 == v99 )
              {
                if ( v67 == 4 )
                  break;
                v101 = v66[5];
                v102 = v68[5];
                v103 = v66[5];
                if ( (unsigned int)(v102 - 65) < 0x1A )
                  LOBYTE(v102) = v102 + 32;
                v104 = v101 - 65;
                v105 = v101 + 32;
                if ( v104 < 0x1A )
                  v103 = v105;
                if ( (_BYTE)v102 == v103 )
                {
                  if ( v67 == 5 )
                    break;
                  v106 = v68[6];
                  v107 = v66[6];
                  if ( (unsigned int)(v106 - 65) < 0x1A )
                    LOBYTE(v106) = v106 + 32;
                  v108 = v66[6];
                  if ( (unsigned int)(v107 - 65) < 0x1A )
                    v108 = v107 + 32;
                  if ( v108 == (_BYTE)v106 )
                    break;
                }
              }
            }
          }
        }
      }
    }
    v162 = (unsigned __int128)v59;
    v163 = k;
    v164 = v55;
    boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)&v162);
    v59 = (__m128i)v162;
  }
  v62 = _mm_load_si128(&v145);
  v146.m128i_i64[0] = v61;
  v144 = k.m128_u64[0];
  v147 = v59;
  v149 = v55;
  v159 = 0u;
  v161 = v55;
  v148 = k;
  v160 = v62;
  boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)&v159);
  if ( __PAIR128__(v146.m128i_u64[0], k.m128_u64[0]) != *(_OWORD *)&v160 )
  {
    v63 = _mm_load_si128(&v145);
    v152 = v55;
    v150[0] = 0;
    v150[1] = 0;
    v151 = v63;
    boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)v150);
    v64 = v151;
    v159 = _mm_load_si128(&v147);
    si128 = _mm_load_si128((const __m128i *)&v148);
    v161 = v149;
    v160 = si128;
    boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)&v159);
    if ( *(_OWORD *)&v64 == *(_OWORD *)&v160 )
    {
      *(_DWORD *)(a1 + 68) |= 0x800u;
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  return v169 - __readfsqword(0x28u);
}

