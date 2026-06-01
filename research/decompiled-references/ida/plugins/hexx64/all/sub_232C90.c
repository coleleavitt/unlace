__int64 __fastcall sub_232C90(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int16 a9,
        _BYTE *a10)
{
  __int64 v12; // rax
  char v13; // bl
  unsigned int v14; // eax
  __int64 v15; // rax
  char v16; // bl
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // r14
  int v22; // ecx
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rbx
  char v26; // cl
  char v27; // r13
  int v28; // eax
  unsigned __int64 v29; // r14
  int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rdi
  __int64 v34; // r14
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  size_t v39; // r8
  __int64 v40; // r14
  size_t v41; // r9
  __int64 v42; // rsi
  int v43; // r13d
  int v44; // r10d
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ebx
  int v51; // ecx
  int v52; // eax
  __int64 v53; // r12
  __int64 v55; // r14
  char v56; // al
  char v57; // al
  int v58; // eax
  char v59; // di
  int v60; // ebx
  int v61; // eax
  int v62; // eax
  signed __int64 v63; // rsi
  __int64 v65; // rax
  char v66; // bl
  __int64 v67; // rax
  int v68; // eax
  char v69; // di
  __int64 v70; // rdi
  _QWORD *v71; // rsi
  int v72; // eax
  __int64 v73; // rax
  char v74; // bl
  unsigned __int64 v75; // rbx
  int v76; // eax
  int v77; // ebx
  char v78; // al
  int v79; // r12d
  __int64 v80; // rax
  char v81; // r12
  char v82; // r13
  __int64 v83; // r13
  __int64 v84; // rsi
  __int64 v85; // kr00_8
  signed __int64 v86; // rdx
  int v87; // eax
  bool v88; // al
  __int64 v89; // rax
  int v90; // edx
  int v91; // ecx
  __int64 v92; // rdi
  int v93; // [rsp+30h] [rbp-210h]
  size_t v94; // [rsp+30h] [rbp-210h]
  int v95; // [rsp+30h] [rbp-210h]
  unsigned __int8 v96; // [rsp+3Ah] [rbp-206h]
  char v97; // [rsp+3Bh] [rbp-205h]
  int v98; // [rsp+3Ch] [rbp-204h]
  __int64 v100; // [rsp+48h] [rbp-1F8h]
  __int64 v101; // [rsp+50h] [rbp-1F0h]
  __int64 v102; // [rsp+50h] [rbp-1F0h]
  size_t v103; // [rsp+50h] [rbp-1F0h]
  char v104; // [rsp+5Bh] [rbp-1E5h]
  int v106; // [rsp+60h] [rbp-1E0h]
  int v107; // [rsp+64h] [rbp-1DCh]
  bool v108; // [rsp+64h] [rbp-1DCh]
  __int64 v110; // [rsp+70h] [rbp-1D0h]
  int tinfo_size; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v112; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v113; // [rsp+70h] [rbp-1D0h]
  __int64 v114; // [rsp+78h] [rbp-1C8h]
  char v115; // [rsp+8Bh] [rbp-1B5h]
  int v116; // [rsp+8Ch] [rbp-1B4h] BYREF
  __int64 v117[2]; // [rsp+90h] [rbp-1B0h] BYREF
  __int64 v118; // [rsp+A0h] [rbp-1A0h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-198h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-190h]
  __int64 v121; // [rsp+B8h] [rbp-188h] BYREF
  __int64 v122; // [rsp+C0h] [rbp-180h] BYREF
  __int64 v123; // [rsp+C8h] [rbp-178h]
  __int64 scalar_bt; // [rsp+D0h] [rbp-170h] BYREF
  __int64 v125; // [rsp+D8h] [rbp-168h]
  void *src; // [rsp+E0h] [rbp-160h] BYREF
  __int128 v127; // [rsp+E8h] [rbp-158h]
  __int64 v128; // [rsp+100h] [rbp-140h] BYREF
  __int64 v129; // [rsp+108h] [rbp-138h]
  __int64 v130; // [rsp+110h] [rbp-130h]
  int v131; // [rsp+118h] [rbp-128h]
  __int64 v132; // [rsp+120h] [rbp-120h]
  __int128 v133; // [rsp+128h] [rbp-118h]
  __int64 v134; // [rsp+138h] [rbp-108h]
  __int128 v135; // [rsp+140h] [rbp-100h]
  __int64 v136; // [rsp+150h] [rbp-F0h] BYREF
  int v137; // [rsp+158h] [rbp-E8h]
  int v138; // [rsp+15Ch] [rbp-E4h]
  __int64 v139; // [rsp+160h] [rbp-E0h]
  __m128i v140; // [rsp+170h] [rbp-D0h] BYREF
  __int64 v141; // [rsp+180h] [rbp-C0h]
  __int128 v142; // [rsp+188h] [rbp-B8h]
  __int64 v143; // [rsp+198h] [rbp-A8h]
  __int128 v144; // [rsp+1A0h] [rbp-A0h]
  __int128 v145; // [rsp+1B0h] [rbp-90h]
  __int64 v146; // [rsp+1E0h] [rbp-60h]
  int v147; // [rsp+1E8h] [rbp-58h]
  __int64 v148; // [rsp+1F0h] [rbp-50h]
  char v149; // [rsp+1F8h] [rbp-48h]
  unsigned __int64 v150; // [rsp+208h] [rbp-38h]

  v116 = a3;
  v150 = __readfsqword(0x28u);
  v117[0] = 0;
  copy_tinfo_t();
  v98 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v115 = (a9 & 8) != 0;
  v106 = v116;
  if ( a2 >= *(_QWORD *)(a1 + 144) )
  {
    if ( !a5 )
    {
LABEL_9:
      v14 = *(_DWORD *)(a1 + 72);
      if ( v14 <= 0x10 )
        v14 = getinf();
      v97 = v14 == 256 || v14 == 176;
      v13 = v97;
      if ( !v97 )
      {
        v97 = getinf_flag();
        v13 = 1;
      }
      goto LABEL_13;
    }
    if ( (a9 & 0x40) == 0 )
    {
      v12 = 1;
      if ( v116 > 0 )
        v12 = v116;
      if ( a2 + v12 <= *(_QWORD *)(a1 + 168) && (a9 & 0x84) != 0x80 )
      {
        v97 = 0;
        v13 = 0;
        if ( (a9 & 0x100) == 0 )
          goto LABEL_13;
      }
      goto LABEL_9;
    }
  }
  v97 = 0;
  v13 = 0;
LABEL_13:
  v100 = sub_1CFD00(a1, a2, a7);
  v15 = *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116);
  v117[1] = 0;
  if ( a2 >= v15 && (*(_BYTE *)(a1 + 5) & 0x10) != 0 )
  {
    v53 = *(_QWORD *)(a1 + 944);
    if ( *(_QWORD *)(v53 + 8) != -1 || (unsigned __int8)sub_21E760(*(__int64 **)(a1 + 944), a7) )
    {
      if ( *(_QWORD *)(v53 + 16) )
      {
        v55 = *(_QWORD *)(v53 + 8);
        copy_tinfo_t();
        if ( a2 >= v55 )
        {
          v122 = 0;
          v123 = 0;
          goto LABEL_131;
        }
      }
    }
  }
  v122 = 0;
  v123 = 0;
  if ( !v13 )
  {
LABEL_131:
    v104 = 0;
    v16 = 0;
    v96 = 0;
    v114 = a2;
    goto LABEL_16;
  }
  v96 = 0;
  v16 = 0;
  v104 = 1;
  v114 = a2;
  if ( (a9 & 0x40) == 0 )
    goto LABEL_47;
  while ( 1 )
  {
LABEL_16:
    if ( (v17 = *(_QWORD *)(a1 + 1496),
          v118 = 0,
          v141 = 0,
          v143 = 0,
          v146 = 1,
          v147 = -1,
          v148 = 0,
          v149 = 0,
          v140 = 0,
          v142 = 0,
          v144 = 0,
          v145 = 0,
          v110 = sub_1CFF80(v100, v17, &v140, v114, nullptr, &v118),
          v93 = a9 & 0xC0,
          v93 != 128)
      || v16 && *(_QWORD *)(a1 + 144) <= v114
      || v110 == -1
      || LOBYTE(v117[0])
      && (a9 & 0x10) != 0
      && (v75 = v140.m128i_u64[1], (unsigned int)(v75 >> 3) != (unsigned int)get_tinfo_size()) )
    {
      v119 = 0;
      v107 = 0;
      v101 = -1;
      v110 = -1;
    }
    else
    {
      v119 = 0;
      v107 = 0;
      v101 = -1;
      if ( (a9 & 0x100) == 0 )
      {
        copy_tinfo_t();
        v45 = (unsigned __int64)v140.m128i_i64[0] >> 3;
        v46 = (unsigned __int64)(v140.m128i_i64[0] + v140.m128i_i64[1]) >> 3;
        v47 = (unsigned __int64)v140.m128i_i64[1] >> 3;
        v107 = (unsigned __int64)v140.m128i_i64[1] >> 3;
        v48 = ((unsigned __int64)v140.m128i_i64[0] >> 3) + *(_QWORD *)(v100 + 32);
        v101 = v48;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v101 = (int)v48;
        if ( v104
          && (v101 != sub_227D30(a1, v101, &v119, v107)
           || v114 == v101 && v116 != -1 && v116 != (_DWORD)v47 && v114 != sub_227D30(a1, v114, v117, v116)) )
        {
          goto LABEL_217;
        }
        v49 = *(_QWORD *)(a1 + 144);
        if ( v49 <= v101 )
          goto LABEL_117;
        v86 = v46 + *(_QWORD *)(v100 + 32);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v86 = (int)v86;
        if ( v49 >= v86 )
        {
LABEL_117:
          if ( !(_DWORD)v47 || a2 < (unsigned __int64)v101 || (int)v47 + v101 - 1 < (unsigned __int64)a2 )
            goto LABEL_125;
          LODWORD(v122) = 1;
          v123 = v101;
          LODWORD(v128) = 0;
          copy_argloc();
          v130 = a6;
          v24 = sub_1F04A0((__int64 *)(a1 + 432), (__int64)&v128, 0.0);
          cleanup_argloc();
          if ( v24 )
          {
            v50 = v116;
            v51 = 1;
            if ( v116 != -1 )
              v51 = v116;
            v52 = sub_1C36B0(v24, *(_QWORD *)(a1 + 1496), v114, v51, *(_DWORD *)(v24 + 88), nullptr, 0.0, nullptr);
            if ( v52 && (v50 == -1 || v50 == v52) )
            {
              LODWORD(v24) = -991146299 * ((v24 - *(_QWORD *)(a1 + 432)) >> 3);
              goto LABEL_194;
            }
            if ( v114 == *(_QWORD *)(v24 + 8) )
            {
              if ( !under_debugger )
                sub_383060(0xCA10u, 0.0);
LABEL_349:
              BUG();
            }
            goto LABEL_125;
          }
          if ( v114 == v101 && v116 != -1 && v116 >= (int)v47 )
            goto LABEL_18;
          v87 = sub_1F06C0((__int64 *)(a1 + 432), (int *)&v122, v107, -1, 0.0);
          if ( v87 < 0 )
            goto LABEL_18;
          if ( !v104 )
          {
            v91 = v116;
            if ( v116 == -1 )
              v91 = 1;
            v92 = *(_QWORD *)(a1 + 432) + 104LL * v87;
            if ( (unsigned int)sub_1C36B0(
                                 v92,
                                 *(_QWORD *)(a1 + 1496),
                                 v114,
                                 v91,
                                 *(_DWORD *)(v92 + 88),
                                 nullptr,
                                 0.0,
                                 nullptr) )
              goto LABEL_18;
            goto LABEL_125;
          }
        }
        else
        {
LABEL_217:
          if ( !(unsigned __int8)sub_22D9A0(a1, v100, &v118, v45, v46, nullptr) )
          {
            LODWORD(v24) = -1;
            goto LABEL_194;
          }
        }
        sub_232920(a1, v100, v101, v107);
LABEL_125:
        v110 = -1;
      }
    }
LABEL_18:
    a7 = 0.0;
    v131 = 1;
    v132 = 0;
    v130 = a6;
    v134 = 0;
    v136 = 0;
    v137 = 0;
    v139 = 0;
    v138 = a5;
    src = nullptr;
    v133 = 0;
    v135 = 0;
    v127 = 0;
    if ( v110 == -1 )
      break;
    v18 = *(_QWORD *)(a1 + 1256);
    LODWORD(v128) = 1;
    v129 = v101;
    if ( 96LL * *(_QWORD *)(a1 + 1264) )
    {
      while ( (unsigned int)sub_3307E0((int *)v18, (int *)&v128) )
      {
        v18 += 96;
        if ( v18 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
          goto LABEL_99;
      }
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 80);
        if ( v19 != -1 && v101 + v19 <= v114 )
          break;
      }
    }
