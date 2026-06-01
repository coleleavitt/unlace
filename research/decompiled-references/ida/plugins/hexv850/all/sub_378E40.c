__int64 __fastcall sub_378E40(__int64 a1, unsigned __int64 a2, _BYTE *a3, int a4)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  _QWORD **v12; // rbx
  void *v13; // rdi
  char v15; // al
  unsigned int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r12
  _QWORD *v23; // rbx
  int v24; // eax
  int flags; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 *v31; // rbx
  __int64 *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 *v35; // rbp
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r14
  _QWORD *v39; // rbp
  unsigned __int64 v40; // r8
  int v41; // esi
  __int64 v42; // rax
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // eax
  __int64 *v48; // r8
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r9
  int v51; // eax
  bool v52; // cl
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  void *v57; // rax
  __m128i v58; // xmm0
  void *v59; // rax
  __m128i v60; // xmm1
  __int64 *v61; // r14
  __int64 *v62; // r14
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rdx
  int v65; // r8d
  unsigned __int64 v66; // rsi
  __int64 v67; // rax
  char v68; // dl
  unsigned int v69; // eax
  char v70; // al
  __int64 v71; // rax
  __int64 *v72; // r8
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r9
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  __int64 v78; // rax
  void *v79; // rdi
  __int64 v80; // rax
  __int64 *v82; // [rsp+8h] [rbp-240h]
  __int64 *v83; // [rsp+8h] [rbp-240h]
  unsigned __int64 v84; // [rsp+8h] [rbp-240h]
  unsigned __int64 v85; // [rsp+8h] [rbp-240h]
  int tinfo_property; // [rsp+18h] [rbp-230h]
  __int64 v87; // [rsp+38h] [rbp-210h]
  int v88; // [rsp+48h] [rbp-200h]
  int tinfo_size; // [rsp+60h] [rbp-1E8h]
  int v90; // [rsp+60h] [rbp-1E8h]
  __int64 v91; // [rsp+60h] [rbp-1E8h]
  unsigned int v92; // [rsp+60h] [rbp-1E8h]
  int v93; // [rsp+6Bh] [rbp-1DDh]
  int v94; // [rsp+6Ch] [rbp-1DCh]
  unsigned int v95; // [rsp+70h] [rbp-1D8h]
  __int64 *v96; // [rsp+78h] [rbp-1D0h]
  size_t v97; // [rsp+78h] [rbp-1D0h]
  size_t v98; // [rsp+78h] [rbp-1D0h]
  size_t v99; // [rsp+78h] [rbp-1D0h]
  int v100; // [rsp+78h] [rbp-1D0h]
  size_t v101; // [rsp+78h] [rbp-1D0h]
  size_t v102; // [rsp+78h] [rbp-1D0h]
  size_t v103; // [rsp+78h] [rbp-1D0h]
  char v104; // [rsp+83h] [rbp-1C5h]
  int v105; // [rsp+84h] [rbp-1C4h]
  int nf; // [rsp+88h] [rbp-1C0h]
  int n; // [rsp+88h] [rbp-1C0h]
  __int64 ng; // [rsp+88h] [rbp-1C0h]
  __int64 ne; // [rsp+88h] [rbp-1C0h]
  const void *na; // [rsp+88h] [rbp-1C0h]
  const void *nb; // [rsp+88h] [rbp-1C0h]
  const void *nc; // [rsp+88h] [rbp-1C0h]
  const void *nd; // [rsp+88h] [rbp-1C0h]
  unsigned __int64 v114; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v115; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v116; // [rsp+90h] [rbp-1B8h]
  __int64 v117; // [rsp+90h] [rbp-1B8h]
  __int64 *v118; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v119; // [rsp+90h] [rbp-1B8h]
  __int64 *v120; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v121; // [rsp+90h] [rbp-1B8h]
  __int64 *v122; // [rsp+98h] [rbp-1B0h]
  __int64 *v123; // [rsp+98h] [rbp-1B0h]
  __int64 *v124; // [rsp+98h] [rbp-1B0h]
  __int64 *v125; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v126; // [rsp+98h] [rbp-1B0h]
  __int64 *v127; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v128; // [rsp+98h] [rbp-1B0h]
  __int64 *v129; // [rsp+98h] [rbp-1B0h]
  char v130[8]; // [rsp+B0h] [rbp-198h] BYREF
  int v131; // [rsp+B8h] [rbp-190h] BYREF
  void *v132; // [rsp+C0h] [rbp-188h]
  int *v133; // [rsp+C8h] [rbp-180h]
  int *v134; // [rsp+D0h] [rbp-178h]
  __int128 v135; // [rsp+D8h] [rbp-170h]
  __int64 v136; // [rsp+E8h] [rbp-160h]
  int v137[4]; // [rsp+F0h] [rbp-158h] BYREF
  void *v138; // [rsp+100h] [rbp-148h]
  __m128i v139; // [rsp+108h] [rbp-140h] BYREF
  void *v140; // [rsp+118h] [rbp-130h]
  __m128i v141; // [rsp+120h] [rbp-128h] BYREF
  __int64 v142; // [rsp+130h] [rbp-118h]
  int v143; // [rsp+138h] [rbp-110h]
  __int64 v144; // [rsp+140h] [rbp-108h] BYREF
  __int128 v145; // [rsp+148h] [rbp-100h]
  __int64 v146; // [rsp+158h] [rbp-F0h]
  _QWORD v147[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int128 v148; // [rsp+170h] [rbp-D8h]
  __int64 v149; // [rsp+180h] [rbp-C8h]
  __int128 v150; // [rsp+188h] [rbp-C0h]
  char v151; // [rsp+198h] [rbp-B0h]
  __int64 *v152; // [rsp+1A0h] [rbp-A8h] BYREF
  __int128 v153; // [rsp+1A8h] [rbp-A0h]
  __int64 v154; // [rsp+1B8h] [rbp-90h]
  _QWORD v155[2]; // [rsp+1C0h] [rbp-88h] BYREF
  __int128 v156; // [rsp+1D0h] [rbp-78h]
  __int64 v157; // [rsp+1E0h] [rbp-68h]
  __int128 v158; // [rsp+1E8h] [rbp-60h]
  char v159; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v160; // [rsp+208h] [rbp-40h]

  v4 = (__int64 *)a1;
  v5 = a2;
  v160 = __readfsqword(0x28u);
  if ( (*a3 & 0xF) == 0xC )
  {
    if ( a2 == -1 )
      return 0;
    flags = get_flags_ex();
    if ( ((~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0) && !(unsigned __int8)is_spec_ea() )
      return 0;
  }
  v133 = &v131;
  v131 = 0;
  v132 = nullptr;
  v134 = &v131;
  v136 = 0;
  v135 = 0;
  copy_tinfo_t();
  LODWORD(v136) = a4 & 0xF1FFFFFF;
  if ( (a4 & 0xF1FFFFFF) == 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(50228);
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
      v87 = *(_QWORD *)a1;
      v17 = sub_3651E0();
      if ( v17 == 1 )
      {
LABEL_21:
        *(_DWORD *)(v7 + 64) = v136;
        sub_366060(v4 + 3, v5);
        sub_36EDD0((__int64)v4, v5, v7 + 56, *(_DWORD *)(v7 + 64));
        goto LABEL_22;
      }
      if ( v17 == -1 )
        goto LABEL_45;
      copy_tinfo_t();
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xC )
      {
        v152 = nullptr;
        v152 = (__int64 *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        if ( (get_tinfo_property() & 0xF) != 0xC )
        {
          clear_tinfo_t();
          clear_tinfo_t();
          goto LABEL_21;
        }
        v152 = nullptr;
        v152 = (__int64 *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v144 = 0;
      v146 = 0;
      v147[0] = 0;
      v147[1] = 0;
      v149 = 0;
      v151 = 16;
      v145 = 0;
      v148 = 0;
      v150 = 0;
      if ( !(unsigned __int8)get_tinfo_details() || !(_QWORD)v145 )
      {
LABEL_32:
        if ( v149 )
        {
          *(_QWORD *)&v150 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v20 = v144;
        if ( v144 )
        {
          if ( (_QWORD)v145 )
          {
            v21 = 0;
            v82 = v4;
            v22 = v145;
            do
            {
              v23 = (_QWORD *)(v20 + 80 * v21);
              clear_tinfo_t();
              if ( v23[5] )
              {
                v23[6] = 0;
                qfree();
              }
              if ( v23[2] )
              {
                v23[3] = 0;
                qfree();
              }
              ++v21;
              cleanup_argloc();
              v20 = v144;
            }
            while ( v22 != v21 );
            v4 = v82;
          }
          *(_QWORD *)&v145 = 0;
          qfree();
        }
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_45:
        copy_tinfo_t();
LABEL_46:
        v24 = *(_DWORD *)(v7 + 68) + 1;
        *(_DWORD *)(v7 + 68) = v24;
        if ( v24 <= 9 )
          sub_35E3F0(*v4, v7 + 8, 0.0);
        goto LABEL_21;
      }
      v152 = nullptr;
      v154 = 0;
      v155[0] = 0;
      v155[1] = 0;
      v157 = 0;
      v159 = 16;
      v153 = 0;
      v156 = 0;
      v158 = 0;
      LOBYTE(v93) = get_tinfo_details();
      if ( !(_BYTE)v93 || !(_QWORD)v153 )
      {
        LOBYTE(v93) = 0;
        v26 = v157;
        goto LABEL_77;
      }
      v105 = compare_arglocs();
      v26 = v157;
      if ( v105 || (_QWORD)v150 != (_QWORD)v158 )
        goto LABEL_62;
      if ( (_QWORD)v150 )
      {
        v27 = 0;
        do
        {
          if ( *(_DWORD *)(v149 + 8 * v27) != *(_DWORD *)(v157 + 8 * v27)
            || *(_DWORD *)(v149 + 8 * v27 + 4) != *(_DWORD *)(v157 + 8 * v27 + 4) )
          {
            goto LABEL_62;
          }
          ++v27;
        }
        while ( (_QWORD)v150 != v27 );
      }
      if ( (_QWORD)v145 )
      {
        v40 = v144;
        v41 = 0;
        v42 = 0;
        do
        {
          if ( (unsigned int)(*(_DWORD *)(v144 + 80 * v42) - 3) <= 1 )
          {
            v104 = v93;
            if ( !(_QWORD)v153 )
              goto LABEL_154;
            goto LABEL_109;
          }
          v42 = ++v41;
        }
        while ( v41 < (unsigned __int64)v145 );
        v104 = 0;
        if ( !(_QWORD)v153 )
          goto LABEL_115;
      }
      else
      {
        v104 = 0;
        if ( !(_QWORD)v153 )
          goto LABEL_132;
      }
LABEL_109:
      v43 = 0;
      v44 = 0;
      do
      {
        if ( (unsigned int)(LODWORD(v152[10 * v44]) - 3) <= 1 )
        {
          if ( v104 )
            goto LABEL_113;
          goto LABEL_62;
        }
        v44 = ++v43;
      }
      while ( v43 < (unsigned __int64)v153 );
      if ( v104 )
      {
LABEL_154:
        LOBYTE(v93) = 0;
        goto LABEL_77;
      }
LABEL_113:
      if ( (_QWORD)v145 )
      {
        v40 = v144;
LABEL_115:
        v88 = 0;
        v45 = 0;
        v94 = 0;
        while ( 1 )
        {
          v46 = v40 + 80 * v45;
          tinfo_size = get_tinfo_size();
          sub_1C1230((__int64)v137, v46, tinfo_size, 0);
          v90 = sub_363C40(&v152, v137, tinfo_size);
          cleanup_argloc();
          if ( v90 != -1 )
          {
            v91 = 10LL * v90;
            if ( !(unsigned int)compare_arglocs() )
            {
              v96 = &v152[v91];
              v47 = sub_3655A0(v87, v46 + 64, (__int64)&v152[v91 + 8], a4);
              if ( v47 == -1 )
              {
                copy_argloc();
                v72 = v96;
                if ( (__int64 *)(v46 + 16) != v96 + 2 )
                {
                  v73 = v96[3];
                  if ( v73 && (v101 = v73 - 1, v73 != 1) )
                  {
                    na = (const void *)v72[2];
                    if ( *(_QWORD *)(v46 + 32) < v73 )
                    {
                      v124 = v72;
                      v116 = v73;
                      *(_QWORD *)(v46 + 16) = qvector_reserve();
                      v72 = v124;
                      v73 = v116;
                    }
                    v75 = *(void **)(v46 + 16);
                    *(_QWORD *)(v46 + 24) = v73;
                    v122 = v72;
                    v114 = v73;
                    memmove(v75, na, v101);
                    v72 = v122;
                    *(_BYTE *)(*(_QWORD *)(v46 + 16) + v114 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v46 + 24) = 0;
                  }
                }
                if ( (__int64 *)(v46 + 40) != v72 + 5 )
                {
                  v74 = v72[6];
                  if ( v74 && (v102 = v74 - 1, v74 != 1) )
                  {
                    nb = (const void *)v72[5];
                    if ( *(_QWORD *)(v46 + 56) < v74 )
                    {
                      v125 = v72;
                      v117 = v72[6];
                      *(_QWORD *)(v46 + 40) = qvector_reserve();
                      v72 = v125;
                      v74 = v117;
                    }
                    v76 = *(void **)(v46 + 40);
                    *(_QWORD *)(v46 + 48) = v74;
                    v123 = v72;
                    v115 = v74;
                    memmove(v76, nb, v102);
                    v72 = v123;
                    *(_BYTE *)(*(_QWORD *)(v46 + 40) + v115 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v46 + 48) = 0;
                  }
                }
                v103 = (size_t)v72;
                copy_tinfo_t();
                v94 |= 1u;
                *(_DWORD *)(v46 + 72) = *(_DWORD *)(v103 + 72);
              }
              else if ( v47 == 1 )
              {
                copy_argloc();
                v48 = v96;
                if ( v96 + 2 != (__int64 *)(v46 + 16) )
                {
                  v49 = *(_QWORD *)(v46 + 24);
                  if ( v49 && (v97 = v49 - 1, v49 != 1) )
                  {
                    nd = *(const void **)(v46 + 16);
                    if ( v48[4] < v49 )
                    {
                      v129 = v48;
                      v121 = *(_QWORD *)(v46 + 24);
                      v80 = qvector_reserve();
                      v48 = v129;
                      v49 = v121;
                      v129[2] = v80;
                    }
                    v79 = (void *)v48[2];
                    v48[3] = v49;
                    v128 = v49;
                    v120 = v48;
                    memmove(v79, nd, v97);
                    v48 = v120;
                    *(_BYTE *)(v120[2] + v128 - 1) = 0;
                  }
                  else
                  {
                    v48[3] = 0;
                  }
                }
                if ( v48 + 5 != (__int64 *)(v46 + 40) )
                {
                  v50 = *(_QWORD *)(v46 + 48);
                  if ( v50 && (v98 = v50 - 1, v50 != 1) )
                  {
                    nc = *(const void **)(v46 + 40);
                    if ( v48[7] < v50 )
                    {
                      v127 = v48;
                      v119 = *(_QWORD *)(v46 + 48);
                      v78 = qvector_reserve();
                      v48 = v127;
                      v50 = v119;
                      v127[5] = v78;
                    }
                    v77 = (void *)v48[5];
                    v48[6] = v50;
                    v126 = v50;
                    v118 = v48;
                    memmove(v77, nc, v98);
                    v48 = v118;
                    *(_BYTE *)(v118[5] + v126 - 1) = 0;
                  }
                  else
                  {
                    v48[6] = 0;
                  }
                }
                v99 = (size_t)v48;
                copy_tinfo_t();
                v94 |= 2u;
                *(_DWORD *)(v99 + 72) = *(_DWORD *)(v46 + 72);
              }
            }
          }
          v45 = ++v88;
          if ( v88 >= (unsigned __int64)v145 )
            break;
          v40 = v144;
        }
LABEL_133:
        v51 = sub_3655A0(v87, (__int64)v147, (__int64)v155, a4);
        if ( v51 )
        {
          if ( v51 != -1 )
          {
            copy_tinfo_t();
            v94 |= 2u;
            goto LABEL_136;
          }
LABEL_156:
          copy_tinfo_t();
          v94 |= 1u;
        }
        else if ( !(unsigned __int8)compare_tinfo() )
        {
          goto LABEL_156;
        }
LABEL_136:
        v92 = v151 & 0xF0;
        if ( (v151 & 0xF0) == 0xC0 )
          v92 = HIDWORD(v146);
        if ( v92 <= 0x10 )
          v92 = getinf();
        v95 = v159 & 0xF0;
        if ( (v159 & 0xF0) == 0xC0 )
          v95 = HIDWORD(v154);
        if ( v95 <= 0x10 )
          v95 = getinf();
        if ( (v94 & 2) != 0 || v95 != 64 || v92 == 64 )
        {
          if ( (v94 & 1) != 0 )
          {
            if ( (unsigned __int64)v145 < (unsigned __int64)v153 )
            {
              v100 = v145;
              v53 = (int)v145;
              do
              {
                v61 = &v152[10 * v53];
                nf = get_tinfo_size();
                sub_1C1230((__int64)v137, (__int64)v61, nf, 0);
                n = sub_363C40(&v144, v137, nf);
                cleanup_argloc();
                if ( n >= 0 && n < (unsigned __int64)v145 )
                {
                  if ( (unsigned int)compare_arglocs() )
                    goto LABEL_174;
                }
                else
                {
                  v137[0] = 0;
                  copy_argloc();
                  v138 = nullptr;
                  v139 = 0;
                  if ( v61[3] )
                  {
                    ng = v61[3];
                    v138 = (void *)qalloc_or_throw();
                    v139.m128i_i64[1] = ng;
                    memcpy(v138, (const void *)v61[2], ng);
                    v139.m128i_i64[0] = ng;
                  }
                  v140 = nullptr;
                  v141 = 0;
                  if ( v61[6] )
                  {
                    ne = v61[6];
                    v140 = (void *)qalloc_or_throw();
                    v141.m128i_i64[1] = ne;
                    memcpy(v140, (const void *)v61[5], ne);
                    v141.m128i_i64[0] = ne;
                  }
                  v142 = 0;
                  copy_tinfo_t();
                  v54 = v144;
                  v143 = *((_DWORD *)v61 + 18);
                  v55 = v145;
                  if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
                  {
                    v144 = qvector_reserve();
                    v54 = v144;
                    v55 = v145;
                  }
                  v56 = v54 + 80 * v55;
                  *(_DWORD *)v56 = 0;
                  copy_argloc();
                  v57 = v138;
                  v138 = nullptr;
                  v58 = _mm_loadu_si128(&v139);
                  *(_QWORD *)(v56 + 16) = v57;
                  *(__m128i *)(v56 + 24) = v58;
                  v59 = v140;
                  v60 = _mm_load_si128(&v141);
                  v139 = 0;
                  v140 = nullptr;
                  v141 = 0;
                  *(_QWORD *)(v56 + 40) = v59;
                  *(_QWORD *)(v56 + 64) = 0;
                  *(__m128i *)(v56 + 48) = v60;
                  copy_tinfo_t();
                  *(_DWORD *)(v56 + 72) = v143;
                  *(_QWORD *)&v145 = v145 + 1;
                  clear_tinfo_t();
                  if ( v140 )
                  {
                    v141.m128i_i64[0] = 0;
                    qfree();
                  }
                  if ( v138 )
                  {
                    v139.m128i_i64[0] = 0;
                    qfree();
                  }
                  cleanup_argloc();
                }
                v53 = ++v100;
              }
              while ( v100 < (unsigned __int64)v153 );
            }
            if ( v104 || a4 & 0x8000000 | (v92 - 48) & 0xFFFFFFEF || ((v95 - 48) & 0xFFFFFFEF) != 0 )
              goto LABEL_198;
            v62 = &v144;
            v52 = v92 == 64;
          }
          else
          {
            v52 = v92 == 64;
            if ( v95 != 64 && v92 == 64 )
              goto LABEL_150;
            if ( v104
              || a4 & 0x8000000 | (v92 - 48) & 0xFFFFFFEF
              || (v62 = (__int64 *)&v152, ((v95 - 48) & 0xFFFFFFEF) != 0) )
            {
LABEL_203:
              if ( !v94 )
              {
                v93 = v95 == 64 || v92 == 64;
                if ( v95 != 64 && v92 != 64 )
                {
                  v26 = v157;
                  if ( (unsigned __int64)v145 < (unsigned __int64)v153 && (a4 & 0x8000000) == 0 )
                    goto LABEL_62;
LABEL_77:
                  if ( v26 )
                  {
                    *(_QWORD *)&v158 = 0;
                    qfree();
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v32 = v152;
                  if ( v152 )
                  {
                    if ( (_QWORD)v153 )
                    {
                      v84 = v5;
                      v33 = 0;
                      v34 = v153;
                      do
                      {
                        v35 = &v32[10 * v33];
                        clear_tinfo_t();
                        if ( v35[5] )
                        {
                          v35[6] = 0;
                          qfree();
                        }
                        if ( v35[2] )
                        {
                          v35[3] = 0;
                          qfree();
                        }
                        ++v33;
                        cleanup_argloc();
                        v32 = v152;
                      }
                      while ( v34 != v33 );
                      v5 = v84;
                    }
                    *(_QWORD *)&v153 = 0;
                    qfree();
                  }
                  if ( v149 )
                  {
                    *(_QWORD *)&v150 = 0;
                    qfree();
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v36 = v144;
                  if ( v144 )
                  {
                    if ( (_QWORD)v145 )
                    {
                      v85 = v5;
                      v37 = 0;
                      v38 = v145;
                      do
                      {
                        v39 = (_QWORD *)(v36 + 80 * v37);
                        clear_tinfo_t();
                        if ( v39[5] )
                        {
                          v39[6] = 0;
                          qfree();
                        }
                        if ( v39[2] )
                        {
                          v39[3] = 0;
                          qfree();
                        }
                        ++v37;
                        cleanup_argloc();
                        v36 = v144;
                      }
                      while ( v38 != v37 );
                      v5 = v85;
                    }
                    *(_QWORD *)&v145 = 0;
                    qfree();
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                  if ( !(_BYTE)v93 )
                    goto LABEL_21;
                  goto LABEL_46;
                }
                if ( (a4 & 0x8000000) != 0 )
                {
LABEL_150:
                  LOBYTE(v93) = 0;
                  v26 = v157;
                  goto LABEL_77;
                }
                if ( (_DWORD)v146 != (_DWORD)v154 )
                {
                  v26 = v157;
                  if ( (unsigned __int64)v145 >= (unsigned __int64)v153 )
                  {
                    LOBYTE(v93) = 0;
                    goto LABEL_77;
                  }
LABEL_62:
                  if ( v26 )
                  {
                    *(_QWORD *)&v158 = 0;
                    qfree();
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v28 = v152;
                  if ( v152 )
                  {
                    v29 = 0;
                    if ( (_QWORD)v153 )
                    {
                      v83 = v4;
                      v30 = v153;
                      do
                      {
                        v31 = &v28[10 * v29];
                        clear_tinfo_t();
                        if ( v31[5] )
                        {
                          v31[6] = 0;
                          qfree();
                        }
                        if ( v31[2] )
                        {
                          v31[3] = 0;
                          qfree();
                        }
                        ++v29;
                        cleanup_argloc();
                        v28 = v152;
                      }
                      while ( v30 != v29 );
                      v4 = v83;
                    }
                    *(_QWORD *)&v153 = 0;
                    qfree();
                  }
                  goto LABEL_32;
                }
                if ( !under_debugger )
                  sub_37CFE0(50225);
LABEL_246:
                BUG();
              }
LABEL_198:
              *(_QWORD *)v137 = 0;
              create_tinfo();
              if ( !(unsigned __int8)compare_tinfo() )
              {
                v71 = *(_QWORD *)(v7 + 56);
                *(_QWORD *)(v7 + 56) = *(_QWORD *)v137;
                *(_QWORD *)v137 = v71;
                clear_tinfo_t();
                v26 = v157;
                goto LABEL_77;
              }
              if ( !under_debugger )
                sub_37CFE0(50224);
              goto LABEL_246;
            }
          }
          if ( *((_QWORD *)&v148 + 1) == *((_QWORD *)&v156 + 1) )
          {
            if ( v92 == 64 )
              goto LABEL_203;
            v63 = *((_QWORD *)&v148 + 1);
            if ( v95 != 64 )
              goto LABEL_203;
          }
          else
          {
            v63 = *((_QWORD *)&v156 + 1);
            if ( *((_QWORD *)&v148 + 1) <= *((_QWORD *)&v156 + 1) )
              v63 = *((_QWORD *)&v148 + 1);
            if ( *((_QWORD *)&v156 + 1) >= *((_QWORD *)&v148 + 1) && !(v94 & 1) && v52 )
              goto LABEL_150;
          }
          if ( ((*((_QWORD *)&v148 + 1) >= *((_QWORD *)&v156 + 1)) & (((unsigned __int8)(v94 & 2) >> 1) ^ 1)) == 0
            || v95 != 64 )
          {
            v64 = v62[1];
            if ( !v64 )
              goto LABEL_236;
            v65 = 0;
            v66 = 0;
            do
            {
              v67 = *v62 + 80 * v66;
              if ( *(_DWORD *)v67 == 1 && *(_QWORD *)(v67 + 8) >= v63 )
                break;
              v66 = ++v65;
            }
            while ( v65 < v64 );
            sub_E5FF0(v62, v66);
            v94 |= 4u;
            if ( !v62[1] )
            {
LABEL_236:
              if ( !under_debugger )
                sub_37CFE0(50222);
              goto LABEL_246;
            }
            v68 = *((_BYTE *)v62 + 88);
            v69 = v68 & 0xF0;
            if ( (v68 & 0xF0) == 0xC0 )
              v69 = *((_DWORD *)v62 + 7);
            if ( v69 <= 0x10 )
              v69 = getinf();
            if ( v69 == 64 )
              goto LABEL_203;
            v70 = *((_BYTE *)v62 + 88);
            *((_DWORD *)v62 + 7) = 0;
            *((_BYTE *)v62 + 88) = v70 & 0xF | 0x40;
            goto LABEL_198;
          }
        }
LABEL_174:
        v26 = v157;
        goto LABEL_62;
      }
LABEL_132:
      v94 = 0;
      goto LABEL_133;
    }
  }
LABEL_6:
  v144 = v5;
  v152 = &v144;
  v9 = sub_378CD0((__m128i *)(a1 + 8), (unsigned __int64 *)&v144, &v152);
  v10 = v9 + 24;
  sub_3663C0((_QWORD *)(v9 + 32), (__int64)v130);
  copy_tinfo_t();
  *(_QWORD *)(v10 + 64) = v136;
LABEL_22:
  v11 = 1;
LABEL_11:
  clear_tinfo_t();
  v12 = (_QWORD **)v132;
  if ( v132 )
  {
    do
    {
      sub_365B50(v12[3]);
      v13 = v12;
      v12 = (_QWORD **)v12[2];
      operator delete(v13, 0x28u);
    }
    while ( v12 );
  }
  return v11;
}

