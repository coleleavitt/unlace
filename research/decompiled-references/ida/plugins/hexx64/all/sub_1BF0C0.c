__int64 __fastcall sub_1BF0C0(_QWORD *a1, unsigned __int64 a2, int *a3, __int64 a4)
{
  __m128i v4; // xmm0
  int v5; // eax
  char v6; // r13
  int v7; // r12d
  _QWORD *v8; // rbp
  __int64 v9; // rax
  int *v10; // r15
  __int64 v11; // r14
  int v12; // ecx
  char v13; // si
  int *v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned int *v27; // rdx
  unsigned int *v28; // rax
  int dtype_size; // r12d
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbp
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // edi
  __int64 v38; // rax
  __int64 *v39; // rbp
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 head; // r15
  unsigned __int64 v45; // rbp
  _QWORD *v46; // rbp
  __int64 v47; // r12
  char *v48; // r9
  __int64 v49; // rax
  int v50; // edx
  char *v51; // rax
  int v52; // eax
  __int64 **v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  _QWORD *v58; // rbx
  __int64 v59; // rsi
  __m128i si128; // xmm0
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r15
  __int64 v64; // r14
  int v65; // edx
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  _QWORD *v68; // r12
  __int64 *v69; // rdi
  __int64 *v70; // rdi
  unsigned int i; // r12d
  char j; // al
  _QWORD *v73; // rax
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbp
  unsigned __int64 v76; // r12
  __int64 v77; // rsi
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rax
  signed __int64 v82; // rdx
  int v83; // edx
  unsigned int v84; // r12d
  char *v85; // rax
  unsigned int *v86; // rax
  unsigned __int64 v87; // r15
  __int64 v88; // r14
  void *v89; // rax
  unsigned __int64 v90; // r12
  __int64 *v91; // rax
  __int64 v92; // rdi
  unsigned int v93; // r12d
  unsigned int v94; // eax
  double v95; // xmm0_8
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // r12
  unsigned int k; // eax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r15
  __int64 v104; // r12
  __int64 v105; // r12
  __int64 v106; // rcx
  __int64 v107; // rcx
  _QWORD *v108; // r12
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rcx
  signed int v114; // r15d
  __int64 v115; // r12
  __int64 v116; // rsi
  double v117; // xmm0_8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r15
  __int64 v121; // r12
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // r15
  signed int v125; // eax
  int v126; // [rsp+0h] [rbp-1C0h]
  _QWORD *v127; // [rsp+0h] [rbp-1C0h]
  __int64 v128; // [rsp+0h] [rbp-1C0h]
  _QWORD *v129; // [rsp+0h] [rbp-1C0h]
  __int64 v131; // [rsp+10h] [rbp-1B0h]
  int v132; // [rsp+10h] [rbp-1B0h]
  unsigned int *v133; // [rsp+10h] [rbp-1B0h]
  char *v134; // [rsp+10h] [rbp-1B0h]
  int n; // [rsp+20h] [rbp-1A0h]
  size_t na; // [rsp+20h] [rbp-1A0h]
  size_t nb; // [rsp+20h] [rbp-1A0h]
  __int64 nd; // [rsp+20h] [rbp-1A0h]
  unsigned int nc; // [rsp+20h] [rbp-1A0h]
  char v143; // [rsp+38h] [rbp-188h]
  _QWORD *v144; // [rsp+38h] [rbp-188h]
  char v145; // [rsp+38h] [rbp-188h]
  __int64 v146; // [rsp+40h] [rbp-180h]
  unsigned __int64 v147; // [rsp+48h] [rbp-178h]
  unsigned __int64 v148; // [rsp+48h] [rbp-178h]
  unsigned __int64 v149; // [rsp+48h] [rbp-178h]
  char *v150; // [rsp+48h] [rbp-178h]
  unsigned int v151; // [rsp+50h] [rbp-170h]
  int v152; // [rsp+5Ch] [rbp-164h]
  __int128 v153; // [rsp+68h] [rbp-158h] BYREF
  __int64 v154; // [rsp+78h] [rbp-148h] BYREF
  __int64 v155; // [rsp+80h] [rbp-140h]
  __int64 v156; // [rsp+88h] [rbp-138h] BYREF
  __int64 v157; // [rsp+90h] [rbp-130h]
  __int64 v158; // [rsp+98h] [rbp-128h]
  __int128 v159; // [rsp+A0h] [rbp-120h]
  unsigned __int64 v160; // [rsp+B8h] [rbp-108h] BYREF
  __int128 v161; // [rsp+C0h] [rbp-100h]
  unsigned int *v162; // [rsp+D0h] [rbp-F0h] BYREF
  __int128 v163; // [rsp+D8h] [rbp-E8h]
  int v164; // [rsp+F0h] [rbp-D0h] BYREF
  int *v165; // [rsp+F8h] [rbp-C8h]
  int *v166; // [rsp+100h] [rbp-C0h]
  int *v167; // [rsp+108h] [rbp-B8h]
  __int64 v168; // [rsp+110h] [rbp-B0h]
  void *src; // [rsp+118h] [rbp-A8h] BYREF
  __int128 v170; // [rsp+120h] [rbp-A0h]
  __int64 v171; // [rsp+130h] [rbp-90h]
  unsigned __int64 v172; // [rsp+138h] [rbp-88h] BYREF
  __int64 v173; // [rsp+140h] [rbp-80h]
  __int64 v174; // [rsp+148h] [rbp-78h] BYREF
  __int64 v175; // [rsp+150h] [rbp-70h]
  __int64 v176; // [rsp+158h] [rbp-68h] BYREF
  __int64 v177; // [rsp+160h] [rbp-60h]
  __int128 *v178; // [rsp+168h] [rbp-58h]
  char v179; // [rsp+170h] [rbp-50h]
  unsigned __int64 v180; // [rsp+180h] [rbp-40h]

  v4.m128i_i64[0] = 0;
  v5 = a3[8];
  v180 = __readfsqword(0x28u);
  v161 = 0;
  v160 = 0;
  v162 = nullptr;
  v158 = 0;
  v163 = 0;
  v159 = 0;
  if ( (v5 & 0x40000) != 0 )
  {
    if ( (v5 & 0x10000) != 0 )
      *((_QWORD *)a3 + 10) = 0;
    else
      *((_QWORD *)a3 + 6) = 0;
  }
  v6 = calc_switch_cases();
  if ( !v6 || a3[24] == -1 || !(_QWORD)v159 )
  {
    v58 = (_QWORD *)a1[1];
    v59 = v58[62];
    if ( v58[64] <= 0x2Du )
    {
      v81 = qvector_reserve((__int64)(v58 + 62), v59, 46, 1);
      v58[62] = v81;
      v59 = v81;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_424850);
    v58[63] = 46;
    *(__m128i *)v59 = si128;
    *(__m128i *)(v59 + 16) = _mm_load_si128((const __m128i *)&xmmword_424860);
    *(__m128i *)(v59 + 29) = _mm_load_si128((const __m128i *)&xmmword_424870);
    *(_BYTE *)(v58[62] + 45LL) = 0;
    goto LABEL_19;
  }
  v164 = 0;
  v165 = nullptr;
  v166 = &v164;
  v167 = &v164;
  v168 = 0;
  n = 0;
  v131 = 0;
  do
  {
    v7 = 0;
    v8 = (_QWORD *)(v160 + 24 * v131);
    v9 = 0;
    if ( v8[1] )
    {
      do
      {
        v10 = v165;
        v11 = *(_QWORD *)(*v8 + 8 * v9);
        if ( v165 )
        {
          while ( 1 )
          {
            v12 = v10[8];
            v13 = 0;
            v14 = *((int **)v10 + 3);
            if ( (int)v11 < v12 )
            {
              v14 = *((int **)v10 + 2);
              v13 = v6;
            }
            if ( !v14 )
              break;
            v10 = v14;
          }
          if ( !v13 )
            goto LABEL_16;
          if ( v166 != v10 )
            goto LABEL_45;
        }
        else if ( v166 != &v164 )
        {
LABEL_45:
          v12 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_16:
          if ( (int)v11 <= v12 )
            goto LABEL_17;
        }
        *(_DWORD *)(operator new(0x28u) + 32) = v11;
        ++v7;
        std::_Rb_tree_insert_and_rebalance();
        v9 = v7;
        ++v168;
      }
      while ( (unsigned __int64)v7 < v8[1] );
    }
    v22 = *(_QWORD *)(v158 + 8 * v131);
    v23 = a1[1];
    v24 = (__int64)sub_670B0(v23, v22);
    if ( v24 )
    {
      if ( v22 != *(_QWORD *)(v24 + 32) )
      {
        v25 = *(_QWORD *)(v24 + 48);
        if ( !v25 || v22 != *(_QWORD *)(v25 + 24) )
        {
LABEL_17:
          sub_6B870((__int64 *)(a1[1] + 496LL));
LABEL_18:
          sub_1B8C30(v165);
LABEL_19:
          v15 = -7;
          *(_QWORD *)(a1[1] + 488LL) = a2;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v24 = sub_68FD0(v23, a2, v22, 1, 0.0);
      if ( !v24 )
        goto LABEL_17;
    }
    v26 = *(_DWORD *)(v24 + 72);
    v27 = &v162[v163];
    if ( v162 != v27 )
    {
      v28 = v162;
      while ( v26 != *v28 )
      {
        if ( v27 == ++v28 )
          goto LABEL_51;
      }
      if ( v27 != v28 )
      {
        if ( !under_debugger )
          sub_383060(0xCEBCu, 0.0);
        goto LABEL_268;
      }
    }
LABEL_51:
    if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
    {
      v162 = (unsigned int *)qvector_reserve((__int64)&v162, (__int64)v162, v163 + 1, 4);
      v27 = &v162[v163];
    }
    ++n;
    *v27 = v26;
    v131 = n;
    *(_QWORD *)&v163 = v163 + 1;
  }
  while ( n < (unsigned __int64)v159 );
  v153 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  v30 = (unsigned int)a3[24];
  DWORD2(v153) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[1] + 1504LL) + 168LL))(
                   *(_QWORD *)(a1[1] + 1504LL),
                   v30);
  v33 = a1[1];
  LOBYTE(v153) = 1;
  DWORD1(v153) = dtype_size;
  if ( SDWORD2(v153) < 0 || dtype_size <= 0 )
    goto LABEL_162;
  v34 = *((_QWORD *)a3 + 7);
  if ( v34 == -1 )
  {
    v52 = a3[6];
    if ( v52 == 1 )
    {
      a3[6] = 2;
    }
    else if ( v52 != 2 )
    {
      goto LABEL_103;
    }
    v132 = -1;
    goto LABEL_114;
  }
  v35 = (__int64)sub_670B0(v33, *((_QWORD *)a3 + 7));
  if ( !v35 )
  {
    v35 = sub_68FD0(v33, a2, v34, 1, 0.0);
    if ( v35 )
      goto LABEL_61;
    goto LABEL_162;
  }
  if ( v34 != *(_QWORD *)(v35 + 32) )
  {
    v36 = *(_QWORD *)(v35 + 48);
    if ( !v36 || v34 != *(_QWORD *)(v36 + 24) )
    {
LABEL_162:
      sub_6B870((__int64 *)(v33 + 496));
      sub_11CDA0((__int64)&v153);
      goto LABEL_18;
    }
  }
