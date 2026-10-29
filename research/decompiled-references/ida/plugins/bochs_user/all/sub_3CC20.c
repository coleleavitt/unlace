__int64 __fastcall sub_3CC20(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  size_t v9; // rbp
  __m128i *v11; // rax
  __int64 v12; // rdx
  __m128i *v13; // r15
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rdi
  __int64 (__fastcall *v16)(__int64, unsigned __int16, __int64, unsigned __int16); // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i *v24; // r10
  __m128i *v25; // r9
  __m128i *v26; // r8
  char *v27; // r11
  unsigned __int64 v28; // r11
  __int8 v29; // al
  char *v30; // r11
  char *v31; // r11
  __int8 v32; // al
  __int32 v33; // eax
  unsigned __int64 v34; // r11
  char *v35; // r11
  bool v36; // zf
  __int64 v37; // rax
  __m128i *v38; // rdi
  __int64 v39; // r15
  unsigned __int64 v40; // rdx
  char *v41; // r8
  __int64 *m128i_i64; // r15
  __int64 *v43; // r14
  __int64 v44; // rbp
  __int64 *i; // rbx
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  void *v64; // [rsp+18h] [rbp-A0h]
  __m128i *v65; // [rsp+18h] [rbp-A0h]
  __m128i *v66; // [rsp+18h] [rbp-A0h]
  __m128i *v67; // [rsp+18h] [rbp-A0h]
  __m128i *v68; // [rsp+18h] [rbp-A0h]
  __m128i *v69; // [rsp+18h] [rbp-A0h]
  __m128i *v70; // [rsp+18h] [rbp-A0h]
  __m128i *v71; // [rsp+18h] [rbp-A0h]
  __m128i *v72; // [rsp+18h] [rbp-A0h]
  __m128i *v73; // [rsp+18h] [rbp-A0h]
  __m128i *v74; // [rsp+18h] [rbp-A0h]
  __m128i *v75; // [rsp+18h] [rbp-A0h]
  __int64 *v76; // [rsp+18h] [rbp-A0h]
  void *v77; // [rsp+18h] [rbp-A0h]
  __m128i *v78; // [rsp+18h] [rbp-A0h]
  __m128i *v79; // [rsp+18h] [rbp-A0h]
  __m128i *v80; // [rsp+18h] [rbp-A0h]
  size_t v81; // [rsp+28h] [rbp-90h]
  size_t v82; // [rsp+28h] [rbp-90h]
  size_t v83; // [rsp+28h] [rbp-90h]
  size_t v84; // [rsp+28h] [rbp-90h]
  size_t v85; // [rsp+28h] [rbp-90h]
  size_t v86; // [rsp+28h] [rbp-90h]
  size_t v87; // [rsp+28h] [rbp-90h]
  size_t v88; // [rsp+28h] [rbp-90h]
  size_t v89; // [rsp+28h] [rbp-90h]
  size_t v90; // [rsp+28h] [rbp-90h]
  size_t v91; // [rsp+28h] [rbp-90h]
  size_t v92; // [rsp+28h] [rbp-90h]
  size_t v93; // [rsp+28h] [rbp-90h]
  size_t v94; // [rsp+28h] [rbp-90h]
  size_t v95; // [rsp+28h] [rbp-90h]
  size_t nd; // [rsp+30h] [rbp-88h]
  size_t n; // [rsp+30h] [rbp-88h]
  size_t na; // [rsp+30h] [rbp-88h]
  size_t ne; // [rsp+30h] [rbp-88h]
  size_t nf; // [rsp+30h] [rbp-88h]
  size_t ng; // [rsp+30h] [rbp-88h]
  size_t nb; // [rsp+30h] [rbp-88h]
  const void *nc; // [rsp+30h] [rbp-88h]
  size_t nh; // [rsp+30h] [rbp-88h]
  size_t v105; // [rsp+38h] [rbp-80h]
  size_t v106; // [rsp+38h] [rbp-80h]
  size_t v107; // [rsp+38h] [rbp-80h]
  size_t v108; // [rsp+38h] [rbp-80h]
  size_t v109; // [rsp+38h] [rbp-80h]
  void *src; // [rsp+40h] [rbp-78h]
  void *srca; // [rsp+40h] [rbp-78h]
  void *srcb; // [rsp+40h] [rbp-78h]
  void *srcc; // [rsp+40h] [rbp-78h]
  __m128i *v114; // [rsp+48h] [rbp-70h]
  __m128i *v115; // [rsp+48h] [rbp-70h]
  void *v116; // [rsp+48h] [rbp-70h]
  __m128i *v117; // [rsp+48h] [rbp-70h]
  __m128i *v118; // [rsp+48h] [rbp-70h]
  void *v119; // [rsp+48h] [rbp-70h]
  char *v120; // [rsp+48h] [rbp-70h]
  char *v121; // [rsp+48h] [rbp-70h]
  char *v122; // [rsp+48h] [rbp-70h]
  char *v123; // [rsp+48h] [rbp-70h]
  char *v124; // [rsp+50h] [rbp-68h]
  char *v125; // [rsp+50h] [rbp-68h]
  __m128i *v126; // [rsp+50h] [rbp-68h]
  char *v127; // [rsp+50h] [rbp-68h]
  char *v128; // [rsp+50h] [rbp-68h]
  __m128i *v129; // [rsp+50h] [rbp-68h]
  __int64 v130; // [rsp+50h] [rbp-68h]
  __m128i *v131; // [rsp+50h] [rbp-68h]
  __m128i *v132; // [rsp+50h] [rbp-68h]
  __m128i *v133; // [rsp+50h] [rbp-68h]
  __int64 v134; // [rsp+50h] [rbp-68h]
  __m128i *v135; // [rsp+50h] [rbp-68h]
  __m128i *v136; // [rsp+58h] [rbp-60h]
  __m128i *v137; // [rsp+58h] [rbp-60h]
  unsigned __int64 v138; // [rsp+58h] [rbp-60h]
  __m128i *v139; // [rsp+58h] [rbp-60h]
  __m128i *v140; // [rsp+58h] [rbp-60h]
  unsigned __int64 v141; // [rsp+58h] [rbp-60h]
  __m128i *v142; // [rsp+58h] [rbp-60h]
  __m128i *v143; // [rsp+58h] [rbp-60h]
  __m128i *v144; // [rsp+58h] [rbp-60h]
  __m128i *v145; // [rsp+58h] [rbp-60h]
  __m128i *v146; // [rsp+58h] [rbp-60h]
  __m128i *v147; // [rsp+58h] [rbp-60h]
  __m128i *v148; // [rsp+60h] [rbp-58h]
  __m128i *v149; // [rsp+60h] [rbp-58h]
  __m128i *v150; // [rsp+60h] [rbp-58h]
  __m128i *v151; // [rsp+60h] [rbp-58h]
  __m128i *v152; // [rsp+60h] [rbp-58h]
  __m128i *v153; // [rsp+60h] [rbp-58h]
  __m128i *v154; // [rsp+60h] [rbp-58h]
  __m128i *v155; // [rsp+60h] [rbp-58h]
  __m128i *v156; // [rsp+60h] [rbp-58h]
  __m128i *v157; // [rsp+60h] [rbp-58h]
  __m128i *v158; // [rsp+60h] [rbp-58h]
  __m128i *v159; // [rsp+60h] [rbp-58h]
  __m128i *v160; // [rsp+68h] [rbp-50h]
  __m128i *v161; // [rsp+68h] [rbp-50h]
  __m128i *v162; // [rsp+68h] [rbp-50h]
  __m128i *v163; // [rsp+68h] [rbp-50h]
  void *dest[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFF000LL;
  v7 = ((a2 + a3 + 4095) & 0xFFFFFFFFFFFFF000LL) - (a2 & 0xFFFFFFFFFFFFF000LL);
  v8 = (__int64)a1;
  v9 = v7 >> 12;
  dest[1] = (void *)__readfsqword(0x28u);
  v64 = (void *)((a2 + a3 + 4095) & 0xFFFFFFFFFFFFF000LL);
  v11 = (__m128i *)sub_3B6D0((__int64)a1, a2 & 0xFFFFFFFFFFFFF000LL, v7, dest, 1);
  if ( !v11 )
    return 1;
  v12 = v11[2].m128i_i64[0];
  v13 = v11;
  if ( v7 < v11[2].m128i_i64[1] - v12 && v6 != v12 )
  {
    v21 = operator new(0x78u);
    *(_QWORD *)v21 = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_QWORD *)(v21 + 72) = 0;
    *(_QWORD *)(v21 + 96) = 0;
    *(_QWORD *)(v21 + 104) = 0;
    *(_DWORD *)(v21 + 112) = 0;
    *(_OWORD *)(v21 + 8) = 0;
    *(_OWORD *)(v21 + 24) = 0;
    *(_OWORD *)(v21 + 56) = 0;
    *(_OWORD *)(v21 + 80) = 0;
    v81 = v21;
    v22 = operator new(0x78u);
    *(_QWORD *)v22 = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 48) = 0;
    *(_QWORD *)(v22 + 72) = 0;
    *(_QWORD *)(v22 + 96) = 0;
    *(_QWORD *)(v22 + 104) = 0;
    *(_DWORD *)(v22 + 112) = 0;
    *(_OWORD *)(v22 + 8) = 0;
    *(_OWORD *)(v22 + 24) = 0;
    *(_OWORD *)(v22 + 56) = 0;
    *(_OWORD *)(v22 + 80) = 0;
    nd = v22;
    v23 = operator new(0x78u);
    v24 = (__m128i *)v81;
    v25 = (__m128i *)nd;
    *(_QWORD *)v23 = 0;
    v26 = (__m128i *)v23;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 48) = 0;
    *(_QWORD *)(v23 + 72) = 0;
    *(_QWORD *)(v23 + 96) = 0;
    *(_QWORD *)(v23 + 104) = 0;
    *(_DWORD *)(v23 + 112) = 0;
    *(_OWORD *)(v23 + 8) = 0;
    *(_OWORD *)(v23 + 24) = 0;
    *(_OWORD *)(v23 + 56) = 0;
    *(_OWORD *)(v23 + 80) = 0;
    v105 = v6 - v13[2].m128i_i64[0];
    v82 = (size_t)&v13[3];
    v24[2] = _mm_loadu_si128(v13 + 2);
    if ( &v13[3] != &v24[3] )
    {
      v27 = (char *)v13[3].m128i_i64[1];
      if ( v27 && (n = (size_t)(v27 - 1), v27 != (_BYTE *)&dword_0 + 1) )
      {
        srca = (void *)v13[3].m128i_i64[0];
        v53 = (void *)v24[3].m128i_i64[0];
        if ( v24[4].m128i_i64[0] < (unsigned __int64)v27 )
        {
          v155 = v26;
          v143 = v25;
          v131 = v24;
          v120 = (char *)v13[3].m128i_i64[1];
          v53 = (void *)qvector_reserve();
          v24 = v131;
          v26 = v155;
          v25 = v143;
          v27 = v120;
          v131[3].m128i_i64[0] = (__int64)v53;
        }
        v24[3].m128i_i64[1] = (__int64)v27;
        v148 = v26;
        v136 = v25;
        v124 = v27;
        v114 = v24;
        memmove(v53, srca, n);
        v24 = v114;
        v25 = v136;
        v26 = v148;
        v124[v114[3].m128i_i64[0] - 1] = 0;
      }
      else
      {
        v24[3].m128i_i64[1] = 0;
      }
    }
    na = (size_t)&v13[4].m128i_u64[1];
    if ( &v13[4].m128i_u64[1] != &v24[4].m128i_u64[1] )
    {
      v28 = v13[5].m128i_u64[0];
      if ( v28 && (src = (void *)(v28 - 1), v28 != 1) )
      {
        v116 = (void *)v13[4].m128i_i64[1];
        v55 = (void *)v24[4].m128i_i64[1];
        if ( v24[5].m128i_i64[1] < v28 )
        {
          v163 = v26;
          v158 = v25;
          v146 = v24;
          v134 = v13[5].m128i_i64[0];
          v55 = (void *)qvector_reserve();
          v24 = v146;
          v26 = v163;
          v25 = v158;
          v28 = v134;
          v146[4].m128i_i64[1] = (__int64)v55;
        }
        v24[5].m128i_i64[0] = v28;
        v160 = v26;
        v150 = v25;
        v138 = v28;
        v126 = v24;
        memmove(v55, v116, (size_t)src);
        v24 = v126;
        v25 = v150;
        v26 = v160;
        *(_BYTE *)(v126[4].m128i_i64[1] + v138 - 1) = 0;
      }
      else
      {
        v24[5].m128i_i64[0] = 0;
      }
    }
    v24[6].m128i_i64[0] = v13[6].m128i_i64[0];
    v24[6].m128i_i8[8] = v13[6].m128i_i8[8];
    v29 = v13[6].m128i_i8[9];
    v24[1].m128i_i64[1] = v105;
    v24[6].m128i_i8[9] = v29;
    v24[7].m128i_i32[0] = v13[7].m128i_i32[0];
    v24[2].m128i_i64[1] = v105 + v24[2].m128i_i64[0];
    v25[2] = _mm_loadu_si128(v13 + 2);
    if ( (__m128i *)v82 != &v25[3] )
    {
      v30 = (char *)v13[3].m128i_i64[1];
      if ( v30 && (v106 = (size_t)(v30 - 1), v30 != (_BYTE *)&dword_0 + 1) )
      {
        srcb = (void *)v13[3].m128i_i64[0];
        v54 = (void *)v25[3].m128i_i64[0];
        if ( v25[4].m128i_i64[0] < (unsigned __int64)v30 )
        {
          v156 = v26;
          v144 = v25;
          v132 = v24;
          v121 = (char *)v13[3].m128i_i64[1];
          v54 = (void *)qvector_reserve();
          v25 = v144;
          v26 = v156;
          v24 = v132;
          v30 = v121;
          v144[3].m128i_i64[0] = (__int64)v54;
        }
        v25[3].m128i_i64[1] = (__int64)v30;
        v149 = v26;
        v137 = v24;
        v125 = v30;
        v115 = v25;
        memmove(v54, srcb, v106);
        v25 = v115;
        v24 = v137;
        v26 = v149;
        v125[v115[3].m128i_i64[0] - 1] = 0;
      }
      else
      {
        v25[3].m128i_i64[1] = 0;
      }
    }
    if ( (unsigned __int64 *)na != &v25[4].m128i_u64[1] )
    {
      v31 = (char *)v13[5].m128i_i64[0];
      if ( v31 && (v107 = (size_t)(v31 - 1), v31 != (_BYTE *)&dword_0 + 1) )
      {
        srcc = (void *)v13[4].m128i_i64[1];
        v56 = (void *)v25[4].m128i_i64[1];
        if ( v25[5].m128i_i64[1] < (unsigned __int64)v31 )
        {
          v157 = v26;
          v145 = v25;
          v133 = v24;
          v122 = (char *)v13[5].m128i_i64[0];
          v56 = (void *)qvector_reserve();
          v25 = v145;
          v26 = v157;
          v24 = v133;
          v31 = v122;
          v145[4].m128i_i64[1] = (__int64)v56;
        }
        v25[5].m128i_i64[0] = (__int64)v31;
        v151 = v26;
        v139 = v24;
        v127 = v31;
        v117 = v25;
        memmove(v56, srcc, v107);
        v25 = v117;
        v24 = v139;
        v26 = v151;
        v127[v117[4].m128i_i64[1] - 1] = 0;
      }
      else
      {
        v25[5].m128i_i64[0] = 0;
      }
    }
    v25[6].m128i_i64[0] = v13[6].m128i_i64[0];
    v25[6].m128i_i8[8] = v13[6].m128i_i8[8];
    v32 = v13[6].m128i_i8[9];
    v25[2].m128i_i64[0] = v6;
    v25[6].m128i_i8[9] = v32;
    v25[1].m128i_i64[1] = v7;
    v33 = v13[7].m128i_i32[0];
    v25[2].m128i_i64[1] = (__int64)v64;
    v25[7].m128i_i32[0] = v33;
    v108 = v13[2].m128i_u64[1];
    v26[2] = _mm_loadu_si128(v13 + 2);
    if ( (__m128i *)v82 != &v26[3] )
    {
      v34 = v13[3].m128i_u64[1];
      if ( v34 && (v83 = v34 - 1, v34 != 1) )
      {
        v119 = (void *)v13[3].m128i_i64[0];
        v58 = (void *)v26[3].m128i_i64[0];
        if ( v26[4].m128i_i64[0] < v34 )
        {
          v162 = v26;
          v154 = v25;
          v142 = v24;
          v130 = v13[3].m128i_i64[1];
          v58 = (void *)qvector_reserve();
          v26 = v162;
          v25 = v154;
          v24 = v142;
          v34 = v130;
          v162[3].m128i_i64[0] = (__int64)v58;
        }
        v26[3].m128i_i64[1] = v34;
        v161 = v25;
        v153 = v24;
        v141 = v34;
        v129 = v26;
        memmove(v58, v119, v83);
        v26 = v129;
        v24 = v153;
        v25 = v161;
        *(_BYTE *)(v129[3].m128i_i64[0] + v141 - 1) = 0;
      }
      else
      {
        v26[3].m128i_i64[1] = 0;
      }
    }
    if ( (unsigned __int64 *)na != &v26[4].m128i_u64[1] )
    {
      v35 = (char *)v13[5].m128i_i64[0];
      if ( v35 && (v84 = (size_t)(v35 - 1), v35 != (_BYTE *)&dword_0 + 1) )
      {
        nc = (const void *)v13[4].m128i_i64[1];
        v57 = (void *)v26[4].m128i_i64[1];
        if ( v26[5].m128i_i64[1] < (unsigned __int64)v35 )
        {
          v159 = v26;
          v147 = v25;
          v135 = v24;
          v123 = (char *)v13[5].m128i_i64[0];
          v57 = (void *)qvector_reserve();
          v26 = v159;
          v25 = v147;
          v24 = v135;
          v35 = v123;
          v159[4].m128i_i64[1] = (__int64)v57;
        }
        v26[5].m128i_i64[0] = (__int64)v35;
        v152 = v25;
        v140 = v24;
        v128 = v35;
        v118 = v26;
        memmove(v57, nc, v84);
        v26 = v118;
        v24 = v140;
        v25 = v152;
        v128[v118[4].m128i_i64[1] - 1] = 0;
      }
      else
      {
        v26[5].m128i_i64[0] = 0;
      }
    }
    v36 = v24[1].m128i_i64[1] == 0;
    v26[6].m128i_i64[0] = v13[6].m128i_i64[0];
    v26[6].m128i_i8[8] = v13[6].m128i_i8[8];
    v26[6].m128i_i8[9] = v13[6].m128i_i8[9];
    v26[2].m128i_i64[0] = (__int64)v64;
    v26[1].m128i_i64[1] = v108 - (_QWORD)v64;
    v26[7].m128i_i32[0] = v13[7].m128i_i32[0];
    v26[2].m128i_i64[1] = v108;
    if ( v36 )
    {
      if ( v24[4].m128i_i64[1] )
      {
        v24[5].m128i_i64[0] = 0;
        ne = (size_t)v26;
        v85 = (size_t)v25;
        v65 = v24;
        qfree();
        v26 = (__m128i *)ne;
        v25 = (__m128i *)v85;
        v24 = v65;
      }
      if ( v24[3].m128i_i64[0] )
      {
        v24[3].m128i_i64[1] = 0;
        nf = (size_t)v26;
        v86 = (size_t)v25;
        v66 = v24;
        qfree();
        v26 = (__m128i *)nf;
        v25 = (__m128i *)v86;
        v24 = v66;
      }
      if ( v24->m128i_i64[0] )
      {
        v24->m128i_i64[1] = 0;
        ng = (size_t)v26;
        v87 = (size_t)v25;
        v67 = v24;
        qfree();
        v26 = (__m128i *)ng;
        v25 = (__m128i *)v87;
        v24 = v67;
      }
      v88 = (size_t)v26;
      v68 = v25;
      operator delete(v24, 0x78u);
      v26 = (__m128i *)v88;
      v25 = v68;
    }
    else
    {
      v47 = a1[8];
      v48 = a1[7];
      if ( a1[9] < (unsigned __int64)(v47 + 1) )
      {
        nh = (size_t)v26;
        v95 = (size_t)v25;
        v79 = v24;
        v60 = qvector_reserve();
        v26 = (__m128i *)nh;
        v25 = (__m128i *)v95;
        a1[7] = v60;
        v48 = v60;
        v24 = v79;
        v47 = a1[8];
      }
      *(_QWORD *)(v48 + 8 * v47) = v24;
      ++a1[8];
    }
    if ( v25[1].m128i_i64[1] )
    {
      v51 = a1[8];
      v52 = a1[7];
      if ( a1[9] < (unsigned __int64)(v51 + 1) )
      {
        v94 = (size_t)v26;
        v78 = v25;
        v59 = qvector_reserve();
        v26 = (__m128i *)v94;
        v25 = v78;
        a1[7] = v59;
        v52 = v59;
        v51 = a1[8];
      }
      *(_QWORD *)(v52 + 8 * v51) = v25;
      ++a1[8];
    }
    else
    {
      if ( v25[4].m128i_i64[1] )
      {
        v25[5].m128i_i64[0] = 0;
        v89 = (size_t)v26;
        v69 = v25;
        qfree();
        v26 = (__m128i *)v89;
        v25 = v69;
      }
      if ( v25[3].m128i_i64[0] )
      {
        v25[3].m128i_i64[1] = 0;
        v90 = (size_t)v26;
        v70 = v25;
        qfree();
        v26 = (__m128i *)v90;
        v25 = v70;
      }
      if ( v25->m128i_i64[0] )
      {
        v25->m128i_i64[1] = 0;
        v91 = (size_t)v26;
        v71 = v25;
        qfree();
        v26 = (__m128i *)v91;
        v25 = v71;
      }
      v72 = v26;
      operator delete(v25, 0x78u);
      v26 = v72;
    }
    if ( v26[1].m128i_i64[1] )
    {
      v49 = a1[8];
      v50 = a1[7];
      if ( a1[9] < (unsigned __int64)(v49 + 1) )
      {
        v80 = v26;
        v61 = qvector_reserve();
        v26 = v80;
        a1[7] = v61;
        v50 = v61;
        v49 = a1[8];
      }
      *(_QWORD *)(v50 + 8 * v49) = v26;
      ++a1[8];
    }
    else
    {
      if ( v26[4].m128i_i64[1] )
      {
        v26[5].m128i_i64[0] = 0;
        v73 = v26;
        qfree();
        v26 = v73;
      }
      if ( v26[3].m128i_i64[0] )
      {
        v26[3].m128i_i64[1] = 0;
        v74 = v26;
        qfree();
        v26 = v74;
      }
      if ( v26->m128i_i64[0] )
      {
        v26->m128i_i64[1] = 0;
        v75 = v26;
        qfree();
        v26 = v75;
      }
      operator delete(v26, 0x78u);
    }
    if ( v13[4].m128i_i64[1] )
    {
      v13[5].m128i_i64[0] = 0;
      qfree();
    }
    if ( v13[3].m128i_i64[0] )
    {
      v13[3].m128i_i64[1] = 0;
      qfree();
    }
    if ( v13->m128i_i64[0] )
    {
      v13->m128i_i64[1] = 0;
      qfree();
    }
    operator delete(v13, 0x78u);
    memmove(dest[0], (char *)dest[0] + 8, a1[7] + 8LL * a1[8] - (unsigned __int64)dest[0] - 8);
    v37 = a1[8];
    v38 = (__m128i *)a1[7];
    *(_QWORD *)(v8 + 64) = v37 - 1;
    v39 = 8 * (v37 - 1);
    if ( v38 == (__m128i *)&v38->m128i_i8[v39] )
      goto LABEL_80;
    if ( v39 >> 3 )
    {
      _BitScanReverse64(&v40, v39 >> 3);
      v92 = (size_t)&v38->m128i_u64[(unsigned __int64)v39 / 8];
      sub_3BCC0(
        v38,
        &v38->m128i_i64[(unsigned __int64)v39 / 8],
        2LL * (int)v40,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
      v41 = &v38->m128i_i8[v39];
      if ( v39 > 128 )
      {
        m128i_i64 = v38[8].m128i_i64;
        v76 = (__int64 *)v92;
        sub_3BA50(v38->m128i_i8, v38[8].m128i_i8, (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
        v93 = v7;
        v43 = v76;
        nb = v9;
        v109 = v6;
        v77 = (void *)v8;
        do
        {
          v44 = *m128i_i64;
          for ( i = m128i_i64; ; --i )
          {
            v46 = *(i - 1);
            if ( !sub_3AC20(v44, v46) )
              break;
            *i = v46;
          }
          ++m128i_i64;
          *i = v44;
        }
        while ( v43 != m128i_i64 );
        v7 = v93;
        v9 = nb;
        v6 = v109;
        v8 = (__int64)v77;
        goto LABEL_80;
      }
    }
    else
    {
      sub_3BCC0(
        v38,
        &v38->m128i_i64[(unsigned __int64)v39 / 8],
        -2,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
      v41 = &v38->m128i_i8[v39];
    }
    sub_3BA50(v38->m128i_i8, v41, (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
LABEL_80:
    sub_3B6D0(v8, v6, v7, dest, 0);
  }
  if ( a5 )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(v8 + 8) + 96LL))(
      *(_QWORD *)(v8 + 8),
      *(unsigned __int16 *)(v8 + 16),
      v6);
  if ( v9 )
  {
    v14 = v6 + (v9 << 12);
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD **)(v8 + 8);
        v18 = *(unsigned __int16 *)(v8 + 16);
        v16 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, unsigned __int16))(*v15 + 112LL);
        if ( v16 != sub_3B210 )
          break;
        v15 = (_QWORD *)v15[1];
        v16 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, unsigned __int16))(*v15 + 112LL);
        if ( v16 != sub_3B210 )
          break;
        v15 = (_QWORD *)v15[1];
        v16 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, unsigned __int16))(*v15 + 112LL);
        if ( v16 != sub_3B210 )
          break;
        v15 = (_QWORD *)v15[1];
        v16 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, unsigned __int16))(*v15 + 112LL);
        if ( v16 != sub_3B210 )
          break;
        v17 = v6;
        v6 += 4096LL;
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD))(*(_QWORD *)v15[1] + 112LL))(
          v15[1],
          v18,
          v17,
          a4);
        if ( v6 == v14 )
          goto LABEL_14;
      }
      v19 = v6;
      v6 += 4096LL;
      v16((__int64)v15, v18, v19, a4);
    }
    while ( v6 != v14 );
  }
LABEL_14:
  if ( a6 )
    *a6 = *(_QWORD *)dest[0];
  *(_BYTE *)(v8 + 48) = 1;
  return 0;
}