LABEL_99:
    v20 = v116;
    if ( v116 > v107 )
      goto LABEL_27;
    v116 = v107;
    if ( !(_BYTE)v119 )
    {
      if ( v20 != -1 )
      {
LABEL_102:
        v43 = v20 + v114;
        v44 = v101;
        if ( (int)v101 + v107 >= v20 + (int)v114 )
        {
          if ( LOBYTE(v117[0]) && !(unsigned int)verify_tinfo() )
          {
            v108 = 0;
            v115 = 0;
            goto LABEL_255;
          }
          v106 = v20;
          v115 = 0;
          v114 = v101;
          tinfo_size = -1;
          goto LABEL_156;
        }
        v108 = 0;
        goto LABEL_223;
      }
      if ( !LOBYTE(v117[0]) )
      {
        v115 = 0;
        v106 = -1;
        v56 = v104;
        v114 = v101;
        goto LABEL_136;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v106 = -1;
        v114 = v101;
        v115 = 0;
        goto LABEL_156;
      }
LABEL_286:
      v106 = -1;
      v115 = 0;
      v114 = v101;
      tinfo_size = -1;
      goto LABEL_156;
    }
    v115 = sub_1EF510((__int64)&v128, *(_QWORD *)(a1 + 1504), &v119, 0, 0.0);
    if ( !v115 )
    {
      if ( v20 != -1 )
        goto LABEL_102;
      if ( !LOBYTE(v117[0]) )
      {
        v56 = v104;
        v106 = -1;
        v114 = v101;
        goto LABEL_136;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v106 = -1;
        v114 = v101;
        goto LABEL_156;
      }
      goto LABEL_286;
    }
    if ( v104
      && !(unsigned __int8)sub_1EEFF0(
                             (__int64)&v128,
                             *(_QWORD *)(a1 + 1504),
                             &v119,
                             0xFFFFFFFF,
                             *(_DWORD *)(a1 + 72),
                             8,
                             0.0) )
    {
      if ( v20 != -1 )
        goto LABEL_102;
      if ( !LOBYTE(v117[0]) )
      {
        v115 = 0;
        tinfo_size = -1;
        v20 = v107;
        v106 = -1;
        v114 = v101;
        goto LABEL_137;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v106 = -1;
        v115 = 0;
        v114 = v101;
        goto LABEL_156;
      }
      goto LABEL_286;
    }
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v78 = get_tinfo_property();
    if ( (v78 & 0xE) == 0 && (v78 & 0x30) != 0 )
    {
      v131 |= 0x4000u;
      v79 = get_tinfo_property();
      get_tinfo_size();
      scalar_bt = (unsigned __int8)get_scalar_bt();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v79 != -1 )
      {
        LODWORD(v125) = 0;
        scalar_bt = 0;
        HIDWORD(v125) = v79;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
      }
    }
    sub_1EF8F0((__int64)&v128, *(_QWORD *)(a1 + 1504), &v119, 0, 0.0);
    v121 = 0;
    v80 = get_tinfo_property();
    v121 = v80;
    v81 = v80;
    if ( (unsigned __int8)v145 <= 0x3Fu
      && (unsigned __int8)v80 <= 0x3Fu
      && (!(_BYTE)v80
       || (v80 & 0xE) == 0 && (v80 & 0x30) != 0
       || (scalar_bt = 0,
           scalar_bt = get_tinfo_property(),
           v82 = get_tinfo_property(),
           clear_tinfo_t(),
           (v82 & 0x3F) == 0x30)
       || (v81 & 0xCF) == 9) )
    {
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
      v131 = v131 & 0xFFFBFFFD | 2;
    }
    clear_tinfo_t();
    if ( v20 == -1 )
    {
      if ( !LOBYTE(v117[0]) )
      {
        v20 = v137;
        tinfo_size = -1;
        v27 = 0;
        v106 = -1;
        v108 = v115;
        v115 = 0;
        v114 = v101;
        goto LABEL_75;
      }
      if ( (unsigned int)verify_tinfo() )
      {
        v115 = 0;
        v106 = -1;
        v114 = v101;
        tinfo_size = -1;
      }
      else
      {
        tinfo_size = get_tinfo_size();
        v106 = -1;
        v114 = v101;
        v115 = 0;
      }
      goto LABEL_257;
    }
    v43 = v20 + v114;
    v44 = v101;
    if ( v20 + (int)v114 <= (int)v101 + v107 )
    {
      if ( !LOBYTE(v117[0]) || (unsigned int)verify_tinfo() )
      {
        v106 = v20;
        v115 = 0;
        v114 = v101;
        tinfo_size = -1;
        goto LABEL_257;
      }
      v88 = v115;
      v115 = 0;
      v108 = v88;
LABEL_255:
      tinfo_size = get_tinfo_size();
      v106 = v20;
      v114 = v101;
      goto LABEL_256;
    }
    v108 = v115;
