__int64 __fastcall sub_42AC0(__int64 a1, __int64 *a2, __int64 a3, double a4, __m128i a5, __m128i a6, double a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  const __m128i *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 m; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v26; // rbp
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rsi
  bool v31; // al
  __int64 v32; // rax
  __int64 v33; // r15
  const __m128i *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm0
  bool v38; // cf
  __int64 v39; // rax
  int j; // ebp
  __int64 v41; // rdx
  char v42; // cl
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  const __m128i *v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rbx
  __int64 v56; // r13
  __int64 v57; // r15
  __int64 v58; // rbp
  __int64 v59; // rbx
  unsigned __int64 v60; // rbp
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // r12
  __int64 v69; // rbx
  __m128i v70; // xmm0
  int v71; // eax
  __int64 v72; // rax
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 *v77; // rbx
  unsigned __int64 *v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // r15
  size_t v82; // r9
  __int64 v83; // rdi
  __int64 v84; // r8
  unsigned __int64 v85; // rbp
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // r15
  const __m128i *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __m128i v93; // xmm0
  __int64 v94; // rax
  __int64 v95; // rbp
  const __m128i *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __m128i v100; // xmm0
  __m128i v101; // xmm0
  __m128i v102; // xmm0
  char v103; // al
  const __m128i *v104; // rdx
  __m128 v105; // xmm0
  __int64 v106; // rax
  const __m128i *v107; // rdx
  __m128i si128; // xmm0
  __int64 v109; // rdx
  __m128i v110; // xmm0
  __int64 v111; // rbx
  __int64 v112; // rbp
  __int64 v113; // rdi
  __int64 v114; // [rsp+0h] [rbp-358h]
  __int64 v115; // [rsp+0h] [rbp-358h]
  __int64 k; // [rsp+0h] [rbp-358h]
  __int64 v117; // [rsp+0h] [rbp-358h]
  __int64 v118; // [rsp+8h] [rbp-350h]
  __int64 v119; // [rsp+8h] [rbp-350h]
  __int64 v120; // [rsp+10h] [rbp-348h]
  __int64 v121; // [rsp+18h] [rbp-340h]
  __int64 v122; // [rsp+20h] [rbp-338h]
  _BOOL8 v124; // [rsp+38h] [rbp-320h]
  __int64 v125; // [rsp+40h] [rbp-318h]
  __int64 v126; // [rsp+48h] [rbp-310h]
  __int64 v127; // [rsp+58h] [rbp-300h]
  __int64 v128; // [rsp+68h] [rbp-2F0h]
  const __m128i *v129; // [rsp+70h] [rbp-2E8h] BYREF
  __m128i v130; // [rsp+78h] [rbp-2E0h] BYREF
  const __m128i *v131; // [rsp+88h] [rbp-2D0h] BYREF
  __m128i v132; // [rsp+90h] [rbp-2C8h] BYREF
  const __m128i *v133; // [rsp+A0h] [rbp-2B8h] BYREF
  __int128 v134; // [rsp+A8h] [rbp-2B0h] BYREF
  char v135; // [rsp+B8h] [rbp-2A0h]
  int v136; // [rsp+C0h] [rbp-298h] BYREF
  __m128i i; // [rsp+C8h] [rbp-290h] BYREF
  int v138; // [rsp+D8h] [rbp-280h]
  _BYTE v139[12]; // [rsp+E0h] [rbp-278h]
  __int64 v140; // [rsp+F0h] [rbp-268h] BYREF
  __int128 v141; // [rsp+F8h] [rbp-260h]
  __m128i v142; // [rsp+110h] [rbp-248h]
  __m128i v143; // [rsp+128h] [rbp-230h]
  __m128i v144; // [rsp+140h] [rbp-218h]
  _QWORD v145[2]; // [rsp+1A0h] [rbp-1B8h] BYREF
  char v146; // [rsp+1B0h] [rbp-1A8h]
  __m128i v147; // [rsp+1C0h] [rbp-198h]
  __m128i v148; // [rsp+1D8h] [rbp-180h]
  __m128i v149; // [rsp+1F0h] [rbp-168h]
  __int64 v150; // [rsp+260h] [rbp-F8h] BYREF
  __int64 v151; // [rsp+268h] [rbp-F0h]
  __int64 v152; // [rsp+270h] [rbp-E8h]
  __m128i v153; // [rsp+280h] [rbp-D8h] BYREF
  __m128i v154; // [rsp+298h] [rbp-C0h] BYREF
  int v155; // [rsp+2A8h] [rbp-B0h]
  __m128i v156; // [rsp+2B0h] [rbp-A8h] BYREF
  int v157; // [rsp+2C0h] [rbp-98h]
  __int64 v158; // [rsp+2C8h] [rbp-90h]
  unsigned __int64 v159; // [rsp+2D0h] [rbp-88h]
  __int64 v160; // [rsp+2E0h] [rbp-78h]
  __int64 v161; // [rsp+2E8h] [rbp-70h]
  __int64 v162; // [rsp+2F8h] [rbp-60h]
  __int64 v163; // [rsp+300h] [rbp-58h]
  char v164; // [rsp+310h] [rbp-48h]
  unsigned __int64 v165; // [rsp+318h] [rbp-40h]

  v165 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a3 + 16);
  v129 = nullptr;
  v128 = v7;
  v131 = nullptr;
  v133 = nullptr;
  v135 = 0;
  v136 = 0;
  i.m128i_i8[8] = 0;
  v138 = 0;
  v139[0] = 0;
  *(_QWORD *)&v139[4] = 0;
  v130 = 0;
  v132 = 0;
  v134 = 0;
  v8 = *(_QWORD *)(a3 + 8);
  v9 = v8 + 40;
  v124 = __CFADD__(v8, 40);
  if ( v8 >= 0xFFFFFFFFFFFFFFD8LL )
  {
    sub_19A90((__int64)&v150, (__int64)"[%a,%a): bad range", v8, v9);
LABEL_3:
    v10 = v150;
    v11 = v151;
    v12 = v152;
LABEL_4:
    v145[0] = v10;
LABEL_5:
    v13 = v145[0];
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 16) = v12;
    *(_BYTE *)(a1 + 144) = 1;
    goto LABEL_6;
  }
  sub_74B30(v145, *(_QWORD *)a3 + 16LL, v8);
  if ( !v146 )
  {
    sub_19A90((__int64)&v150, (__int64)"[%a,%a): no associated segment", v8, v9);
    goto LABEL_3;
  }
  if ( v8 + 39 >= v145[1] || v8 + 39 < v145[0] )
  {
    sub_19A90(
      (__int64)&v150,
      (__int64)"[%a,%a): does not fit in segment [%a,%a)",
      0.0,
      *(double *)a5.m128i_i64,
      *(double *)a6.m128i_i64,
      a7);
    v10 = v150;
    v11 = v151;
    v12 = v152;
    goto LABEL_4;
  }
  sub_41BE0((__int64)&v150, (const double *)a3, 0.0, a5, a6, a7);
  v11 = v151;
  v12 = v152;
  if ( v164 )
  {
    v145[0] = v150;
    goto LABEL_5;
  }
  v121 = v158;
  v26 = v162 + 16 * v163;
  v127 = v162;
  v27 = v162;
  v125 = v160;
  v28 = v159;
  v142 = _mm_load_si128(&v153);
  v126 = v161;
  v143 = _mm_loadu_si128(&v154);
  v136 = v155;
  v144 = _mm_load_si128(&v156);
  v138 = v157;
  v147 = v142;
  v148 = v143;
  v149 = v144;
  for ( i = v144; v26 != v27; v135 |= v31 )
  {
    v32 = v134;
    if ( *((_QWORD *)&v134 + 1) >= (unsigned __int64)(v134 + 1) )
    {
      v29 = (__int64)v133;
    }
    else
    {
      v114 = *((_QWORD *)&v134 + 1);
      v29 = qvector_reserve(&v133, 0, v134 + 1, 16);
      v33 = *((_QWORD *)&v134 + 1);
      v34 = v133;
      *((_QWORD *)&v134 + 1) = v114;
      v35 = v134 - 1;
      if ( (__int64)v134 - 1 >= 0 )
      {
        v36 = v29;
        do
        {
          v37 = _mm_loadu_si128(v34);
          v36 += 16;
          ++v34;
          *(__m128i *)(v36 - 16) = v37;
          v38 = v35-- == 0;
        }
        while ( !v38 );
        v34 = v133;
      }
      qfree(v34);
      v133 = (const __m128i *)v29;
      v32 = v134;
      *((_QWORD *)&v134 + 1) = v33;
    }
    v30 = v29 + 16 * v32;
    *(_QWORD *)v30 = -1;
    *(_DWORD *)(v30 + 8) = -2;
    *(_QWORD *)&v134 = v134 + 1;
    *(_QWORD *)v30 = *(_QWORD *)v27;
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v27 + 8);
    v31 = sub_3D7C0(a2, (__int64 *)v30);
    v27 += 16;
  }
  v39 = 0;
  for ( j = 0; j < v28; v39 = j )
  {
    v43 = v130.m128i_i64[0];
    v44 = v121 + 24 * v39;
    if ( v130.m128i_i64[1] < (unsigned __int64)(v130.m128i_i64[0] + 1) )
    {
      v115 = v130.m128i_i64[1];
      v47 = qvector_reserve(&v129, 0, v130.m128i_i64[0] + 1, 32);
      v45 = v47;
      v48 = v130.m128i_i64[1];
      v49 = v129;
      v130.m128i_i64[1] = v115;
      v50 = v130.m128i_i64[0] - 1;
      if ( v130.m128i_i64[0] - 1 >= 0 )
      {
        v51 = v47;
        do
        {
          v52 = _mm_loadu_si128(v49);
          v51 += 32;
          v49 += 2;
          *(__m128i *)(v51 - 32) = v52;
          *(__m128i *)(v51 - 16) = _mm_loadu_si128(v49 - 1);
          v38 = v50-- == 0;
        }
        while ( !v38 );
        v49 = v129;
      }
      qfree(v49);
      v129 = (const __m128i *)v45;
      v43 = v130.m128i_i64[0];
      v130.m128i_i64[1] = v48;
    }
    else
    {
      v45 = (__int64)v129;
    }
    v46 = v45 + 32 * v43;
    *(_QWORD *)(v46 + 4) = 0xFFFFFFFEFFFFFFFELL;
    *(_BYTE *)v46 = 0;
    *(_QWORD *)(v46 + 16) = -1;
    *(_BYTE *)(v46 + 28) = 0;
    ++v130.m128i_i64[0];
    *(_DWORD *)(v46 + 4) = j;
    *(_DWORD *)(v46 + 8) = *(_DWORD *)v44;
    if ( *(_BYTE *)(v44 + 16) )
    {
      v41 = *(_QWORD *)(v44 + 8);
      v42 = 3;
    }
    else
    {
      v42 = 0;
      v41 = -1;
    }
    ++j;
    *(_BYTE *)v46 = v42;
    *(_QWORD *)(v46 + 16) = v41;
  }
  v140 = 0;
  v141 = 0;
  v120 = v125;
  v122 = v125 + 56 * v126;
  if ( v122 == v125 )
  {
    v77 = nullptr;
  }
  else
  {
    do
    {
      v54 = v132.m128i_i64[1];
      v53 = v132.m128i_i64[0];
      if ( v132.m128i_i64[1] < (unsigned __int64)(v132.m128i_i64[0] + 1) )
      {
        v94 = qvector_reserve(&v131, 0, v132.m128i_i64[0] + 1, 40);
        v95 = v132.m128i_i64[1];
        v55 = v94;
        v132.m128i_i64[1] = v54;
        v96 = v131;
        v97 = v132.m128i_i64[0] - 1;
        if ( v132.m128i_i64[0] - 1 >= 0 )
        {
          do
          {
            v98 = v96->m128i_i64[0];
            v94 += 40;
            v96 = (const __m128i *)((char *)v96 + 40);
            *(_QWORD *)(v94 - 40) = v98;
            *(_DWORD *)(v94 - 32) = v96[-2].m128i_i32[0];
            v99 = v96[-2].m128i_i64[1];
            v100 = _mm_loadu_si128(v96 - 1);
            v96[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v94 - 24) = v99;
            *(__m128i *)(v94 - 16) = v100;
            v96[-1] = 0;
            v38 = v97-- == 0;
          }
          while ( !v38 );
          v96 = v131;
        }
        qfree(v96);
        v131 = (const __m128i *)v55;
        v53 = v132.m128i_i64[0];
        v132.m128i_i64[1] = v95;
      }
      else
      {
        v55 = (__int64)v131;
      }
      v56 = v55 + 40 * v53;
      *(_DWORD *)(v56 + 8) = -3;
      *(_QWORD *)v56 = 0xFFFFFFFEFFFFFFFFLL;
      *(_QWORD *)(v56 + 16) = 0;
      *(_OWORD *)(v56 + 24) = 0;
      ++v132.m128i_i64[0];
      *(_DWORD *)v56 = *(_DWORD *)v120;
      *(_DWORD *)(v56 + 4) = *(_DWORD *)(v120 + 4);
      *(_DWORD *)(v56 + 8) = *(_DWORD *)(v120 + 8);
      v57 = *(_QWORD *)(v120 + 32);
      for ( k = v57 + 56LL * *(_QWORD *)(v120 + 40); k != v57; *(_DWORD *)(v59 + 60) = *(_DWORD *)(v57 - 8) )
      {
        v63 = *(_QWORD *)(v56 + 24);
        v64 = *(_QWORD *)(v56 + 32);
        if ( v64 >= v63 + 1 )
        {
          v58 = *(_QWORD *)(v56 + 16);
        }
        else
        {
          v58 = qvector_reserve(v56 + 16, 0, v63 + 1, 72);
          v65 = *(_QWORD *)(v56 + 24);
          v66 = *(_QWORD *)(v56 + 32);
          *(_QWORD *)(v56 + 32) = v64;
          v67 = *(_QWORD *)(v56 + 16);
          v118 = v66;
          v68 = v65 - 1;
          if ( v68 >= 0 )
          {
            v69 = v58;
            do
            {
              v70 = _mm_loadu_si128((const __m128i *)(v67 + 8));
              *(_BYTE *)v69 = *(_BYTE *)v67;
              v71 = *(_DWORD *)(v67 + 24);
              *(__m128i *)(v69 + 8) = v70;
              *(_DWORD *)(v69 + 24) = v71;
              *(_BYTE *)(v69 + 28) = *(_BYTE *)(v67 + 28);
              v72 = *(_QWORD *)(v67 + 32);
              v73 = _mm_loadu_si128((const __m128i *)(v67 + 40));
              *(_QWORD *)(v67 + 32) = 0;
              *(_QWORD *)(v69 + 32) = v72;
              *(__m128i *)(v69 + 40) = v73;
              LODWORD(v72) = *(_DWORD *)(v67 + 56);
              *(_QWORD *)(v67 + 48) = 0;
              *(_DWORD *)(v69 + 56) = v72;
              *(_DWORD *)(v69 + 60) = *(_DWORD *)(v67 + 60);
              *(_BYTE *)(v69 + 64) = *(_BYTE *)(v67 + 64);
              v74 = *(_QWORD *)(v67 + 32);
              if ( v74 )
              {
                *(_QWORD *)(v67 + 40) = 0;
                qfree(v74);
              }
              v67 += 72;
              v69 += 72;
              v38 = v68-- == 0;
            }
            while ( !v38 );
            v67 = *(_QWORD *)(v56 + 16);
          }
          qfree(v67);
          *(_QWORD *)(v56 + 16) = v58;
          *(_QWORD *)(v56 + 32) = v118;
          v63 = *(_QWORD *)(v56 + 24);
        }
        v59 = v58 + 72 * v63;
        v60 = -1;
        *(_BYTE *)v59 = -1;
        *(_DWORD *)(v59 + 24) = 0;
        *(_BYTE *)(v59 + 28) = 1;
        *(_QWORD *)(v59 + 32) = 0;
        *(_QWORD *)(v59 + 56) = 0;
        *(_BYTE *)(v59 + 64) = 0;
        *(_OWORD *)(v59 + 8) = -1;
        *(_OWORD *)(v59 + 40) = 0;
        ++*(_QWORD *)(v56 + 24);
        *(_BYTE *)v59 = 3;
        if ( *(_BYTE *)(v57 + 40) )
          v60 = *(_QWORD *)(v57 + 32);
        *(_QWORD *)(v59 + 8) = v60;
        if ( !sub_1DE00((__int64 *)&v133, v60) )
        {
          v75 = v141;
          v76 = v140;
          if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v141 + 1) )
          {
            v140 = qvector_reserve(&v140, v140, v141 + 1, 8);
            v76 = v140;
            v75 = v141;
          }
          *(_QWORD *)(v76 + 8 * v75) = v60;
          *(_QWORD *)&v141 = v141 + 1;
        }
        v61 = -1;
        if ( *(_BYTE *)(v57 + 16) )
          v61 = *(_QWORD *)(v57 + 8);
        *(_QWORD *)(v59 + 16) = v61;
        v62 = *(_DWORD *)(v57 + 24);
        v57 += 56;
        *(_BYTE *)(v59 + 28) = 1;
        *(_DWORD *)(v59 + 24) = v62;
        *(_DWORD *)(v59 + 56) = *(_DWORD *)(v57 - 56);
      }
      v120 += 56;
    }
    while ( v122 != v120 );
    v77 = (unsigned __int64 *)v140;
    v78 = (unsigned __int64 *)(v140 + 8 * v141);
    if ( v78 != (unsigned __int64 *)v140 )
    {
      do
      {
        v85 = *v77;
        v86 = (int)sub_1DD80((__int64 *)&v133, *v77);
        v87 = v134;
        v88 = 16 * (v86 + 1);
        if ( *((_QWORD *)&v134 + 1) >= (unsigned __int64)(v134 + 1) )
        {
          v79 = (__int64)v133;
        }
        else
        {
          v119 = *((_QWORD *)&v134 + 1);
          v117 = v88;
          v79 = qvector_reserve(&v133, 0, v134 + 1, 16);
          v89 = *((_QWORD *)&v134 + 1);
          v90 = v133;
          v91 = v134 - 1;
          *((_QWORD *)&v134 + 1) = v119;
          if ( (__int64)v134 - 1 >= 0 )
          {
            v92 = v79;
            do
            {
              v93 = _mm_loadu_si128(v90);
              v92 += 16;
              ++v90;
              *(__m128i *)(v92 - 16) = v93;
              v38 = v91-- == 0;
            }
            while ( !v38 );
            v90 = v133;
          }
          qfree(v90);
          v88 = v117;
          *((_QWORD *)&v134 + 1) = v89;
          v87 = v134;
          v133 = (const __m128i *)v79;
        }
        v80 = 16 * v87;
        v81 = v79 + v88;
        v82 = v80 - v88;
        v83 = v80 - v88 + 16;
        v84 = (v80 - v88) >> 4;
        if ( v84 - 1 >= 0 )
          memmove((void *)(v81 + 16 * (1 - v84) - 16 + v83), (const void *)(16 * (1 - v84) - 16 + v80 + v79), v82);
        *(_QWORD *)v81 = v85;
        ++v77;
        *(_DWORD *)(v81 + 8) = 0;
        *(_QWORD *)&v134 = v134 + 1;
      }
      while ( v78 != v77 );
      v77 = (unsigned __int64 *)v140;
    }
  }
  v101 = _mm_loadu_si128(&v130);
  v130 = 0;
  *(__m128i *)(a1 + 24) = v101;
  v102 = _mm_load_si128(&v132);
  *(_BYTE *)a1 = 3;
  *(__m128i *)(a1 + 48) = v102;
  v103 = v135;
  *(_QWORD *)(a1 + 8) = v128;
  v104 = v129;
  v105 = _mm_loadh_ps((const double *)&v134 + 1);
  *(_BYTE *)(a1 + 88) = v103;
  v106 = *(_QWORD *)v139;
  *(_QWORD *)(a1 + 16) = v104;
  v107 = v131;
  *(__m128 *)(a1 + 72) = v105;
  si128 = _mm_load_si128((const __m128i *)&v136);
  *(_QWORD *)(a1 + 40) = v107;
  v109 = (__int64)v133;
  *(_QWORD *)(a1 + 128) = v106;
  LODWORD(v106) = *(_DWORD *)&v139[8];
  *(__m128i *)(a1 + 96) = si128;
  v110 = _mm_load_si128((const __m128i *)&i.m128i_u64[1]);
  v129 = nullptr;
  v131 = nullptr;
  *(_QWORD *)(a1 + 64) = v109;
  v133 = nullptr;
  v132 = 0;
  v134 = 0;
  *(__m128i *)(a1 + 112) = v110;
  *(_DWORD *)(a1 + 136) = v106;
  *(_BYTE *)(a1 + 144) = 0;
  if ( v77 )
  {
    *(_QWORD *)&v141 = 0;
    qfree(v77);
  }
  if ( v127 )
    qfree(v127);
  if ( v125 )
  {
    v111 = v125;
    if ( v126 )
    {
      v112 = v124;
      do
      {
        v113 = *(_QWORD *)(v111 + 32);
        if ( v113 )
        {
          *(_QWORD *)(v111 + 40) = 0;
          qfree(v113);
        }
        ++v112;
        v111 += 56;
      }
      while ( v112 != v126 );
    }
    qfree(v125);
  }
  if ( v121 )
    qfree(v121);
LABEL_6:
  if ( v133 )
  {
    *(_QWORD *)&v134 = 0;
    qfree(v133);
  }
  v14 = v131;
  if ( v131 )
  {
    v15 = v132.m128i_i64[0];
    if ( v132.m128i_i64[0] )
    {
      v16 = 0;
      do
      {
        v17 = &v14->m128i_i64[5 * v16];
        v18 = v17[2];
        if ( v18 )
        {
          v19 = v17[3];
          if ( v19 )
          {
            for ( m = 0; m != v19; ++m )
            {
              v21 = v18 + 72 * m;
              v22 = *(_QWORD *)(v21 + 32);
              if ( v22 )
              {
                *(_QWORD *)(v21 + 40) = 0;
                qfree(v22);
                v18 = v17[2];
              }
            }
          }
          v17[3] = 0;
          qfree(v18);
          v14 = v131;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v132.m128i_i64[0] = 0;
    qfree(v14);
  }
  if ( v129 )
  {
    v130.m128i_i64[0] = 0;
    qfree(v129);
  }
  return a1;
}

