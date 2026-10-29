unsigned __int64 __fastcall sub_6C700(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm0
  int v19; // r11d
  __m128i v20; // xmm2
  unsigned __int64 v21; // rbp
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  __int16 v34; // si
  __int64 v35; // rdi
  __m128i v36; // xmm6
  __m128i v37; // xmm3
  __m128i v38; // xmm7
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  void *v42; // rsi
  void *v43; // rsi
  __int64 v44; // rsi
  __m128i v45; // xmm0
  size_t v47; // r15
  void *v48; // rax
  const void *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // r14
  __int64 v54; // r10
  __int64 v55; // rbp
  int v56; // r9d
  int v57; // r8d
  int v58; // r11d
  __m128i v59; // xmm2
  __int64 v60; // r15
  __int128 v61; // xmm0
  __int64 v62; // r12
  __int64 v63; // rbp
  __int64 v64; // rbx
  int v65; // r14d
  __int64 v66; // rcx
  __m128i v67; // xmm1
  __int64 v68; // rcx
  __int64 v69; // rcx
  __m128i v70; // xmm1
  __int64 v71; // rcx
  __m128i v72; // xmm1
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __m128i v77; // xmm1
  __int64 v78; // rcx
  __m128i v79; // xmm1
  __int64 v80; // rcx
  __int64 v81; // rcx
  __m128i v82; // xmm1
  int v83; // ecx
  __int64 v84; // rdi
  __m128i v85; // xmm1
  size_t v86; // r14
  void *v87; // rax
  const void *v88; // rsi
  __int64 v89; // r14
  __int64 v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rdx
  size_t v93; // r15
  __int64 v94; // rdi
  void *v95; // rax
  const void **v96; // rdx
  size_t v97; // r15
  void *v98; // rax
  const void *v99; // rsi
  size_t v100; // r15
  void *v101; // rax
  const void *v102; // rsi
  __m128i v103; // [rsp+8h] [rbp-210h] BYREF
  void *v104; // [rsp+18h] [rbp-200h]
  void *v105; // [rsp+20h] [rbp-1F8h]
  __int64 v106; // [rsp+28h] [rbp-1F0h]
  __m128i v107; // [rsp+30h] [rbp-1E8h] BYREF
  __m128i v108; // [rsp+40h] [rbp-1D8h] BYREF
  __m128i v109; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v110; // [rsp+60h] [rbp-1B8h]
  __int64 v111; // [rsp+68h] [rbp-1B0h]
  __m128i v112; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v113; // [rsp+80h] [rbp-198h] BYREF
  __int64 v114; // [rsp+90h] [rbp-188h]
  __int64 v115; // [rsp+98h] [rbp-180h]
  __int64 v116; // [rsp+A0h] [rbp-178h]
  int v117; // [rsp+A8h] [rbp-170h]
  int v118; // [rsp+ACh] [rbp-16Ch]
  __m128i v119; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v120; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v122; // [rsp+D8h] [rbp-140h]
  __int64 v123; // [rsp+E0h] [rbp-138h]
  __m128i v124; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-120h]
  __int128 v126; // [rsp+100h] [rbp-118h]
  __int64 v127; // [rsp+110h] [rbp-108h]
  __int128 v128; // [rsp+118h] [rbp-100h]
  __int64 v129; // [rsp+128h] [rbp-F0h]
  __int128 v130; // [rsp+130h] [rbp-E8h]
  __m128i v131; // [rsp+140h] [rbp-D8h]
  __m128i v132; // [rsp+150h] [rbp-C8h]
  __int64 v133; // [rsp+160h] [rbp-B8h]
  __int64 v134; // [rsp+168h] [rbp-B0h]
  __int128 v135; // [rsp+170h] [rbp-A8h]
  __int64 v136; // [rsp+180h] [rbp-98h]
  __int128 v137; // [rsp+188h] [rbp-90h]
  __int64 v138; // [rsp+198h] [rbp-80h]
  __int16 v139; // [rsp+1A0h] [rbp-78h]
  int v140; // [rsp+1A4h] [rbp-74h]
  __int64 v141; // [rsp+1A8h] [rbp-70h]
  __m128i v142; // [rsp+1B0h] [rbp-68h] BYREF
  int v143; // [rsp+1C0h] [rbp-58h]
  __m128i v144; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v145; // [rsp+1D8h] [rbp-40h]

  v3 = *a2;
  v145 = __readfsqword(0x28u);
  v121 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v5 = *((_WORD *)a2 + 4);
  v103.m128i_i64[1] = 0;
  v109.m128i_i16[7] = v5;
  v122 = v5;
  v6 = a2[2];
  v124 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  v110 = v6;
  v123 = v6;
  v7 = a2[6];
  v107.m128i_i64[0] = v7;
  if ( v7 )
  {
    v47 = v7;
    v48 = (void *)qalloc_or_throw(v7);
    v49 = (const void *)a2[5];
    v103.m128i_i64[1] = (__int64)v48;
    memcpy(v48, v49, v47);
  }
  v104 = nullptr;
  v8 = a2[9];
  v107.m128i_i64[1] = v8;
  if ( v8 )
  {
    v100 = v8;
    v101 = (void *)qalloc_or_throw(v8);
    v102 = (const void *)a2[8];
    v104 = v101;
    memcpy(v101, v102, v100);
  }
  v105 = nullptr;
  v9 = a2[12];
  v108.m128i_i64[0] = v9;
  if ( v9 )
  {
    v97 = v9;
    v98 = (void *)qalloc_or_throw(v9);
    v99 = (const void *)a2[11];
    v105 = v98;
    memcpy(v98, v99, v97);
  }
  v10 = a2[18];
  v106 = 0;
  v111 = v10;
  v133 = v10;
  v11 = a2[20];
  v113 = _mm_loadu_si128((const __m128i *)a2 + 7);
  v103.m128i_i64[0] = v11;
  v112 = _mm_loadu_si128((const __m128i *)a2 + 8);
  v131 = v113;
  v132 = v112;
  if ( v11 )
  {
    v106 = qalloc_or_throw(24 * v11);
    v89 = v106;
    v90 = 0;
    do
    {
      v91 = a2[19];
      *(_QWORD *)v89 = 0;
      *(_OWORD *)(v89 + 8) = 0;
      v92 = v91 + 24 * v90;
      v93 = *(_QWORD *)(v92 + 8);
      if ( v93 )
      {
        v94 = *(_QWORD *)(v92 + 8);
        v108.m128i_i64[1] = v92;
        v95 = (void *)qalloc_or_throw(v94);
        v96 = (const void **)v108.m128i_i64[1];
        *(_QWORD *)v89 = v95;
        *(_QWORD *)(v89 + 16) = v93;
        memcpy(v95, *v96, v93);
        *(_QWORD *)(v89 + 8) = v93;
      }
      ++v90;
      v89 += 24;
    }
    while ( v103.m128i_i64[0] != v90 );
  }
  v108.m128i_i64[1] = 0;
  v12 = a2[23];
  v109.m128i_i64[0] = v12;
  if ( v12 )
  {
    v86 = v12;
    v87 = (void *)qalloc_or_throw(v12);
    v88 = (const void *)a2[22];
    v108.m128i_i64[1] = (__int64)v87;
    memcpy(v87, v88, v86);
  }
  v13 = a2[25];
  v14 = *((unsigned __int16 *)a2 + 104);
  v15 = *((_DWORD *)a2 + 53);
  v16 = a2[27];
  v138 = v13;
  v139 = v14;
  v140 = v15;
  v141 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = a1[1];
  v18 = _mm_loadu_si128((const __m128i *)a2 + 14);
  v19 = *((_DWORD *)a2 + 60);
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 31));
  v21 = a1[2];
  v142 = v18;
  v143 = v19;
  v144 = v20;
  if ( v21 < v17 + 1 )
  {
    v118 = v19;
    v117 = v15;
    LODWORD(v116) = v14;
    v115 = v13;
    v119 = v20;
    v50 = qvector_reserve(a1, 0, v17 + 1, 264);
    v51 = a1[2];
    a1[2] = v21;
    v52 = a1[1];
    v53 = *a1;
    v114 = v51;
    v54 = v115;
    v55 = v52 - 1;
    v56 = v116;
    v57 = v117;
    v58 = v118;
    v59 = _mm_load_si128(&v119);
    if ( v55 >= 0 )
    {
      v116 = v115;
      v60 = v50;
      v61 = 0;
      LOWORD(v117) = v56;
      v118 = v57;
      v115 = v3;
      v62 = v55;
      v63 = v50;
      v120.m128i_i64[0] = (__int64)a1;
      v64 = v53;
      v65 = v58;
      do
      {
        v66 = *(_QWORD *)v64;
        *(_QWORD *)v63 = *(_QWORD *)v64;
        if ( v66 )
          ++*(_DWORD *)(v66 + 8);
        v67 = _mm_loadu_si128((const __m128i *)(v64 + 24));
        *(_WORD *)(v63 + 8) = *(_WORD *)(v64 + 8);
        v68 = *(_QWORD *)(v64 + 16);
        *(__m128i *)(v63 + 24) = v67;
        *(_QWORD *)(v63 + 16) = v68;
        v69 = *(_QWORD *)(v64 + 40);
        v70 = _mm_loadu_si128((const __m128i *)(v64 + 48));
        *(_QWORD *)(v64 + 40) = 0;
        *(_QWORD *)(v63 + 40) = v69;
        *(__m128i *)(v63 + 48) = v70;
        v71 = *(_QWORD *)(v64 + 64);
        v72 = _mm_loadu_si128((const __m128i *)(v64 + 72));
        *(_OWORD *)(v64 + 48) = v61;
        *(__m128i *)(v63 + 72) = v72;
        *(_QWORD *)(v63 + 64) = v71;
        v73 = *(_QWORD *)(v64 + 88);
        *(_QWORD *)(v64 + 64) = 0;
        *(_OWORD *)(v64 + 72) = v61;
        *(_QWORD *)(v63 + 88) = v73;
        v74 = *(_QWORD *)(v64 + 96);
        *(_QWORD *)(v64 + 88) = 0;
        *(_QWORD *)(v63 + 96) = v74;
        v75 = *(_QWORD *)(v64 + 104);
        *(_OWORD *)(v64 + 96) = v61;
        *(_QWORD *)(v63 + 104) = v75;
        *(_QWORD *)(v63 + 112) = *(_QWORD *)(v64 + 112);
        *(_QWORD *)(v63 + 120) = *(_QWORD *)(v64 + 120);
        *(_QWORD *)(v63 + 128) = *(_QWORD *)(v64 + 128);
        *(_QWORD *)(v63 + 136) = *(_QWORD *)(v64 + 136);
        *(_QWORD *)(v63 + 144) = *(_QWORD *)(v64 + 144);
        v76 = *(_QWORD *)(v64 + 152);
        v77 = _mm_loadu_si128((const __m128i *)(v64 + 160));
        *(_QWORD *)(v64 + 152) = 0;
        *(_QWORD *)(v63 + 152) = v76;
        *(__m128i *)(v63 + 160) = v77;
        v78 = *(_QWORD *)(v64 + 176);
        v79 = _mm_loadu_si128((const __m128i *)(v64 + 184));
        *(_OWORD *)(v64 + 160) = v61;
        *(_QWORD *)(v63 + 176) = v78;
        *(__m128i *)(v63 + 184) = v79;
        v80 = *(_QWORD *)(v64 + 200);
        *(_QWORD *)(v64 + 176) = 0;
        *(_OWORD *)(v64 + 184) = v61;
        *(_QWORD *)(v63 + 200) = v80;
        *(_WORD *)(v63 + 208) = *(_WORD *)(v64 + 208);
        *(_DWORD *)(v63 + 212) = *(_DWORD *)(v64 + 212);
        v81 = *(_QWORD *)(v64 + 216);
        *(_QWORD *)(v63 + 216) = v81;
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        v82 = _mm_loadu_si128((const __m128i *)(v64 + 224));
        v83 = *(_DWORD *)(v64 + 240);
        v84 = v64;
        --v62;
        v64 += 264;
        v63 += 264;
        *(__m128i *)(v63 - 40) = v82;
        v85 = _mm_loadu_si128((const __m128i *)(v64 - 16));
        *(_DWORD *)(v63 - 24) = v83;
        *(__m128i *)(v63 - 16) = v85;
        sub_1B750(v84);
        v61 = 0;
      }
      while ( v62 != -1 );
      a1 = (__int64 *)v120.m128i_i64[0];
      v58 = v65;
      v3 = v115;
      v50 = v60;
      v54 = v116;
      v56 = (unsigned __int16)v117;
      v57 = v118;
      v53 = *(_QWORD *)v120.m128i_i64[0];
      v59 = _mm_load_si128(&v119);
    }
    v119.m128i_i64[0] = v50;
    v118 = v58;
    v117 = v57;
    LODWORD(v116) = v56;
    v115 = v54;
    v120 = v59;
    qfree(v53);
    v22 = v119.m128i_i64[0];
    v19 = v118;
    v15 = v117;
    a1[2] = v114;
    LOWORD(v14) = v116;
    v17 = a1[1];
    *a1 = v22;
    v20 = _mm_load_si128(&v120);
    v13 = v115;
  }
  else
  {
    v22 = *a1;
  }
  v23 = _mm_loadl_epi64(&v109);
  v24 = _mm_loadl_epi64(&v103);
  v25 = _mm_loadl_epi64(&v108);
  v26 = _mm_loadl_epi64((const __m128i *)&v107.m128i_u64[1]);
  v27 = _mm_loadl_epi64(&v107);
  v28 = _mm_unpacklo_epi64(v23, v23);
  v29 = _mm_unpacklo_epi64(v24, v24);
  v30 = v22 + 264 * v17;
  v31 = _mm_unpacklo_epi64(v25, v25);
  v32 = _mm_unpacklo_epi64(v26, v26);
  *(_QWORD *)v30 = v3;
  v33 = _mm_unpacklo_epi64(v27, v27);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v34 = v109.m128i_i16[7];
  v35 = v111;
  *(__m128i *)(v30 + 96) = v31;
  v36 = _mm_loadu_si128(&v124);
  v37 = _mm_load_si128(&v112);
  *(_QWORD *)(v30 + 200) = v13;
  v38 = _mm_load_si128(&v113);
  *(_WORD *)(v30 + 8) = v34;
  v39 = v110;
  *(_QWORD *)(v30 + 144) = v35;
  v40 = v108.m128i_i64[1];
  *(_WORD *)(v30 + 208) = v14;
  *(_QWORD *)(v30 + 16) = v39;
  v41 = v103.m128i_i64[1];
  *(_QWORD *)(v30 + 176) = v40;
  *(_QWORD *)(v30 + 40) = v41;
  v42 = v104;
  *(_DWORD *)(v30 + 212) = v15;
  *(_QWORD *)(v30 + 64) = v42;
  v43 = v105;
  *(_QWORD *)(v30 + 216) = v16;
  *(_QWORD *)(v30 + 88) = v43;
  v44 = v106;
  *(__m128i *)(v30 + 24) = v36;
  *(_QWORD *)(v30 + 152) = v44;
  *(__m128i *)(v30 + 48) = v33;
  *(__m128i *)(v30 + 72) = v32;
  *(__m128i *)(v30 + 112) = v38;
  *(__m128i *)(v30 + 128) = v37;
  *(__m128i *)(v30 + 160) = v29;
  *(__m128i *)(v30 + 184) = v28;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v45 = _mm_load_si128(&v142);
  *(_DWORD *)(v30 + 240) = v19;
  *(__m128i *)(v30 + 248) = v20;
  *(__m128i *)(v30 + 224) = v45;
  ++a1[1];
  v125 = 0;
  v127 = 0;
  v129 = 0;
  v134 = 0;
  v136 = 0;
  v126 = 0;
  v128 = 0;
  v130 = 0;
  v135 = 0;
  v137 = 0;
  sub_1B750((__int64)&v121);
  return v145 - __readfsqword(0x28u);
}