LABEL_61:
  v37 = *(_DWORD *)(v35 + 72);
  v31 = v163;
  v126 = v37;
  if ( !(_QWORD)v163 )
  {
    v76 = v161;
    v74 = v161;
    if ( (_QWORD)v161 == 1 )
    {
      v132 = 0;
      v30 = (__int64)v162;
    }
    else
    {
      v132 = 0;
      v75 = 1;
LABEL_147:
      src = nullptr;
      v4.m128i_i64[0] = 0;
      v170 = 0;
      if ( v75 < v74 )
      {
        v90 = v75;
        do
        {
          v91 = (__int64 *)(v160 + 24 * v90);
          v92 = *v91;
          if ( *v91 )
          {
            v91[1] = 0;
            qfree(v92);
          }
          ++v90;
        }
        while ( v90 < v74 );
      }
      else
      {
        v77 = v160;
        if ( (unsigned __int64)&src < v160
          || (v32 = v160 + 24LL * *((_QWORD *)&v161 + 1), (unsigned __int64)&src >= v32) )
        {
          if ( *((_QWORD *)&v161 + 1) < v75 )
          {
            v160 = qvector_reserve((__int64)&v160, v160, v75, 24);
            v76 = v161;
          }
          while ( v76 < v75 )
          {
            v87 = v160 + 24 * v76;
            *(_QWORD *)v87 = 0;
            *(_OWORD *)(v87 + 8) = 0;
            v88 = v170;
            if ( (_QWORD)v170 )
            {
              nd = 8 * v170;
              v89 = (void *)qalloc_or_throw(8 * v170, v77, 8 * v170, v32);
              *(_QWORD *)v87 = v89;
              *(_QWORD *)(v87 + 16) = v88;
              v77 = (__int64)src;
              memcpy(v89, src, nd);
              *(_QWORD *)(v87 + 8) = v88;
            }
            ++v76;
          }
        }
        else
        {
          if ( *((_QWORD *)&v161 + 1) < v75 )
          {
            v160 = qvector_reserve((__int64)&v160, v160, v75, 24);
            v74 = v161;
          }
          v78 = 24 * v74;
          v4.m128i_i64[0] = 0;
          if ( v74 < v75 )
          {
            do
            {
              ++v74;
              v79 = v78 + v160;
              v78 += 24;
              *(_QWORD *)v79 = 0;
              *(_OWORD *)(v79 + 8) = 0;
            }
            while ( v74 != v75 );
          }
        }
      }
      *(_QWORD *)&v161 = v75;
      v31 = v163;
      v76 = v75;
      v30 = (__int64)v162;
LABEL_155:
      if ( v31 >= v76 )
      {
        if ( v31 != v76 )
          *(_QWORD *)&v163 = v76;
        goto LABEL_158;
      }
    }
    v86 = (unsigned int *)v30;
    if ( *((_QWORD *)&v163 + 1) < v76 )
    {
      v86 = (unsigned int *)qvector_reserve((__int64)&v162, v30, v76, 4);
      v162 = v86;
      v31 = v163;
    }
    memset(&v86[v31], 0, 4 * (v76 - v31));
    *(_QWORD *)&v163 = v76;
    v30 = (__int64)v162;
LABEL_158:
    *(_DWORD *)(v30 + 4 * v76 - 4) = v126;
    v80 = a3[6];
    if ( v80 != 1 )
    {
      if ( v80 == 2 )
        goto LABEL_114;
      goto LABEL_144;
    }
LABEL_113:
    a3[6] = 2;
    goto LABEL_114;
  }
  v30 = (__int64)v162;
  v32 = 0;
  v38 = 0;
  while ( v37 != v162[v38] )
  {
    v32 = (unsigned int)(v32 + 1);
    v38 = (int)v32;
    if ( (int)v32 >= (unsigned __int64)v163 )
    {
      v74 = v161;
      v132 = v163;
      v75 = (int)v163 + 1;
      v76 = v161;
      if ( v75 != (_QWORD)v161 )
        goto LABEL_147;
      goto LABEL_155;
    }
  }
  v132 = v32;
  v39 = (__int64 *)(v160 + 24 * v38);
  v40 = *v39;
  if ( *v39 )
  {
    v39[1] = 0;
    qfree(v40);
    *v39 = 0;
    v39[2] = 0;
  }
  v41 = a3[6];
  if ( v41 == 1 )
    goto LABEL_113;
  if ( v41 != 2 )
    goto LABEL_69;
