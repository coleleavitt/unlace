unsigned __int64 __fastcall sub_4CFC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char *v5; // r13
  __int64 v6; // rax
  const char *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __m128i v10; // xmm0
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  const char *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm0
  char *v18; // rax
  char *v19; // rax
  __int64 v20; // rax
  const char *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __m128i v24; // xmm0
  char *v25; // rax
  __int64 v26; // rax
  const char *v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __m128i v30; // xmm0
  char *v31; // rax
  char v32; // al
  char *v33; // rax
  __int64 v34; // rax
  const char *v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  __m128i v38; // xmm0
  char *v39; // rax
  char *v40; // rax
  char *v41; // r13
  __int64 v42; // rax
  const char *v43; // rsi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  char *v48; // rax
  char *v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  char *v53; // rax
  __int64 v54; // rax
  char *v55; // rbx
  __int64 v56; // rax
  const char *v57; // rsi
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  char *v62; // rax
  char *v63; // rdi
  __int64 v64; // rax
  char *v65; // rbx
  __int64 v66; // rax
  const char *v67; // rsi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdi
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  char *v72; // rax
  char *v73; // rdi
  __int64 v74; // rax
  char *v75; // rbx
  __int64 v76; // rax
  const char *v77; // rsi
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  __m128i v80; // xmm0
  __m128i v81; // xmm1
  char *v82; // rax
  char *v83; // rdi
  __int64 v84; // rax
  __m128i si128; // xmm0
  char *v86; // rbx
  __int64 v87; // rax
  const char *v88; // rsi
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rdi
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  char *v93; // rax
  char *v94; // rdi
  __int64 v95; // rax
  char *v96; // rbx
  __int64 v97; // rax
  const char *v98; // rsi
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rdi
  __m128i v101; // xmm0
  __m128i v102; // xmm1
  char *v103; // rax
  char *v104; // rdi
  char *v106; // r13
  __m128i v107; // xmm0
  __m128i v108; // xmm1
  char *v109; // rax
  char *v110; // r13
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  char *v113; // rax
  char *v114; // rdi
  char *v115; // r13
  __m128i v116; // xmm0
  __m128i v117; // xmm1
  char *v118; // rax
  char *v119; // rdi
  char *v120; // r13
  __m128i v121; // xmm0
  __m128i v122; // xmm1
  char *v123; // rax
  char *v124; // rdi
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  char *v127; // rax
  char *v128; // rdi
  char *v129; // r13
  __m128i v130; // xmm0
  __m128i v131; // xmm1
  char *v132; // rax
  char *v133; // rdi
  char *v134; // rax
  __m128i v135; // xmm0
  char *v136; // rax
  __m128i v137; // xmm0
  char *v138; // rax
  __m128i v139; // xmm0
  char *v140; // rax
  __m128i v141; // xmm0
  char *v142; // rax
  __m128i v143; // xmm0
  char *v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __m128i v169; // [rsp+0h] [rbp-58h] BYREF
  char *v170; // [rsp+10h] [rbp-48h] BYREF
  __m128i v171; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v172; // [rsp+28h] [rbp-30h]

  v172 = __readfsqword(0x28u);
  v171 = 0;
  v170 = nullptr;
  v4 = qvector_reserve(&v170, 0, 71, 1);
  v170 = (char *)v4;
  v171.m128i_i64[0] = 71;
  *(__m128i *)v4 = _mm_load_si128((const __m128i *)&xmmword_77DB0);
  *(__m128i *)(v4 + 16) = _mm_load_si128((const __m128i *)&xmmword_77DC0);
  *(__m128i *)(v4 + 32) = _mm_load_si128((const __m128i *)&xmmword_77DD0);
  *(__m128i *)(v4 + 48) = _mm_load_si128((const __m128i *)&xmmword_77DE0);
  *(_QWORD *)(v4 + 62) = 0x7464755F6769625FLL;
  v5 = v170;
  v170[70] = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(const char **)a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v6 + 1;
  if ( (unsigned __int64)&v170 >= *(_QWORD *)a1 && &v170 < (char **)&v7[24 * v8] )
  {
    v125 = _mm_loadl_epi64(&v171);
    v126 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v8 < v9 )
    {
      v169.m128i_i64[1] = v126.m128i_i64[0];
      v169.m128i_i64[0] = v125.m128i_i64[0];
      v154 = qvector_reserve(a1, v7, v6 + 1, 24);
      *(_QWORD *)a1 = v154;
      v7 = (const char *)v154;
      v6 = *(_QWORD *)(a1 + 8);
      v126 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v125 = _mm_loadl_epi64(&v169);
    }
    v127 = (char *)&v7[24 * v6];
    *(_QWORD *)v127 = v5;
    *(__m128i *)(v127 + 8) = _mm_unpacklo_epi64(v125, v126);
    v128 = v170;
    ++*(_QWORD *)(a1 + 8);
    if ( v128 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v128, v7);
    }
  }
  else
  {
    if ( v8 < v9 )
    {
      v152 = qvector_reserve(a1, v7, v6 + 1, 24);
      *(_QWORD *)a1 = v152;
      v7 = (const char *)v152;
      v5 = v170;
      v6 = *(_QWORD *)(a1 + 8);
    }
    v10 = _mm_loadu_si128(&v171);
    v11 = (char *)&v7[24 * v6];
    *(_QWORD *)v11 = v5;
    *(__m128i *)(v11 + 8) = v10;
    ++*(_QWORD *)(a1 + 8);
  }
  v171 = 0;
  v170 = nullptr;
  v12 = (char *)qvector_reserve(&v170, 0, 4, 1);
  v170 = v12;
  v171.m128i_i64[0] = 4;
  *(_WORD *)v12 = 26977;
  v12[2] = 120;
  v170[3] = 0;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(const char **)a1;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = v13 + 1;
  if ( (unsigned __int64)&v170 >= *(_QWORD *)a1 && &v170 < (char **)&v14[24 * v15] )
  {
    v115 = v170;
    v116 = _mm_loadl_epi64(&v171);
    v170 = nullptr;
    v117 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v171 = 0;
    if ( v15 < v16 )
    {
      v169.m128i_i64[1] = v117.m128i_i64[0];
      v169.m128i_i64[0] = v116.m128i_i64[0];
      v156 = qvector_reserve(a1, v14, v13 + 1, 24);
      *(_QWORD *)a1 = v156;
      v14 = (const char *)v156;
      v13 = *(_QWORD *)(a1 + 8);
      v117 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v116 = _mm_loadl_epi64(&v169);
    }
    v118 = (char *)&v14[24 * v13];
    *(_QWORD *)v118 = v115;
    *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64(v116, v117);
    v119 = v170;
    ++*(_QWORD *)(a1 + 8);
    if ( v119 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v119, v14);
    }
  }
  else
  {
    if ( v15 < v16 )
    {
      v145 = qvector_reserve(a1, v14, v13 + 1, 24);
      *(_QWORD *)a1 = v145;
      v14 = (const char *)v145;
      v13 = *(_QWORD *)(a1 + 8);
    }
    v17 = _mm_loadu_si128(&v171);
    v18 = (char *)&v14[24 * v13];
    *(_QWORD *)v18 = v170;
    *(__m128i *)(v18 + 8) = v17;
    ++*(_QWORD *)(a1 + 8);
  }
  v171 = 0;
  v170 = nullptr;
  v19 = (char *)qvector_reserve(&v170, 0, 4, 1);
  v170 = v19;
  v171.m128i_i64[0] = 4;
  *(_WORD *)v19 = 29551;
  v19[2] = 120;
  v170[3] = 0;
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(const char **)a1;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = v20 + 1;
  if ( (unsigned __int64)&v170 >= *(_QWORD *)a1 && &v170 < (char **)&v21[24 * v22] )
  {
    v110 = v170;
    v111 = _mm_loadl_epi64(&v171);
    v170 = nullptr;
    v112 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v171 = 0;
    if ( v22 < v23 )
    {
      v169.m128i_i64[1] = v112.m128i_i64[0];
      v169.m128i_i64[0] = v111.m128i_i64[0];
      v157 = qvector_reserve(a1, v21, v20 + 1, 24);
      *(_QWORD *)a1 = v157;
      v21 = (const char *)v157;
      v20 = *(_QWORD *)(a1 + 8);
      v112 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v111 = _mm_loadl_epi64(&v169);
    }
    v113 = (char *)&v21[24 * v20];
    *(_QWORD *)v113 = v110;
    *(__m128i *)(v113 + 8) = _mm_unpacklo_epi64(v111, v112);
    v114 = v170;
    ++*(_QWORD *)(a1 + 8);
    if ( v114 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v114, v21);
    }
  }
  else
  {
    if ( v22 < v23 )
    {
      v151 = qvector_reserve(a1, v21, v20 + 1, 24);
      *(_QWORD *)a1 = v151;
      v21 = (const char *)v151;
      v20 = *(_QWORD *)(a1 + 8);
    }
    v24 = _mm_loadu_si128(&v171);
    v25 = (char *)&v21[24 * v20];
    *(_QWORD *)v25 = v170;
    *(__m128i *)(v25 + 8) = v24;
    ++*(_QWORD *)(a1 + 8);
  }
  v171 = 0;
  v170 = nullptr;
  v170 = (char *)qvector_reserve(&v170, 0, 5, 1);
  v171.m128i_i64[0] = 5;
  strcpy(v170, "objc");
  v26 = *(_QWORD *)(a1 + 8);
  v27 = *(const char **)a1;
  v28 = *(_QWORD *)(a1 + 16);
  v29 = v26 + 1;
  if ( (unsigned __int64)&v170 >= *(_QWORD *)a1 && &v170 < (char **)&v27[24 * v28] )
  {
    v120 = v170;
    v121 = _mm_loadl_epi64(&v171);
    v170 = nullptr;
    v122 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v171 = 0;
    if ( v28 < v29 )
    {
      v169.m128i_i64[1] = v122.m128i_i64[0];
      v169.m128i_i64[0] = v121.m128i_i64[0];
      v155 = qvector_reserve(a1, v27, v26 + 1, 24);
      *(_QWORD *)a1 = v155;
      v27 = (const char *)v155;
      v26 = *(_QWORD *)(a1 + 8);
      v122 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v121 = _mm_loadl_epi64(&v169);
    }
    v123 = (char *)&v27[24 * v26];
    *(_QWORD *)v123 = v120;
    *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64(v121, v122);
    v124 = v170;
    ++*(_QWORD *)(a1 + 8);
    if ( v124 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v124, v27);
    }
  }
  else
  {
    if ( v28 < v29 )
    {
      v150 = qvector_reserve(a1, v27, v26 + 1, 24);
      *(_QWORD *)a1 = v150;
      v27 = (const char *)v150;
      v26 = *(_QWORD *)(a1 + 8);
    }
    v30 = _mm_loadu_si128(&v171);
    v31 = (char *)&v27[24 * v26];
    *(_QWORD *)v31 = v170;
    *(__m128i *)(v31 + 8) = v30;
    ++*(_QWORD *)(a1 + 8);
  }
  v32 = getinf_flag(3, 4);
  v170 = nullptr;
  v171 = 0;
  if ( v32 )
  {
    v33 = (char *)qvector_reserve(&v170, 0, 6, 1);
    v170 = v33;
    v171.m128i_i64[0] = 6;
    *(_DWORD *)v33 = 1986423909;
    v33[4] = 50;
    v170[5] = 0;
    v34 = *(_QWORD *)(a1 + 8);
    v35 = *(const char **)a1;
    v36 = *(_QWORD *)(a1 + 16);
    v37 = v34 + 1;
    if ( (unsigned __int64)&v170 < *(_QWORD *)a1 || &v170 >= (char **)&v35[24 * v36] )
    {
      if ( v36 < v37 )
      {
        v163 = qvector_reserve(a1, v35, v34 + 1, 24);
        *(_QWORD *)a1 = v163;
        v35 = (const char *)v163;
        v34 = *(_QWORD *)(a1 + 8);
      }
      v38 = _mm_loadu_si128(&v171);
      v39 = (char *)&v35[24 * v34];
      *(_QWORD *)v39 = v170;
      *(__m128i *)(v39 + 8) = v38;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v129 = v170;
      v130 = _mm_loadl_epi64(&v171);
      v170 = nullptr;
      v131 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
      v171 = 0;
      if ( v36 < v37 )
      {
        v169.m128i_i64[1] = v131.m128i_i64[0];
        v169.m128i_i64[0] = v130.m128i_i64[0];
        v166 = qvector_reserve(a1, v35, v34 + 1, 24);
        *(_QWORD *)a1 = v166;
        v35 = (const char *)v166;
        v34 = *(_QWORD *)(a1 + 8);
        v131 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
        v130 = _mm_loadl_epi64(&v169);
      }
      v132 = (char *)&v35[24 * v34];
      *(_QWORD *)v132 = v129;
      *(__m128i *)(v132 + 8) = _mm_unpacklo_epi64(v130, v131);
      v133 = v170;
      ++*(_QWORD *)(a1 + 8);
      if ( v133 )
      {
        v171.m128i_i64[0] = 0;
        qfree(v133, v35);
      }
    }
    v171 = 0;
    v170 = nullptr;
    v40 = (char *)qvector_reserve(&v170, 0, 10, 1);
    v170 = v40;
    v171.m128i_i64[0] = 10;
    *(_QWORD *)v40 = 0x766C736F6C6C6563LL;
    v40[8] = 50;
    v41 = v170;
    v170[9] = 0;
    v42 = *(_QWORD *)(a1 + 8);
    v43 = *(const char **)a1;
    v44 = *(_QWORD *)(a1 + 16);
    v45 = v42 + 1;
    if ( (unsigned __int64)&v170 < *(_QWORD *)a1 || &v170 >= (char **)&v43[24 * v44] )
    {
      if ( v44 < v45 )
      {
        v165 = qvector_reserve(a1, v43, v42 + 1, 24);
        *(_QWORD *)a1 = v165;
        v43 = (const char *)v165;
        v41 = v170;
        v42 = *(_QWORD *)(a1 + 8);
      }
      v134 = (char *)&v43[24 * v42];
      *(_QWORD *)v134 = v41;
      *(__m128i *)(v134 + 8) = _mm_loadu_si128(&v171);
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v46 = _mm_loadl_epi64(&v171);
      v47 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
      v170 = nullptr;
      v171 = 0;
      if ( v44 < v45 )
      {
        v169.m128i_i64[1] = v47.m128i_i64[0];
        v169.m128i_i64[0] = v46.m128i_i64[0];
        v167 = qvector_reserve(a1, v43, v42 + 1, 24);
        *(_QWORD *)a1 = v167;
        v43 = (const char *)v167;
        v42 = *(_QWORD *)(a1 + 8);
        v47 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
        v46 = _mm_loadl_epi64(&v169);
      }
      v48 = (char *)&v43[24 * v42];
      *(_QWORD *)v48 = v41;
      *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v46, v47);
      v49 = v170;
      ++*(_QWORD *)(a1 + 8);
      if ( v49 )
      {
LABEL_31:
        v171.m128i_i64[0] = 0;
        qfree(v49, v43);
      }
    }
  }
  else
  {
    v170 = (char *)qvector_reserve(&v170, 0, 5, 1);
    v171.m128i_i64[0] = 5;
    strcpy(v170, "xbox");
    v50 = *(_QWORD *)(a1 + 8);
    v43 = *(const char **)a1;
    v51 = *(_QWORD *)(a1 + 16);
    v52 = v50 + 1;
    if ( (unsigned __int64)&v170 < *(_QWORD *)a1 || &v170 >= (char **)&v43[24 * v51] )
    {
      if ( v51 < v52 )
      {
        v164 = qvector_reserve(a1, v43, v50 + 1, 24);
        *(_QWORD *)a1 = v164;
        v43 = (const char *)v164;
        v50 = *(_QWORD *)(a1 + 8);
      }
      v53 = (char *)&v43[24 * v50];
      *(_QWORD *)v53 = v170;
      *(__m128i *)(v53 + 8) = _mm_loadu_si128(&v171);
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v106 = v170;
      v107 = _mm_loadl_epi64(&v171);
      v170 = nullptr;
      v108 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
      v171 = 0;
      if ( v51 < v52 )
      {
        v169.m128i_i64[1] = v108.m128i_i64[0];
        v169.m128i_i64[0] = v107.m128i_i64[0];
        v168 = qvector_reserve(a1, v43, v50 + 1, 24);
        *(_QWORD *)a1 = v168;
        v43 = (const char *)v168;
        v50 = *(_QWORD *)(a1 + 8);
        v108 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
        v107 = _mm_loadl_epi64(&v169);
      }
      v109 = (char *)&v43[24 * v50];
      *(_QWORD *)v109 = v106;
      *(__m128i *)(v109 + 8) = _mm_unpacklo_epi64(v107, v108);
      v49 = v170;
      ++*(_QWORD *)(a1 + 8);
      if ( v49 )
        goto LABEL_31;
    }
  }
  v171 = 0;
  v170 = nullptr;
  v54 = qvector_reserve(&v170, 0, 32, 1);
  v170 = (char *)v54;
  v171.m128i_i64[0] = 32;
  *(__m128i *)v54 = _mm_load_si128((const __m128i *)&xmmword_77DF0);
  *(__m128i *)(v54 + 15) = _mm_load_si128((const __m128i *)&xmmword_77E00);
  v55 = v170;
  v170[31] = 0;
  v56 = *(_QWORD *)(a2 + 8);
  v57 = *(const char **)a2;
  v58 = *(_QWORD *)(a2 + 16);
  v59 = v56 + 1;
  if ( (unsigned __int64)&v170 < *(_QWORD *)a2 || &v170 >= (char **)&v57[24 * v58] )
  {
    if ( v58 < v59 )
    {
      v153 = qvector_reserve(a2, v57, v56 + 1, 24);
      *(_QWORD *)a2 = v153;
      v57 = (const char *)v153;
      v55 = v170;
      v56 = *(_QWORD *)(a2 + 8);
    }
    v141 = _mm_loadu_si128(&v171);
    v142 = (char *)&v57[24 * v56];
    *(_QWORD *)v142 = v55;
    *(__m128i *)(v142 + 8) = v141;
    ++*(_QWORD *)(a2 + 8);
  }
  else
  {
    v60 = _mm_loadl_epi64(&v171);
    v61 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v58 < v59 )
    {
      v169.m128i_i64[1] = v61.m128i_i64[0];
      v169.m128i_i64[0] = v60.m128i_i64[0];
      v158 = qvector_reserve(a2, v57, v56 + 1, 24);
      *(_QWORD *)a2 = v158;
      v57 = (const char *)v158;
      v56 = *(_QWORD *)(a2 + 8);
      v61 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v60 = _mm_loadl_epi64(&v169);
    }
    v62 = (char *)&v57[24 * v56];
    *(_QWORD *)v62 = v55;
    *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v60, v61);
    v63 = v170;
    ++*(_QWORD *)(a2 + 8);
    if ( v63 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v63, v57);
    }
  }
  v171 = 0;
  v170 = nullptr;
  v64 = qvector_reserve(&v170, 0, 79, 1);
  v170 = (char *)v64;
  v171.m128i_i64[0] = 79;
  *(__m128i *)v64 = _mm_load_si128((const __m128i *)&xmmword_77E10);
  *(__m128i *)(v64 + 16) = _mm_load_si128((const __m128i *)&xmmword_77E20);
  *(__m128i *)(v64 + 32) = _mm_load_si128((const __m128i *)&xmmword_77E30);
  *(__m128i *)(v64 + 48) = _mm_load_si128((const __m128i *)&xmmword_77E40);
  *(__m128i *)(v64 + 62) = _mm_load_si128((const __m128i *)&xmmword_77E50);
  v65 = v170;
  v170[78] = 0;
  v66 = *(_QWORD *)(a2 + 8);
  v67 = *(const char **)a2;
  v68 = *(_QWORD *)(a2 + 16);
  v69 = v66 + 1;
  if ( (unsigned __int64)&v170 < *(_QWORD *)a2 || &v170 >= (char **)&v67[24 * v68] )
  {
    if ( v68 < v69 )
    {
      v149 = qvector_reserve(a2, v67, v66 + 1, 24);
      *(_QWORD *)a2 = v149;
      v67 = (const char *)v149;
      v65 = v170;
      v66 = *(_QWORD *)(a2 + 8);
    }
    v139 = _mm_loadu_si128(&v171);
    v140 = (char *)&v67[24 * v66];
    *(_QWORD *)v140 = v65;
    *(__m128i *)(v140 + 8) = v139;
    ++*(_QWORD *)(a2 + 8);
  }
  else
  {
    v70 = _mm_loadl_epi64(&v171);
    v71 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v68 < v69 )
    {
      v169.m128i_i64[1] = v71.m128i_i64[0];
      v169.m128i_i64[0] = v70.m128i_i64[0];
      v162 = qvector_reserve(a2, v67, v66 + 1, 24);
      *(_QWORD *)a2 = v162;
      v67 = (const char *)v162;
      v66 = *(_QWORD *)(a2 + 8);
      v71 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v70 = _mm_loadl_epi64(&v169);
    }
    v72 = (char *)&v67[24 * v66];
    *(_QWORD *)v72 = v65;
    *(__m128i *)(v72 + 8) = _mm_unpacklo_epi64(v70, v71);
    v73 = v170;
    ++*(_QWORD *)(a2 + 8);
    if ( v73 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v73, v67);
    }
  }
  v171 = 0;
  v170 = nullptr;
  v74 = qvector_reserve(&v170, 0, 104, 1);
  v170 = (char *)v74;
  v171.m128i_i64[0] = 104;
  *(__m128i *)v74 = _mm_load_si128((const __m128i *)&xmmword_77E60);
  *(__m128i *)(v74 + 16) = _mm_load_si128((const __m128i *)&xmmword_77E70);
  *(__m128i *)(v74 + 32) = _mm_load_si128((const __m128i *)&xmmword_77E80);
  *(__m128i *)(v74 + 48) = _mm_load_si128((const __m128i *)&xmmword_77E90);
  *(__m128i *)(v74 + 64) = _mm_load_si128((const __m128i *)&xmmword_77EA0);
  *(__m128i *)(v74 + 80) = _mm_load_si128((const __m128i *)&xmmword_77EB0);
  *(_QWORD *)(v74 + 95) = 0x7372657473696765LL;
  v75 = v170;
  v170[103] = 0;
  v76 = *(_QWORD *)(a2 + 8);
  v77 = *(const char **)a2;
  v78 = *(_QWORD *)(a2 + 16);
  v79 = v76 + 1;
  if ( (unsigned __int64)&v170 < *(_QWORD *)a2 || &v170 >= (char **)&v77[24 * v78] )
  {
    if ( v78 < v79 )
    {
      v148 = qvector_reserve(a2, v77, v76 + 1, 24);
      *(_QWORD *)a2 = v148;
      v77 = (const char *)v148;
      v75 = v170;
      v76 = *(_QWORD *)(a2 + 8);
    }
    v137 = _mm_loadu_si128(&v171);
    v138 = (char *)&v77[24 * v76];
    *(_QWORD *)v138 = v75;
    *(__m128i *)(v138 + 8) = v137;
    ++*(_QWORD *)(a2 + 8);
  }
  else
  {
    v80 = _mm_loadl_epi64(&v171);
    v81 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v78 < v79 )
    {
      v169.m128i_i64[1] = v81.m128i_i64[0];
      v169.m128i_i64[0] = v80.m128i_i64[0];
      v161 = qvector_reserve(a2, v77, v76 + 1, 24);
      *(_QWORD *)a2 = v161;
      v77 = (const char *)v161;
      v76 = *(_QWORD *)(a2 + 8);
      v81 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v80 = _mm_loadl_epi64(&v169);
    }
    v82 = (char *)&v77[24 * v76];
    *(_QWORD *)v82 = v75;
    *(__m128i *)(v82 + 8) = _mm_unpacklo_epi64(v80, v81);
    v83 = v170;
    ++*(_QWORD *)(a2 + 8);
    if ( v83 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v83, v77);
    }
  }
  v171 = 0;
  v170 = nullptr;
  v84 = qvector_reserve(&v170, 0, 67, 1);
  v170 = (char *)v84;
  v171.m128i_i64[0] = 67;
  *(__m128i *)v84 = _mm_load_si128((const __m128i *)&xmmword_77EC0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_77ED0);
  *(_WORD *)(v84 + 64) = 25964;
  *(__m128i *)(v84 + 16) = si128;
  *(__m128i *)(v84 + 32) = _mm_load_si128((const __m128i *)&xmmword_77EE0);
  *(__m128i *)(v84 + 48) = _mm_load_si128((const __m128i *)&xmmword_77EF0);
  v86 = v170;
  v170[66] = 0;
  v87 = *(_QWORD *)(a2 + 8);
  v88 = *(const char **)a2;
  v89 = *(_QWORD *)(a2 + 16);
  v90 = v87 + 1;
  if ( (unsigned __int64)&v170 < *(_QWORD *)a2 || &v170 >= (char **)&v88[24 * v89] )
  {
    if ( v89 < v90 )
    {
      v147 = qvector_reserve(a2, v88, v87 + 1, 24);
      *(_QWORD *)a2 = v147;
      v88 = (const char *)v147;
      v86 = v170;
      v87 = *(_QWORD *)(a2 + 8);
    }
    v135 = _mm_loadu_si128(&v171);
    v136 = (char *)&v88[24 * v87];
    *(_QWORD *)v136 = v86;
    *(__m128i *)(v136 + 8) = v135;
    ++*(_QWORD *)(a2 + 8);
  }
  else
  {
    v91 = _mm_loadl_epi64(&v171);
    v92 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v89 < v90 )
    {
      v169.m128i_i64[1] = v92.m128i_i64[0];
      v169.m128i_i64[0] = v91.m128i_i64[0];
      v160 = qvector_reserve(a2, v88, v87 + 1, 24);
      *(_QWORD *)a2 = v160;
      v88 = (const char *)v160;
      v87 = *(_QWORD *)(a2 + 8);
      v92 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v91 = _mm_loadl_epi64(&v169);
    }
    v93 = (char *)&v88[24 * v87];
    *(_QWORD *)v93 = v86;
    *(__m128i *)(v93 + 8) = _mm_unpacklo_epi64(v91, v92);
    v94 = v170;
    ++*(_QWORD *)(a2 + 8);
    if ( v94 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v94, v88);
    }
  }
  v171 = 0;
  v170 = nullptr;
  v95 = qvector_reserve(&v170, 0, 116, 1);
  v170 = (char *)v95;
  v171.m128i_i64[0] = 116;
  *(__m128i *)v95 = _mm_load_si128((const __m128i *)&xmmword_77F00);
  *(__m128i *)(v95 + 16) = _mm_load_si128((const __m128i *)&xmmword_77F10);
  *(__m128i *)(v95 + 32) = _mm_load_si128((const __m128i *)&xmmword_77F20);
  *(__m128i *)(v95 + 48) = _mm_load_si128((const __m128i *)&xmmword_77F30);
  *(__m128i *)(v95 + 64) = _mm_load_si128((const __m128i *)&xmmword_77F40);
  *(__m128i *)(v95 + 80) = _mm_load_si128((const __m128i *)&xmmword_77F50);
  *(__m128i *)(v95 + 96) = _mm_load_si128((const __m128i *)&xmmword_77F60);
  *(_DWORD *)(v95 + 111) = 1936028769;
  v96 = v170;
  v170[115] = 0;
  v97 = *(_QWORD *)(a2 + 8);
  v98 = *(const char **)a2;
  v99 = *(_QWORD *)(a2 + 16);
  v100 = v97 + 1;
  if ( (unsigned __int64)&v170 < *(_QWORD *)a2 || &v170 >= (char **)&v98[24 * v99] )
  {
    if ( v99 < v100 )
    {
      v146 = qvector_reserve(a2, v98, v97 + 1, 24);
      *(_QWORD *)a2 = v146;
      v98 = (const char *)v146;
      v96 = v170;
      v97 = *(_QWORD *)(a2 + 8);
    }
    v143 = _mm_loadu_si128(&v171);
    v144 = (char *)&v98[24 * v97];
    *(_QWORD *)v144 = v96;
    *(__m128i *)(v144 + 8) = v143;
    ++*(_QWORD *)(a2 + 8);
  }
  else
  {
    v101 = _mm_loadl_epi64(&v171);
    v102 = _mm_loadl_epi64((const __m128i *)&v171.m128i_u64[1]);
    v170 = nullptr;
    v171 = 0;
    if ( v99 < v100 )
    {
      v169.m128i_i64[1] = v102.m128i_i64[0];
      v169.m128i_i64[0] = v101.m128i_i64[0];
      v159 = qvector_reserve(a2, v98, v97 + 1, 24);
      *(_QWORD *)a2 = v159;
      v98 = (const char *)v159;
      v97 = *(_QWORD *)(a2 + 8);
      v102 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v101 = _mm_loadl_epi64(&v169);
    }
    v103 = (char *)&v98[24 * v97];
    *(_QWORD *)v103 = v96;
    *(__m128i *)(v103 + 8) = _mm_unpacklo_epi64(v101, v102);
    v104 = v170;
    ++*(_QWORD *)(a2 + 8);
    if ( v104 )
    {
      v171.m128i_i64[0] = 0;
      qfree(v104, v98);
    }
  }
  return v172 - __readfsqword(0x28u);
}
