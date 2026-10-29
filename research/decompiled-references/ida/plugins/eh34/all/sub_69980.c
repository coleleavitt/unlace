__int64 __fastcall sub_69980(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  __m128 v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 m; // rbx
  __int64 v32; // rax
  __int64 v33; // rdi
  _QWORD *v35; // rdx
  _QWORD *v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r13
  __int64 i; // r12
  __int64 v46; // rax
  __int64 v47; // rdi
  __m128i v48; // xmm0
  _QWORD *v49; // r9
  _QWORD *v50; // rdi
  _QWORD *v51; // r8
  unsigned __int64 v52; // rax
  _QWORD *v53; // rdx
  bool v54; // al
  _QWORD *v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 j; // rbx
  __int64 v62; // r15
  __int64 v63; // rcx
  __int64 v64; // r13
  __int64 k; // r14
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  char v70; // al
  unsigned __int8 v71; // [rsp-6BCh] [rbp-6C4h]
  unsigned __int64 v72; // [rsp-6B8h] [rbp-6C0h]
  __int64 v73; // [rsp-6B0h] [rbp-6B8h]
  __int64 v74; // [rsp-6B0h] [rbp-6B8h]
  _QWORD *v75; // [rsp-6A8h] [rbp-6B0h]
  _QWORD *v76; // [rsp-6A0h] [rbp-6A8h]
  __int64 v77; // [rsp-698h] [rbp-6A0h]
  __int64 v79; // [rsp-688h] [rbp-690h]
  __int64 v80; // [rsp-688h] [rbp-690h]
  _QWORD *v81; // [rsp-688h] [rbp-690h]
  void *v82; // [rsp-680h] [rbp-688h] BYREF
  __int128 v83; // [rsp-678h] [rbp-680h]
  __int64 v84; // [rsp-668h] [rbp-670h]
  int v85; // [rsp-660h] [rbp-668h]
  const void *v86; // [rsp-650h] [rbp-658h] BYREF
  __int64 v87; // [rsp-648h] [rbp-650h]
  double v88; // [rsp-640h] [rbp-648h] BYREF
  char v89; // [rsp-628h] [rbp-630h]
  _OWORD v90[2]; // [rsp-620h] [rbp-628h] BYREF
  __int64 v91; // [rsp-600h] [rbp-608h]
  int v92; // [rsp-5F8h] [rbp-600h]
  __int16 v93; // [rsp-5F4h] [rbp-5FCh]
  __int64 v94; // [rsp-5F0h] [rbp-5F8h]
  __m128i v95; // [rsp-5E8h] [rbp-5F0h]
  __m128i v96; // [rsp-5D8h] [rbp-5E0h]
  __m128i v97; // [rsp-5C8h] [rbp-5D0h]
  __m128i v98; // [rsp-5B8h] [rbp-5C0h]
  __m128i v99; // [rsp-5A8h] [rbp-5B0h]
  __int64 v100; // [rsp-598h] [rbp-5A0h]
  _QWORD v101[2]; // [rsp-590h] [rbp-598h] BYREF
  __int64 v102; // [rsp-580h] [rbp-588h]
  __m128i v103; // [rsp-578h] [rbp-580h]
  __int64 v104; // [rsp-568h] [rbp-570h]
  __m128i v105; // [rsp-560h] [rbp-568h]
  __int64 v106; // [rsp-550h] [rbp-558h]
  __m128i v107; // [rsp-548h] [rbp-550h]
  char v108; // [rsp-538h] [rbp-540h]
  _BYTE v109[28]; // [rsp-530h] [rbp-538h]
  __int64 v110; // [rsp-510h] [rbp-518h]
  int v111; // [rsp-508h] [rbp-510h]
  char v112; // [rsp-500h] [rbp-508h]
  _QWORD v113[4]; // [rsp-4F8h] [rbp-500h] BYREF
  __int128 v114; // [rsp-4D8h] [rbp-4E0h]
  __int64 v115; // [rsp-4C8h] [rbp-4D0h]
  int v116; // [rsp-4C0h] [rbp-4C8h]
  int v117; // [rsp-4B0h] [rbp-4B8h] BYREF
  __int64 v118; // [rsp-4A8h] [rbp-4B0h]
  int *v119; // [rsp-4A0h] [rbp-4A8h]
  int *v120; // [rsp-498h] [rbp-4A0h]
  __int64 v121; // [rsp-490h] [rbp-498h]
  __int64 v122; // [rsp-488h] [rbp-490h]
  __int64 v123; // [rsp-480h] [rbp-488h]
  __int64 v124; // [rsp-478h] [rbp-480h]
  __int128 v125; // [rsp-470h] [rbp-478h]
  __int64 v126; // [rsp-460h] [rbp-468h]
  __int128 v127; // [rsp-458h] [rbp-460h]
  __int64 v128; // [rsp-448h] [rbp-450h]
  __int128 v129; // [rsp-440h] [rbp-448h]
  __int64 v130; // [rsp-430h] [rbp-438h]
  __int128 v131; // [rsp-428h] [rbp-430h]
  __int128 v132; // [rsp-418h] [rbp-420h]
  __int64 v133; // [rsp-408h] [rbp-410h]
  __int128 v134; // [rsp-400h] [rbp-408h]
  __int64 v135; // [rsp-3F0h] [rbp-3F8h]
  int v136; // [rsp-3E8h] [rbp-3F0h]
  int v137; // [rsp-3D8h] [rbp-3E0h] BYREF
  __int64 v138; // [rsp-3D0h] [rbp-3D8h]
  int *v139; // [rsp-3C8h] [rbp-3D0h]
  int *v140; // [rsp-3C0h] [rbp-3C8h]
  __int64 v141; // [rsp-3B8h] [rbp-3C0h]
  __int64 *v142; // [rsp-3B0h] [rbp-3B8h]
  __int64 v143; // [rsp-3A8h] [rbp-3B0h]
  __int64 v144; // [rsp-3A0h] [rbp-3A8h]
  __int64 v145; // [rsp-398h] [rbp-3A0h]
  int v146; // [rsp-390h] [rbp-398h]
  __int64 v147; // [rsp-388h] [rbp-390h]
  __int64 v148; // [rsp-380h] [rbp-388h] BYREF
  int v149; // [rsp-370h] [rbp-378h] BYREF
  __int64 v150; // [rsp-368h] [rbp-370h]
  int *v151; // [rsp-360h] [rbp-368h]
  int *v152; // [rsp-358h] [rbp-360h]
  __int64 v153; // [rsp-350h] [rbp-358h]
  __int16 v154; // [rsp-348h] [rbp-350h]
  __int64 v155; // [rsp-340h] [rbp-348h]
  __int64 v156; // [rsp-338h] [rbp-340h]
  unsigned __int64 v157; // [rsp-330h] [rbp-338h] BYREF
  __m128i v158; // [rsp-328h] [rbp-330h] BYREF
  char v159; // [rsp-318h] [rbp-320h]
  __int64 v160; // [rsp-2F8h] [rbp-300h]
  __int64 v161; // [rsp-2F0h] [rbp-2F8h]
  __int64 v162; // [rsp-288h] [rbp-290h]
  __int64 v163; // [rsp-280h] [rbp-288h]
  __int64 v164; // [rsp-270h] [rbp-278h]
  __int64 v165; // [rsp-268h] [rbp-270h]
  __int64 v166; // [rsp-258h] [rbp-260h]
  __int64 v167; // [rsp-250h] [rbp-258h]
  _QWORD v168[65]; // [rsp-200h] [rbp-208h] BYREF

  v79 = a1;
  v6 = *(_QWORD *)(a2 + 32);
  v168[57] = __readfsqword(0x28u);
  v7 = a4;
  v113[0] = v6;
  v119 = &v117;
  v120 = &v117;
  v114 = 0;
  v113[1] = 0;
  v113[2] = -1;
  v113[3] = 0;
  v115 = 0;
  v116 = -1;
  v117 = 0;
  v118 = 0;
  v121 = 0;
  v122 = -2;
  v123 = 0;
  v139 = &v137;
  v140 = &v137;
  v142 = &v148;
  v151 = &v149;
  v152 = &v149;
  v125 = 0;
  v127 = 0;
  v129 = 0;
  v131 = 0;
  v132 = 0;
  v134 = 0;
  v124 = 0;
  v126 = 0;
  v128 = 0;
  v130 = 0;
  v133 = 0;
  v135 = 0;
  v136 = -1;
  v137 = 0;
  v138 = 0;
  v141 = 0;
  v143 = 1;
  v144 = 0;
  v145 = 0;
  v146 = 1065353216;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v8 = *(_QWORD *)(a5 + 24);
  v90[0] = _mm_loadh_ps((const double *)a5);
  v91 = v8;
  LODWORD(v8) = *(_DWORD *)(a5 + 32);
  v90[1] = _mm_loadu_si128((const __m128i *)(a5 + 8));
  v92 = v8;
  LOWORD(v8) = *(_WORD *)(a5 + 36);
  v95 = _mm_loadu_si128((const __m128i *)(a5 + 48));
  v93 = v8;
  v9 = *(_QWORD *)(a5 + 40);
  v96 = _mm_loadu_si128((const __m128i *)(a5 + 64));
  v94 = v9;
  v10 = *(_QWORD *)(a5 + 128);
  v97 = _mm_loadu_si128((const __m128i *)(a5 + 80));
  v100 = v10;
  LOBYTE(v10) = *(_BYTE *)(a5 + 136);
  v98 = _mm_loadu_si128((const __m128i *)(a5 + 96));
  v11 = _mm_loadu_si128((const __m128i *)(a5 + 112));
  LOBYTE(v101[0]) = v10;
  v12 = *(_QWORD *)(a5 + 144);
  *(_OWORD *)(a5 + 48) = 0;
  v101[1] = v12;
  v13 = *(_QWORD *)(a5 + 152);
  *(_QWORD *)(a5 + 40) = 0;
  *(_QWORD *)(a5 + 152) = 0;
  v99 = v11;
  v102 = v13;
  v14 = *(_QWORD *)(a5 + 176);
  v103 = _mm_loadu_si128((const __m128i *)(a5 + 160));
  v15 = _mm_loadu_si128((const __m128i *)(a5 + 184));
  v104 = v14;
  v16 = *(_QWORD *)(a5 + 200);
  *(_OWORD *)(a5 + 160) = 0;
  v106 = v16;
  LOBYTE(v16) = *(_BYTE *)(a5 + 224);
  *(_OWORD *)(a5 + 184) = 0;
  v108 = v16;
  v17 = *(_QWORD *)(a5 + 264);
  v105 = v15;
  v18 = _mm_loadu_si128((const __m128i *)(a5 + 208));
  v110 = v17;
  LODWORD(v17) = *(_DWORD *)(a5 + 272);
  *(_OWORD *)(a5 + 208) = 0;
  v111 = v17;
  LOBYTE(v17) = *(_BYTE *)(a5 + 280);
  *(__m128i *)v109 = _mm_loadu_si128((const __m128i *)(a5 + 232));
  v19 = _mm_loadu_si128((const __m128i *)(a5 + 244));
  *(_QWORD *)(a5 + 176) = 0;
  *(_QWORD *)(a5 + 200) = 0;
  v112 = v17;
  v107 = v18;
  *(__m128i *)&v109[12] = v19;
  if ( a4 && (*(_BYTE *)(a2 + 138) & 4) == 0 )
    *(_DWORD *)(*(_QWORD *)(a2 + 128) + 20LL) += sub_1E080(v101, (__int64 *)a2);
  sub_2FE60((__int64)&v86, a3, *(double *)v19.m128i_i64);
  v23 = v87;
  if ( v89 )
  {
    v24 = _mm_loadh_ps(&v88);
    *(_QWORD *)a1 = v86;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128 *)(a1 + 8) = v24;
    goto LABEL_6;
  }
  v82 = nullptr;
  v83 = 0;
  if ( v87 )
  {
    v82 = (void *)qalloc_or_throw(16 * v87);
    *((_QWORD *)&v83 + 1) = v23;
    memcpy(v82, v86, 16 * v23);
    *(_QWORD *)&v83 = v23;
  }
  v84 = 0;
  v85 = -1;
  v157 = a3;
  sub_68A40((__int64)&v158, (__int64)v90, v20, v21, v22);
  v35 = *(_QWORD **)(a2 + 368);
  v36 = (_QWORD *)(a2 + 360);
  v76 = (_QWORD *)(a2 + 360);
  if ( !v35 )
  {
    v36 = (_QWORD *)(a2 + 360);
LABEL_34:
    v36 = sub_696A0((_QWORD *)(a2 + 352), v36, &v157);
    goto LABEL_35;
  }
  do
  {
    while ( 1 )
    {
      v37 = v35[2];
      v38 = v35[3];
      if ( v35[4] < v157 )
        break;
      v36 = v35;
      v35 = (_QWORD *)v35[2];
      if ( !v37 )
        goto LABEL_32;
    }
    v35 = (_QWORD *)v35[3];
  }
  while ( v38 );
