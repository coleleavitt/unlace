__int64 __fastcall sub_3EE5C0(__int64 a1, __int64 a2, signed int a3, signed int a4, int a5)
{
  __m128i si128; // xmm1
  __m128i v7; // xmm0
  __m128i *v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // r12
  int v13; // eax
  char v14; // al
  char *v15; // r13
  char *v16; // r14
  char *i; // r12
  size_t v18; // r8
  size_t v19; // rax
  __int64 v20; // r14
  unsigned int v21; // r15d
  size_t v22; // r8
  size_t v23; // rdx
  __int64 v24; // r14
  char *v25; // rdi
  __int64 v26; // r10
  unsigned int j; // eax
  __int64 v28; // rdx
  char *v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int v32; // r12d
  char *v33; // rbx
  __int64 v34; // r14
  _WORD *v36; // rsi
  _BYTE *v37; // rsi
  __int64 v38; // rsi
  int v39; // r8d
  _BYTE *v40; // rax
  char *v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rcx
  _QWORD *v46; // r12
  int v47; // edx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  __int64 v52; // r15
  size_t v53; // r9
  size_t v54; // rdx
  __m128i v55; // xmm0
  __int64 v56; // r13
  size_t v57; // rax
  size_t v58; // r8
  size_t v59; // r15
  size_t v60; // rdx
  _WORD *v61; // rsi
  _BYTE *v62; // rsi
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rax
  __int64 *v66; // r12
  __m128i v67; // xmm1
  __m128i v68; // xmm1
  _DWORD *v69; // rsi
  _DWORD *v70; // rsi
  _BYTE *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rax
  __m128i v74; // xmm0
  _BYTE *v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rsi
  _BYTE *v79; // rsi
  _WORD *v80; // rsi
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  unsigned __int64 v84; // r13
  __int64 v85; // r12
  char *v86; // r14
  _BYTE *v87; // rsi
  __int64 v88; // r11
  unsigned int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  _DWORD *v93; // rsi
  size_t v94; // [rsp+8h] [rbp-3F8h]
  size_t v95; // [rsp+10h] [rbp-3F0h]
  size_t v96; // [rsp+18h] [rbp-3E8h]
  size_t v97; // [rsp+18h] [rbp-3E8h]
  char *src; // [rsp+28h] [rbp-3D8h]
  void *srca; // [rsp+28h] [rbp-3D8h]
  int v103; // [rsp+44h] [rbp-3BCh]
  char *v104[2]; // [rsp+50h] [rbp-3B0h] BYREF
  _BYTE *v105; // [rsp+60h] [rbp-3A0h]
  __int64 v106; // [rsp+68h] [rbp-398h]
  __int64 v107; // [rsp+70h] [rbp-390h] BYREF
  __int64 v108; // [rsp+78h] [rbp-388h]
  __int64 v109; // [rsp+80h] [rbp-380h]
  __int64 v110; // [rsp+88h] [rbp-378h]
  char *s; // [rsp+90h] [rbp-370h]
  __m128i v112; // [rsp+98h] [rbp-368h]
  __int64 v113[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 *v114; // [rsp+C0h] [rbp-340h] BYREF
  __m128i v115; // [rsp+C8h] [rbp-338h]
  __int64 v116; // [rsp+E0h] [rbp-320h]
  __int64 v117; // [rsp+E8h] [rbp-318h]
  __int64 *v118; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v119; // [rsp+F8h] [rbp-308h]
  _BYTE v120[24]; // [rsp+110h] [rbp-2F0h] BYREF
  __m128i v121; // [rsp+128h] [rbp-2D8h] BYREF
  _BYTE v122[4]; // [rsp+140h] [rbp-2C0h] BYREF
  unsigned __int64 v123; // [rsp+144h] [rbp-2BCh]
  __int64 v124; // [rsp+158h] [rbp-2A8h]
  _BYTE *v125; // [rsp+160h] [rbp-2A0h]
  __int64 v126; // [rsp+168h] [rbp-298h]
  unsigned __int64 v127; // [rsp+170h] [rbp-290h]
  char v128[4]; // [rsp+190h] [rbp-270h] BYREF
  unsigned __int64 v129; // [rsp+194h] [rbp-26Ch]
  __int64 v130; // [rsp+1A8h] [rbp-258h]
  _BYTE *v131; // [rsp+1B0h] [rbp-250h]
  __int64 v132; // [rsp+1B8h] [rbp-248h]
  unsigned __int64 v133; // [rsp+1C0h] [rbp-240h]
  char v134[4]; // [rsp+1E0h] [rbp-220h] BYREF
  int v135; // [rsp+1E4h] [rbp-21Ch]
  signed int v136; // [rsp+1E8h] [rbp-218h]
  __int64 v137; // [rsp+200h] [rbp-200h]
  __int64 v138; // [rsp+208h] [rbp-1F8h]
  unsigned __int64 v139; // [rsp+210h] [rbp-1F0h]
  char v140[24]; // [rsp+230h] [rbp-1D0h] BYREF
  char v141; // [rsp+370h] [rbp-90h] BYREF
  char v142; // [rsp+3C0h] [rbp-40h] BYREF
  unsigned __int64 v143; // [rsp+3C8h] [rbp-38h]

  v106 = a2;
  v143 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 48) == 506 && *(_QWORD *)(a1 + 72) )
    return 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v7.m128i_i64[0] = 0;
  v8 = (__m128i *)v122;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( &v142 != (char *)v8 );
  v105 = v122;
  v107 = 1;
  v9 = *(const char **)v106;
  v113[0] = 0;
  v113[1] = 0;
  v114 = nullptr;
  v116 = 0;
  v117 = 0;
  v118 = nullptr;
  s = nullptr;
  v115 = 0;
  v119 = 0;
  v112 = 0;
  if ( v9 )
  {
    v10 = strlen(v9);
    v11 = v10 + 1;
    v12 = v10;
    s = (char *)qvector_reserve();
    v112.m128i_i64[0] = v11;
    memmove(s, v9, v12);
    s[v12] = 0;
  }
  v103 = *(unsigned __int16 *)(v106 + 10);
  if ( v103 == 0xFFFF )
    v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
  v13 = *(_DWORD *)(v106 + 12);
  if ( (v13 & 0x20) == 0 )
  {
    if ( !v103 || v103 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) )
      goto LABEL_34;
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(a1 + 52) & 4) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC5u, 0.0);
LABEL_183:
    BUG();
  }
  v14 = *(_BYTE *)(a1 + 56);
  if ( v14 == 112 )
  {
LABEL_47:
    v32 = 0;
    goto LABEL_48;
  }
  if ( v14 == 115 )
  {
    *(_QWORD *)v120 = 9;
    copy_tinfo_t();
    clear_tinfo_t();
    v103 = 4;
    v104[0] = "f";
    goto LABEL_14;
  }
  if ( v14 != 100 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC6u, 0.0);
    goto LABEL_183;
  }
  *(_QWORD *)v120 = 25;
  copy_tinfo_t();
  clear_tinfo_t();
  v103 = 8;
  v104[0] = (char *)&unk_414AAC;
