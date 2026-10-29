__int64 __fastcall sub_48380(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 *a4)
{
  signed int *v6; // r9
  signed int *v7; // rdi
  _DWORD *v9; // rax
  signed int v10; // r12d
  unsigned __int64 v11; // r8
  _DWORD *v12; // rsi
  _QWORD *v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // r15
  int v18; // r11d
  int v19; // ebx
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v24; // xmm0_8
  _QWORD *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __m128i *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r15
  unsigned __int64 *i; // r14
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // ebx
  int v44; // r9d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  signed int *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // r12
  signed int *v51; // rsi
  __int64 v52; // r10
  __int64 v53; // r11
  __m128i v54; // xmm0
  _QWORD *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rdi
  unsigned __int64 v60; // xmm0_8
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // r12
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  __int64 *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rsi
  bool v73; // cf
  __int64 v74; // rax
  __m128i *v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // r10
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rsi
  __m128i v84; // xmm0
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r13
  const __m128i *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdx
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r13
  const __m128i *v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // rdx
  __m128i v101; // xmm1
  __m128i v102; // xmm0
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rbx
  const __m128i *v106; // rdi
  __int64 v107; // rdx
  __m128i v108; // xmm0
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r9
  const __m128i *v112; // rdi
  __int64 v113; // rdx
  __m128i v114; // xmm1
  unsigned __int32 v115; // [rsp+8h] [rbp-100h]
  int v116; // [rsp+8h] [rbp-100h]
  __int64 v117; // [rsp+8h] [rbp-100h]
  char v118; // [rsp+10h] [rbp-F8h]
  int v119; // [rsp+10h] [rbp-F8h]
  unsigned int v120; // [rsp+18h] [rbp-F0h]
  int v121; // [rsp+20h] [rbp-E8h]
  int v122; // [rsp+20h] [rbp-E8h]
  int v123; // [rsp+20h] [rbp-E8h]
  __int64 v124; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v125; // [rsp+20h] [rbp-E8h]
  unsigned int v127; // [rsp+3Ch] [rbp-CCh]
  int v128; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v129; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v130; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v131; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v132; // [rsp+40h] [rbp-C8h]
  int v133; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v135; // [rsp+50h] [rbp-B8h]
  __int64 v136; // [rsp+50h] [rbp-B8h]
  __int64 v137; // [rsp+58h] [rbp-B0h]
  __int64 v138; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v139; // [rsp+58h] [rbp-B0h]
  __int64 v140; // [rsp+60h] [rbp-A8h]
  __int64 v141; // [rsp+60h] [rbp-A8h]
  __int64 v142; // [rsp+68h] [rbp-A0h]
  signed int v143; // [rsp+7Ch] [rbp-8Ch] BYREF
  signed int *v144; // [rsp+80h] [rbp-88h] BYREF
  __m128i v145; // [rsp+88h] [rbp-80h] BYREF
  char v146; // [rsp+98h] [rbp-70h]
  __m128i v147; // [rsp+A0h] [rbp-68h] BYREF
  int v148; // [rsp+B0h] [rbp-58h] BYREF
  int v149; // [rsp+B8h] [rbp-50h]
  _BYTE v150[12]; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v151; // [rsp+C8h] [rbp-40h]

  v6 = *(signed int **)(a3 + 64);
  v151 = __readfsqword(0x28u);
  if ( (unsigned __int64)v6 <= 1 )
  {
    sub_64B50(
      (unsigned int)&v147,
      a2[1],
      (unsigned int)"process_single_transition_edge: path %a->%a is invalid",
      *(_QWORD *)a3,
      *(_QWORD *)(a3 + 32),
      (_DWORD)v6);
LABEL_77:
    *(_QWORD *)a1 = v147.m128i_i64[0];
    v84 = _mm_loadu_si128((const __m128i *)&v147.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v84;
    return a1;
  }
  v7 = *(signed int **)(a3 + 56);
  v9 = (_DWORD *)*a4;
  v10 = *v7;
  v11 = *a4 + 8 * a4[1];
  if ( *a4 == v11 )
  {
LABEL_18:
    v120 = -1;
    v31 = 2 * a4[1];
    v32 = 1;
    v122 = -1;
    for ( i = a4; ; v31 = 2 * i[1] )
    {
      v34 = v7[v32];
      v35 = (__int64)&v9[v31];
      v143 = v34;
      if ( v9 == (_DWORD *)v35 )
      {
LABEL_36:
        v118 = 0;
        if ( v34 > v10 )
          goto LABEL_24;
      }
      else
      {
        while ( v34 != *v9 )
        {
          v9 += 2;
          if ( (_DWORD *)v35 == v9 )
            goto LABEL_36;
        }
        v118 = 1;
        v127 = v9[1];
        if ( v34 > v10 )
        {
LABEL_24:
          sub_457C0((__int64)&v147, (__int64)a2, v34, v35, v11, (int)v6);
          if ( (_BYTE)v149 )
            goto LABEL_77;
          v36 = sub_4D890(a2 + 6, (unsigned int)v10, (unsigned int)v143, v147.m128i_u8[0]);
          v115 = sub_4C060(v36);
          v37 = a2[61];
          if ( v37 )
          {
            v38 = (__int64)(a2 + 60);
            do
            {
              while ( 1 )
              {
                v39 = *(_QWORD *)(v37 + 16);
                v40 = *(_QWORD *)(v37 + 24);
                if ( *(_DWORD *)(v37 + 32) < v143 )
                  break;
                v38 = v37;
                v37 = *(_QWORD *)(v37 + 16);
                if ( !v39 )
                  goto LABEL_30;
              }
              v37 = *(_QWORD *)(v37 + 24);
            }
            while ( v40 );
LABEL_30:
            if ( (_QWORD *)v38 == a2 + 60 || v143 < *(_DWORD *)(v38 + 32) )
            {
LABEL_32:
              v144 = &v143;
              v38 = sub_43D00(a2 + 59, v38, &v144);
            }
            v41 = *(_QWORD *)(v38 + 48);
            v42 = *(_QWORD *)(v38 + 40);
            if ( *(_QWORD *)(v38 + 56) < (unsigned __int64)(v41 + 1) )
            {
              v74 = qvector_reserve(v38 + 40, v42, v41 + 1, 4);
              *(_QWORD *)(v38 + 40) = v74;
              v42 = v74;
              v41 = *(_QWORD *)(v38 + 48);
            }
            *(_DWORD *)(v42 + 4 * v41) = v115;
            ++*(_QWORD *)(v38 + 48);
            v43 = v115;
            goto LABEL_40;
          }
          v38 = (__int64)(a2 + 60);
          goto LABEL_32;
        }
      }
      sub_457C0((__int64)&v144, (__int64)a2, v10, v35, v11, (int)v6);
      if ( v146 )
      {
        v102 = _mm_loadu_si128(&v145);
        *(_QWORD *)a1 = v144;
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v102;
        return a1;
      }
      sub_458E0((__int64)&v147, a2, v10, v143, (char)v144, v44);
      if ( (_BYTE)v149 )
        goto LABEL_77;
      v43 = v147.m128i_i32[0];
      v115 = v147.m128i_u32[1];
LABEL_40:
      v45 = i[1];
      v46 = *i;
      v147.m128i_i64[0] = __PAIR64__(v43, v10);
      v11 = i[2];
      v47 = v45 + 1;
      if ( (unsigned __int64)&v147 < v46 || (unsigned __int64)&v147 >= v46 + 8 * v11 )
      {
        if ( v11 < v47 )
        {
          v129 = i[2];
          v65 = qvector_reserve(i, 0, v47, 8);
          v66 = i[2];
          v67 = v65;
          v68 = i[1];
          v69 = (__int64 *)*i;
          i[2] = v129;
          v70 = v68 - 1;
          if ( v70 >= 0 )
          {
            v71 = v67;
            do
            {
              v72 = *v69;
              v71 += 8;
              ++v69;
              *(_QWORD *)(v71 - 8) = v72;
              v73 = v70-- == 0;
            }
            while ( !v73 );
            v69 = (__int64 *)*i;
          }
          v130 = v67;
          qfree(v69);
          v46 = v130;
          i[2] = v66;
          v45 = i[1];
          *i = v130;
        }
        *(_QWORD *)(v46 + 8 * v45) = v147.m128i_i64[0];
        ++i[1];
        if ( v122 != -1 )
          goto LABEL_44;
      }
      else
      {
        if ( v11 < v47 )
        {
          v131 = i[2];
          v76 = qvector_reserve(i, 0, v47, 8);
          v77 = i[2];
          v78 = v76;
          v79 = i[1];
          v80 = (__int64 *)*i;
          i[2] = v131;
          v81 = v79 - 1;
          if ( v81 >= 0 )
          {
            v82 = v78;
            do
            {
              v83 = *v80;
              v82 += 8;
              ++v80;
              *(_QWORD *)(v82 - 8) = v83;
              v73 = v81-- == 0;
            }
            while ( !v73 );
            v80 = (__int64 *)*i;
          }
          v135 = v77;
          v132 = v78;
          qfree(v80);
          v46 = v132;
          v45 = i[1];
          *i = v132;
          i[2] = v135;
        }
        v48 = (signed int *)(v46 + 8 * v45);
        *v48 = v10;
        v48[1] = v43;
        ++i[1];
        if ( v122 != -1 )
          goto LABEL_44;
      }
      v50 = a2 + 11;
      v51 = *(signed int **)(a3 + 64);
      v52 = *(_QWORD *)a3;
      v53 = *(_QWORD *)(a3 + 8);
      LODWORD(v6) = *(_DWORD *)(a3 + 24);
      v54 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 28));
      v123 = *(_DWORD *)(a3 + 16);
      v55 = (_QWORD *)a2[12];
      v144 = v51;
      if ( !v55 )
        goto LABEL_58;
      do
      {
        while ( 1 )
        {
          v56 = v55[2];
          v57 = v55[3];
          if ( v55[4] < (unsigned __int64)v51 )
            break;
          v50 = v55;
          v55 = (_QWORD *)v55[2];
          if ( !v56 )
            goto LABEL_56;
        }
        v55 = (_QWORD *)v55[3];
      }
      while ( v57 );
LABEL_56:
      if ( v50 == a2 + 11 || (unsigned __int64)v51 < v50[4] )
      {
LABEL_58:
        v140 = v53;
        v137 = v52;
        v128 = (int)v6;
        v147.m128i_i64[0] = (__int64)&v144;
        v58 = sub_481F0(a2 + 10, v50, (__int64)&unk_78AE8, (unsigned __int64 **)&v147);
        v53 = v140;
        v52 = v137;
        v54 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v54));
        LODWORD(v6) = v128;
        v50 = v58;
      }
      v147.m128i_i64[0] = v52;
      v59 = v50 + 5;
      v60 = _mm_unpacklo_epi32(v54, _mm_cvtsi32_si128(v43)).m128i_u64[0];
      v147.m128i_i64[1] = v53;
      v148 = v123;
      v149 = (int)v6;
      *(_QWORD *)v150 = v60;
      v61 = v50[6];
      v62 = v50[5];
      v11 = v50[7];
      v63 = v61 + 1;
      if ( (unsigned __int64)&v147 < v62 || (unsigned __int64)&v147 >= v62 + 40 * v11 )
      {
        if ( v11 < v63 )
        {
          v124 = v50[7];
          v86 = qvector_reserve(v59, 0, v63, 40);
          v87 = v50[6];
          v88 = v50[7];
          v89 = (const __m128i *)v50[5];
          v90 = v86;
          v50[7] = v124;
          v91 = v87 - 1;
          if ( v91 >= 0 )
          {
            do
            {
              v92 = _mm_loadu_si128(v89);
              v86 += 40;
              v89 = (const __m128i *)((char *)v89 + 40);
              *(__m128i *)(v86 - 40) = v92;
              *(__m128i *)(v86 - 24) = _mm_loadu_si128((const __m128i *)((char *)v89 - 24));
              *(_QWORD *)(v86 - 8) = v89[-1].m128i_i64[1];
              v73 = v91-- == 0;
            }
            while ( !v73 );
            v89 = (const __m128i *)v50[5];
          }
          v125 = v90;
          qfree(v89);
          v62 = v125;
          v50[7] = v88;
          v61 = v50[6];
          v50[5] = v125;
        }
        v75 = (__m128i *)(v62 + 40 * v61);
        *v75 = _mm_load_si128(&v147);
        v75[1] = _mm_load_si128((const __m128i *)&v148);
        v75[2].m128i_i64[0] = *(_QWORD *)&v150[4];
      }
      else
      {
        if ( v11 < v63 )
        {
          v142 = v50[7];
          v138 = v53;
          v136 = v52;
          v133 = (int)v6;
          v96 = qvector_reserve(v59, 0, v63, 40);
          v97 = v50[7];
          v98 = (const __m128i *)v50[5];
          v99 = v96;
          v100 = v50[6] - 1LL;
          v50[7] = v142;
          if ( v100 >= 0 )
          {
            do
            {
              v101 = _mm_loadu_si128(v98);
              v96 += 40;
              v98 = (const __m128i *)((char *)v98 + 40);
              *(__m128i *)(v96 - 40) = v101;
              *(__m128i *)(v96 - 24) = _mm_loadu_si128((const __m128i *)((char *)v98 - 24));
              *(_QWORD *)(v96 - 8) = v98[-1].m128i_i64[1];
              v73 = v100-- == 0;
            }
            while ( !v73 );
            v98 = (const __m128i *)v50[5];
          }
          v141 = v138;
          v139 = v99;
          qfree(v98);
          v62 = v139;
          v50[7] = v97;
          v61 = v50[6];
          v53 = v141;
          v52 = v136;
          v50[5] = v139;
          LODWORD(v6) = v133;
        }
        v64 = v62 + 40 * v61;
        *(_QWORD *)v64 = v52;
        *(_QWORD *)(v64 + 8) = v53;
        *(_DWORD *)(v64 + 16) = v123;
        *(_DWORD *)(v64 + 24) = (_DWORD)v6;
        *(_QWORD *)(v64 + 28) = v60;
      }
      ++v50[6];
      v122 = v43;
