__int64 __fastcall sub_432C0(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  __int64 *v11; // r15
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // rax
  __int128 v16; // xmm1
  unsigned __int64 v17; // rbx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // r13
  __int64 v22; // r15
  void *v23; // rax
  int v24; // r13d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rdx
  __int64 i; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdi
  char v38; // al
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __m128d v43; // xmm0
  __int64 v44; // r8
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  int v47; // r10d
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdi
  char v50; // cl
  __m128d v51; // xmm1
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r13
  int v55; // r12d
  int v56; // r12d
  _QWORD *v57; // rdi
  __int64 (__fastcall *v58)(__int64, int); // rax
  unsigned int v59; // r14d
  __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 (__fastcall *v62)(__int64, int, int); // rcx
  __int32 v63; // r15d
  __m128i *v64; // rsi
  __int64 v65; // rax
  __m128i *v66; // rax
  unsigned __int64 v67; // r14
  __m128i *v68; // r15
  __int64 v69; // rax
  char v70; // r15
  int v71; // edx
  __int64 v72; // r9
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdx
  __int32 v75; // ecx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdi
  void *v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  int v81; // edx
  __int32 v82; // eax
  unsigned __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // al
  char v87; // al
  __int64 v88; // r9
  unsigned __int64 v89; // rdx
  __m128i *v90; // r8
  const __m128i *v91; // r15
  __m128i *v92; // rcx
  __m128i *v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  const __m128i *v96; // r8
  unsigned __int64 *v97; // r10
  int v98; // r10d
  __int64 v99; // r11
  __int64 v100; // rcx
  __int64 v101; // r11
  __int64 v102; // r14
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rdx
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rdx
  unsigned __int64 *v109; // rcx
  __int64 v110; // rsi
  unsigned __int64 v111; // r13
  unsigned __int64 v112; // rbx
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 flags; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // [rsp+8h] [rbp-138h]
  int v127; // [rsp+18h] [rbp-128h]
  char v128; // [rsp+1Fh] [rbp-121h]
  unsigned int v129; // [rsp+20h] [rbp-120h]
  __int64 v130; // [rsp+20h] [rbp-120h]
  int v131; // [rsp+20h] [rbp-120h]
  int v132; // [rsp+20h] [rbp-120h]
  __int64 v133; // [rsp+28h] [rbp-118h]
  unsigned int v134; // [rsp+28h] [rbp-118h]
  int v135; // [rsp+28h] [rbp-118h]
  int v136; // [rsp+28h] [rbp-118h]
  unsigned __int64 v138; // [rsp+30h] [rbp-110h]
  unsigned __int64 v139; // [rsp+30h] [rbp-110h]
  __int64 *v140; // [rsp+30h] [rbp-110h]
  __int64 v141; // [rsp+30h] [rbp-110h]
  __int64 *v142; // [rsp+30h] [rbp-110h]
  unsigned __int64 *v143; // [rsp+40h] [rbp-100h]
  __int64 v144; // [rsp+40h] [rbp-100h]
  __int64 v145; // [rsp+48h] [rbp-F8h]
  __int64 v146; // [rsp+48h] [rbp-F8h]
  __int64 v147; // [rsp+48h] [rbp-F8h]
  int v149; // [rsp+50h] [rbp-F0h]
  int v150; // [rsp+54h] [rbp-ECh]
  __int64 *v152; // [rsp+58h] [rbp-E8h]
  __m128i v153; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v154; // [rsp+70h] [rbp-D0h] BYREF
  __int128 v155; // [rsp+78h] [rbp-C8h]
  void *v156; // [rsp+90h] [rbp-B0h] BYREF
  __int128 v157; // [rsp+98h] [rbp-A8h]
  void *src; // [rsp+B0h] [rbp-90h] BYREF
  __int128 v159; // [rsp+B8h] [rbp-88h] BYREF
  __m128i v160; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v161; // [rsp+D8h] [rbp-68h]
  __m128i v162; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v163; // [rsp+F0h] [rbp-50h]
  __int64 v164; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v165; // [rsp+108h] [rbp-38h]

  v4 = (__int64)a1;
  v5 = a1[26];
  v6 = a1[25];
  v7 = a1[27];
  v165 = __readfsqword(0x28u);
  v8 = v5 + 1;
  LODWORD(src) = 0;
  if ( (unsigned __int64)&src >= v6 && (unsigned __int64)&src < v6 + 4 * v7 )
  {
    if ( v7 < v8 )
    {
      v119 = qvector_reserve();
      *(_QWORD *)(v4 + 200) = v119;
      v6 = v119;
      v5 = *(_QWORD *)(v4 + 208);
    }
    *(_DWORD *)(v6 + 4 * v5) = 0;
  }
  else
  {
    if ( v7 < v8 )
    {
      v116 = qvector_reserve();
      v9 = (int)src;
      *(_QWORD *)(v4 + 200) = v116;
      v6 = v116;
      v5 = *(_QWORD *)(v4 + 208);
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(v6 + 4 * v5) = v9;
  }
  v10 = *(_QWORD *)(v4 + 224);
  ++*(_QWORD *)(v4 + 208);
  v11 = *(__int64 **)(v4 + 232);
  v150 = *(_DWORD *)(v10 + 96);
  if ( v150 != v11[1] )
  {
    v161 = -1;
    src = 0;
    v163 = 0;
    v164 = 0x1200000007LL;
    v159 = 0;
    v160 = 0;
    v162 = 0;
    v12 = v11[1];
    if ( v150 < v12 )
    {
      v147 = v4;
      v111 = v150;
      v112 = v11[1];
      do
      {
        v113 = (_QWORD *)(*v11 + 80 * v111);
        if ( *v113 )
        {
          v113[1] = 0;
          qfree();
        }
        ++v111;
      }
      while ( v111 < v112 );
      v11[1] = v150;
      v4 = v147;
    }
    else if ( v12 < v150 )
    {
      v13 = *v11;
      v14 = v11[2];
      if ( (unsigned __int64)&src < *v11 || (unsigned __int64)&src >= v13 + 80 * v14 )
      {
        if ( v14 >= v150 || (v122 = qvector_reserve(), v12 = v11[1], *v11 = v122, v13 = v122, v12 < v150) )
        {
          v15 = a2;
          v145 = v4;
          v16 = 0;
          v17 = v12;
          v152 = v11;
          v143 = v15;
          while ( 1 )
          {
            v21 = v13 + 80 * v17;
            *(_QWORD *)v21 = 0;
            *(_OWORD *)(v21 + 8) = v16;
            v22 = v159;
            if ( (_QWORD)v159 )
            {
              v23 = (void *)qalloc_or_throw();
              *(_QWORD *)(v21 + 16) = v22;
              *(_QWORD *)v21 = v23;
              memcpy(v23, src, 32 * v22);
              *(_QWORD *)(v21 + 8) = v22;
              v16 = 0;
            }
            v18 = _mm_loadu_si128(&v160);
            ++v17;
            *(_QWORD *)(v21 + 40) = v161;
            v19 = v163;
            *(__m128i *)(v21 + 24) = v18;
            v20 = _mm_load_si128(&v162);
            *(_QWORD *)(v21 + 64) = v19;
            *(__m128i *)(v21 + 48) = v20;
            *(_QWORD *)(v21 + 72) = v164;
            if ( v17 >= v150 )
              break;
            v13 = *v152;
          }
          v11 = v152;
          v4 = v145;
          a2 = v143;
        }
      }
      else if ( v14 >= v150 || (v124 = qvector_reserve(), v12 = v11[1], *v11 = v124, v13 = v124, v12 < v150) )
      {
        v117 = 80 * v12;
        while ( 1 )
        {
          v118 = v117 + v13;
          ++v12;
          v117 += 80;
          *(_QWORD *)v118 = 0;
          *(_QWORD *)(v118 + 40) = -1;
          *(_QWORD *)(v118 + 64) = 0;
          *(_QWORD *)(v118 + 72) = 0x1200000007LL;
          *(_OWORD *)(v118 + 8) = 0;
          *(_OWORD *)(v118 + 24) = 0;
          *(_OWORD *)(v118 + 48) = 0;
          if ( v150 == v12 )
            break;
          v13 = *v11;
        }
      }
      v11[1] = v150;
    }
  }
  LOBYTE(src) = 0;
  v24 = 2 * v150 + 14;
  v127 = 2 * v150;
  if ( 2 * v150 + 7 >= 0 )
    v24 = 2 * v150 + 7;
  v25 = *(_QWORD *)(v4 + 40);
  v26 = v24 >> 3;
  if ( v26 >= v25 )
  {
    if ( v25 >= v26 )
    {
      v27 = v127;
      v28 = *(_QWORD *)(v4 + 16);
      if ( v28 >= v127 )
        goto LABEL_23;
      goto LABEL_152;
    }
    v107 = *(_QWORD *)(v4 + 32);
    v108 = *(_QWORD *)(v4 + 48);
    if ( (unsigned __int64)&src < v107 || (unsigned __int64)&src >= v107 + v108 )
    {
      if ( v108 < v26 )
      {
        v121 = qvector_reserve();
        *(_QWORD *)(v4 + 32) = v121;
        v107 = v121;
        v25 = *(_QWORD *)(v4 + 40);
        if ( v25 >= v26 )
          goto LABEL_151;
      }
      v109 = a2;
      while ( 1 )
      {
        *(_BYTE *)(v107 + v25++) = (_BYTE)src;
        if ( v26 == v25 )
          break;
        v107 = *(_QWORD *)(v4 + 32);
      }
    }
    else
    {
      if ( v108 < v26 )
      {
        v123 = qvector_reserve();
        *(_QWORD *)(v4 + 32) = v123;
        v107 = v123;
        v25 = *(_QWORD *)(v4 + 40);
        if ( v25 >= v26 )
          goto LABEL_151;
      }
      v109 = a2;
      while ( 1 )
      {
        *(_BYTE *)(v107 + v25++) = 0;
        if ( v26 == v25 )
          break;
        v107 = *(_QWORD *)(v4 + 32);
      }
    }
    a2 = v109;
  }
LABEL_151:
  *(_QWORD *)(v4 + 40) = v26;
  v28 = *(_QWORD *)(v4 + 16);
  v27 = v127;
  if ( v28 >= v127 )
  {
LABEL_23:
    if ( v27 != v28 )
      *(_QWORD *)(v4 + 16) = v27;
    goto LABEL_25;
  }
LABEL_152:
  v110 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 24) < v27 )
  {
    v120 = qvector_reserve();
    v28 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 8) = v120;
    v110 = v120;
  }
  memset((void *)(v110 + 4 * v28), 0, 4 * (v27 - v28));
  *(_QWORD *)(v4 + 16) = v27;