LABEL_114:
  v61 = *a3;
  if ( *(_DWORD *)(a1[2] + 72LL) != *a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCA2Bu, 0.0);
    goto LABEL_268;
  }
  v62 = *((_QWORD *)a3 + 2);
  v63 = *((_QWORD *)a3 + 1);
  if ( v62 )
    nb = *(_QWORD *)(v62 + 8);
  else
    nb = *(_QWORD *)(v63 + 48);
  v64 = *(_QWORD *)(v63 + 64);
  v65 = *(_DWORD *)(v63 + 72);
  v154 = 0;
  *((_QWORD *)&v170 + 1) = a4;
  v155 = 0;
  v172 = nb;
  *(_QWORD *)&v170 = v64;
  LODWORD(v171) = v65;
  LODWORD(v173) = v61;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  src = &off_4DE800;
  v178 = &v153;
  v179 = 0;
  sub_1BE560((const __m128i *)&src);
  v30 = (__int64)&v176;
  sub_648D0(&v154, (const void **)&v176, 0.0);
  v143 = v179;
  src = &off_4DE7E8;
  qfree(v176);
  v66 = v174;
  if ( !v174 )
    goto LABEL_130;
  v67 = *(_QWORD *)v174;
  if ( !v175 )
  {
    *(_QWORD *)v174 = *(_QWORD *)v174 & 3LL | v174 & 0xFFFFFFFFFFFFFFFCLL;
    v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v174, (__m128i)(unsigned __int64)v174);
    *(__m128i *)(v174 + 8) = v4;
    *(_QWORD *)v174 &= ~1uLL;
    *(_QWORD *)v174 |= 2uLL;
    goto LABEL_128;
  }
  v68 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v67 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_127;
  v69 = (__int64 *)v68[1];
  if ( (*(_BYTE *)v69 & 2) != 0 )
  {
    v70 = (__int64 *)v68[2];
    if ( (*(_BYTE *)v70 & 2) == 0 )
    {
LABEL_122:
      v148 = v67;
      sub_1B8B00(v70);
      v67 = v148;
      goto LABEL_123;
    }
    goto LABEL_241;
  }
  v147 = *(_QWORD *)v174;
  sub_1B8B00(v69);
  v70 = (__int64 *)v68[2];
  v67 = v147;
  if ( (*(_BYTE *)v70 & 2) == 0 )
    goto LABEL_122;