LABEL_14:
  v7.m128i_i64[0] = 0;
  v15 = nullptr;
  memset(v120, 0, sizeof(v120));
  src = (char *)s1;
  if ( v112.m128i_i64[0] )
  {
    src = s;
    v15 = strchr(s, 36);
  }
  v16 = src;
  for ( i = nullptr; v15; v15 = strchr(v15 + 1, 36) )
  {
    v18 = v15 - v16;
    if ( v15 != v16 )
    {
      v52 = *(_QWORD *)&v120[8];
      v53 = v15 - v16;
      if ( *(_QWORD *)&v120[8] )
      {
        v52 = *(_QWORD *)&v120[8] - 1LL;
        v53 = v18 + *(_QWORD *)&v120[8] - 1LL;
      }
      v54 = v53 + 1;
      if ( *(_QWORD *)&v120[16] < v53 + 1 )
      {
        v94 = v53;
        v97 = v53 + 1;
        *(_QWORD *)v120 = qvector_reserve();
        v53 = v94;
        i = *(char **)v120;
        v18 = v15 - v16;
        v54 = v97;
      }
      *(_QWORD *)&v120[8] = v54;
      i[v53] = 0;
      memmove((void *)(v52 + *(_QWORD *)v120), v16, v18);
      i = *(char **)v120;
    }
    v19 = strlen(v104[0]);
    v20 = *(_QWORD *)&v120[8];
    v21 = v19;
    v22 = v19;
    if ( *(_QWORD *)&v120[8] )
    {
      v20 = *(_QWORD *)&v120[8] - 1LL;
      v22 = v19 + *(_QWORD *)&v120[8] - 1LL;
    }
    v23 = v22 + 1;
    if ( *(_QWORD *)&v120[16] < v22 + 1 )
    {
      v95 = v22;
      v96 = v22 + 1;
      *(_QWORD *)v120 = qvector_reserve();
      v22 = v95;
      i = *(char **)v120;
      v23 = v96;
    }
    *(_QWORD *)&v120[8] = v23;
    i[v22] = 0;
    i = *(char **)v120;
    v24 = *(_QWORD *)v120 + v20;
    if ( v21 )
    {
      v25 = v104[0];
      v26 = (__int64)v105;
      for ( j = 0; j < v21; ++j )
      {
        v28 = j;
        *(_BYTE *)(v24 + v28) = v25[v28];
      }
      v105 = (_BYTE *)v26;
      i = *(char **)v120;
    }
    v16 = v15 + 1;
  }
  if ( v16 == src )
  {
    v29 = i;
  }
  else
  {
    if ( *v16 && v16 )
    {
      v56 = *(_QWORD *)&v120[8];
      v57 = strlen(v16);
      v58 = v57;
      v59 = v57;
      if ( *(_QWORD *)&v120[8] )
      {
        v56 = *(_QWORD *)&v120[8] - 1LL;
        v59 = v57 + *(_QWORD *)&v120[8] - 1LL;
      }
      v60 = v59 + 1;
      if ( *(_QWORD *)&v120[16] < v59 + 1 )
      {
        srca = (void *)v57;
        v104[0] = (char *)(v59 + 1);
        *(_QWORD *)v120 = qvector_reserve();
        v58 = (size_t)srca;
        i = *(char **)v120;
        v60 = v59 + 1;
      }
      *(_QWORD *)&v120[8] = v60;
      i[v59] = 0;
      memmove((void *)(v56 + *(_QWORD *)v120), v16, v58);
      i = *(char **)v120;
    }
    v29 = s;
    s = i;
    v7 = _mm_loadu_si128((const __m128i *)&v120[8]);
    *(_QWORD *)v120 = v29;
    *(_QWORD *)&v120[16] = v112.m128i_i64[1];
    v112 = v7;
  }
  if ( v29 )
  {
    *(_QWORD *)&v120[8] = 0;
    qfree();
  }
  v13 = *(_DWORD *)(v106 + 12);