LABEL_223:
    v95 = v44;
    get_tinfo_property4();
    v106 = v20;
    v115 = 0;
    if ( (unsigned __int64)v144 > 1 )
      goto LABEL_82;
    if ( (get_aflags() & 0x2000000) != 0 )
    {
      v106 = v20;
      v115 = 0;
      goto LABEL_82;
    }
    v116 = v43 - v95;
    v68 = sub_2327F0((_QWORD *)a1, &v116, v101, &v119, (__m128)0LL, a8);
    if ( !v68 )
    {
      v106 = v20;
      v108 = 0;
      v115 = 0;
      goto LABEL_82;
    }
    v69 = v117[0];
    v115 = a10 != nullptr && v68 == 2;
    if ( v115 )
    {
      *a10 = 1;
      if ( v69 && !(unsigned int)verify_tinfo() )
      {
LABEL_324:
        tinfo_size = get_tinfo_size();
        v106 = v20;
        v114 = v101;
        v115 = 0;
        goto LABEL_156;
      }
      v106 = v20;
      v20 = -1;
      v115 = 0;
      v107 = v116;
      v56 = v104;
      v114 = v101;
    }
    else if ( LOBYTE(v117[0]) )
    {
      if ( !(unsigned int)verify_tinfo() )
        goto LABEL_324;
      v106 = v20;
      v20 = -1;
      v107 = v116;
      v56 = v104;
      v114 = v101;
    }
    else
    {
      v106 = v20;
      v20 = -1;
      v114 = v101;
      v107 = v116;
      v56 = v104;
    }