LABEL_32:
  if ( v76 == v36 || v157 < v36[4] )
    goto LABEL_34;
LABEL_35:
  qfree(v168[55]);
  sub_E270((__int64)v168);
  if ( v166 )
  {
    v167 = 0;
    qfree(v166);
  }
  v39 = v164;
  if ( v164 )
  {
    v40 = v165;
    if ( v165 )
    {
      v71 = v7;
      v72 = a3;
      v41 = 0;
      v73 = v79;
      do
      {
        v42 = v39 + 40 * v41;
        v43 = *(_QWORD *)(v42 + 16);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v42 + 24);
          if ( v44 )
          {
            v80 = v39 + 40 * v41;
            for ( i = 0; i != v44; ++i )
            {
              v46 = v43 + 72 * i;
              v47 = *(_QWORD *)(v46 + 32);
              if ( v47 )
              {
                *(_QWORD *)(v46 + 40) = 0;
                qfree(v47);
                v43 = *(_QWORD *)(v80 + 16);
              }
            }
            v42 = v80;
          }
          *(_QWORD *)(v42 + 24) = 0;
          qfree(v43);
          v39 = v164;
        }
        ++v41;
      }
      while ( v40 != v41 );
      a3 = v72;
      v7 = v71;
      v79 = v73;
    }
    v165 = 0;
    qfree(v39);
  }
  if ( v162 )
  {
    v163 = 0;
    qfree(v162);
  }
  if ( v160 )
  {
    v161 = 0;
    qfree(v160);
  }
  sub_271A0((bool *)&v157, (__int64)(v36 + 42), a3, v7, (__int64)&v82, (__int64)(v36 + 10), v36 + 23, v7 - 1);
  if ( v159 )
  {
    v48 = _mm_loadu_si128(&v158);
    *(_QWORD *)v79 = v157;
    *(_BYTE *)(v79 + 24) = 1;
    *(__m128i *)(v79 + 8) = v48;
    goto LABEL_57;
  }
  if ( (_BYTE)v157 )
  {
    *(_QWORD *)v79 = v36 + 5;
    *(_BYTE *)(v79 + 24) = 0;
    goto LABEL_57;
  }
  v49 = v76;
  v50 = *(_QWORD **)(a2 + 368);
  if ( !v50 )
  {
    v54 = 1;
LABEL_74:
    if ( *(_QWORD **)(a2 + 376) != v49 || !v54 )
      goto LABEL_76;
LABEL_116:
    sub_65BB0(v50);
    *(_QWORD *)(a2 + 368) = 0;
    *(_QWORD *)(a2 + 376) = v76;
    *(_QWORD *)(a2 + 384) = v76;
    *(_QWORD *)(a2 + 392) = 0;
    v70 = v159;
    goto LABEL_113;
  }
  v51 = *(_QWORD **)(a2 + 368);
  while ( 1 )
  {
    v52 = v51[4];
    if ( v52 >= a3 )
      break;
    v51 = (_QWORD *)v51[3];
LABEL_68:
    if ( !v51 )
    {
      v54 = v76 == v49;
      goto LABEL_74;
    }
  }
  v53 = (_QWORD *)v51[2];
  if ( a3 < v52 )
  {
    v49 = v51;
    v51 = (_QWORD *)v51[2];
    goto LABEL_68;
  }
  v55 = (_QWORD *)v51[3];
  while ( v55 )
  {
    if ( a3 < v55[4] )
    {
      v49 = v55;
      v55 = (_QWORD *)v55[2];
    }
    else
    {
      v55 = (_QWORD *)v55[3];
    }
  }
  while ( v53 )
  {
    if ( v53[4] >= a3 )
    {
      v51 = v53;
      v53 = (_QWORD *)v53[2];
    }
    else
    {
      v53 = (_QWORD *)v53[3];
    }
  }
  if ( *(_QWORD **)(a2 + 376) == v51 && v76 == v49 )
    goto LABEL_116;
  if ( v51 == v49 )
  {
LABEL_76:
    *(_QWORD *)v79 = 0;
    *(_BYTE *)(v79 + 24) = 0;
    goto LABEL_57;
  }
  v77 = (__int64)v51;
  v75 = v49;
  v74 = v79;
  do
  {
    v56 = v77;
    v77 = std::_Rb_tree_increment(v77);
    v57 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v56, v76);
    v81 = v57;
    qfree(v57[97]);
    sub_E270((__int64)(v57 + 42));
    v58 = v57[31];
    if ( v58 )
    {
      v57[32] = 0;
      qfree(v58);
    }
    v59 = v57[28];
    if ( v59 )
    {
      v60 = v57[29];
      if ( v60 )
      {
        for ( j = 0; j != v60; ++j )
        {
          v62 = v59 + 40 * j;
          v63 = *(_QWORD *)(v62 + 16);
          if ( v63 )
          {
            v64 = *(_QWORD *)(v62 + 24);
            if ( v64 )
            {
              for ( k = 0; k != v64; ++k )
              {
                v66 = v63 + 72 * k;
                v67 = *(_QWORD *)(v66 + 32);
                if ( v67 )
                {
                  *(_QWORD *)(v66 + 40) = 0;
                  qfree(v67);
                  v63 = *(_QWORD *)(v62 + 16);
                }
              }
            }
            *(_QWORD *)(v62 + 24) = 0;
            qfree(v63);
            v59 = v81[28];
          }
        }
      }
      v81[29] = 0;
      qfree(v59);
    }
    v68 = v81[25];
    if ( v68 )
    {
      v81[26] = 0;
      qfree(v68);
    }
    v69 = v81[11];
    if ( v69 )
    {
      v81[12] = 0;
      qfree(v69);
    }
    operator delete(v81, 0x318u);
    --*(_QWORD *)(a2 + 392);
  }
  while ( (_QWORD *)v77 != v75 );
  v79 = v74;
  v70 = v159;