LABEL_34:
  if ( (v13 & 0x40) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL) == a3 )
  {
    v30 = a3;
  }
  else
  {
    if ( (v13 & 0x80u) == 0 )
      goto LABEL_38;
    v30 = a4;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL) != a4 )
      goto LABEL_38;
  }
  sub_1D1F50(a1, 3u, v103, 0, 0x3BEA45E214ADDC55LL, v30, 0);
LABEL_38:
  v31 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v31 > 0x269u )
  {
    if ( (_WORD)v31 == 1723 )
    {
      copy_tinfo_t();
      clear_tinfo_t();
      v122[0] = 1;
      *(_QWORD *)v120 = 36;
      v123 = __PAIR64__(a4, v103);
      copy_tinfo_t();
      clear_tinfo_t();
      sub_11C810((__int64)v128, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), 1, -1, 0);
      *(_QWORD *)v120 = 34;
      copy_tinfo_t();
      clear_tinfo_t();
      sub_11C810((__int64)v134, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 192), 1, -1, 0);
      *(_QWORD *)v120 = 34;
      copy_tinfo_t();
      clear_tinfo_t();
      sub_11C810((__int64)v140, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 232), 1, -1, 0);
      *(_QWORD *)v120 = 34;
      copy_tinfo_t();
      clear_tinfo_t();
    }
    else if ( (unsigned __int16)v31 > 0x6BBu )
    {
      if ( (unsigned __int16)(v31 - 1759) > 4u )
        goto LABEL_113;
LABEL_116:
      copy_tinfo_t();
      clear_tinfo_t();
      v122[0] = 1;
      *(_QWORD *)v120 = 36;
      v123 = __PAIR64__(a4, v103);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    else
    {
      if ( (unsigned __int16)(v31 - 755) > 1u )
        goto LABEL_113;
      copy_tinfo_t();
      clear_tinfo_t();
      v122[0] = 1;
      HIDWORD(v123) = a3;
      LODWORD(v123) = 4;
      *(_QWORD *)v120 = 36;
      copy_tinfo_t();
      clear_tinfo_t();
    }
  }
  else
  {
    if ( (unsigned __int16)v31 > 0x1F1u )
    {
      LOWORD(v31) = v31 - 498;
      switch ( v31 )
      {
        case 0LL:
        case 1LL:
        case 60LL:
        case 61LL:
          copy_tinfo_t();
          clear_tinfo_t();
          v122[0] = 1;
          v123 = __PAIR64__(a4, v103);
          *(_QWORD *)v120 = (v103 != 4) + 36LL;
          copy_tinfo_t();
          clear_tinfo_t();
LABEL_118:
          v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          goto LABEL_74;
        case 8LL:
        case 12LL:
        case 59LL:
          goto LABEL_74;
        case 11LL:
        case 13LL:
          *(_QWORD *)v120 = 36;
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_74;
        case 34LL:
          copy_tinfo_t();
          clear_tinfo_t();
          v122[0] = 1;
          HIDWORD(v123) = a4;
          LODWORD(v123) = 1;
          *(_QWORD *)v120 = 34;
          copy_tinfo_t();
          clear_tinfo_t();
          v80 = v125;
          if ( v127 <= 2 )
          {
            v125 = (_BYTE *)qvector_reserve();
            v80 = v125;
          }
          v126 = 3;
          *v80 = 29544;
          v125[2] = 0;
          if ( a5 != -1 )
          {
            v128[0] = 1;
            HIDWORD(v129) = a5;
            LODWORD(v129) = 1;
            *(_QWORD *)v120 = 34;
            copy_tinfo_t();
            clear_tinfo_t();
            v62 = v131;
            if ( v133 <= 3 )
            {
LABEL_157:
              v131 = (_BYTE *)qvector_reserve();
              v62 = v131;
            }
LABEL_122:
            v132 = 4;
            *(_WORD *)v62 = 25971;
            v62[2] = 108;
            v131[3] = 0;
          }
          goto LABEL_74;
        case 35LL:
          copy_tinfo_t();
          clear_tinfo_t();
          v122[0] = 1;
          HIDWORD(v123) = a4;
          LODWORD(v123) = 1;
          *(_QWORD *)v120 = 34;
          copy_tinfo_t();
          clear_tinfo_t();
          v79 = v125;
          if ( v127 <= 5 )
          {
            v125 = (_BYTE *)qvector_reserve();
            v79 = v125;
          }
          v126 = 6;
          *(_DWORD *)v79 = 1852269938;
          v79[4] = 111;
          v125[5] = 0;
          goto LABEL_74;
        case 41LL:
          v76 = *(_QWORD *)(a1 + 800);
          v122[0] = 1;
          v123 = _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v76 + 112) + 84LL)),
                   _mm_cvtsi32_si128(a3)).m128i_u64[0];
          copy_tinfo_t();
          v77 = v124;
          if ( (_BYTE)v124 )
          {
            LOBYTE(v77) = v124 & 0x3F | 0x80;
            v124 = v77;
          }
          v78 = v125;
          if ( v127 <= 4 )
          {
            v125 = (_BYTE *)qvector_reserve();
            v78 = v125;
          }
          v126 = 5;
          *v78 = 1919181921;
          v125[4] = 0;
          goto LABEL_74;
        case 42LL:
          v122[0] = 1;
          LODWORD(v123) = 1;
          HIDWORD(v123) = a3;
          *(_QWORD *)v120 = 34;
          copy_tinfo_t();
          clear_tinfo_t();
          v71 = v125;
          if ( v127 <= 5 )
          {
            v125 = (_BYTE *)qvector_reserve();
            v71 = v125;
          }
          v126 = 6;
          v72 = 37;
          *(_DWORD *)v71 = 1852269938;
          v71[4] = 111;
          v125[5] = 0;
          v73 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
          v74 = _mm_cvtsi32_si128(*(_DWORD *)(v73 + 80));
          v128[0] = 1;
          v129 = _mm_unpacklo_epi32(v74, _mm_cvtsi32_si128(a4)).m128i_u64[0];
          if ( *(_DWORD *)(v73 + 80) == 4 )
            v72 = 36;
          *(_QWORD *)v120 = v72;
          copy_tinfo_t();
          clear_tinfo_t();
          v75 = v131;
          if ( v133 <= 5 )
          {
            v131 = (_BYTE *)qvector_reserve();
            v75 = v131;
          }
          v132 = 6;
          *(_DWORD *)v75 = 1970037110;
          v75[4] = 101;
          v131[5] = 0;
          goto LABEL_74;
        case 43LL:
        case 119LL:
          goto LABEL_116;
        default:
          goto LABEL_113;
      }
    }
    if ( (unsigned __int16)v31 > 0xB1u )
    {
      if ( (_WORD)v31 != 206 )
        goto LABEL_113;
    }
    else
    {
      if ( (unsigned __int16)v31 > 0x81u )
      {
        LOWORD(v31) = v31 - 130;
        switch ( v31 )
        {
          case 0LL:
            *(_QWORD *)v120 = 36;
            copy_tinfo_t();
            clear_tinfo_t();
            v81 = *(_QWORD *)(a1 + 800);
            v122[0] = 1;
            v82 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v81 + 112) + 84LL));
            v108 = 36;
            v109 = 0;
            v110 = 0;
            v123 = _mm_unpacklo_epi32(v82, _mm_cvtsi32_si128(a4)).m128i_u64[0];
            *(_OWORD *)v120 = 0;
            copy_tinfo_t();
            *(_QWORD *)&v120[16] = 0;
            copy_tinfo_t();
            v121.m128i_i32[0] = 0;
            v121.m128i_i16[2] = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            v83 = v124;
            if ( (_BYTE)v124 )
            {
              LOBYTE(v83) = v124 & 0x3F | 0x80;
              v124 = v83;
            }
            goto LABEL_74;
          case 13LL:
          case 17LL:
            copy_tinfo_t();
            clear_tinfo_t();
            v122[0] = 1;
            v123 = __PAIR64__(a3, v103);
            *(_QWORD *)v120 = (v103 != 4) + 36LL;
            copy_tinfo_t();
            clear_tinfo_t();
            v63 = *(_QWORD *)(a1 + 800);
            v128[0] = 1;
            v64 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v63 + 112) + 84LL));
            v108 = *(_QWORD *)v120;
            v109 = 0;
            v110 = 0;
            v129 = _mm_unpacklo_epi32(v64, _mm_cvtsi32_si128(a4)).m128i_u64[0];
            *(_OWORD *)v120 = 0;
            copy_tinfo_t();
            *(_QWORD *)&v120[16] = 0;
            copy_tinfo_t();
            v121.m128i_i32[0] = 0;
            v121.m128i_i16[2] = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            v65 = v130;
            if ( (_BYTE)v130 )
            {
              LOBYTE(v65) = v130 & 0x3F | 0x80;
              v130 = v65;
            }
            if ( *(_BYTE *)(a1 + 105) == 2 )
            {
              sub_11E920(v113, *(_QWORD *)(a1 + 120), v103);
            }
            else
            {
              memset(v120, 0, sizeof(v120));
              v121 = 0;
              *(_QWORD *)&v120[16] = qvector_reserve();
              *(__m128i *)(*(_QWORD *)&v120[16] + 16 * v121.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_407240);
              sub_606D0(v113, (__int64 *)v120);
              v66 = *(__int64 **)&v120[16];
              *(_QWORD *)&v120[16] = 0;
              v67 = _mm_loadu_si128(&v121);
              v121 = 0;
              if ( v114 )
              {
                *(__m128i *)v104 = v67;
                v115.m128i_i64[0] = 0;
                qfree();
                v68 = _mm_load_si128((const __m128i *)v104);
                v114 = v66;
                v115 = v68;
                if ( *(_QWORD *)&v120[16] )
                {
                  v121.m128i_i64[0] = 0;
                  qfree();
                }
              }
              else
              {
                v114 = v66;
                v115 = v67;
              }
              qfree();
            }
            goto LABEL_118;
          case 22LL:
            goto LABEL_74;
          case 32LL:
          case 47LL:
            v122[0] = 1;
            v123 = __PAIR64__(a4, v103);
            copy_tinfo_t();
            goto LABEL_74;
          default:
            goto LABEL_113;
        }
      }
      if ( (unsigned __int16)v31 <= 0x50u )
      {
        if ( (unsigned __int16)v31 > 0x30u )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case '1':
            case '5':
              copy_tinfo_t();
              clear_tinfo_t();
              v122[0] = 1;
              HIDWORD(v123) = a4;
              LODWORD(v123) = 1;
              *(_QWORD *)v120 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              v61 = v125;
              if ( v127 <= 2 )
              {
                v125 = (_BYTE *)qvector_reserve();
                v61 = v125;
              }
              v126 = 3;
              *v61 = 28274;
              v125[2] = 0;
              v128[0] = 1;
              HIDWORD(v129) = a5;
              LODWORD(v129) = 1;
              *(_QWORD *)v120 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              v62 = v131;
              if ( v133 > 3 )
                goto LABEL_122;
              goto LABEL_157;
            case '3':
            case '8':
              v122[0] = 1;
              LODWORD(v123) = 1;
              HIDWORD(v123) = a4;
              *(_QWORD *)v120 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              v36 = v125;
              if ( v127 <= 2 )
              {
                v125 = (_BYTE *)qvector_reserve();
                v36 = v125;
              }
              v126 = 3;
              *v36 = 28274;
              v125[2] = 0;
              v128[0] = 1;
              HIDWORD(v129) = a5;
              LODWORD(v129) = 1;
              *(_QWORD *)v120 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              v37 = v131;
              if ( v133 <= 3 )
              {
                v131 = (_BYTE *)qvector_reserve();
                v37 = v131;
              }
              v132 = 4;
              *(_WORD *)v37 = 25971;
              v37[2] = 108;
              v131[3] = 0;
              v134[0] = 1;
              v136 = a3;
              v135 = v103;
              *(_QWORD *)v120 = (v103 != 4) + 36LL;
              copy_tinfo_t();
              clear_tinfo_t();
              v38 = v137;
              if ( v139 <= 5 )
              {
                v137 = qvector_reserve();
                v38 = v137;
              }
              v138 = 6;
              *(_DWORD *)v38 = 1970037110;
              *(_BYTE *)(v38 + 4) = 101;
              *(_BYTE *)(v137 + 5) = 0;
              goto LABEL_74;
            case 'P':
              v122[0] = 1;
              LODWORD(v123) = 2;
              HIDWORD(v123) = a3;
              *(_QWORD *)v120 = 35;
              copy_tinfo_t();
              clear_tinfo_t();
              v69 = v125;
              if ( v127 <= 4 )
              {
                v125 = (_BYTE *)qvector_reserve();
                v69 = v125;
              }
              v126 = 5;
              *v69 = 1701080931;
              v125[4] = 0;
              if ( a4 != -1 )
              {
                v128[0] = 1;
                HIDWORD(v129) = a4;
                LODWORD(v129) = 2;
                *(_QWORD *)v120 = 35;
                copy_tinfo_t();
                clear_tinfo_t();
                v70 = v131;
                if ( v133 <= 7 )
                {
                  v131 = (_BYTE *)qvector_reserve();
                  v70 = v131;
                }
                v132 = 8;
                *v70 = 1667396979;
                *(_DWORD *)((char *)v70 + 3) = 1701080931;
                v131[7] = 0;
              }
              goto LABEL_74;
            default:
              goto LABEL_113;
          }
        }
        goto LABEL_113;
      }
      if ( (_WORD)v31 != 119 )
      {
LABEL_113:
        if ( !under_debugger )
          sub_37E160(0xCCB2u, *(double *)v7.m128i_i64);
        goto LABEL_183;
      }
    }
    v122[0] = 1;
    LODWORD(v123) = 1;
    HIDWORD(v123) = a3;
    *(_QWORD *)v120 = 34;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *(_WORD *)(a1 + 48) == 119 )
    {
      v84 = 3;
      v85 = 2;
      v86 = "op";
    }
    else
    {
      v84 = 5;
      v85 = 4;
      v86 = "hint";
    }
    v87 = v125;
    if ( v127 < v84 )
    {
      v125 = (_BYTE *)qvector_reserve();
      v87 = v125;
    }
    v126 = v84;
    v88 = (__int64)v105;
    v89 = 0;
    do
    {
      v90 = v89++;
      v87[v90] = v86[v90];
    }
    while ( v89 < (unsigned int)v85 );
    v105 = (_BYTE *)v88;
    v125[v85] = 0;
    v91 = *(_QWORD *)(a1 + 800);
    v128[0] = 1;
    v129 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v91 + 112) + 84LL)), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    copy_tinfo_t();
    v92 = v130;
    if ( (_BYTE)v130 )
    {
      LOBYTE(v92) = v130 & 0x3F | 0x80;
      v130 = v92;
    }
    v93 = v131;
    if ( v133 <= 4 )
    {
      v131 = (_BYTE *)qvector_reserve();
      v93 = v131;
    }
    v132 = 5;
    *v93 = 1919181921;
    v131[4] = 0;
  }