LABEL_123:
  if ( (*(_BYTE *)v68 & 2) == 0 )
  {
LABEL_241:
    v110 = v68[4];
    if ( v110 )
    {
      v149 = v67;
      v68[5] = 0;
      qfree(v110);
      v67 = v149;
    }
    *v68 |= 2uLL;
  }
  if ( v67 > 3 )
    qfree((__int64)v68);
  v66 = v174;
  v67 = *(_QWORD *)v174;
LABEL_127:
  *(_QWORD *)v66 = v67 & 3 | v66 & 0xFFFFFFFFFFFFFFFCLL;
  v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v174, (__m128i)(unsigned __int64)v174);
  *(__m128i *)(v174 + 8) = v4;
  *(_QWORD *)v174 &= ~1uLL;
  *(_QWORD *)v174 |= 2uLL;
  v175 = 0;
LABEL_128:
  if ( v174 )
    qfree(v174);
LABEL_130:
  if ( v143 )
  {
    v156 = 0;
    v157 = 0;
    for ( i = sub_64960(&v154, 0); i != (_DWORD)v155; i = sub_64960(&v154, i + 1) )
    {
      if ( *(_DWORD *)(v63 + 72) != i )
      {
        if ( i >= *(_DWORD *)(v64 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, *(double *)v4.m128i_i64);
          goto LABEL_268;
        }
        for ( j = xrefblk_t_first_to(); j; j = xrefblk_t_next_to() )
        {
          v73 = sub_670B0(v64, (unsigned __int64)src);
          if ( v73 )
          {
            v144 = v73;
            if ( !sub_64930(&v154, *((_DWORD *)v73 + 18)) )
              sub_64190(&v156, *((_DWORD *)v144 + 18), *(double *)v4.m128i_i64);
          }
        }
      }
    }
    v173 = 0;
    v172 = 0xFFFFFFFF00000000LL;
    v174 = 0xFFFFFFFF00000000LL;
    v175 = 0;
    v176 = 0xFFFFFFFF00000000LL;
    v177 = 0;
    sub_330970((__int64)&src, -1);
    LODWORD(src) = 4;
    sub_11CA10((char *)&v172, (char *)&v153);
    v93 = HIDWORD(v172);
    v94 = sub_138140((_QWORD *)v64, SHIDWORD(v172), 1, *(double *)v4.m128i_i64);
    *(_QWORD *)&v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v93), _mm_cvtsi32_si128(v94)).m128i_u64[0];
    if ( v94 != -1 )
    {
      LOBYTE(v153) = 1;
      *(double *)((char *)&v153 + 4) = v95;
      sub_125180((unsigned __int8 *)&v176, (unsigned __int8 *)&v153);
      if ( nb )
        v97 = *(_QWORD *)(nb + 16);
      else
        v97 = *(_QWORD *)(v63 + 56);
      if ( v97 )
        v98 = *(_QWORD *)(v97 + 24);
      else
        v98 = *(_QWORD *)(v63 + 32);
      v128 = v97;
      v171 = v98;
      v4.m128i_i64[0] = 0;
      v99 = j__qalloc_or_throw(80, (__int64)&v153, v97, v96);
      *(_OWORD *)(v99 + 8) = 0;
      *(_QWORD *)(v99 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v99 + 40) = 0;
      *(_QWORD *)(v99 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v99 + 56) = 0;
      *(_QWORD *)(v99 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v99 + 72) = 0;
      sub_1253A0(v99, (__int64)&src);
      sub_A3160(v63, (_QWORD *)v99, v128, 0.0);
      v30 = 0;
      for ( k = sub_64960(&v156, 0); ; k = sub_64960(&v156, v30) )
      {
        nc = k;
        if ( k == (_DWORD)v157 )
          break;
        if ( k >= *(_DWORD *)(v64 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, 0.0);
          goto LABEL_268;
        }
        v102 = *(_QWORD *)(v64 + 528);
        v103 = *(_QWORD *)(*(_QWORD *)(v102 + 8LL * k) + 56LL);
        v129 = *(_QWORD **)(v102 + 8LL * k);
        if ( v103 )
        {
          v171 = *(_QWORD *)(v103 + 24);
          v30 = *(_BYTE *)(v103 + 64) == 0;
          if ( sub_32ED40(*(_DWORD *)v103, v30) )
          {
            if ( (unsigned int)(*(_DWORD *)v103 - 56) <= 1 )
            {
              v105 = sub_67FD0(v64, *(_QWORD *)(v103 + 24), 2, v101, 0.0);
              if ( *(_DWORD *)v103 == 57 )
                sub_120220((__int64)v129, (_BYTE *)v103, v103 + 48, 0, 0.0);
              sub_A33C0((__int64)v129, v103);
              sub_B52C0(v129, *(_QWORD *)(v103 + 24), *(unsigned int *)(v105 + 72), v106, 0.0);
              sub_A3160(v105, (_QWORD *)v103, 0, 0.0);
              v108 = (_QWORD *)sub_67FD0(v64, *(_QWORD *)(v103 + 24), 2, v107, 0.0);
              v30 = *(_QWORD *)(v103 + 24);
              sub_B52C0(v108, v30, *(unsigned int *)(v129[1] + 72LL), v109, 0.0);
              v129 = v108;
              v103 = 0;
            }
            else
            {
              v103 = *(_QWORD *)(v103 + 16);
            }
          }
        }
        else
        {
          v171 = v129[4];
        }
        v4.m128i_i64[0] = 0;
        v104 = j__qalloc_or_throw(80, v30, v102, v101);
        *(_OWORD *)(v104 + 8) = 0;
        *(_QWORD *)(v104 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v104 + 40) = 0;
        *(_QWORD *)(v104 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v104 + 56) = 0;
        *(_QWORD *)(v104 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v104 + 72) = 0;
        sub_1253A0(v104, (__int64)&src);
        sub_A3160((__int64)v129, (_QWORD *)v104, v103, 0.0);
        v30 = nc + 1;
      }
      sub_11CDA0((__int64)&v176);
      sub_11CDA0((__int64)&v174);
      sub_11CDA0((__int64)&v172);
      qfree(v156);
      goto LABEL_143;
    }
    if ( !under_debugger )
      sub_383060(0xCD76u, v95);