LABEL_113:
  *(_QWORD *)v79 = 0;
  *(_BYTE *)(v79 + 24) = 0;
  if ( v70 && v157 )
  {
    v158.m128i_i64[0] = 0;
    qfree(v157);
  }
LABEL_57:
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  if ( v89 )
  {
    if ( v86 )
    {
LABEL_61:
      v87 = 0;
      qfree(v86);
    }
  }
  else if ( v86 )
  {
    goto LABEL_61;
  }
LABEL_6:
  qfree(v155);
  sub_E270((__int64)v113);
  if ( v106 )
  {
    v107.m128i_i64[0] = 0;
    qfree(v106);
  }
  v25 = v104;
  if ( v104 )
  {
    v26 = v105.m128i_i64[0];
    if ( v105.m128i_i64[0] )
    {
      v27 = 0;
      do
      {
        v28 = v25 + 40 * v27;
        v29 = *(_QWORD *)(v28 + 16);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v28 + 24);
          if ( v30 )
          {
            for ( m = 0; m != v30; ++m )
            {
              v32 = v29 + 72 * m;
              v33 = *(_QWORD *)(v32 + 32);
              if ( v33 )
              {
                *(_QWORD *)(v32 + 40) = 0;
                qfree(v33);
                v29 = *(_QWORD *)(v28 + 16);
              }
            }
          }
          *(_QWORD *)(v28 + 24) = 0;
          qfree(v29);
          v25 = v104;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    v105.m128i_i64[0] = 0;
    qfree(v25);
  }
  if ( v102 )
  {
    v103.m128i_i64[0] = 0;
    qfree(v102);
  }
  if ( v94 )
  {
    v95.m128i_i64[0] = 0;
    qfree(v94);
  }
  return v79;
}

