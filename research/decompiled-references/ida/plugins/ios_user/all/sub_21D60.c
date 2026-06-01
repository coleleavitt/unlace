__int64 __fastcall sub_21D60(__int64 a1, __int64 a2)
{
  __m128i v4; // xmm0
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rax
  size_t v10; // r12
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rsi
  int *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  const __m128i *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rax
  size_t v31; // r12
  const __m128i *v32; // rdi
  __m128i *v33; // rax
  __m128i *v34; // rdx
  __m128i *v35; // rcx
  __m128i *v36; // rdx
  __m128i *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r15
  size_t v40; // r12
  const __m128i *v41; // rdi
  __m128i *v42; // rax
  __m128i *v43; // rdx
  __m128i *v44; // rcx
  __m128i *v45; // rdx
  __m128i *v46; // rcx
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rax
  size_t v50; // r12
  size_t v51; // r12
  __int64 result; // rax
  __int64 v53; // rax
  size_t v54; // rcx
  __int128 v55; // xmm0
  __int64 i; // r14
  size_t v57; // r15
  size_t v58; // r14
  __int64 v59; // r12
  __int64 v60; // rax
  size_t v61; // r15
  void *v62; // rax
  void *v63; // rax
  void *v64; // rax
  const void *v65; // rsi
  void *v66; // rax
  const void *v67; // rsi
  void *v68; // rax
  const void *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // rax
  void *v75; // rax
  void *v76; // rax
  const void *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r13
  __int64 v81; // r12
  const __m128i *v82; // rcx
  __m128i v83; // xmm0
  const __m128i *v84; // r14
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  const void *v88; // rsi
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // r13
  int v92; // eax
  size_t v93; // r14
  __int64 v94; // r12
  size_t v95; // rcx
  int v96; // eax
  size_t v97; // r14
  void *v98; // rax
  void *v99; // rax
  void *v100; // rax
  const void *v101; // rsi
  void *v102; // rax
  const void *v103; // rsi
  void *v104; // rax
  const void *v105; // rsi
  size_t n; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  size_t nd; // [rsp+8h] [rbp-50h]
  size_t nc; // [rsp+8h] [rbp-50h]
  size_t ne; // [rsp+8h] [rbp-50h]
  size_t nf; // [rsp+8h] [rbp-50h]

  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)a1 = off_8DA88;
  v5 = *(_DWORD *)(a2 + 40);
  *(__m128i *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v6 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 40) = v5;
  if ( v6 )
  {
    v53 = qalloc_or_throw();
    *(_QWORD *)(a1 + 64) = v6;
    v54 = 0;
    v55 = 0;
    *(_QWORD *)(a1 + 48) = v53;
    for ( i = v53; ; i = *(_QWORD *)(a1 + 48) )
    {
      v58 = 56 * v54 + i;
      v59 = *(_QWORD *)(a2 + 48) + 56 * v54;
      v60 = *(_QWORD *)v59;
      *(_QWORD *)(v58 + 8) = 0;
      *(_OWORD *)(v58 + 16) = v55;
      *(_QWORD *)v58 = v60;
      v61 = *(_QWORD *)(v59 + 16);
      if ( v61 )
      {
        n = v54;
        v62 = (void *)qalloc_or_throw();
        *(_QWORD *)(v58 + 24) = v61;
        *(_QWORD *)(v58 + 8) = v62;
        memcpy(v62, *(const void **)(v59 + 8), v61);
        *(_QWORD *)(v58 + 16) = v61;
        v54 = n;
        v55 = 0;
      }
      *(_QWORD *)(v58 + 32) = 0;
      *(_OWORD *)(v58 + 40) = v55;
      v57 = *(_QWORD *)(v59 + 40);
      if ( v57 )
      {
        na = v54;
        v63 = (void *)qalloc_or_throw();
        *(_QWORD *)(v58 + 32) = v63;
        *(_QWORD *)(v58 + 48) = v57;
        memcpy(v63, *(const void **)(v59 + 32), v57);
        *(_QWORD *)(v58 + 40) = v57;
        v55 = 0;
        v54 = na + 1;
        if ( v6 == na + 1 )
        {
LABEL_53:
          *(_QWORD *)(a1 + 56) = v6;
          break;
        }
      }
      else if ( v6 == ++v54 )
      {
        goto LABEL_53;
      }
    }
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v7 = *(_QWORD *)(a2 + 80);
  if ( v7 )
  {
    v104 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 72) = v104;
    v105 = *(const void **)(a2 + 72);
    *(_QWORD *)(a1 + 88) = v7;
    memcpy(v104, v105, 8 * v7);
    *(_QWORD *)(a1 + 80) = v7;
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v8 = *(_QWORD *)(a2 + 104);
  if ( v8 )
  {
    v102 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 96) = v102;
    v103 = *(const void **)(a2 + 96);
    *(_QWORD *)(a1 + 112) = v8;
    memcpy(v102, v103, 8 * v8);
    *(_QWORD *)(a1 + 104) = v8;
  }
  sub_21BB0(a1 + 120, (_QWORD *)(a2 + 120));
  *(_QWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 200) = 0xFFFFFFFFLL;
  copy_debug_event();
  v9 = *(_QWORD *)(a2 + 272);
  *(_QWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 272) = v9;
  v10 = *(_QWORD *)(a2 + 288);
  if ( v10 )
  {
    v100 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 280) = v100;
    v101 = *(const void **)(a2 + 280);
    *(_QWORD *)(a1 + 296) = v10;
    memcpy(v100, v101, v10);
    *(_QWORD *)(a1 + 288) = v10;
  }
  v11 = *(_DWORD *)(a2 + 304);
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 304) = v11;
  v12 = *(_QWORD *)(a2 + 320);
  if ( v12 )
  {
    v89 = qalloc_or_throw();
    *(_QWORD *)(a1 + 312) = v89;
    v90 = v89;
    v91 = 0;
    *(_QWORD *)(a1 + 328) = v12;
    while ( 1 )
    {
      v94 = (v91 << 6) + v90;
      v95 = *(_QWORD *)(a2 + 312) + (v91 << 6);
      v96 = *(_DWORD *)v95;
      *(_OWORD *)(v94 + 16) = 0;
      *(_QWORD *)(v94 + 8) = 0;
      *(_DWORD *)v94 = v96;
      v97 = *(_QWORD *)(v95 + 16);
      if ( v97 )
      {
        ne = v95;
        v98 = (void *)qalloc_or_throw();
        *(_QWORD *)(v94 + 8) = v98;
        *(_QWORD *)(v94 + 24) = v97;
        memcpy(v98, *(const void **)(ne + 8), v97);
        *(_QWORD *)(v94 + 16) = v97;
        v95 = ne;
      }
      v92 = *(_DWORD *)(v95 + 32);
      *(_QWORD *)(v94 + 40) = 0;
      *(_OWORD *)(v94 + 48) = 0;
      *(_DWORD *)(v94 + 32) = v92;
      v93 = *(_QWORD *)(v95 + 48);
      if ( v93 )
      {
        nf = v95;
        v99 = (void *)qalloc_or_throw();
        *(_QWORD *)(v94 + 40) = v99;
        *(_QWORD *)(v94 + 56) = v93;
        ++v91;
        memcpy(v99, *(const void **)(nf + 40), v93);
        *(_QWORD *)(v94 + 48) = v93;
        if ( v12 == v91 )
        {
LABEL_75:
          *(_QWORD *)(a1 + 320) = v12;
          break;
        }
      }
      else if ( v12 == ++v91 )
      {
        goto LABEL_75;
      }
      v90 = *(_QWORD *)(a1 + 312);
    }
  }
  v13 = a1 + 344;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_QWORD *)(a1 + 376) = 0;
  v14 = *(int **)(a2 + 352);
  if ( v14 )
  {
    v15 = sub_1AC00(v14, v13);
    v16 = v15;
    do
    {
      v17 = v16;
      v16 = (_QWORD *)v16[2];
    }
    while ( v16 );
    *(_QWORD *)(a1 + 360) = v17;
    v18 = v15;
    do
    {
      v19 = v18;
      v18 = (_QWORD *)v18[3];
    }
    while ( v18 );
    v20 = *(_QWORD *)(a2 + 376);
    *(_QWORD *)(a1 + 368) = v19;
    *(_QWORD *)(a1 + 352) = v15;
    *(_QWORD *)(a1 + 376) = v20;
  }
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 424) = 0;
  v21 = *(const __m128i **)(a2 + 400);
  if ( v21 )
  {
    v22 = sub_1BF90(v21, a1 + 392);
    v23 = v22;
    do
    {
      v24 = v23;
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( v23 );
    *(_QWORD *)(a1 + 408) = v24;
    v25 = v22;
    do
    {
      v26 = v25;
      v25 = *(_QWORD *)(v25 + 24);
    }
    while ( v25 );
    v27 = *(_QWORD *)(a2 + 424);
    *(_QWORD *)(a1 + 416) = v26;
    *(_QWORD *)(a1 + 400) = v22;
    *(_QWORD *)(a1 + 424) = v27;
  }
  *(_QWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  v28 = *(_QWORD *)(a2 + 440);
  if ( v28 )
  {
    v87 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 432) = v87;
    v88 = *(const void **)(a2 + 432);
    *(_QWORD *)(a1 + 448) = v28;
    memcpy(v87, v88, 8 * v28);
    *(_QWORD *)(a1 + 440) = v28;
  }
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v29 = *(_QWORD *)(a2 + 464);
  if ( v29 )
  {
    v78 = qalloc_or_throw();
    *(_QWORD *)(a1 + 456) = v78;
    v79 = v78;
    v80 = 0;
    *(_QWORD *)(a1 + 472) = v29;
    while ( 1 )
    {
      v81 = 80 * v80 + v79;
      v82 = (const __m128i *)(*(_QWORD *)(a2 + 456) + 80 * v80);
      v83 = _mm_loadu_si128(v82);
      *(_OWORD *)(v81 + 24) = 0;
      v84 = v82;
      *(_QWORD *)(v81 + 16) = 0;
      *(__m128i *)v81 = v83;
      if ( v82[1].m128i_i64[1] )
      {
        nd = v82[1].m128i_u64[1];
        v85 = (void *)qalloc_or_throw();
        *(_QWORD *)(v81 + 16) = v85;
        *(_QWORD *)(v81 + 32) = nd;
        memcpy(v85, (const void *)v84[1].m128i_i64[0], nd);
        *(_QWORD *)(v81 + 24) = nd;
      }
      *(_QWORD *)(v81 + 40) = 0;
      *(_OWORD *)(v81 + 48) = 0;
      if ( v84[3].m128i_i64[0] )
      {
        nc = v84[3].m128i_u64[0];
        v86 = (void *)qalloc_or_throw();
        *(_QWORD *)(v81 + 40) = v86;
        *(_QWORD *)(v81 + 56) = nc;
        memcpy(v86, (const void *)v84[2].m128i_i64[1], nc);
        *(_QWORD *)(v81 + 48) = nc;
      }
      ++v80;
      *(_QWORD *)(v81 + 64) = v84[4].m128i_i64[0];
      *(_WORD *)(v81 + 72) = v84[4].m128i_i16[4];
      if ( v29 == v80 )
        break;
      v79 = *(_QWORD *)(a1 + 456);
    }
    *(_QWORD *)(a1 + 464) = v29;
  }
  v30 = *(_QWORD *)(a2 + 480);
  *(_QWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  v31 = *(_QWORD *)(a2 + 496);
  *(_QWORD *)(a1 + 480) = v30;
  if ( v31 )
  {
    v76 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 488) = v76;
    v77 = *(const void **)(a2 + 488);
    *(_QWORD *)(a1 + 504) = v31;
    memcpy(v76, v77, v31);
    *(_QWORD *)(a1 + 496) = v31;
  }
  *(_DWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_QWORD *)(a1 + 552) = 0;
  v32 = *(const __m128i **)(a2 + 528);
  if ( v32 )
  {
    v33 = sub_1A5C0(v32, a1 + 520);
    v34 = v33;
    do
    {
      v35 = v34;
      v34 = (__m128i *)v34[1].m128i_i64[0];
    }
    while ( v34 );
    *(_QWORD *)(a1 + 536) = v35;
    v36 = v33;
    do
    {
      v37 = v36;
      v36 = (__m128i *)v36[1].m128i_i64[1];
    }
    while ( v36 );
    v38 = *(_QWORD *)(a2 + 552);
    *(_QWORD *)(a1 + 544) = v37;
    *(_QWORD *)(a1 + 528) = v33;
    *(_QWORD *)(a1 + 552) = v38;
  }
  *(_QWORD *)(a1 + 560) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  v39 = *(_QWORD *)(a2 + 568);
  if ( v39 )
  {
    v70 = qalloc_or_throw();
    *(_QWORD *)(a1 + 560) = v70;
    v71 = 0;
    *(_QWORD *)(a1 + 576) = v39;
    while ( 1 )
    {
      v72 = v70 + 56 * v71;
      v73 = *(_QWORD *)(a2 + 560) + 56 * v71;
      v74 = *(_QWORD *)v73;
      *(_QWORD *)(v72 + 8) = 0;
      *(_OWORD *)(v72 + 16) = 0;
      *(_QWORD *)v72 = v74;
      if ( *(_QWORD *)(v73 + 16) )
      {
        nb = *(_QWORD *)(v73 + 16);
        v75 = (void *)qalloc_or_throw();
        *(_QWORD *)(v72 + 8) = v75;
        *(_QWORD *)(v72 + 24) = nb;
        memcpy(v75, *(const void **)(v73 + 8), nb);
        *(_QWORD *)(v72 + 16) = nb;
      }
      ++v71;
      *(_QWORD *)(v72 + 32) = *(_QWORD *)(v73 + 32);
      *(_BYTE *)(v72 + 40) = *(_BYTE *)(v73 + 40);
      *(_QWORD *)(v72 + 44) = *(_QWORD *)(v73 + 44);
      if ( v39 == v71 )
        break;
      v70 = *(_QWORD *)(a1 + 560);
    }
    *(_QWORD *)(a1 + 568) = v39;
  }
  *(_QWORD *)(a1 + 584) = 0;
  *(_OWORD *)(a1 + 592) = 0;
  v40 = *(_QWORD *)(a2 + 592);
  if ( v40 )
  {
    v68 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 584) = v68;
    v69 = *(const void **)(a2 + 584);
    *(_QWORD *)(a1 + 600) = v40;
    memcpy(v68, v69, v40);
    *(_QWORD *)(a1 + 592) = v40;
  }
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a1 + 616;
  *(_QWORD *)(a1 + 640) = a1 + 616;
  *(_QWORD *)(a1 + 648) = 0;
  v41 = *(const __m128i **)(a2 + 624);
  if ( v41 )
  {
    v42 = sub_1A2E0(v41, a1 + 616);
    v43 = v42;
    do
    {
      v44 = v43;
      v43 = (__m128i *)v43[1].m128i_i64[0];
    }
    while ( v43 );
    *(_QWORD *)(a1 + 632) = v44;
    v45 = v42;
    do
    {
      v46 = v45;
      v45 = (__m128i *)v45[1].m128i_i64[1];
    }
    while ( v45 );
    v47 = *(_QWORD *)(a2 + 648);
    *(_QWORD *)(a1 + 640) = v46;
    *(_QWORD *)(a1 + 624) = v42;
    *(_QWORD *)(a1 + 648) = v47;
  }
  *(_DWORD *)(a1 + 656) = *(_DWORD *)(a2 + 656);
  *(_QWORD *)(a1 + 664) = *(_QWORD *)(a2 + 664);
  sub_1E640(a1 + 672, a2 + 672);
  v48 = *(_BYTE *)(a2 + 792);
  *(__m128i *)(a1 + 776) = _mm_loadu_si128((const __m128i *)(a2 + 776));
  *(_BYTE *)(a1 + 792) = v48;
  v49 = *(_QWORD *)(a2 + 800);
  *(_QWORD *)(a1 + 808) = 0;
  *(_OWORD *)(a1 + 816) = 0;
  v50 = *(_QWORD *)(a2 + 816);
  *(_QWORD *)(a1 + 800) = v49;
  if ( v50 )
  {
    v66 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 808) = v66;
    v67 = *(const void **)(a2 + 808);
    *(_QWORD *)(a1 + 824) = v50;
    memcpy(v66, v67, v50);
    *(_QWORD *)(a1 + 816) = v50;
  }
  *(_QWORD *)(a1 + 832) = 0;
  *(_OWORD *)(a1 + 840) = 0;
  v51 = *(_QWORD *)(a2 + 840);
  if ( v51 )
  {
    v64 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 832) = v64;
    v65 = *(const void **)(a2 + 832);
    *(_QWORD *)(a1 + 848) = v51;
    memcpy(v64, v65, v51);
    *(_QWORD *)(a1 + 840) = v51;
  }
  *(_DWORD *)(a1 + 856) = *(_DWORD *)(a2 + 856);
  result = *(unsigned __int16 *)(a2 + 860);
  *(_WORD *)(a1 + 860) = result;
  return result;
}