LABEL_268:
    BUG();
  }
LABEL_143:
  qfree(v154);
LABEL_144:
  if ( v132 == -1 )
    goto LABEL_103;
LABEL_69:
  v31 = v132;
  v127 = (_QWORD *)a1[2];
  v133 = &v162[v132];
  if ( v127[6] )
  {
    v42 = v127[8];
    v43 = *v133;
    if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 64) )
      sub_1B81F0(*(double *)v4.m128i_i64);
    v31 = *(_QWORD *)(v42 + 528);
    if ( *(_DWORD *)(*(_QWORD *)(v31 + 8 * v43) + 76LL) != 6 )
    {
      head = a2;
      v45 = v127[4];
      if ( v45 < *((_QWORD *)a3 + 8) )
        v45 = *((_QWORD *)a3 + 8);
      do
      {
        v30 = v45;
        na = head;
        head = prev_head();
      }
      while ( head != -1 && get_first_fcref_from() != *((_QWORD *)a3 + 7) );
      v46 = (_QWORD *)v127[7];
      if ( v46[3] >= na )
      {
        v4.m128i_i64[0] = 0;
        src = nullptr;
        v170 = 0;
        v47 = *(_QWORD *)(v42 + 1504);
        if ( v46 )
        {
          while ( 2 )
          {
            if ( !sub_11E8A0(*(unsigned int *)v46) )
              goto LABEL_95;
            if ( *((_BYTE *)v46 + 64) != 1 || (v30 = v47, (unsigned __int8)sub_1205A0(v46, v47, 0)) )
            {
              if ( src )
              {
                *(_QWORD *)&v170 = 0;
                qfree((__int64)src);
              }
              goto LABEL_103;
            }
            if ( *((_BYTE *)v46 + 64) == 1 && *((_DWORD *)v46 + 18) >= *(_DWORD *)(v47 + 68) )
              goto LABEL_95;
            v30 = *((unsigned int *)v46 + 18);
            if ( sub_64930((_QWORD *)(v47 + 104), v30) )
              goto LABEL_95;
            v30 = (__int64)src;
            v48 = (char *)src + 8 * v170;
            v49 = (8 * (__int64)v170) >> 5;
            if ( v49 > 0 )
            {
              v50 = *((_DWORD *)v46 + 18);
              v32 = (unsigned __int64)src;
              v51 = (char *)src + 32 * v49;
              while ( 1 )
              {
                if ( v50 == *(_DWORD *)(*(_QWORD *)v32 + 72LL) )
                {
                  v51 = (char *)v32;
                  goto LABEL_92;
                }
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v32 + 8) + 72LL) )
                  break;
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v32 + 16) + 72LL) )
                {
                  v51 = (char *)(v32 + 16);
                  goto LABEL_92;
                }
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v32 + 24) + 72LL) )
                {
                  v51 = (char *)(v32 + 24);
                  goto LABEL_92;
                }
                v32 += 32LL;
                if ( v51 == (char *)v32 )
                  goto LABEL_169;
              }
              v51 = (char *)(v32 + 8);