LABEL_25:
  for ( i = 0; v127 > (int)i; ++i )
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * i) = i;
  v30 = 0;
  *((_QWORD *)&v159 + 1) = 0;
  LODWORD(v159) = 0;
  v160.m128i_i64[0] = (__int64)&v159;
  v160.m128i_i64[1] = (__int64)&v159;
  v161 = 0;
  v154 = 0;
  v155 = 0;
  if ( v150 <= 0 )
  {
    v102 = 0;
    if ( a4 )
      goto LABEL_137;
    goto LABEL_144;
  }
  while ( 1 )
  {
    *(_DWORD *)(**(_QWORD **)(v4 + 232) + 80 * v30 + 72) = fc_calc_block_type();
    if ( v30 )
    {
      v32 = *(_DWORD *)(**(_QWORD **)(v4 + 232) + 80 * v30 + 72);
      if ( (v32 == 2 || v32 == 7) && !(unsigned __int8)sub_78340(&src, &v154, *(_QWORD *)(v4 + 224), (unsigned int)v30) )
        break;
    }
    v31 = v30 + 1;
    if ( v150 == v30 + 1 )
      goto LABEL_36;
LABEL_31:
    v30 = v31;
  }
  *(_DWORD *)(**(_QWORD **)(v4 + 232) + 80 * v30 + 72) = 4;
  v31 = v30 + 1;
  if ( v150 != v30 + 1 )
    goto LABEL_31;