LABEL_136:
    tinfo_size = v20;
    v20 = v107;
    if ( !v56 )
      goto LABEL_71;
LABEL_137:
    if ( v107 == tinfo_size
      && (unsigned __int8)sub_1EEFF0(
                            (__int64)&v128,
                            *(_QWORD *)(a1 + 1504),
                            v117,
                            0xFFFFFFFF,
                            *(_DWORD *)(a1 + 72),
                            8,
                            0.0) )
    {
      if ( v137 != tinfo_size )
      {
        sub_1EF680(&v128, *(_QWORD **)(a1 + 1504), tinfo_size, 0, 0.0);
LABEL_141:
        v57 = get_tinfo_property();
        v108 = 0;
        v20 = v137;
        v27 = v115 ^ ((v57 & 0xF) == 9);
        goto LABEL_75;
      }
      v20 = tinfo_size;
      goto LABEL_213;
    }
LABEL_33:
    if ( sub_11CA80(v20) )
      goto LABEL_34;
    if ( v20 <= 0 )
    {
      v116 = v98;
      v20 = v98;
    }
    else
    {
      if ( !a5 && *(_QWORD *)(a1 + 144) <= v114 && v97 )
      {
LABEL_34:
        v20 = v116;
        goto LABEL_35;
      }
      v116 = (v98 + v20 - 1) & -v98;
      v20 = v116;
    }
