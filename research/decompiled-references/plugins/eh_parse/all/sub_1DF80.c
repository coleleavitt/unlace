__int64 __fastcall sub_1DF80(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        __m128 a9,
        char a10,
        int a11)
{
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned int dword; // r14d
  __int64 v16; // r13
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // rax
  char v26; // dl
  unsigned __int32 v27; // eax
  int v28; // r9d
  unsigned int v29; // r13d
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rbx
  __int64 i; // r13
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // r14d
  int v37; // r14d
  unsigned __int64 v38; // rdx
  int v39; // r14d
  __int64 v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  char v43; // al
  char v44; // al
  __int64 v45; // r12
  __int64 v46; // r13
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r13
  int v50; // eax
  __int64 v51; // r12
  __m128 v52; // xmm0
  char *v53; // r14
  __int64 m; // rax
  char *v55; // r8
  bool v56; // zf
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // r9
  __m128 v60; // xmm0
  __m128i v61; // xmm0
  __int64 v62; // rdi
  int flags; // eax
  __int64 v64; // r13
  int v65; // eax
  char v66; // al
  char fixups; // al
  char v68; // al
  __int64 v69; // rsi
  __int64 v70; // rcx
  _QWORD *v71; // rdx
  _QWORD *v72; // rax
  char *v73; // rax
  char *v74; // rdi
  char *v75; // r9
  __int64 v76; // r13
  __int64 v77; // r14
  __int64 v78; // r12
  char *v79; // rdx
  char *v80; // rax
  __int64 v81; // rdi
  unsigned __int64 *v82; // r13
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // r14
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // r13
  char v92; // r14
  __int64 j; // r12
  __int64 v94; // rax
  __int64 *func; // rax
  __int64 v96; // rbx
  __int64 v97; // r13
  char v98; // r14
  __int64 k; // r12
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // r14
  __int64 v103; // rcx
  int v104; // r13d
  __int64 v105; // r14
  __int64 v106; // rax
  __int64 v107; // r12
  __int64 v108; // r14
  int v109; // r13d
  int v110; // eax
  int v111; // r12d
  __int64 v112; // rax
  __int64 v113; // r14
  unsigned int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // r14
  unsigned int v118; // eax
  __int64 v119; // r12
  __int64 v120; // r13
  unsigned int v121; // eax
  __int64 v122; // rdx
  _DWORD *v123; // r12
  __int64 v124; // r13
  __int64 v125; // r13
  __int64 *v126; // rax
  _DWORD *v127; // rdi
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rsi
  __int64 v130; // r13
  __int64 v131; // rax
  __int64 v132; // r13
  __int64 *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // r12
  __int64 v137; // rax
  __int64 v138; // r12
  _QWORD *v139; // rax
  __int64 v140; // r13
  int v141; // eax
  unsigned __int64 v142; // rbx
  __int64 v143; // rax
  __int64 v144; // r12
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  __int64 v147; // rax
  size_t nb; // [rsp+10h] [rbp-1A0h]
  __int64 na; // [rsp+10h] [rbp-1A0h]
  bool n; // [rsp+10h] [rbp-1A0h]
  __int64 v151; // [rsp+20h] [rbp-190h]
  int v152; // [rsp+20h] [rbp-190h]
  int v153; // [rsp+20h] [rbp-190h]
  unsigned __int64 v154; // [rsp+28h] [rbp-188h]
  char v155; // [rsp+28h] [rbp-188h]
  __int64 v156; // [rsp+30h] [rbp-180h] BYREF
  __int64 v157; // [rsp+38h] [rbp-178h]
  int *v158; // [rsp+40h] [rbp-170h]
  __int64 v159; // [rsp+48h] [rbp-168h]
  __m128i v160; // [rsp+50h] [rbp-160h] BYREF
  __int64 v161; // [rsp+60h] [rbp-150h]
  unsigned __int64 v162; // [rsp+68h] [rbp-148h]
  char *v163; // [rsp+70h] [rbp-140h]
  unsigned __int64 v164; // [rsp+78h] [rbp-138h]
  unsigned __int64 v165; // [rsp+80h] [rbp-130h]
  __int64 v166; // [rsp+88h] [rbp-128h]
  __int64 v167; // [rsp+90h] [rbp-120h] BYREF
  __int128 v168; // [rsp+98h] [rbp-118h]
  void *src; // [rsp+B0h] [rbp-100h] BYREF
  __int128 v170; // [rsp+B8h] [rbp-F8h]
  __int64 v171; // [rsp+D0h] [rbp-E0h] BYREF
  __int128 v172; // [rsp+D8h] [rbp-D8h]
  _OWORD v173[3]; // [rsp+F0h] [rbp-C0h] BYREF
  _BYTE v174[24]; // [rsp+120h] [rbp-90h] BYREF
  __int128 v175; // [rsp+138h] [rbp-78h]
  int v176; // [rsp+154h] [rbp-5Ch] BYREF
  int v177; // [rsp+158h] [rbp-58h]
  int v178; // [rsp+15Ch] [rbp-54h]
  __int64 v179; // [rsp+160h] [rbp-50h]
  __int64 v180; // [rsp+168h] [rbp-48h]
  __int64 v181; // [rsp+170h] [rbp-40h]
  unsigned __int64 v182; // [rsp+178h] [rbp-38h]

  v12 = a6;
  v13 = a4;
  v166 = a1;
  v164 = a2;
  v165 = a3;
  LODWORD(v163) = a11;
  v182 = __readfsqword(0x28u);
  if ( (_BYTE)a6 )
  {
    if ( a5 && (unsigned __int8)get_fixups(0, a4, 4) )
      return 0;
    dword = get_dword(v13);
    v16 = *(_QWORD *)(*(_QWORD *)(v166 + 24) + 16LL);
    if ( (a10 & 2) == 0
      || (flags = get_flags_ex(v13, 4, v14), (flags & 0x600) == 0x400) && (flags & 0xF0000000) == 0x20000000 )
    {
      v13 = v16 & (a5 + dword);
    }
    else
    {
      sub_111C0(v166, v13, 4);
      create_data(v13, 0x20000000, 4, -1);
      sub_11320(v166, v13);
      v13 = v16 & (a5 + dword);
    }
  }
  if ( !(unsigned __int8)is_mapped(v13) )
    return 0;
  v19 = getseg(v13);
  if ( !v19 )
    return 0;
  v20 = v13 + 32;
  if ( *(_QWORD *)(v19 + 8) < (unsigned __int64)(v13 + 32) )
    return 0;
  LOBYTE(v161) = get_fixups(0, v13, 4);
  if ( (_BYTE)v161 )
    return 0;
  v21 = (unsigned int)get_dword(v13) - 429065504;
  if ( (unsigned int)v21 > 2 )
    return 0;
  v22 = qword_277A0[v21];
  if ( a5 )
  {
    v162 = qword_277A0[v21];
    v64 = *(_QWORD *)(v166 + 8);
    v65 = getinf(5);
    v22 = v162;
    if ( (unsigned int)(v65 - 10) <= 1 && !*(_DWORD *)(v64 + 4) )
    {
      v66 = getinf_flag(3, 4);
      v22 = v162;
      if ( v66 )
      {
        fixups = get_fixups(0, v13, v162);
        v22 = v162;
        if ( fixups )
          return 0;
      }
    }
  }
  if ( (v22 == 40 || (a7 = 0.0, memset(v173, 0, 40), v22 != 28))
    && ((v162 = v22, v23 = *(_QWORD *)(v166 + 8), v24 = getinf(5), v22 = v162, (unsigned int)(v24 - 10) > 1)
     || *(_DWORD *)(v23 + 4)
     || (v68 = getinf_flag(3, 4), v22 = v162, !v68)) )
  {
    if ( get_bytes(v173, v22 - 4, v13, 0, 0) != v22 - 4 )
      return 0;
    v25 = *(_QWORD *)((char *)&v173[1] + 12);
    HIDWORD(v173[1]) = 0;
    *(_QWORD *)&v173[2] = v25;
  }
  else
  {
    v162 = v22;
    if ( get_bytes(v173, v22, v13, 0, 0) != v22 )
      return 0;
  }
  v26 = getinf_flag(3, 32);
  v27 = DWORD2(v173[0]);
  v160.m128i_i32[0] = v173[1];
  LODWORD(v162) = DWORD2(v173[1]);
  if ( v26 )
  {
    v27 = _byteswap_ulong(DWORD2(v173[0]));
    v160.m128i_i32[0] = _byteswap_ulong(v173[1]);
    *(_QWORD *)&v173[0] = _byteswap_uint64(__PAIR64__(v173[0], DWORD1(v173[0])));
    *((_QWORD *)&v173[0] + 1) = __PAIR64__(_byteswap_ulong(HIDWORD(v173[0])), v27);
    *(_QWORD *)&v173[1] = __PAIR64__(_byteswap_ulong(DWORD1(v173[1])), v160.m128i_u32[0]);
    LODWORD(v162) = _byteswap_ulong(DWORD2(v173[1]));
    *((_QWORD *)&v173[1] + 1) = __PAIR64__(_byteswap_ulong(HIDWORD(v173[1])), v162);
    *(_QWORD *)&v173[2] = _byteswap_uint64(__PAIR64__(v173[2], DWORD1(v173[2])));
  }
  v159 = *(_QWORD *)(*(_QWORD *)(v166 + 24) + 16LL);
  v160.m128i_i64[1] = v159 & (a5 + v27);
  if ( (unsigned __int8)is_loaded(v13) )
  {
    v28 = get_dword(v13);
    if ( (unsigned int)(v28 - 429065504) > 2 )
    {
      if ( (debug & 8) != 0 )
        sub_E3D0((__int64)"%a: MS EH FuncInfo uses unknown magic 0x%x\n", a7, v13);
    }
    else
    {
      v29 = v28 - 429065500;
      LODWORD(v158) = v28;
      v30 = sub_13410(v166, v28 - 429065500);
      v31 = (int)v158;
      if ( v30 )
      {
        LODWORD(v157) = a10 & 2;
        LOBYTE(v156) = (a10 & 2) != 0;
        if ( (a10 & 2) != 0 )
        {
          sub_13520(v166, v13, v29, v30, 1);
          v31 = (int)v158;
        }
        if ( (unsigned int)(v31 - 429065505) <= 1 )
        {
          v101 = *(_QWORD *)(v166 + 8);
          if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v101 + 4) || !(unsigned __int8)getinf_flag(3, 4) )
            v20 = v13 + 28;
          v102 = sub_1A130(v166, v20, a5);
          if ( v102 != -1 )
          {
            v103 = sub_13410(v166, 7);
            if ( v103 )
            {
              if ( (_DWORD)v157 )
                sub_13520(v166, v102, 7, v103, 1);
              v104 = get_dword(v102);
              if ( v104 > 0 )
              {
                v105 = sub_1A130(v166, v102 + 4, a5);
                if ( v105 != -1 )
                {
                  LODWORD(v158) = v12;
                  do
                  {
                    v106 = sub_1A280(v166, v105, a5, v156);
                    if ( !v106 )
                      break;
                    v105 += v106;
                    --v104;
                  }
                  while ( v104 );
                  LOBYTE(v12) = (_BYTE)v158;
                }
              }
            }
          }
        }
        v32 = v13 + 4;
        v158 = &v176;
        for ( i = 0; i != 3; ++i )
        {
          v34 = v166;
          v158[i] = get_dword(v32);
          v35 = v32 + 4;
          v32 += 8;
          *(&v179 + i) = sub_1A130(v34, v35, a5);
        }
        v36 = v176;
        if ( v176 )
        {
          v90 = v179;
          if ( sub_1A1A0(v176, v179, 8u) )
          {
            v91 = v90 + 8 + 8LL * (unsigned int)(v36 - 1);
            v92 = v12;
            for ( j = v90 + 8; ; j += 8 )
            {
              v94 = sub_13410(v166, 8);
              if ( v94 )
              {
                if ( (_DWORD)v157 )
                  sub_13520(v166, v90, 8, v94, 1);
                sub_1A130(v166, v90 + 4, a5);
                nullsub_2();
              }
              v90 = j;
              if ( v91 == j )
                break;
            }
            LOBYTE(v12) = v92;
          }
        }
        v37 = v177;
        if ( v177 )
        {
          v158 = (int *)v180;
          if ( v180 != -1 )
          {
            v38 = sub_13410(v166, 12);
            if ( v38 )
            {
              if ( sub_1A1A0(v37, (__int64)v158, v38) )
              {
                v155 = v12;
                do
                {
                  v140 = sub_13410(v166, 12);
                  if ( !v140 )
                    break;
                  v141 = get_dword(v158 + 3);
                  v142 = (unsigned int)v141;
                  v153 = v141;
                  if ( v141 >= 0 )
                  {
                    if ( (_DWORD)v157 )
                      sub_13520(v166, v158, 12, v140, 1);
                    if ( (_DWORD)v142 )
                    {
                      v143 = sub_1A130(v166, (__int64)(v158 + 4), a5);
                      v144 = v143;
                      if ( v143 != -1 )
                      {
                        v145 = getseg(v143);
                        if ( v145 )
                        {
                          v146 = *(_QWORD *)(v145 + 8) - v144;
                          if ( v146 )
                          {
                            if ( v146 >> 4 >= v142 )
                            {
                              do
                              {
                                v147 = sub_1A280(v166, v144, a5, v156);
                                if ( !v147 )
                                  break;
                                v144 += v147;
                                --v153;
                              }
                              while ( v153 );
                            }
                          }
                        }
                      }
                    }
                  }
                  v158 = (int *)((char *)v158 + v140);
                  --v37;
                }
                while ( v37 );
                LOBYTE(v12) = v155;
              }
            }
          }
        }
        v39 = v178;
        if ( v178 )
        {
          v96 = v181;
          if ( sub_1A1A0(v178, v181, 8u) )
          {
            v97 = v96 + 8 + 8LL * (unsigned int)(v39 - 1);
            v98 = v12;
            for ( k = v96 + 8; ; k += 8 )
            {
              v100 = sub_13410(v166, 11);
              if ( v100 )
              {
                if ( (_DWORD)v157 )
                  sub_13520(v166, v96, 11, v100, 1);
                sub_1A130(v166, v96, a5);
                nullsub_2();
              }
              v96 = k;
              if ( k == v97 )
                break;
            }
            LOBYTE(v12) = v98;
          }
        }
      }
    }
  }
  if ( !sub_1A1A0(SDWORD1(v173[0]), v160.m128i_i64[1], 8u)
    || !sub_1A1A0(SDWORD1(v173[1]), v159 & (a5 + (unsigned int)v162), 8u) )
  {
    return 0;
  }
  v40 = *(_QWORD *)(v166 + 8);
  v154 = 20;
  if ( (unsigned int)getinf(5) - 10 <= 1 )
  {
    v154 = 16;
    if ( *(_DWORD *)(v40 + 4) != 24 )
      v154 = 20;
  }
  v157 = v159 & (a5 + v160.m128i_u32[0]);
  LOBYTE(v41) = sub_1A1A0(SHIDWORD(v173[0]), v157, v154);
  v17 = v41;
  if ( !(_BYTE)v41 )
    return 0;
  v42 = DWORD1(v173[1]);
  v167 = 0;
  v168 = 0;
  if ( DWORD1(v173[1]) )
  {
    v43 = 0;
    if ( (_BYTE)v163 )
    {
      v43 = getinf_flag(3, 4);
      v42 = DWORD1(v173[1]);
    }
    v44 = sub_1B200(v166, &v167, v42, v159 & (a5 + (unsigned int)v162), a5, SDWORD1(v173[0]), v43);
  }
  else
  {
    func = (__int64 *)get_func(v164);
    v44 = sub_1DC00(v166, (__int64)&v167, SDWORD1(v173[0]), func);
  }
  if ( !v44 )
  {
    v17 = 0;
    goto LABEL_111;
  }
  if ( (_BYTE)v12 )
  {
    v162 = v164;
  }
  else
  {
    v165 = -1;
    v162 = 0;
  }
  v45 = SDWORD1(v173[0]);
  if ( SDWORD1(v173[0]) > 0 )
  {
    v46 = *(_QWORD *)(v166 + 8);
    if ( (unsigned int)getinf(5) - 10 <= 1 && !*(_DWORD *)(v46 + 4) )
      LOBYTE(v161) = getinf_flag(3, 4);
    src = nullptr;
    v170 = 0;
    v151 = v160.m128i_i64[1] + 8 * v45;
    do
    {
      v47 = get_dword(v160.m128i_i64[1] + 4);
      v48 = *(_QWORD *)(*(_QWORD *)(v166 + 24) + 16LL) & (a5 + v47);
      v49 = v48;
      if ( a5 != v48 && (unsigned __int8)is_mapped(v48) )
      {
        v50 = get_dword(v160.m128i_i64[1]);
        v172 = 0;
        v171 = 0;
        sub_1A7B0(&v171, &v167, v50 + 1, 0x7FFFFFFF);
        if ( (int)v172 > 0 )
        {
          v51 = 0;
          v159 = 16 * ((unsigned int)(v172 - 1) + 1LL);
          while ( 1 )
          {
            v52 = (__m128)_mm_loadu_si128((const __m128i *)(v171 + v51));
            v175 = 0;
            v53 = (char *)src;
            *(_QWORD *)&v174[16] = 0;
            *(__m128 *)v174 = v52;
            for ( m = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v170) >> 3); m > 0; m >>= 1 )
            {
              while ( 1 )
              {
                v55 = &v53[40 * (m >> 1)];
                if ( *(_QWORD *)v55 >= v52.m128_u64[0] )
                  break;
                v53 = v55 + 40;
                m = m - 1 - (m >> 1);
                if ( m <= 0 )
                  goto LABEL_62;
              }
            }
LABEL_62:
            if ( v53 == (char *)src + 40 * (_QWORD)v170 )
              break;
            if ( v52.m128_u64[0] != *(_QWORD *)v53 )
              break;
            a9 = _mm_movehl_ps(a9, v52);
            if ( a9.m128_u64[0] != *((_QWORD *)v53 + 1) )
              break;
            v69 = *((_QWORD *)v53 + 2);
            v70 = *((_QWORD *)v53 + 3);
            v71 = (_QWORD *)(v69 + 8 * v70);
            if ( (_QWORD *)v69 != v71 )
            {
              v72 = *((_QWORD **)v53 + 2);
              while ( v49 != *v72 )
              {
                if ( v71 == ++v72 )
                  goto LABEL_94;
              }
              if ( v71 != v72 )
                goto LABEL_70;
            }
LABEL_94:
            if ( *((_QWORD *)v53 + 4) < (unsigned __int64)(v70 + 1) )
            {
              v135 = qvector_reserve(v53 + 16, v69, v70 + 1, 8);
              *((_QWORD *)v53 + 2) = v135;
              v69 = v135;
            }
            *(_QWORD *)(v69 + 8LL * (*((_QWORD *)v53 + 3))++) = v49;
            v62 = *(_QWORD *)&v174[16];
            if ( *(_QWORD *)&v174[16] )
              goto LABEL_69;
LABEL_70:
            v51 += 16;
            if ( v159 == v51 )
            {
              if ( (_BYTE)v161 )
                goto LABEL_72;
LABEL_129:
              set_abits(v49, 0x20000000);
              goto LABEL_73;
            }
          }
          *(_QWORD *)&v174[16] = qvector_reserve(&v174[16], 0, 1, 8);
          v163 = nullptr;
          *(_QWORD *)(*(_QWORD *)&v174[16] + 8 * v175) = v49;
          v158 = *(int **)v174;
          v56 = (_QWORD)v175 == -1;
          v57 = v175 + 1;
          v160.m128i_i64[0] = v175 + 1;
          *(_QWORD *)&v175 = v175 + 1;
          v156 = *(_QWORD *)&v174[8];
          if ( !v56 )
          {
            na = 8 * v57;
            v163 = (char *)qalloc_or_throw(8 * v57);
            memcpy(v163, *(const void **)&v174[16], na);
          }
          v58 = v170;
          v59 = v53 - (_BYTE *)src;
          if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
          {
            nb = v53 - (_BYTE *)src;
            v73 = (char *)qvector_reserve(&src, src, v170 + 1, 40);
            v59 = nb;
            src = v73;
            v53 = &v73[nb];
            v58 = v170;
          }
          memmove(v53 + 40, v53, 40 * v58 - v59);
          v60 = _mm_loadh_ps((const double *)&v156);
          *((_QWORD *)v53 + 2) = v163;
          *(__m128 *)v53 = v60;
          v61 = _mm_loadl_epi64(&v160);
          *(_QWORD *)&v170 = v170 + 1;
          *(__m128i *)(v53 + 24) = _mm_unpacklo_epi64(v61, v61);
          v62 = *(_QWORD *)&v174[16];
          if ( !*(_QWORD *)&v174[16] )
            goto LABEL_70;
LABEL_69:
          *(_QWORD *)&v175 = 0;
          qfree(v62);
          goto LABEL_70;
        }
        if ( !(_BYTE)v161 )
        {
          if ( !(_DWORD)v172 )
          {
            v136 = *(_QWORD *)(v166 + 8);
            if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v136 + 4) || !(unsigned __int8)getinf_flag(3, 4) )
            {
              v137 = get_func(v164);
              v138 = v137;
              if ( v137 && (int)get_func_chunknum(v137, v49) < 0 && (unsigned __int8)sub_EB40(v166, v138, v49) )
              {
                v139 = (_QWORD *)get_func(v164);
                sub_EAB0(v139);
              }
            }
            else
            {
              sub_1B460(v166, v49, 0);
            }
          }
          goto LABEL_129;
        }