LABEL_36:
  v128 = 0;
  v33 = 0;
  v34 = -1;
  while ( 1 )
  {
    v35 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 224) + 72LL) + (v33 << 6));
    v36 = 80 * v33 + **(_QWORD **)(v4 + 232);
    *(_QWORD *)(v36 + 24) = *v35;
    *(_QWORD *)(v36 + 32) = v35[1];
    if ( !v33 )
      *(_DWORD *)(v36 + 76) = *(_DWORD *)(v36 + 76) & 0xFFFFFFE7 | 8;
    v37 = *(_QWORD *)v4;
    v153.m128i_i8[0] = 0;
    v38 = sub_401C0(v37, v36, a3, &v153, a4);
    v41 = (int)v33;
    if ( v38 )
      *(_BYTE *)(v4 + 248) = 1;
    v42 = *(_DWORD *)(v36 + 76);
    v128 |= v153.m128i_i8[0];
    if ( (v42 & 0x10) == 0 )
      v34 = (int)v33;
    if ( a4 )
    {
      v43 = (__m128d)0xC3F0000000000000LL;
      if ( (v42 & 2) != 0 )
      {
        v43 = 0;
        v43.m128d_f64[0] = (double)(int)*(_QWORD *)(v36 + 48);
      }
      if ( (*(_BYTE *)(**(_QWORD **)(v4 + 232) + 80 * v33 + 76) & 1) != 0 )
      {
        v44 = *(_QWORD *)(v4 + 64);
        v45 = *a2;
        v46 = a2[2];
        LODWORD(v156) = v44;
        v47 = v44;
        v48 = a2[1];
        v49 = v48 + 1;
        if ( (unsigned __int64)&v156 < v45 || (unsigned __int64)&v156 >= v45 + 4 * v46 )
        {
          if ( v46 < v49 )
          {
            v45 = qvector_reserve();
            v47 = (int)v156;
            LODWORD(v41) = v33;
            v43 = (__m128d)*(unsigned __int64 *)&v43.m128d_f64[0];
            *a2 = v45;
            v48 = a2[1];
          }
          *(_DWORD *)(v45 + 4 * v48) = v47;
        }
        else
        {
          if ( v46 < v49 )
          {
            v132 = v44;
            v45 = qvector_reserve();
            LODWORD(v44) = v132;
            LODWORD(v41) = v33;
            v43 = (__m128d)*(unsigned __int64 *)&v43.m128d_f64[0];
            *a2 = v45;
            v48 = a2[1];
          }
          *(_DWORD *)(v45 + 4 * v48) = v44;
        }
        v50 = 0;
        ++a2[1];
      }
      else
      {
        v50 = 1;
      }
      v51 = 0;
      v51.m128d_f64[0] = (double)(int)*(_QWORD *)(v36 + 48);
      sub_40D80((_QWORD *)v4, v150 + v33, v41, v50, v43, v51);
    }
    if ( v30 == v33 )
      break;
    ++v33;
  }
  if ( (int)v34 > 0 )
  {
    v52 = 0;
    do
    {
      v39 = *(_QWORD *)(v4 + 232);
      v53 = v52 + *(_QWORD *)v39;
      v52 += 80;
      *(_DWORD *)(v53 + 76) &= ~0x10u;
    }
    while ( 80 * v34 != v52 );
  }
  v144 = 0;
  v54 = 0;
  v149 = 1;
  while ( 2 )
  {
    v146 = 80 * v54;
    v56 = *(_DWORD *)(**(_QWORD **)(v4 + 232) + 80 * v54 + 76) & 0x100;
    if ( v56 )
    {
      v55 = v149;
      goto LABEL_65;
    }
    v57 = *(_QWORD **)(v4 + 224);
    v58 = *(__int64 (__fastcall **)(__int64, int))(*v57 + 96LL);
    if ( v58 == sub_212E0 )
      v40 = *(int *)(v57[9] + v144 + 24);
    else
      v40 = ((int (__fastcall *)(_QWORD *, _QWORD, unsigned __int64, __int64 (__fastcall *)(__int64, int), unsigned __int64, __int64))v58)(
              v57,
              (unsigned int)v54,
              v39,
              sub_212E0,
              v40,
              v41);
    v156 = 0;
    v157 = 0;
    if ( !v40 )
      goto LABEL_167;
    v59 = 0;
    v60 = 0;
    do
    {
      while ( 1 )
      {
        v61 = *(_QWORD **)(v4 + 224);
        v62 = *(__int64 (__fastcall **)(__int64, int, int))(*v61 + 112LL);
        if ( v62 == sub_21300 )
        {
          v39 = *(_QWORD *)(v61[9] + v144 + 16);
          v63 = *(_DWORD *)(v39 + 4 * v60);
        }
        else
        {
          v138 = v40;
          v82 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64 (__fastcall *)(__int64, int, int), unsigned __int64, __int64))v62)(
                  v61,
                  (unsigned int)v54,
                  v59,
                  v62,
                  v40,
                  v41);
          v40 = v138;
          v63 = v82;
        }
        if ( v150 > v63 )
          break;
        v60 = (int)++v59;
        if ( (int)v59 >= v40 )
          goto LABEL_81;
      }
      v64 = (__m128i *)v156;
      v41 = *(_QWORD *)(**(_QWORD **)(v4 + 232) + 80LL * v63 + 24);
      v65 = v157;
      v153.m128i_i32[2] = v63;
      v153.m128i_i64[0] = v41;
      v39 = v157 + 1;
      if ( &v153 < v156 || &v153 >= (__m128i *)((char *)v156 + 16 * *((_QWORD *)&v157 + 1)) )
      {
        if ( *((_QWORD *)&v157 + 1) < v39 )
        {
          v139 = v40;
          v156 = (void *)qvector_reserve();
          v64 = (__m128i *)v156;
          v40 = v139;
          v65 = v157;
        }
        v64[v65] = _mm_load_si128(&v153);
      }
      else
      {
        if ( *((_QWORD *)&v157 + 1) < v39 )
        {
          v125 = v40;
          v141 = v41;
          v156 = (void *)qvector_reserve();
          v64 = (__m128i *)v156;
          v40 = v125;
          v65 = v157;
          v41 = v141;
        }
        v66 = &v64[v65];
        v66->m128i_i64[0] = v41;
        v66->m128i_i32[2] = v63;
      }
      ++v59;
      *(_QWORD *)&v157 = v157 + 1;
      v60 = (int)v59;
    }
    while ( (int)v59 < v40 );