LABEL_35:
    if ( v114 + v106 >= v129 + v20 )
    {
      v27 = sub_11CA80(v20);
      if ( !v27 )
      {
        clear_tinfo_t();
        if ( v20 == v137 )
        {
          v108 = 0;
          v115 = 0;
          goto LABEL_75;
        }
        goto LABEL_168;
      }
      if ( v137 != v20 )
      {
LABEL_168:
        v26 = 0;
LABEL_73:
        sub_1EF680(&v128, *(_QWORD **)(a1 + 1504), v20, v26, 0.0);
        if ( v20 != tinfo_size )
        {
          v108 = 0;
          v20 = v137;
          v27 = 1;
          goto LABEL_75;
        }
        goto LABEL_141;
      }
LABEL_213:
      v108 = 0;
      v27 = 0;
      v115 = 0;
      goto LABEL_75;
    }
    if ( src )
    {
      *(_QWORD *)&v127 = 0;
      qfree((__int64)src);
    }
    clear_tinfo_t();
    if ( v134 )
    {
      *(_QWORD *)&v135 = 0;
      qfree(v134);
    }
    if ( v132 )
    {
      *(_QWORD *)&v133 = 0;
      qfree(v132);
    }
    cleanup_argloc();
    clear_tinfo_t();
    clear_tinfo_t();
    if ( v143 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(v143);
    }
    if ( v141 )
    {
      *(_QWORD *)&v142 = 0;
      qfree(v141);
    }
    v16 = 0;
    clear_tinfo_t();
    cleanup_argloc();
    v106 = v20;
    v122 = 0;
    v123 = 0;
    v115 = 0;
    v104 = 1;
    if ( (a9 & 0x40) == 0 )
    {
LABEL_47:
      scalar_bt = v114;
      LODWORD(v121) = v106;
      sub_228510((int *)&v121, &scalar_bt, a1, v117, a7);
      if ( (int)v121 > v106
        && !LOBYTE(v117[0])
        && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL)
        && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) > v106
        && sub_11CB40(v106)
        && (sub_32C150(&src, *(_QWORD *)(a1 + 1504), v106),
            LOBYTE(v129) = 5,
            v128 = v114,
            v66 = sub_227ED0(a1, (__int64)&v128, &src, v106, a7),
            clear_tinfo_t(),
            v66) )
      {
        v115 = v66;
        scalar_bt = v114;
        v21 = v114;
        LODWORD(v121) = v106;
      }
      else
      {
        v21 = scalar_bt;
        if ( scalar_bt != v114 )
        {
          v115 = 0;
          v96 = 1;
        }
      }
      v123 = v21;
      LODWORD(v122) = 1;
      if ( v106 == -1 )
      {
        LODWORD(v121) = 1;
        v22 = 1;
      }
      else
      {
        v22 = v121;
        v116 = v121;
      }
      if ( !v97 && !(v21 % v98) )
      {
        v22 = (v98 + v22 - 1) & -v98;
        LODWORD(v121) = v22;
      }
      v23 = sub_228E60(a1, 0, (__int64)&v122, v22, a7);
      v24 = v23;
      if ( v23 == -1 )
      {
        v104 = 1;
        v16 = 0;
        goto LABEL_67;
      }
      if ( (a9 & 0x100) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCC31u, a7);
        goto LABEL_349;
      }
      v25 = *(_QWORD *)(a1 + 432) + 104LL * v23;
      if ( (a9 & 4) == 0 )
        sub_231430(a1, v23, a2, v106, nullptr, 0, a7);
      v104 = sub_229120((_DWORD *)v25, a1, a2, v106, a7);
      if ( v104 )
        goto LABEL_199;
      if ( *(_DWORD *)(v25 + 92) )
      {
        if ( *(_DWORD *)v25 == 1 && *(_QWORD *)(v25 + 8) != v21 )
        {
          v76 = sub_228E60(a1, (int)v24 + 1, (__int64)&v122, 1, a7);
          v77 = v76;
          if ( v76 != -1 )
          {
            if ( (unsigned __int8)sub_229120((_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v76), a1, a2, v106, a7) )
            {
              LODWORD(v24) = v77;
              goto LABEL_199;
            }
            v24 = v77;
          }
        }
      }
      if ( !a5 )
      {
        if ( a10 )
        {
          if ( !*(_BYTE *)(a1 + 320) && (int)v24 < *(_DWORD *)(a1 + 792) && (*(_BYTE *)(a1 + 2) & 4) == 0 )
          {
            v89 = *(_QWORD *)(a1 + 432) + 104LL * (int)v24;
            v90 = *(_DWORD *)(v89 + 24);
            if ( (v90 & 0x9040060) == 0 && *(_QWORD *)(v89 + 64) <= 1u && (v90 & 0x8000) == 0 )
            {
              sub_1F5300(a1, v24, a7, a8);
              *a10 = 1;
              LODWORD(v24) = -1;
            }
          }
        }
        goto LABEL_199;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v24 + 92) )
        v104 = 1;
      else
        v21 = a2;
      v16 = 1;