LABEL_72:
        sub_1B460(v166, v49, 0);
LABEL_73:
        if ( v171 )
        {
          *(_QWORD *)&v172 = 0;
          qfree(v171);
        }
      }
      v160.m128i_i64[1] += 8;
    }
    while ( v151 != v160.m128i_i64[1] );
    v74 = (char *)src;
    if ( (int)v170 > 0 )
    {
      v75 = nullptr;
      v161 = 8 * (5LL * (unsigned int)(v170 - 1) + 5);
      do
      {
        v82 = (unsigned __int64 *)&v75[(_QWORD)v74];
        v83 = *(_QWORD *)&v75[(_QWORD)v74 + 24];
        if ( (int)v83 > 0 )
        {
          v84 = 0;
          v85 = 8LL * (unsigned int)(v83 - 1) + 8;
          do
          {
            v86 = v82[1];
            v87 = *v82;
            if ( v162 < v86 && v87 < v165 )
            {
              if ( v162 >= v87 )
                v87 = v162;
              if ( v165 <= v86 )
                v86 = v165;
              v88 = v86;
              if ( v87 < v86 )
              {
                v89 = v82[2];
                v163 = v75;
                sub_F7D0(v166, v87, v88, *(_QWORD *)(v89 + v84), -2);
                v75 = v163;
              }
            }
            v84 += 8;
          }
          while ( v85 != v84 );
          v74 = (char *)src;
        }
        v75 += 40;
      }
      while ( v75 != (char *)v161 );
    }
    if ( v74 )
    {
      v76 = v170;
      if ( (_QWORD)v170 )
      {
        v77 = v166;
        v78 = 0;
        v79 = v74;
        do
        {
          v80 = &v79[40 * v78];
          v81 = *((_QWORD *)v80 + 2);
          if ( v81 )
          {
            *((_QWORD *)v80 + 3) = 0;
            qfree(v81);
            v79 = (char *)src;
          }
          ++v78;
        }
        while ( v76 != v78 );
        v166 = v77;
        v74 = v79;
      }
      *(_QWORD *)&v170 = 0;
      qfree(v74);
    }
  }
  v152 = HIDWORD(v173[0]);
  LOBYTE(v159) = SHIDWORD(v173[0]) <= 0 || (_QWORD)v168 == 0;
  if ( !(_BYTE)v159 )
  {
    v107 = *(_QWORD *)(v166 + 8);
    n = 0;
    if ( (unsigned int)getinf(5) - 10 <= 1 )
      n = *(_DWORD *)(v107 + 4) == 24;
    if ( (unsigned int)getinf(5) - 10 <= 1 && !*(_DWORD *)(v107 + 4) )
      LOBYTE(v159) = getinf_flag(3, 4);
    LODWORD(v156) = 0;
    while ( 1 )
    {
      v108 = v157;
      if ( !(unsigned __int8)is_loaded(v157) )
        goto LABEL_111;
      v109 = get_dword(v108);
      v110 = get_dword(v108 + 4);
      v157 = v108;
      v111 = v110;
      v112 = v108 + 8;
      v113 = v108 + 12;
      if ( n )
        v113 = v112;
      v160.m128i_i32[0] = get_dword(v113);
      v114 = get_dword(v113 + 4);
      v115 = *(_QWORD *)(v166 + 24);
      v157 += v154;
      v116 = *(_QWORD *)(v115 + 16) & (a5 + v114);
      memset(v174, 0, sizeof(v174));
      v117 = v116;
      sub_1A7B0((__int64 *)v174, &v167, v109, v111);
      LODWORD(v163) = 0;
      if ( v160.m128i_i32[0] > 0 )
        break;
LABEL_179:
      if ( *(_QWORD *)v174 )
      {
        *(_QWORD *)&v174[8] = 0;
        qfree(*(_QWORD *)v174);
      }
      LODWORD(v156) = v156 + 1;
      if ( v152 <= (int)v156 )
        goto LABEL_111;
    }
    while ( 1 )
    {
      if ( !(unsigned __int8)is_loaded(v117) )
        goto LABEL_179;
      v118 = get_dword(v117 + 4);
      v119 = v166;
      v120 = v118;
      v161 = *(_QWORD *)(*(_QWORD *)(v166 + 24) + 16LL);
      v121 = get_dword(v117 + 12);
      v122 = *(_QWORD *)(v119 + 24);
      v123 = (_DWORD *)(*(_QWORD *)(v122 + 16) & (a5 + v121));
      if ( (_DWORD *)a5 == v123 )
      {
        if ( !(_BYTE)v159 )
          goto LABEL_178;
      }
      else
      {
        if ( !(unsigned __int8)is_mapped(*(_QWORD *)(v122 + 16) & (a5 + v121))
          || !getseg(v123)
          || (unsigned __int8)is_spec_ea(v123) )
        {
          goto LABEL_179;
        }
        if ( *(int *)&v174[8] > 0 )
        {
          v124 = v161 & (a5 + v120);
          v160.m128i_i8[8] = *(_DWORD *)&v174[8] != 1;
          if ( a5 == v124 )
            v124 = -1;
          v158 = (int *)v124;
          v161 = 16 * ((unsigned int)(*(_DWORD *)&v174[8] - 1) + 1LL);
          v125 = 0;
          do
          {
            v127 = *(_DWORD **)(v125 + *(_QWORD *)v174);
            if ( v123 != v127 || !v160.m128i_i8[8] )
            {
              v128 = *(_QWORD *)(v125 + *(_QWORD *)v174 + 8);
              if ( (unsigned __int64)v127 < v165 && v162 < v128 )
              {
                v129 = v162;
                if ( v162 < (unsigned __int64)v127 )
                  v129 = *(_QWORD *)(v125 + *(_QWORD *)v174);
                if ( v165 <= v128 )
                  v128 = v165;
                if ( v129 < v128 )
                {
                  sub_F7D0(v166, v129, v128, (__int64)v123, (__int64)v158);
                  v127 = *(_DWORD **)(*(_QWORD *)v174 + v125);
                }
              }
              v126 = (__int64 *)get_func(v127);
              sub_103C0(v166, v126, v123);
            }
            v125 += 16;
          }
          while ( v125 != v161 );
        }
        v130 = *(_QWORD *)(v166 + 8);
        if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v130 + 4) || !(unsigned __int8)getinf_flag(3, 4) )
        {
          v131 = get_func(v164);
          v132 = v131;
          if ( v131 && (int)get_func_chunknum(v131, v123) < 0 && (unsigned __int8)sub_EB40(v166, v132, (__int64)v123) )
          {
            v134 = (_QWORD *)get_func(v164);
            sub_EAB0(v134);
          }
        }
        else
        {
          sub_1B460(v166, (__int64)v123, 1);
        }
        if ( !(_BYTE)v159 )
        {
          v133 = (__int64 *)get_func(v164);
          sub_103C0(v166, v133, v123);
LABEL_178:
          v117 += 16;
          goto LABEL_174;
        }
      }
      v117 += 20;
LABEL_174:
      LODWORD(v163) = (_DWORD)v163 + 1;
      if ( v160.m128i_i32[0] == (_DWORD)v163 )
        goto LABEL_179;
    }
  }
LABEL_111:
  if ( v167 )
  {
    *(_QWORD *)&v168 = 0;
    qfree(v167);
  }
  return v17;
}