LABEL_81:
    v67 = v157;
    if ( (unsigned __int64)v157 > 1 )
    {
      v68 = (__m128i *)v156;
      v88 = 16 * v157;
      if ( (char *)v156 + 16 * (_QWORD)v157 == v156 )
      {
LABEL_84:
        v69 = 0;
        do
        {
          v79 = v68[v69].m128i_i32[2];
          v40 = v79;
          v41 = 80 * v79;
          if ( (int)v79 > (int)v54 )
            goto LABEL_100;
          v129 = v79;
          v133 = 80 * v79;
          v86 = netnode_charval();
          v41 = v133;
          v40 = v129;
          if ( v86 != 1 || (v130 = v133, v134 = v40, v87 = netnode_charval(), v40 = v134, v41 = v130, v87 != 1) )
          {
LABEL_100:
            v80 = **(_QWORD **)(v4 + 232);
            v81 = *(_DWORD *)(v80 + v41 + 76);
            if ( (v81 & 0x20) != 0 || (v70 = 1, (~(_WORD)v81 & 0x240) == 0) )
            {
              *(_DWORD *)(v80 + v41 + 76) = v81 | 4;
              v80 = **(_QWORD **)(v4 + 232);
              v70 = (v81 & 4) == 0;
            }
            v71 = *(_DWORD *)(v80 + v146 + 76);
            if ( (v71 & 1) != 0 || (v71 & 0x40) != 0 )
            {
              *(_DWORD *)(v80 + v41 + 76) &= ~0x10u;
              v41 += **(_QWORD **)(v4 + 232);
              *(_DWORD *)(v41 + 76) |= 0x40u;
            }
            if ( v67 != 2
              || (_DWORD)v40 == v149
              || (v83 = *(unsigned __int64 **)(v4 + 240), v39 = *v83, (__int64)*v83 <= 0)
              || (v84 = v83[1], v84 <= 0)
              || (v85 = *(_QWORD *)(**(_QWORD **)(v4 + 232) + v146 + 40) - **(_QWORD **)(*(_QWORD *)(v4 + 224) + 56LL),
                  v39 != v85)
              && v84 != v85 )
            {
              if ( !v70 )
              {
                v72 = *(_QWORD *)(v4 + 64);
                v73 = *a2;
                v74 = a2[2];
                v153.m128i_i32[0] = v72;
                v75 = v72;
                v76 = a2[1];
                v77 = v76 + 1;
                if ( (unsigned __int64)&v153 < v73 || (unsigned __int64)&v153 >= v73 + 4 * v74 )
                {
                  if ( v74 < v77 )
                  {
                    v135 = v40;
                    v73 = qvector_reserve();
                    v75 = v153.m128i_i32[0];
                    LODWORD(v40) = v135;
                    *a2 = v73;
                    v76 = a2[1];
                  }
                  *(_DWORD *)(v73 + 4 * v76) = v75;
                }
                else
                {
                  if ( v74 < v77 )
                  {
                    v131 = v72;
                    v136 = v40;
                    v73 = qvector_reserve();
                    LODWORD(v72) = v131;
                    LODWORD(v40) = v136;
                    *a2 = v73;
                    v76 = a2[1];
                  }
                  *(_DWORD *)(v73 + 4 * v76) = v72;
                }
                ++a2[1];
              }
              sub_40D80((_QWORD *)v4, v40, v150 + v54, v70, (__m128d)0LL, (__m128d)0LL);
            }
          }
          v78 = v156;
          v69 = ++v56;
          v68 = (__m128i *)v156;
        }
        while ( v56 < v67 );
        v55 = v149;
        goto LABEL_119;
      }
      if ( v88 >> 4 )
      {
        _BitScanReverse64(&v89, v88 >> 4);
        v140 = (__int64 *)((char *)v156 + 16 * v157);
        sub_42CC0((__m128i *)v156, v140, 2LL * (int)v89, (__int64 (__fastcall *)(__int64, __int64))sub_3FB90);
        v90 = (__m128i *)v140;
        if ( (__int64)(16 * v67) > 256 )
        {
          sub_429A0(v68, v68 + 16, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_3FB90);
          v91 = v68 + 15;
          v92 = &v153;
          do
          {
            v93 = (__m128i *)v91;
            v153 = _mm_loadu_si128(v91 + 1);
            while ( sub_3FB90(v92, v93) )
            {
              v94 = *(_QWORD *)v95;
              v93 = (__m128i *)(v95 - 16);
              v93[2].m128i_i64[0] = v94;
              v93[2].m128i_i32[2] = v93[1].m128i_i32[2];
            }
            ++v91;
            *(_QWORD *)(v95 + 16) = v153.m128i_i64[0];
            *(_DWORD *)(v95 + 24) = v153.m128i_i32[2];
          }
          while ( v96 != v91 );
          a2 = v97;
          goto LABEL_83;
        }
      }
      else
      {
        v142 = (__int64 *)((char *)v156 + 16 * v157);
        sub_42CC0((__m128i *)v156, v142, -2, (__int64 (__fastcall *)(__int64, __int64))sub_3FB90);
        v90 = (__m128i *)v142;
      }
      sub_429A0(v68, v90, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_3FB90);
LABEL_83:
      v68 = (__m128i *)v156;
      goto LABEL_84;
    }
    if ( (_QWORD)v157 )
      goto LABEL_83;