LABEL_67:
      if ( *(_BYTE *)(a1 + 320) )
      {
        v104 = 0;
        v21 = a2;
        v116 = v106;
      }
      v114 = v21;
    }
  }
  v20 = v116;
LABEL_27:
  LODWORD(v128) = 1;
  v129 = v114;
  if ( v20 == -1 )
  {
    if ( !v97
      || (v125 = v114 & -v98,
          LODWORD(scalar_bt) = 1,
          v60 = sub_228E60(a1, 0, (__int64)&scalar_bt, v98, 0.0),
          cleanup_argloc(),
          v60 == -1) )
    {
      v107 = v98 + (v114 & -v98) - v114;
    }
    else
    {
      v107 = 1;
    }
    v116 = v107;
    if ( !LOBYTE(v117[0]) || (unsigned int)verify_tinfo() )
    {
      v96 = 1;
      v56 = v104 & (v115 ^ 1);
      goto LABEL_136;
    }
    tinfo_size = get_tinfo_size();
    v96 = 1;
    goto LABEL_156;
  }
  if ( v93 != 128 )
  {
LABEL_29:
    if ( !LOBYTE(v117[0]) )
      goto LABEL_30;
    goto LABEL_154;
  }
  v58 = sub_2309F0(a1, v114, v20, nullptr, 3, (__int64 *)&src);
  v108 = a10 != nullptr && v58 == 2;
  if ( v108 )
  {
    v59 = v117[0];
    *a10 = 1;
    if ( !v59 )
    {
LABEL_30:
      if ( v115 == 1 || !v104 )
      {
        tinfo_size = -1;
LABEL_71:
        if ( v137 == v20 )
        {
          v108 = 0;
          v27 = 0;
          goto LABEL_75;
        }
        v26 = v115;
        goto LABEL_73;
      }
      tinfo_size = -1;
      v115 = 0;
      goto LABEL_33;
    }
LABEL_154:
    if ( (unsigned int)verify_tinfo() )
      goto LABEL_30;
    tinfo_size = get_tinfo_size();
LABEL_156:
    v20 = tinfo_size;
    v107 = v116;
    v56 = v104 & (v115 ^ 1);
    goto LABEL_136;
  }
  if ( v58 != -1 )
    goto LABEL_29;
  do
  {
LABEL_82:
    if ( (a9 & 0x100) == 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0 )
      {
        LODWORD(v24) = -1;
        goto LABEL_187;
      }
      v33 = *(_DWORD **)(a1 + 1504);
      scalar_bt = 0;
      v125 = 0;
      sub_1EFA10(v33, (__int64 *)(a1 + 496), (__int64)&v128, v116, &scalar_bt, 0);
      cleanup_argloc();
      if ( (unsigned __int64)v127 > 1 )
      {
        v34 = *(_QWORD *)(a1 + 504);
        if ( v34 )
        {
          v35 = v34 + 11;
          v36 = v34 + 12;
          --v34;
        }
        else
        {
          v36 = 13;
          v35 = 12;
        }
        v37 = *(_QWORD *)(a1 + 496);
        if ( *(_QWORD *)(a1 + 512) < v36 )
        {
          v102 = v35;
          v112 = v36;
          v65 = qvector_reserve(a1 + 496, v37, v36, 1);
          *(_QWORD *)(a1 + 496) = v65;
          v35 = v102;
          v37 = v65;
          v36 = v112;
        }
        *(_QWORD *)(a1 + 504) = v36;
        *(_BYTE *)(v37 + v35) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v34), " and stkvar ", 12);
        v38 = v127;
        if ( (_QWORD)v127 )
        {
          v39 = v127 - 1;
          if ( (_QWORD)v127 != 1 )
          {
            v40 = *(_QWORD *)(a1 + 504);
            v41 = v127 - 1;
            if ( v40 )
            {
              --v40;
              v41 = v39 + v40;
              v38 = v127 + v40;
            }
            v42 = *(_QWORD *)(a1 + 496);
            if ( *(_QWORD *)(a1 + 512) < v38 )
            {
              v94 = v127 - 1;
              v103 = v41;
              v113 = v38;
              v67 = qvector_reserve(a1 + 496, v42, v38, 1);
              *(_QWORD *)(a1 + 496) = v67;
              v39 = v94;
              v42 = v67;
              v41 = v103;
              v38 = v113;
            }
            *(_QWORD *)(a1 + 504) = v38;
            *(_BYTE *)(v42 + v41) = 0;
            memcpy((void *)(v40 + *(_QWORD *)(a1 + 496)), src, v39);
          }
        }
      }
      sub_1F08B0((_QWORD *)a1, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
    }
    v131 |= 0x400u;
    if ( LOBYTE(v117[0]) && !(unsigned int)verify_tinfo() )
    {
      v20 = v106;
      v101 = v114;
      goto LABEL_255;
    }
    tinfo_size = -1;