LABEL_92:
              if ( v48 != v51 )
              {
                v31 = *(_QWORD *)v51;
                if ( *(_DWORD *)(*(_QWORD *)v51 + 68LL) < *((_DWORD *)v46 + 17) )
                  *(_QWORD *)v51 = v46;
                goto LABEL_95;
              }
LABEL_174:
              v31 = v170 + 1;
              if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
              {
                v85 = (char *)qvector_reserve((__int64)&src, (__int64)src, v31, 8);
                v31 = v170;
                src = v85;
                v48 = &v85[8 * v170];
              }
              *(_QWORD *)v48 = v46;
              *(_QWORD *)&v170 = v170 + 1;
LABEL_95:
              v46 = (_QWORD *)v46[2];
              if ( !v46 || v46[3] < na )
              {
                if ( !(_QWORD)v170 )
                  goto LABEL_98;
                v111 = sub_332AB0((_QWORD *)v42, na);
                v146 = sub_67FD0(v42, v111, 2, v112, 0.0);
                sub_B52C0((_QWORD *)v146, *(_QWORD *)(v146 + 32), *v133, v113, 0.0);
                *v133 = *(_DWORD *)(v146 + 72);
                v30 = (__int64)src;
                v150 = (char *)src + 8 * v170;
                if ( src != v150 )
                {
                  v134 = (char *)src;
                  do
                  {
                    v121 = *(_QWORD *)v134;
                    v151 = *(_DWORD *)(*(_QWORD *)v134 + 72LL);
                    if ( v151 == DWORD2(v153) && (unsigned __int8)netnode_charval() != 3 )
                    {
                      v122 = sub_670B0(v42, *((_QWORD *)a3 + 8));
                      if ( v122 )
                      {
                        if ( v122[6] )
                        {
                          v123 = v122[7];
                          if ( *(_DWORD *)v123 == 42 )
                          {
                            v124 = *(_QWORD *)(v123 + 16);
                            if ( v124 )
                            {
                              while ( *(_QWORD *)(v124 + 24) >= *((_QWORD *)a3 + 8) )
                              {
                                if ( (unsigned int)(*(_DWORD *)v124 - 29) <= 0xC
                                  && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v42 + 1504)
                                                                                       + 240LL))(
                                       *(_QWORD *)(v42 + 1504),
                                       (unsigned int)a3[24]) == 2 )
                                {
                                  v125 = DWORD1(v153);
                                  v145 = v6;
                                  if ( *(_DWORD *)(v121 + 68) >= SDWORD1(v153) )
                                    v125 = *(_DWORD *)(v121 + 68);
                                  v114 = v125;
                                  goto LABEL_250;
                                }
                                v124 = *(_QWORD *)(v124 + 16);
                                if ( !v124 )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                    v145 = 0;
                    v114 = *(_DWORD *)(v121 + 68);
LABEL_250:
                    v152 = sub_138140((_QWORD *)v42, v114, 1, 0.0);
                    if ( v152 == -1 )
                      break;
                    v115 = j__qalloc_or_throw(80, v114, v31, v32);
                    *(_QWORD *)(v115 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v115 + 40) = 0;
                    *(_QWORD *)(v115 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v115 + 56) = 0;
                    *(_QWORD *)(v115 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v115 + 72) = 0;
                    sub_330970(v115, na);
                    *(_BYTE *)(v115 + 32) = 1;
                    v116 = v115;
                    *(_QWORD *)&v117 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v114), _mm_cvtsi32_si128(v151)).m128i_u64[0];
                    *(_BYTE *)(v115 + 64) = 1;
                    *(_DWORD *)v115 = 4;
                    *(_DWORD *)(v115 + 72) = v152;
                    *(_DWORD *)(v115 + 68) = v114;
                    *(double *)(v115 + 36) = v117;
                    v46 = sub_A3160((__int64)v127, (_QWORD *)v115, (__int64)v46, v117);
                    if ( v145 )
                    {
                      v116 = v115 + 64;
                      sub_125180((unsigned __int8 *)&v153, (unsigned __int8 *)(v115 + 64));
                    }
                    v120 = j__qalloc_or_throw(80, v116, v118, v119);
                    v4.m128i_i64[0] = 0;
                    *(_QWORD *)(v120 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 40) = 0;
                    *(_QWORD *)(v120 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 56) = 0;
                    *(_QWORD *)(v120 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 72) = 0;
                    *(_OWORD *)(v120 + 8) = 0;
                    sub_1253A0(v120, v115);
                    *(_QWORD *)(v120 + 24) = *(_QWORD *)(v146 + 32);
                    sub_11CA10((char *)(v120 + 64), (char *)(v120 + 32));
                    sub_A3160(v146, (_QWORD *)v120, 0, 0.0);
                    v134 += 8;
                  }
                  while ( v150 != v134 );
LABEL_98:
                  v30 = (__int64)src;
                }
                if ( v30 )
                {
                  *(_QWORD *)&v170 = 0;
                  qfree(v30);
                }
                goto LABEL_103;
              }
              continue;
            }
            break;
          }
          v51 = (char *)src;