LABEL_167:
    v55 = v149;
    v78 = v156;
    if ( *(_DWORD *)(**(_QWORD **)(v4 + 232) + v146 + 72) == 4 && v150 - 1 > (int)v54 )
    {
      v114 = *(_QWORD *)(*(_QWORD *)(v4 + 224) + 72LL);
      v39 = *(_QWORD *)(v114 + v144 + 64);
      if ( *(_QWORD *)(v114 + v144 + 8) == v39 )
      {
        flags = get_flags_ex();
        v78 = v156;
        v39 = ~flags;
        BYTE1(v39) = ((unsigned __int16)~(_WORD)flags >> 8) & 6;
        if ( !BYTE1(v39) && (flags & 0x1000) == 0 )
        {
          sub_40D80((_QWORD *)v4, v149, v150 + v54, 1, (__m128d)0LL, (__m128d)0LL);
          *(_DWORD *)(**(_QWORD **)(v4 + 232) + v146 + 72) = 0;
          v78 = v156;
        }
      }
    }
LABEL_119:
    if ( v78 )
    {
      *(_QWORD *)&v157 = 0;
      qfree();
    }
LABEL_65:
    ++v149;
    ++v54;
    v144 += 64;
    if ( v150 > v55 )
      continue;
    break;
  }
  if ( a4 != 1 || v128 )
    goto LABEL_166;
  v98 = v150;
  v99 = 0;
  do
  {
    while ( 1 )
    {
      v100 = v99 + **(_QWORD **)(v4 + 232);
      if ( *(char *)(v100 + 76) < 0 || *(_DWORD *)(v100 + 72) == 7 )
        break;
      ++v98;
      v99 += 80;
      if ( v98 == v127 )
        goto LABEL_137;
    }
    sub_40C80((_QWORD *)v4, v98, -1);
    v99 = v101 + 80;
  }
  while ( v98 != v127 );
LABEL_137:
  sub_40C80((_QWORD *)v4, 0, -1);
  if ( sub_40E40(v4, (__int64)a2) )
  {
    v102 = Clp_newModel();
    Clp_registerCallBack();
    Clp_registerCallBack2();
    Clp_setLogLevel();
    Clp_resize();
    v103 = Clp_objective();
    if ( *(_QWORD *)(v4 + 88) )
    {
      v104 = 0;
      v105 = 0;
      do
      {
        ++v104;
        *(_QWORD *)(v103 + 8 * v105) = 0x3FF0000000000000LL;
        v105 = v104;
      }
      while ( (unsigned __int64)v104 < *(_QWORD *)(v4 + 88) );
    }
    Clp_addRows();
  }
  else
  {
LABEL_166:
    v102 = 0;
  }
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    qfree();
  }
LABEL_144:
  sub_3FCC0(*((_QWORD **)&v159 + 1));
  return v102;
}
