__int64 __fastcall sub_37EEC0(__int64 a1, unsigned __int64 a2, _BYTE *a3, int a4)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rbx
  unsigned int v11; // ebp
  _QWORD **v12; // rbx
  void *v13; // rdi
  char v15; // al
  unsigned int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r12
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  int v26; // eax
  int flags; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 *v39; // rbp
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // r14
  _QWORD *v45; // rbp
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // r8
  int v49; // esi
  __int64 v50; // rax
  int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r14
  int v55; // eax
  __int64 *v56; // r8
  __int64 v57; // rdi
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r9
  int v60; // eax
  bool v61; // cl
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r14
  void *v67; // rax
  __m128i v68; // xmm0
  void *v69; // rax
  __m128i v70; // xmm1
  __int64 *v71; // r14
  __int64 *v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 *v75; // r14
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdx
  int v78; // r8d
  unsigned __int64 v79; // rsi
  __int64 v80; // rax
  char v81; // dl
  unsigned int v82; // eax
  char v83; // al
  __int64 v84; // rax
  __int64 *v85; // r8
  unsigned __int64 v86; // r9
  unsigned __int64 v87; // r9
  void *v88; // rdi
  void *v89; // rdi
  void *v90; // rdi
  __int64 v91; // rax
  void *v92; // rdi
  __int64 v93; // rax
  __int64 *v95; // [rsp+8h] [rbp-240h]
  __int64 *v96; // [rsp+8h] [rbp-240h]
  unsigned __int64 v97; // [rsp+8h] [rbp-240h]
  unsigned __int64 v98; // [rsp+8h] [rbp-240h]
  int tinfo_property; // [rsp+18h] [rbp-230h]
  __int64 v100; // [rsp+38h] [rbp-210h]
  int v101; // [rsp+48h] [rbp-200h]
  unsigned int tinfo_size; // [rsp+60h] [rbp-1E8h]
  int v103; // [rsp+60h] [rbp-1E8h]
  __int64 v104; // [rsp+60h] [rbp-1E8h]
  unsigned int v105; // [rsp+60h] [rbp-1E8h]
  int v106; // [rsp+6Bh] [rbp-1DDh]
  int v107; // [rsp+6Ch] [rbp-1DCh]
  unsigned int v108; // [rsp+70h] [rbp-1D8h]
  __int64 *v109; // [rsp+78h] [rbp-1D0h]
  size_t v110; // [rsp+78h] [rbp-1D0h]
  size_t v111; // [rsp+78h] [rbp-1D0h]
  size_t v112; // [rsp+78h] [rbp-1D0h]
  int v113; // [rsp+78h] [rbp-1D0h]
  size_t v114; // [rsp+78h] [rbp-1D0h]
  size_t v115; // [rsp+78h] [rbp-1D0h]
  size_t v116; // [rsp+78h] [rbp-1D0h]
  char v117; // [rsp+83h] [rbp-1C5h]
  int v118; // [rsp+84h] [rbp-1C4h]
  unsigned int nf; // [rsp+88h] [rbp-1C0h]
  int n; // [rsp+88h] [rbp-1C0h]
  __int64 ng; // [rsp+88h] [rbp-1C0h]
  __int64 ne; // [rsp+88h] [rbp-1C0h]
  const void *na; // [rsp+88h] [rbp-1C0h]
  const void *nb; // [rsp+88h] [rbp-1C0h]
  const void *nc; // [rsp+88h] [rbp-1C0h]
  const void *nd; // [rsp+88h] [rbp-1C0h]
  unsigned __int64 v127; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v128; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v129; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v130; // [rsp+90h] [rbp-1B8h]
  __int64 *v131; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v132; // [rsp+90h] [rbp-1B8h]
  __int64 *v133; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v134; // [rsp+90h] [rbp-1B8h]
  __int64 *v135; // [rsp+98h] [rbp-1B0h]
  __int64 *v136; // [rsp+98h] [rbp-1B0h]
  __int64 *v137; // [rsp+98h] [rbp-1B0h]
  __int64 *v138; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v139; // [rsp+98h] [rbp-1B0h]
  __int64 *v140; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v141; // [rsp+98h] [rbp-1B0h]
  __int64 *v142; // [rsp+98h] [rbp-1B0h]
  __int64 v143; // [rsp+B0h] [rbp-198h] BYREF
  int v144; // [rsp+B8h] [rbp-190h] BYREF
  void *v145; // [rsp+C0h] [rbp-188h]
  int *v146; // [rsp+C8h] [rbp-180h]
  int *v147; // [rsp+D0h] [rbp-178h]
  __int128 v148; // [rsp+D8h] [rbp-170h]
  unsigned __int64 v149; // [rsp+E8h] [rbp-160h]
  int v150[4]; // [rsp+F0h] [rbp-158h] BYREF
  void *v151; // [rsp+100h] [rbp-148h]
  __m128i v152; // [rsp+108h] [rbp-140h] BYREF
  void *v153; // [rsp+118h] [rbp-130h]
  __m128i v154; // [rsp+120h] [rbp-128h] BYREF
  __int64 v155; // [rsp+130h] [rbp-118h]
  int v156; // [rsp+138h] [rbp-110h]
  __int64 v157; // [rsp+140h] [rbp-108h] BYREF
  __int128 v158; // [rsp+148h] [rbp-100h]
  __int64 v159; // [rsp+158h] [rbp-F0h]
  _QWORD v160[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int128 v161; // [rsp+170h] [rbp-D8h]
  __int64 v162; // [rsp+180h] [rbp-C8h]
  __int128 v163; // [rsp+188h] [rbp-C0h]
  char v164; // [rsp+198h] [rbp-B0h]
  __int64 *v165; // [rsp+1A0h] [rbp-A8h] BYREF
  __int128 v166; // [rsp+1A8h] [rbp-A0h]
  __int64 v167; // [rsp+1B8h] [rbp-90h]
  _QWORD v168[2]; // [rsp+1C0h] [rbp-88h] BYREF
  __int128 v169; // [rsp+1D0h] [rbp-78h]
  __int64 v170; // [rsp+1E0h] [rbp-68h]
  __int128 v171; // [rsp+1E8h] [rbp-60h]
  char v172; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v173; // [rsp+208h] [rbp-40h]

  v4 = (__int64 *)a1;
  v5 = a2;
  v173 = __readfsqword(0x28u);
  if ( (*a3 & 0xF) == 0xC )
  {
    if ( a2 == -1 )
      return 0;
    flags = get_flags_ex();
    if ( ((~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0) && !(unsigned __int8)is_spec_ea() )
      return 0;
  }
  v146 = &v144;
  v144 = 0;
  v145 = nullptr;
  v147 = &v144;
  v149 = 0;
  v148 = 0;
  copy_tinfo_t();
  LODWORD(v149) = a4 & 0xF1FFFFFF;
  if ( (a4 & 0xF1FFFFFF) == 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC434u, 0.0);
    goto LABEL_246;
  }
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 )
  {
    v7 = 24;
    v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      goto LABEL_9;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_6;
        v18 = *(_QWORD *)(v8 + 24);
        v7 = v8 + 24;
        if ( v5 >= v18 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
      }
      if ( v18 >= v5 )
        break;
      v8 = *(_QWORD *)(v8 + 16);
    }
    if ( v6 != (_QWORD *)v8 )
    {
LABEL_9:
      if ( *(_DWORD *)(v7 + 64) < (signed int)(a4 & 0xF1FFFFFF) && (*(_QWORD *)(v7 + 56) & 0x3F) != 0x30 )
        goto LABEL_10;
      v15 = compare_tinfo();
      v16 = a4 & 0xF1FFFFFF;
      if ( v15 )
      {
        if ( !(unsigned int)lexcompare_tinfo() )
        {
LABEL_10:
          v11 = 0;
          goto LABEL_11;
        }
        tinfo_property = get_tinfo_property();
        v19 = get_tinfo_property();
        v16 = a4 & 0xF1FFFFFF;
        if ( tinfo_property == v19 )
        {
          copy_tinfo_t();
          goto LABEL_22;
        }
      }
      if ( !v16 )
        goto LABEL_45;
      v100 = *(_QWORD *)a1;
      v17 = sub_36B260();
      if ( v17 == 1 )
      {
LABEL_21:
        *(_DWORD *)(v7 + 64) = v149;
        sub_36C0E0(v4 + 3, v5);
        sub_374E50((__int64)v4, v5, v7 + 56, *(_DWORD *)(v7 + 64));
        goto LABEL_22;
      }
      if ( v17 == -1 )
        goto LABEL_45;
      copy_tinfo_t();
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xC )
      {
        v165 = nullptr;
        v165 = (__int64 *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        if ( (get_tinfo_property() & 0xF) != 0xC )
        {
          clear_tinfo_t();
          clear_tinfo_t();
          goto LABEL_21;
        }
        v165 = nullptr;
        v165 = (__int64 *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v157 = 0;
      v159 = 0;
      v160[0] = 0;
      v160[1] = 0;
      v162 = 0;
      v164 = 16;
      v158 = 0;
      v161 = 0;
      v163 = 0;
      if ( !(unsigned __int8)get_tinfo_details() || !(_QWORD)v158 )
      {
LABEL_32:
        if ( v162 )
        {
          *(_QWORD *)&v163 = 0;
          qfree(v162);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v20 = v157;
        if ( v157 )
        {
          if ( (_QWORD)v158 )
          {
            v21 = 0;
            v95 = v4;
            v22 = v158;
            do
            {
              v23 = (_QWORD *)(v20 + 80 * v21);
              clear_tinfo_t();
              v24 = v23[5];
              if ( v24 )
              {
                v23[6] = 0;
                qfree(v24);
              }
              v25 = v23[2];
              if ( v25 )
              {
                v23[3] = 0;
                qfree(v25);
              }
              ++v21;
              cleanup_argloc();
              v20 = v157;
            }
            while ( v22 != v21 );
            v4 = v95;
          }
          *(_QWORD *)&v158 = 0;
          qfree(v20);
        }
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_45:
        copy_tinfo_t();
LABEL_46:
        v26 = *(_DWORD *)(v7 + 68) + 1;
        *(_DWORD *)(v7 + 68) = v26;
        if ( v26 <= 9 )
          sub_364470(*v4, v7 + 8, 0.0);
        goto LABEL_21;
      }
      v165 = nullptr;
      v167 = 0;
      v168[0] = 0;
      v168[1] = 0;
      v170 = 0;
      v172 = 16;
      v166 = 0;
      v169 = 0;
      v171 = 0;
      LOBYTE(v106) = get_tinfo_details();
      if ( !(_BYTE)v106 || !(_QWORD)v166 )
      {
        LOBYTE(v106) = 0;
        v28 = v170;
        goto LABEL_77;
      }
      v118 = compare_arglocs();
      v28 = v170;
      if ( v118 || (_QWORD)v163 != (_QWORD)v171 )
        goto LABEL_62;
      if ( (_QWORD)v163 )
      {
        v29 = 0;
        do
        {
          if ( *(_DWORD *)(v162 + 8 * v29) != *(_DWORD *)(v170 + 8 * v29)
            || *(_DWORD *)(v162 + 8 * v29 + 4) != *(_DWORD *)(v170 + 8 * v29 + 4) )
          {
            goto LABEL_62;
          }
          ++v29;
        }
        while ( (_QWORD)v163 != v29 );
      }
      if ( (_QWORD)v158 )
      {
        v48 = v157;
        v49 = 0;
        v50 = 0;
        do
        {
          if ( (unsigned int)(*(_DWORD *)(v157 + 80 * v50) - 3) <= 1 )
          {
            v117 = v106;
            if ( !(_QWORD)v166 )
              goto LABEL_154;
            goto LABEL_109;
          }
          v50 = ++v49;
        }
        while ( v49 < (unsigned __int64)v158 );
        v117 = 0;
        if ( !(_QWORD)v166 )
          goto LABEL_115;
      }
      else
      {
        v117 = 0;
        if ( !(_QWORD)v166 )
          goto LABEL_132;
      }
LABEL_109:
      v51 = 0;
      v52 = 0;
      do
      {
        if ( (unsigned int)(LODWORD(v165[10 * v52]) - 3) <= 1 )
        {
          if ( v117 )
            goto LABEL_113;
          goto LABEL_62;
        }
        v52 = ++v51;
      }
      while ( v51 < (unsigned __int64)v166 );
      if ( v117 )
      {
LABEL_154:
        LOBYTE(v106) = 0;
        goto LABEL_77;
      }
LABEL_113:
      if ( (_QWORD)v158 )
      {
        v48 = v157;
LABEL_115:
        v101 = 0;
        v53 = 0;
        v107 = 0;
        while ( 1 )
        {
          v54 = v48 + 80 * v53;
          tinfo_size = get_tinfo_size();
          sub_1C5FB0((__int64)v150, v54, tinfo_size, 0, 0.0);
          v103 = sub_369CC0(&v165, v150, tinfo_size, 0.0);
          cleanup_argloc();
          if ( v103 != -1 )
          {
            v104 = 10LL * v103;
            if ( !(unsigned int)compare_arglocs() )
            {
              v109 = &v165[v104];
              v55 = sub_36B620(v100, v54 + 64, (__int64)&v165[v104 + 8], a4);
              if ( v55 == -1 )
              {
                copy_argloc();
                v85 = v109;
                if ( (__int64 *)(v54 + 16) != v109 + 2 )
                {
                  v86 = v109[3];
                  if ( v86 && (v114 = v86 - 1, v86 != 1) )
                  {
                    na = (const void *)v85[2];
                    if ( *(_QWORD *)(v54 + 32) < v86 )
                    {
                      v137 = v85;
                      v129 = v86;
                      *(_QWORD *)(v54 + 16) = qvector_reserve(v54 + 16, *(_QWORD *)(v54 + 16), v86, 1);
                      v85 = v137;
                      v86 = v129;
                    }
                    v88 = *(void **)(v54 + 16);
                    *(_QWORD *)(v54 + 24) = v86;
                    v135 = v85;
                    v127 = v86;
                    memmove(v88, na, v114);
                    v85 = v135;
                    *(_BYTE *)(*(_QWORD *)(v54 + 16) + v127 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v54 + 24) = 0;
                  }
                }
                if ( (__int64 *)(v54 + 40) != v85 + 5 )
                {
                  v87 = v85[6];
                  if ( v87 && (v115 = v87 - 1, v87 != 1) )
                  {
                    nb = (const void *)v85[5];
                    if ( *(_QWORD *)(v54 + 56) < v87 )
                    {
                      v138 = v85;
                      v130 = v85[6];
                      *(_QWORD *)(v54 + 40) = qvector_reserve(v54 + 40, *(_QWORD *)(v54 + 40), v87, 1);
                      v85 = v138;
                      v87 = v130;
                    }
                    v89 = *(void **)(v54 + 40);
                    *(_QWORD *)(v54 + 48) = v87;
                    v136 = v85;
                    v128 = v87;
                    memmove(v89, nb, v115);
                    v85 = v136;
                    *(_BYTE *)(*(_QWORD *)(v54 + 40) + v128 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v54 + 48) = 0;
                  }
                }
                v116 = (size_t)v85;
                copy_tinfo_t();
                v107 |= 1u;
                *(_DWORD *)(v54 + 72) = *(_DWORD *)(v116 + 72);
              }
              else if ( v55 == 1 )
              {
                copy_argloc();
                v56 = v109;
                v57 = (__int64)(v109 + 2);
                if ( v109 + 2 != (__int64 *)(v54 + 16) )
                {
                  v58 = *(_QWORD *)(v54 + 24);
                  if ( v58 && (v110 = v58 - 1, v58 != 1) )
                  {
                    nd = *(const void **)(v54 + 16);
                    if ( v56[4] < v58 )
                    {
                      v142 = v56;
                      v134 = *(_QWORD *)(v54 + 24);
                      v93 = qvector_reserve(v57, v56[2], v58, 1);
                      v56 = v142;
                      v58 = v134;
                      v142[2] = v93;
                    }
                    v92 = (void *)v56[2];
                    v56[3] = v58;
                    v141 = v58;
                    v133 = v56;
                    memmove(v92, nd, v110);
                    v56 = v133;
                    *(_BYTE *)(v133[2] + v141 - 1) = 0;
                  }
                  else
                  {
                    v56[3] = 0;
                  }
                }
                if ( v56 + 5 != (__int64 *)(v54 + 40) )
                {
                  v59 = *(_QWORD *)(v54 + 48);
                  if ( v59 && (v111 = v59 - 1, v59 != 1) )
                  {
                    nc = *(const void **)(v54 + 40);
                    if ( v56[7] < v59 )
                    {
                      v140 = v56;
                      v132 = *(_QWORD *)(v54 + 48);
                      v91 = qvector_reserve((__int64)(v56 + 5), v56[5], v59, 1);
                      v56 = v140;
                      v59 = v132;
                      v140[5] = v91;
                    }
                    v90 = (void *)v56[5];
                    v56[6] = v59;
                    v139 = v59;
                    v131 = v56;
                    memmove(v90, nc, v111);
                    v56 = v131;
                    *(_BYTE *)(v131[5] + v139 - 1) = 0;
                  }
                  else
                  {
                    v56[6] = 0;
                  }
                }
                v112 = (size_t)v56;
                copy_tinfo_t();
                v107 |= 2u;
                *(_DWORD *)(v112 + 72) = *(_DWORD *)(v54 + 72);
              }
            }
          }
          v53 = ++v101;
          if ( v101 >= (unsigned __int64)v158 )
            break;
          v48 = v157;
        }
LABEL_133:
        v60 = sub_36B620(v100, (__int64)v160, (__int64)v168, a4);
        if ( v60 )
        {
          if ( v60 != -1 )
          {
            copy_tinfo_t();
            v107 |= 2u;
            goto LABEL_136;
          }
LABEL_156:
          copy_tinfo_t();
          v107 |= 1u;
        }
        else if ( !(unsigned __int8)compare_tinfo() )
        {
          goto LABEL_156;
        }
LABEL_136:
        v105 = v164 & 0xF0;
        if ( (v164 & 0xF0) == 0xC0 )
          v105 = HIDWORD(v159);
        if ( v105 <= 0x10 )
          v105 = getinf();
        v108 = v172 & 0xF0;
        if ( (v172 & 0xF0) == 0xC0 )
          v108 = HIDWORD(v167);
        if ( v108 <= 0x10 )
          v108 = getinf();
        if ( (v107 & 2) != 0 || v108 != 64 || v105 == 64 )
        {
          if ( (v107 & 1) != 0 )
          {
            if ( (unsigned __int64)v158 < (unsigned __int64)v166 )
            {
              v113 = v158;
              v62 = (int)v158;
              do
              {
                v71 = &v165[10 * v62];
                nf = get_tinfo_size();
                sub_1C5FB0((__int64)v150, (__int64)v71, nf, 0, 0.0);
                n = sub_369CC0(&v157, v150, nf, 0.0);
                cleanup_argloc();
                if ( n >= 0 && n < (unsigned __int64)v158 )
                {
                  if ( (unsigned int)compare_arglocs() )
                    goto LABEL_174;
                }
                else
                {
                  v72 = v71;
                  v150[0] = 0;
                  copy_argloc();
                  v151 = nullptr;
                  v152 = 0;
                  v74 = v71[3];
                  if ( v74 )
                  {
                    ng = v71[3];
                    v151 = (void *)qalloc_or_throw(ng, (__int64)v71, v74, v73);
                    v152.m128i_i64[1] = ng;
                    v72 = (__int64 *)v71[2];
                    memcpy(v151, v72, ng);
                    v152.m128i_i64[0] = ng;
                  }
                  v153 = nullptr;
                  v154 = 0;
                  v63 = v71[6];
                  if ( v63 )
                  {
                    ne = v71[6];
                    v153 = (void *)qalloc_or_throw(ne, (__int64)v72, v63, v73);
                    v154.m128i_i64[1] = ne;
                    memcpy(v153, (const void *)v71[5], ne);
                    v154.m128i_i64[0] = ne;
                  }
                  v155 = 0;
                  copy_tinfo_t();
                  v64 = v157;
                  v156 = *((_DWORD *)v71 + 18);
                  v65 = v158;
                  if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
                  {
                    v157 = qvector_reserve((__int64)&v157, v157, v158 + 1, 80);
                    v64 = v157;
                    v65 = v158;
                  }
                  v66 = v64 + 80 * v65;
                  *(_DWORD *)v66 = 0;
                  copy_argloc();
                  v67 = v151;
                  v151 = nullptr;
                  v68 = _mm_loadu_si128(&v152);
                  *(_QWORD *)(v66 + 16) = v67;
                  *(__m128i *)(v66 + 24) = v68;
                  v69 = v153;
                  v70 = _mm_load_si128(&v154);
                  v152 = 0;
                  v153 = nullptr;
                  v154 = 0;
                  *(_QWORD *)(v66 + 40) = v69;
                  *(_QWORD *)(v66 + 64) = 0;
                  *(__m128i *)(v66 + 48) = v70;
                  copy_tinfo_t();
                  *(_DWORD *)(v66 + 72) = v156;
                  *(_QWORD *)&v158 = v158 + 1;
                  clear_tinfo_t();
                  if ( v153 )
                  {
                    v154.m128i_i64[0] = 0;
                    qfree((__int64)v153);
                  }
                  if ( v151 )
                  {
                    v152.m128i_i64[0] = 0;
                    qfree((__int64)v151);
                  }
                  cleanup_argloc();
                }
                v62 = ++v113;
              }
              while ( v113 < (unsigned __int64)v166 );
            }
            if ( v117 || a4 & 0x8000000 | (v105 - 48) & 0xFFFFFFEF || ((v108 - 48) & 0xFFFFFFEF) != 0 )
              goto LABEL_198;
            v75 = &v157;
            v61 = v105 == 64;
          }
          else
          {
            v61 = v105 == 64;
            if ( v108 != 64 && v105 == 64 )
              goto LABEL_150;
            if ( v117
              || a4 & 0x8000000 | (v105 - 48) & 0xFFFFFFEF
              || (v75 = (__int64 *)&v165, ((v108 - 48) & 0xFFFFFFEF) != 0) )
            {
LABEL_203:
              if ( !v107 )
              {
                v106 = v108 == 64 || v105 == 64;
                if ( v108 != 64 && v105 != 64 )
                {
                  v28 = v170;
                  if ( (unsigned __int64)v158 < (unsigned __int64)v166 && (a4 & 0x8000000) == 0 )
                    goto LABEL_62;
LABEL_77:
                  if ( v28 )
                  {
                    *(_QWORD *)&v171 = 0;
                    qfree(v28);
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v36 = v165;
                  if ( v165 )
                  {
                    if ( (_QWORD)v166 )
                    {
                      v97 = v5;
                      v37 = 0;
                      v38 = v166;
                      do
                      {
                        v39 = &v36[10 * v37];
                        clear_tinfo_t();
                        v40 = v39[5];
                        if ( v40 )
                        {
                          v39[6] = 0;
                          qfree(v40);
                        }
                        v41 = v39[2];
                        if ( v41 )
                        {
                          v39[3] = 0;
                          qfree(v41);
                        }
                        ++v37;
                        cleanup_argloc();
                        v36 = v165;
                      }
                      while ( v38 != v37 );
                      v5 = v97;
                    }
                    *(_QWORD *)&v166 = 0;
                    qfree((__int64)v36);
                  }
                  if ( v162 )
                  {
                    *(_QWORD *)&v163 = 0;
                    qfree(v162);
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v42 = v157;
                  if ( v157 )
                  {
                    if ( (_QWORD)v158 )
                    {
                      v98 = v5;
                      v43 = 0;
                      v44 = v158;
                      do
                      {
                        v45 = (_QWORD *)(v42 + 80 * v43);
                        clear_tinfo_t();
                        v46 = v45[5];
                        if ( v46 )
                        {
                          v45[6] = 0;
                          qfree(v46);
                        }
                        v47 = v45[2];
                        if ( v47 )
                        {
                          v45[3] = 0;
                          qfree(v47);
                        }
                        ++v43;
                        cleanup_argloc();
                        v42 = v157;
                      }
                      while ( v44 != v43 );
                      v5 = v98;
                    }
                    *(_QWORD *)&v158 = 0;
                    qfree(v42);
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                  if ( !(_BYTE)v106 )
                    goto LABEL_21;
                  goto LABEL_46;
                }
                if ( (a4 & 0x8000000) != 0 )
                {
LABEL_150:
                  LOBYTE(v106) = 0;
                  v28 = v170;
                  goto LABEL_77;
                }
                if ( (_DWORD)v159 != (_DWORD)v167 )
                {
                  v28 = v170;
                  if ( (unsigned __int64)v158 >= (unsigned __int64)v166 )
                  {
                    LOBYTE(v106) = 0;
                    goto LABEL_77;
                  }
LABEL_62:
                  if ( v28 )
                  {
                    *(_QWORD *)&v171 = 0;
                    qfree(v28);
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v30 = v165;
                  if ( v165 )
                  {
                    v31 = 0;
                    if ( (_QWORD)v166 )
                    {
                      v96 = v4;
                      v32 = v166;
                      do
                      {
                        v33 = &v30[10 * v31];
                        clear_tinfo_t();
                        v34 = v33[5];
                        if ( v34 )
                        {
                          v33[6] = 0;
                          qfree(v34);
                        }
                        v35 = v33[2];
                        if ( v35 )
                        {
                          v33[3] = 0;
                          qfree(v35);
                        }
                        ++v31;
                        cleanup_argloc();
                        v30 = v165;
                      }
                      while ( v32 != v31 );
                      v4 = v96;
                    }
                    *(_QWORD *)&v166 = 0;
                    qfree((__int64)v30);
                  }
                  goto LABEL_32;
                }
                if ( !under_debugger )
                  sub_383060(0xC431u, 0.0);
LABEL_246:
                BUG();
              }
LABEL_198:
              *(_QWORD *)v150 = 0;
              create_tinfo();
              if ( !(unsigned __int8)compare_tinfo() )
              {
                v84 = *(_QWORD *)(v7 + 56);
                *(_QWORD *)(v7 + 56) = *(_QWORD *)v150;
                *(_QWORD *)v150 = v84;
                clear_tinfo_t();
                v28 = v170;
                goto LABEL_77;
              }
              if ( !under_debugger )
                sub_383060(0xC430u, 0.0);
              goto LABEL_246;
            }
          }
          if ( *((_QWORD *)&v161 + 1) == *((_QWORD *)&v169 + 1) )
          {
            if ( v105 == 64 )
              goto LABEL_203;
            v76 = *((_QWORD *)&v161 + 1);
            if ( v108 != 64 )
              goto LABEL_203;
          }
          else
          {
            v76 = *((_QWORD *)&v169 + 1);
            if ( *((_QWORD *)&v161 + 1) <= *((_QWORD *)&v169 + 1) )
              v76 = *((_QWORD *)&v161 + 1);
            if ( *((_QWORD *)&v169 + 1) >= *((_QWORD *)&v161 + 1) && !(v107 & 1) && v61 )
              goto LABEL_150;
          }
          if ( ((*((_QWORD *)&v161 + 1) >= *((_QWORD *)&v169 + 1)) & (((unsigned __int8)(v107 & 2) >> 1) ^ 1)) == 0
            || v108 != 64 )
          {
            v77 = v75[1];
            if ( !v77 )
              goto LABEL_236;
            v78 = 0;
            v79 = 0;
            do
            {
              v80 = *v75 + 80 * v79;
              if ( *(_DWORD *)v80 == 1 && *(_QWORD *)(v80 + 8) >= v76 )
                break;
              v79 = ++v78;
            }
            while ( v78 < v77 );
            sub_EABB0(v75, v79);
            v107 |= 4u;
            if ( !v75[1] )
            {
LABEL_236:
              if ( !under_debugger )
                sub_383060(0xC42Eu, 0.0);
              goto LABEL_246;
            }
            v81 = *((_BYTE *)v75 + 88);
            v82 = v81 & 0xF0;
            if ( (v81 & 0xF0) == 0xC0 )
              v82 = *((_DWORD *)v75 + 7);
            if ( v82 <= 0x10 )
              v82 = getinf();
            if ( v82 == 64 )
              goto LABEL_203;
            v83 = *((_BYTE *)v75 + 88);
            *((_DWORD *)v75 + 7) = 0;
            *((_BYTE *)v75 + 88) = v83 & 0xF | 0x40;
            goto LABEL_198;
          }
        }
LABEL_174:
        v28 = v170;
        goto LABEL_62;
      }
LABEL_132:
      v107 = 0;
      goto LABEL_133;
    }
  }
LABEL_6:
  v157 = v5;
  v165 = &v157;
  v9 = sub_37ED50((__m128i *)(a1 + 8), (unsigned __int64 *)&v157, &v165);
  v10 = v9 + 3;
  sub_36C440(v9 + 4, &v143);
  copy_tinfo_t();
  v10[8] = v149;
LABEL_22:
  v11 = 1;
LABEL_11:
  clear_tinfo_t();
  v12 = (_QWORD **)v145;
  if ( v145 )
  {
    do
    {
      sub_36BBD0(v12[3]);
      v13 = v12;
      v12 = (_QWORD **)v12[2];
      operator delete(v13, 0x28u);
    }
    while ( v12 );
  }
  return v11;
}