LABEL_256:
    if ( !v108 )
      goto LABEL_156;
LABEL_257:
    v108 = 1;
    v20 = v137;
    v27 = 0;
LABEL_75:
    if ( !v20 )
    {
      if ( !under_debugger )
        sub_383060(0xC495u, 0.0);
      goto LABEL_349;
    }
    v28 = v131;
    if ( *(int *)(a1 + 116) <= 0 || (v131 & 0x400) != 0 )
      goto LABEL_174;
    v29 = v129;
    if ( (get_tinfo_property() & 0x3F) == 0x29 && (get_tinfo_property() & 0x3F) == 0x39 )
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL) + 120LL);
    else
      v30 = v137;
    v31 = *(_QWORD *)(a1 + 136);
    v32 = v29 + v30;
  }
  while ( v31 > (__int64)v29 && v31 < v32 );
  if ( !*(_DWORD *)(a1 + 116) )
    goto LABEL_173;
  if ( v29 < v31 )
    goto LABEL_173;
  v70 = v31 + *(int *)(a1 + 116);
  if ( v70 - 1 < v29 )
    goto LABEL_173;
  if ( v31 > (__int64)v29 )
    v31 = v29;
  if ( v70 < v32 )
    LODWORD(v70) = v29 + v30;
  if ( v30 == (_DWORD)v70 - (_DWORD)v31 )
  {
LABEL_173:
    v20 = v137;
    v28 = v131;
LABEL_174:
    v61 = (16 * v96) | v28;
    BYTE1(v61) &= 0x7Eu;
    v131 = v61;
    if ( v20 != tinfo_size )
      goto LABEL_175;
    if ( v27 )
      goto LABEL_239;
LABEL_215:
    copy_tinfo_t();
    v20 = v137;
    goto LABEL_175;
  }
  v71 = *(_QWORD **)(a1 + 1504);
  v129 = v31;
  LODWORD(v128) = 1;
  sub_1EF680(&v128, v71, v70 - v31, 0, 0.0);
  v72 = v131;
  v20 = v137;
  BYTE1(v72) = BYTE1(v131) & 0x7E;
  if ( v96 )
  {
    v131 = v72 | 0x10;
    if ( v137 != tinfo_size )
      goto LABEL_175;
LABEL_239:
    v121 = 0;
    v73 = get_tinfo_property();
    v121 = v73;
    if ( (_BYTE)v73 && ((v73 & 0xE) != 0 || (v73 & 0x30) == 0) )
    {
      scalar_bt = 0;
      scalar_bt = get_tinfo_property();
      v74 = get_tinfo_property();
      clear_tinfo_t();
      if ( (v74 & 0x3F) != 0x30 && (a9 & 0x20) == 0 )
      {
        clear_tinfo_t();
        v20 = v137;
        goto LABEL_175;
      }
    }
    clear_tinfo_t();
    goto LABEL_215;
  }
  v131 = v72;
  if ( v137 == tinfo_size )
    goto LABEL_239;