LABEL_44:
      if ( v120 != -1 )
      {
        v49 = sub_4CB00(a2 + 6, v120, 0);
        sub_4C000(v49, v43);
      }
      if ( v118 )
      {
        v95 = sub_4CB00(a2 + 6, v115, 0);
        sub_4C000(v95, v127);
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
      v10 = v143;
      if ( (unsigned __int64)++v32 >= *(_QWORD *)(a3 + 64) )
      {
        v94 = sub_4CB00(a2 + 6, v115, 0);
        sub_4C010(v94, *(_QWORD *)(a3 + 32));
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
      v7 = *(signed int **)(a3 + 56);
      v9 = (_DWORD *)*i;
      v120 = v115;
    }
  }
  v12 = (_DWORD *)*a4;
  while ( v10 != *v12 )
  {
    v12 += 2;
    if ( (_DWORD *)v11 == v12 )
      goto LABEL_18;
  }
  v13 = (_QWORD *)a2[12];
  v14 = _mm_cvtsi32_si128(v12[1]);
  v144 = v6;
  v15 = *(_QWORD *)a3;
  v16 = *(_QWORD *)(a3 + 8);
  v17 = a2 + 11;
  v18 = *(_DWORD *)(a3 + 16);
  v19 = *(_DWORD *)(a3 + 24);
  v20 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 28));
  if ( !v13 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v21 = v13[2];
      v22 = v13[3];
      if ( v13[4] < (unsigned __int64)v6 )
        break;
      v17 = v13;
      v13 = (_QWORD *)v13[2];
      if ( !v21 )
        goto LABEL_11;
    }
    v13 = (_QWORD *)v13[3];
  }
  while ( v22 );