LABEL_74:
  v39 = 0;
  v40 = v105;
  do
  {
    if ( !*v40 )
      break;
    ++v39;
    v40 += 80;
  }
  while ( v39 != 8 );
  v41 = (char *)s1;
  v42 = *(_QWORD *)(a1 + 8);
  LOBYTE(v104[0]) = *(_BYTE *)(v106 + 12);
  if ( v112.m128i_i64[0] )
    v41 = s;
  v43 = sub_3308F0(v42, *(_QWORD *)(a1 + 40), (__int64)v41, &v107, v39, (__int64)v105, ((__int64)v104[0] & 0x10) == 0);
  v44 = *(_QWORD *)(v43 + 72);
  v45 = v106;
  v46 = (_QWORD *)v43;
  v47 = *(_DWORD *)(v44 + 280);
  *(_DWORD *)(v44 + 280) = v47 | 4;
  v48 = *(_DWORD *)(v45 + 12);
  if ( (v48 & 2) != 0 )
  {
    *(_DWORD *)(v44 + 280) = v47 | 0xC;
    v48 = *(_DWORD *)(v45 + 12);
  }
  if ( (v48 & 1) == 0 )
    *(_DWORD *)(v44 + 280) |= 0x10u;
  sub_60080((__int64 *)(v44 + 136), v113);
  sub_311F30((__int64 *)(v44 + 152), &v114);
  sub_311F30((__int64 *)(v44 + 216), &v114);
  sub_311F30((__int64 *)(v44 + 216), &v118);
  if ( *(_WORD *)(a1 + 48) == 617 )
    *(_DWORD *)(v44 + 284) = 12;
  v49 = v106;
  v50 = *(_DWORD *)(v106 + 12);
  if ( (v50 & 4) != 0 )
  {
    *((_DWORD *)v46 + 1) |= 0x80000u;
    v50 = *(_DWORD *)(v49 + 12);
  }
  if ( (v50 & 0x10) == 0 && a3 != -1 )
  {
    v55 = _mm_cvtsi32_si128(*((_DWORD *)v46 + 17));
    *(_DWORD *)v120 = 1;
    *(_QWORD *)&v120[4] = _mm_unpacklo_epi32(v55, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v46 = sub_121060((__int64)v46, v120);
    sub_118BA0((__int64)v120);
    v50 = *(_DWORD *)(v106 + 12);
  }
  if ( (v50 & 8) != 0 )
    *((_DWORD *)v46 + 1) |= 0x20000u;
  sub_B1090(*(_QWORD **)(a1 + 16), (__int64)v46);
  v51 = *(_DWORD *)(v106 + 12);
  if ( (v51 & 0x10) == 0 && a3 != -1 )
  {
    if ( (v51 & 0x20) != 0 )
    {
      if ( v103 == 4 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        sub_1D1F50(a1, 0x3Du, 4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, a3 + 4, 0);
    }
    else
    {
      sub_3EE280(a1, v103, a3);
    }
  }
  v32 = 1;
LABEL_48:
  if ( s )
  {
    v112.m128i_i64[0] = 0;
    qfree();
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree();
  }
  qfree();
  if ( v114 )
  {
    v115.m128i_i64[0] = 0;
    qfree();
  }
  v33 = &v141;
  qfree();
  clear_tinfo_t();
  v34 = (__int64)v105;
  while ( 1 )
  {
    cleanup_argloc();
    if ( *((_QWORD *)v33 + 4) )
    {
      *((_QWORD *)v33 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_118BA0((__int64)v33);
    if ( (char *)v34 == v33 )
      break;
    v33 -= 80;
  }
  return v32;
}