LABEL_175:
  if ( v104 )
  {
    v83 = v129;
    if ( v83 != sub_227D30(a1, v129, &v136, v20) )
    {
      if ( v83 % v98 )
      {
        if ( !under_debugger )
          sub_383060(0xC8A3u, 0.0);
        goto LABEL_349;
      }
      v84 = *(_QWORD *)(a1 + 1504);
      v137 = (v98 + v137 - 1) & -v98;
      v85 = v137;
      sub_32C270(&v121, v84, v98);
      LODWORD(v125) = 0;
      HIDWORD(v125) = v85 / v98;
      scalar_bt = 0;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    v20 = v137;
  }
  if ( (a9 & 2) != 0 )
    v131 |= 0x200u;
  if ( (a9 & 0x40) != 0 )
    v131 |= 0x10000u;
  if ( a5 && ((a9 & 4) != 0 || !v104) )
  {
    v62 = v131;
    BYTE1(v62) = BYTE1(v131) & 0x7E;
    v131 = v62 | 0x100000;
  }
  if ( (_DWORD)v128 == 1 )
    v63 = v129;
  else
    v63 = -1;
  sub_232C00(a1, v63, v20);
  LODWORD(v24) = sub_1F6560(a1, (__int64)&v128, (a9 & 0x200) != 0, 0.0);
LABEL_187:
  if ( src )
  {
    *(_QWORD *)&v127 = 0;
    qfree((__int64)src);
  }
  clear_tinfo_t();
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v132);
  }
  cleanup_argloc();
LABEL_194:
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(v143);
  }
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree(v141);
  }
  clear_tinfo_t();
LABEL_199:
  cleanup_argloc();
  clear_tinfo_t();
  clear_tinfo_t();
  return (unsigned int)v24;
}