LABEL_169:
          v82 = v48 - v51;
          if ( v48 - v51 == 16 )
          {
            v83 = *((_DWORD *)v46 + 18);
          }
          else
          {
            if ( v82 != 24 )
            {
              if ( v82 != 8 )
                goto LABEL_174;
              v83 = *((_DWORD *)v46 + 18);
              goto LABEL_173;
            }
            v32 = *(_QWORD *)v51;
            v83 = *((_DWORD *)v46 + 18);
            if ( v83 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
              goto LABEL_92;
            v51 += 8;
          }
          v32 = *(_QWORD *)v51;
          if ( v83 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
            goto LABEL_92;
          v51 += 8;
LABEL_173:
          v32 = *(_QWORD *)v51;
          if ( *(_DWORD *)(*(_QWORD *)v51 + 72LL) == v83 )
            goto LABEL_92;
          goto LABEL_174;
        }
      }
    }
  }
LABEL_103:
  if ( (_QWORD)v161 == 1 )
  {
    sub_B52C0((_QWORD *)a1[2], a2, *v162, v32, *(double *)v4.m128i_i64);
  }
  else
  {
    if ( (_QWORD)v161 != 2 )
      goto LABEL_108;
    v53 = (__int64 **)v160;
    v30 = *(_QWORD *)(v160 + 8);
    if ( !v30 )
    {
      v30 = *(_QWORD *)(v160 + 32);
      v32 = 1;
      v53 = (__int64 **)(v160 + 24);
      v31 = 0;
      goto LABEL_107;
    }
    v32 = *(_QWORD *)(v160 + 32);
    if ( v32 )
      goto LABEL_108;
    v31 = 1;
LABEL_107:
    if ( v30 == 1 )
    {
      v30 = v162[v31];
      v32 = v162[v32];
      v31 = (unsigned int)(*(_DWORD *)(a1[2] + 72LL) + 1);
      if ( (_DWORD)v30 == (_DWORD)v31 )
      {
        v84 = 44;
      }
      else
      {
        if ( (_DWORD)v31 != (_DWORD)v32 )
          goto LABEL_108;
        LODWORD(v32) = v30;
        v84 = 43;
      }
      v156 = 0xFFFFFFFF00000007LL;
      v157 = (unsigned int)v32;
      src = (void *)0xFFFFFFFF00000000LL;
      *(_QWORD *)&v170 = 0;
      sub_120A10((__int64)&src, *(unsigned __int64 **)(a1[100] + 112LL), **v53, SDWORD1(v153), a2, 0);
      sub_1D6450((__int64)a1, v84, (unsigned __int8 *)&v153, (unsigned __int8 *)&src, (unsigned __int8 *)&v156);
      sub_11CDA0((__int64)&src);
      sub_11CDA0((__int64)&v156);
    }
    else
    {
LABEL_108:
      v54 = j__qalloc_or_throw(48, v30, v31, v32);
      *(_QWORD *)v54 = 0;
      v55 = v160;
      *(_OWORD *)(v54 + 8) = 0;
      *(_QWORD *)v54 = v55;
      v56 = v161;
      *(_QWORD *)(v54 + 24) = 0;
      *(_QWORD *)(v54 + 8) = v56;
      v57 = *((_QWORD *)&v161 + 1);
      *(_OWORD *)(v54 + 32) = 0;
      *(_QWORD *)(v54 + 16) = v57;
      v160 = 0;
      *(_QWORD *)(v54 + 24) = v162;
      v162 = nullptr;
      *(_QWORD *)(v54 + 32) = v163;
      v161 = 0;
      *(_QWORD *)(v54 + 40) = *((_QWORD *)&v163 + 1);
      src = (void *)-4294967284LL;
      *(_QWORD *)&v170 = v54;
      v163 = 0;
      sub_1D6450((__int64)a1, 53, (unsigned __int8 *)&v153, (unsigned __int8 *)&src, nullptr);
      sub_11CDA0((__int64)&src);
    }
  }
  v15 = 0;
  sub_11CDA0((__int64)&v153);
  sub_1B8C30(v165);
LABEL_20:
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree(v158);
  }
  if ( v162 )
  {
    *(_QWORD *)&v163 = 0;
    qfree((__int64)v162);
  }
  v16 = v160;
  if ( v160 )
  {
    v17 = v161;
    if ( (_QWORD)v161 )
    {
      v18 = 0;
      do
      {
        v19 = (__int64 *)(v16 + 24 * v18);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v20);
          v16 = v160;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v161 = 0;
    qfree(v16);
  }
  return v15;
}