LABEL_11:
  if ( v17 == a2 + 11 || (unsigned __int64)v6 < v17[4] )
  {
LABEL_13:
    v121 = *(_DWORD *)(a3 + 16);
    v147.m128i_i64[0] = (__int64)&v144;
    v23 = sub_481F0(a2 + 10, v17, (__int64)&unk_78AE8, (unsigned __int64 **)&v147);
    v18 = v121;
    v20 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v20));
    v14 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v14));
    v17 = v23;
  }
  v24 = _mm_unpacklo_epi32(v20, v14).m128i_u64[0];
  v147.m128i_i64[0] = v15;
  v25 = v17 + 5;
  v147.m128i_i64[1] = v16;
  v148 = v18;
  v149 = v19;
  *(_QWORD *)v150 = v24;
  v26 = v17[6];
  v27 = v17[5];
  v28 = v17[7];
  v29 = v26 + 1;
  if ( (unsigned __int64)&v147 < v27 || (unsigned __int64)&v147 >= v27 + 40 * v28 )
  {
    if ( v28 < v29 )
    {
      v103 = qvector_reserve(v25, 0, v29, 40);
      v104 = v17[6];
      v105 = v17[7];
      v17[7] = v28;
      v106 = (const __m128i *)v17[5];
      v27 = v103;
      v107 = v104 - 1;
      if ( v107 >= 0 )
      {
        do
        {
          v108 = _mm_loadu_si128(v106);
          v103 += 40;
          v106 = (const __m128i *)((char *)v106 + 40);
          *(__m128i *)(v103 - 40) = v108;
          *(__m128i *)(v103 - 24) = _mm_loadu_si128((const __m128i *)((char *)v106 - 24));
          *(_QWORD *)(v103 - 8) = v106[-1].m128i_i64[1];
          v73 = v107-- == 0;
        }
        while ( !v73 );
        v106 = (const __m128i *)v17[5];
      }
      qfree(v106);
      v17[5] = v27;
      v26 = v17[6];
      v17[7] = v105;
    }
    v30 = (__m128i *)(v27 + 40 * v26);
    *v30 = _mm_load_si128(&v147);
    v30[1] = _mm_load_si128((const __m128i *)&v148);
    v30[2].m128i_i64[0] = *(_QWORD *)&v150[4];
  }
  else
  {
    if ( v28 < v29 )
    {
      v116 = v18;
      v109 = qvector_reserve(v25, 0, v29, 40);
      v110 = v17[6];
      v111 = v17[7];
      v17[7] = v28;
      v112 = (const __m128i *)v17[5];
      v27 = v109;
      v113 = v110 - 1;
      if ( v113 >= 0 )
      {
        do
        {
          v114 = _mm_loadu_si128(v112);
          v109 += 40;
          v112 = (const __m128i *)((char *)v112 + 40);
          *(__m128i *)(v109 - 40) = v114;
          *(__m128i *)(v109 - 24) = _mm_loadu_si128((const __m128i *)((char *)v112 - 24));
          *(_QWORD *)(v109 - 8) = v112[-1].m128i_i64[1];
          v73 = v113-- == 0;
        }
        while ( !v73 );
        v112 = (const __m128i *)v17[5];
      }
      v119 = v116;
      v117 = v111;
      qfree(v112);
      v17[5] = v27;
      v26 = v17[6];
      v17[7] = v117;
      v18 = v119;
    }
    v93 = v27 + 40 * v26;
    *(_QWORD *)v93 = v15;
    *(_QWORD *)(v93 + 8) = v16;
    *(_DWORD *)(v93 + 16) = v18;
    *(_DWORD *)(v93 + 24) = v19;
    *(_QWORD *)(v93 + 28) = v24;
  }
  ++v17[6];
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

