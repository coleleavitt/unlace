__int64 __fastcall sub_23730(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  size_t v9; // r12
  __int64 v10; // r12
  char v11; // al
  size_t v12; // r12
  size_t v13; // r12
  size_t v14; // r12
  size_t v15; // r12
  __int64 v16; // r13
  __m128i v17; // xmm0
  char v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  size_t v21; // rcx
  int *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int16 v36; // dx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // r14
  const __m128i *v40; // rdi
  __m128i *v41; // rax
  __m128i *v42; // rdx
  __m128i *v43; // rcx
  __m128i *v44; // rdx
  __m128i *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __m128i v54; // xmm0
  size_t v55; // r12
  size_t v56; // r12
  __int64 v57; // rax
  size_t v58; // r12
  char v59; // al
  __int64 v60; // r12
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 result; // rax
  void *v69; // rax
  const void *v70; // rsi
  void *v71; // rax
  const void *v72; // rsi
  void *v73; // rax
  const void *v74; // rsi
  void *v75; // rax
  const void *v76; // rsi
  void *v77; // rax
  const void *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // r13
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  __int64 v88; // rax
  size_t v89; // rcx
  __int64 v90; // r12
  __int64 v91; // r14
  __int64 v92; // r12
  __int64 v93; // r13
  int v94; // eax
  size_t v95; // r15
  void *v96; // rax
  __int64 v97; // rax
  size_t v98; // rcx
  __int64 v99; // r13
  __int64 v100; // r14
  __int64 v101; // r13
  __int64 v102; // r12
  int v103; // eax
  size_t v104; // r15
  void *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // r12
  void *v109; // rax
  const void *v110; // rsi
  void *v111; // rax
  const void *v112; // rsi
  void *v113; // rax
  const void *v114; // rsi
  void *v115; // rax
  const void *v116; // rsi
  void *v117; // rax
  const void *v118; // rsi
  void *v119; // rax
  const void *v120; // rsi
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]
  size_t nc; // [rsp+8h] [rbp-40h]
  size_t nd; // [rsp+8h] [rbp-40h]
  size_t ne; // [rsp+8h] [rbp-40h]
  size_t nf; // [rsp+8h] [rbp-40h]

  sub_21D60(a1, a2);
  *(__m128i *)(a1 + 864) = _mm_loadu_si128((const __m128i *)(a2 + 864));
  *(_QWORD *)a1 = off_8D6C0;
  v4 = *(_QWORD *)(a2 + 880);
  *(_QWORD *)(a1 + 888) = 0;
  *(_OWORD *)(a1 + 896) = 0;
  v5 = *(_QWORD *)(a2 + 896);
  *(_QWORD *)(a1 + 880) = v4;
  if ( v5 )
  {
    v69 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 888) = v69;
    v70 = *(const void **)(a2 + 888);
    *(_QWORD *)(a1 + 904) = v5;
    memcpy(v69, v70, v5);
    *(_QWORD *)(a1 + 896) = v5;
  }
  v6 = *(_QWORD *)(a2 + 960);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 928));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 912));
  *(__m128i *)(a1 + 944) = _mm_loadu_si128((const __m128i *)(a2 + 944));
  *(_QWORD *)(a1 + 960) = v6;
  LOBYTE(v6) = *(_BYTE *)(a2 + 968);
  *(_QWORD *)(a1 + 976) = 0;
  *(_OWORD *)(a1 + 984) = 0;
  v9 = *(_QWORD *)(a2 + 984);
  *(_BYTE *)(a1 + 968) = v6;
  *(__m128i *)(a1 + 912) = v8;
  *(__m128i *)(a1 + 928) = v7;
  if ( v9 )
  {
    v119 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 976) = v119;
    v120 = *(const void **)(a2 + 976);
    *(_QWORD *)(a1 + 992) = v9;
    memcpy(v119, v120, v9);
    *(_QWORD *)(a1 + 984) = v9;
  }
  *(_QWORD *)(a1 + 1000) = 0;
  *(_OWORD *)(a1 + 1008) = 0;
  v10 = *(_QWORD *)(a2 + 1008);
  if ( v10 )
  {
    v117 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1000) = v117;
    v118 = *(const void **)(a2 + 1000);
    *(_QWORD *)(a1 + 1016) = v10;
    memcpy(v117, v118, 32 * v10);
    *(_QWORD *)(a1 + 1008) = v10;
  }
  v11 = *(_BYTE *)(a2 + 1024);
  *(_QWORD *)(a1 + 1032) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  v12 = *(_QWORD *)(a2 + 1040);
  *(_BYTE *)(a1 + 1024) = v11;
  if ( v12 )
  {
    v115 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1032) = v115;
    v116 = *(const void **)(a2 + 1032);
    *(_QWORD *)(a1 + 1048) = v12;
    memcpy(v115, v116, v12);
    *(_QWORD *)(a1 + 1040) = v12;
  }
  *(_QWORD *)(a1 + 1056) = 0;
  *(_OWORD *)(a1 + 1064) = 0;
  v13 = *(_QWORD *)(a2 + 1064);
  if ( v13 )
  {
    v113 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1056) = v113;
    v114 = *(const void **)(a2 + 1056);
    *(_QWORD *)(a1 + 1072) = v13;
    memcpy(v113, v114, v13);
    *(_QWORD *)(a1 + 1064) = v13;
  }
  *(_QWORD *)(a1 + 1080) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  v14 = *(_QWORD *)(a2 + 1088);
  if ( v14 )
  {
    v111 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1080) = v111;
    v112 = *(const void **)(a2 + 1080);
    *(_QWORD *)(a1 + 1096) = v14;
    memcpy(v111, v112, v14);
    *(_QWORD *)(a1 + 1088) = v14;
  }
  *(_QWORD *)(a1 + 1104) = 0;
  *(_OWORD *)(a1 + 1112) = 0;
  v15 = *(_QWORD *)(a2 + 1112);
  if ( v15 )
  {
    v109 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1104) = v109;
    v110 = *(const void **)(a2 + 1104);
    *(_QWORD *)(a1 + 1120) = v15;
    memcpy(v109, v110, v15);
    *(_QWORD *)(a1 + 1112) = v15;
  }
  *(_QWORD *)(a1 + 1128) = 0;
  *(_OWORD *)(a1 + 1136) = 0;
  v16 = *(_QWORD *)(a2 + 1136);
  if ( v16 )
  {
    v106 = qalloc_or_throw();
    *(_QWORD *)(a1 + 1128) = v106;
    v107 = v106;
    v108 = 0;
    *(_QWORD *)(a1 + 1144) = v16;
    while ( 1 )
    {
      sub_22CC0(144 * v108 + v107, 144 * v108 + *(_QWORD *)(a2 + 1128));
      if ( v16 == ++v108 )
        break;
      v107 = *(_QWORD *)(a1 + 1128);
    }
    *(_QWORD *)(a1 + 1136) = v16;
  }
  v17 = _mm_loadu_si128((const __m128i *)(a2 + 1152));
  *(_WORD *)(a1 + 1168) = *(_WORD *)(a2 + 1168);
  v18 = *(_BYTE *)(a2 + 1170);
  *(__m128i *)(a1 + 1152) = v17;
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 1200));
  *(_BYTE *)(a1 + 1170) = v18;
  v20 = *(_QWORD *)(a2 + 1172);
  *(__m128i *)(a1 + 1200) = v19;
  *(_QWORD *)(a1 + 1172) = v20;
  *(_BYTE *)(a1 + 1180) = *(_BYTE *)(a2 + 1180);
  *(_QWORD *)(a1 + 1184) = *(_QWORD *)(a2 + 1184);
  LODWORD(v20) = *(_DWORD *)(a2 + 1192);
  *(_QWORD *)(a1 + 1216) = 0;
  *(_OWORD *)(a1 + 1224) = 0;
  v21 = *(_QWORD *)(a2 + 1224);
  *(_DWORD *)(a1 + 1192) = v20;
  if ( v21 )
  {
    ne = v21;
    v97 = qalloc_or_throw();
    v98 = ne;
    *(_QWORD *)(a1 + 1216) = v97;
    v99 = v97;
    v100 = 0;
    *(_QWORD *)(a1 + 1232) = ne;
    while ( 1 )
    {
      v101 = 48 * v100 + v99;
      v102 = *(_QWORD *)(a2 + 1216) + 48 * v100;
      *(_QWORD *)v101 = *(_QWORD *)v102;
      v103 = *(_DWORD *)(v102 + 8);
      *(_QWORD *)(v101 + 16) = 0;
      *(_DWORD *)(v101 + 8) = v103;
      *(_OWORD *)(v101 + 24) = 0;
      v104 = *(_QWORD *)(v102 + 24);
      if ( v104 )
      {
        nf = v98;
        v105 = (void *)qalloc_or_throw();
        *(_QWORD *)(v101 + 16) = v105;
        *(_QWORD *)(v101 + 32) = v104;
        memcpy(v105, *(const void **)(v102 + 16), v104);
        *(_QWORD *)(v101 + 24) = v104;
        v98 = nf;
      }
      ++v100;
      *(_BYTE *)(v101 + 40) = *(_BYTE *)(v102 + 40);
      if ( v98 == v100 )
        break;
      v99 = *(_QWORD *)(a1 + 1216);
    }
    *(_QWORD *)(a1 + 1224) = v98;
  }
  *(_DWORD *)(a1 + 1248) = 0;
  *(_QWORD *)(a1 + 1256) = 0;
  *(_QWORD *)(a1 + 1264) = a1 + 1248;
  *(_QWORD *)(a1 + 1272) = a1 + 1248;
  *(_QWORD *)(a1 + 1280) = 0;
  v22 = *(int **)(a2 + 1256);
  if ( v22 )
  {
    v23 = sub_1BDC0(v22, a1 + 1248);
    v24 = v23;
    do
    {
      v25 = v24;
      v24 = *(_QWORD *)(v24 + 16);
    }
    while ( v24 );
    *(_QWORD *)(a1 + 1264) = v25;
    v26 = v23;
    do
    {
      v27 = v26;
      v26 = *(_QWORD *)(v26 + 24);
    }
    while ( v26 );
    v28 = *(_QWORD *)(a2 + 1280);
    *(_QWORD *)(a1 + 1272) = v27;
    *(_QWORD *)(a1 + 1256) = v23;
    *(_QWORD *)(a1 + 1280) = v28;
  }
  *(_DWORD *)(a1 + 1296) = 0;
  *(_QWORD *)(a1 + 1304) = 0;
  *(_QWORD *)(a1 + 1312) = a1 + 1296;
  *(_QWORD *)(a1 + 1320) = a1 + 1296;
  *(_QWORD *)(a1 + 1328) = 0;
  v29 = *(_QWORD *)(a2 + 1304);
  if ( v29 )
  {
    v30 = sub_19C50(v29, a1 + 1296);
    v31 = v30;
    do
    {
      v32 = v31;
      v31 = *(_QWORD *)(v31 + 16);
    }
    while ( v31 );
    *(_QWORD *)(a1 + 1312) = v32;
    v33 = v30;
    do
    {
      v34 = v33;
      v33 = *(_QWORD *)(v33 + 24);
    }
    while ( v33 );
    v35 = *(_QWORD *)(a2 + 1328);
    *(_QWORD *)(a1 + 1320) = v34;
    *(_QWORD *)(a1 + 1304) = v30;
    *(_QWORD *)(a1 + 1328) = v35;
  }
  *(_QWORD *)(a1 + 1336) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  if ( *(_QWORD *)(a2 + 1344) )
  {
    nc = *(_QWORD *)(a2 + 1344);
    v88 = qalloc_or_throw();
    v89 = nc;
    *(_QWORD *)(a1 + 1336) = v88;
    v90 = v88;
    v91 = 0;
    *(_QWORD *)(a1 + 1352) = nc;
    while ( 1 )
    {
      v92 = 32 * v91 + v90;
      v93 = *(_QWORD *)(a2 + 1336) + 32 * v91;
      v94 = *(_DWORD *)v93;
      *(_OWORD *)(v92 + 16) = 0;
      *(_QWORD *)(v92 + 8) = 0;
      *(_DWORD *)v92 = v94;
      v95 = *(_QWORD *)(v93 + 16);
      if ( v95 )
      {
        nd = v89;
        v96 = (void *)qalloc_or_throw();
        *(_QWORD *)(v92 + 8) = v96;
        ++v91;
        *(_QWORD *)(v92 + 24) = v95;
        memcpy(v96, *(const void **)(v93 + 8), v95);
        v89 = nd;
        *(_QWORD *)(v92 + 16) = v95;
        if ( nd == v91 )
        {
LABEL_73:
          *(_QWORD *)(a1 + 1344) = v89;
          break;
        }
      }
      else if ( v89 == ++v91 )
      {
        goto LABEL_73;
      }
      v90 = *(_QWORD *)(a1 + 1336);
    }
  }
  v36 = *(_WORD *)(a2 + 1368);
  v37 = *(_BYTE *)(a2 + 1370);
  v38 = *(_QWORD *)(a2 + 1360);
  *(_OWORD *)(a1 + 1384) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  v39 = *(_QWORD *)(a2 + 1384);
  *(_QWORD *)(a1 + 1360) = v38;
  *(_WORD *)(a1 + 1368) = v36;
  *(_BYTE *)(a1 + 1370) = v37;
  if ( v39 )
  {
    v79 = qalloc_or_throw();
    *(_QWORD *)(a1 + 1376) = v79;
    v80 = v79;
    v81 = 0;
    *(_QWORD *)(a1 + 1392) = v39;
    while ( 1 )
    {
      v83 = 112 * v81 + v80;
      v84 = *(_QWORD *)(a2 + 1376) + 112 * v81;
      *(_QWORD *)v83 = 0;
      *(_OWORD *)(v83 + 8) = 0;
      if ( *(_QWORD *)(v84 + 8) )
      {
        nb = *(_QWORD *)(v84 + 8);
        v85 = (void *)qalloc_or_throw();
        *(_QWORD *)v83 = v85;
        *(_QWORD *)(v83 + 16) = nb;
        memcpy(v85, *(const void **)v84, nb);
        *(_QWORD *)(v83 + 8) = nb;
      }
      *(_QWORD *)(v83 + 24) = *(_QWORD *)(v84 + 24);
      *(_WORD *)(v83 + 32) = *(_WORD *)(v84 + 32);
      *(_QWORD *)(v83 + 36) = *(_QWORD *)(v84 + 36);
      v82 = *(_QWORD *)(v84 + 48);
      *(_QWORD *)(v83 + 56) = 0;
      *(_QWORD *)(v83 + 48) = v82;
      *(_OWORD *)(v83 + 64) = 0;
      if ( *(_QWORD *)(v84 + 64) )
      {
        n = *(_QWORD *)(v84 + 64);
        v87 = (void *)qalloc_or_throw();
        *(_QWORD *)(v83 + 56) = v87;
        *(_QWORD *)(v83 + 72) = n;
        memcpy(v87, *(const void **)(v84 + 56), n);
        *(_QWORD *)(v83 + 64) = n;
      }
      *(_QWORD *)(v83 + 80) = 0;
      *(_OWORD *)(v83 + 88) = 0;
      if ( *(_QWORD *)(v84 + 88) )
      {
        na = *(_QWORD *)(v84 + 88);
        v86 = (void *)qalloc_or_throw();
        *(_QWORD *)(v83 + 80) = v86;
        *(_QWORD *)(v83 + 96) = na;
        memcpy(v86, *(const void **)(v84 + 80), na);
        *(_QWORD *)(v83 + 88) = na;
      }
      ++v81;
      *(_QWORD *)(v83 + 104) = *(_QWORD *)(v84 + 104);
      if ( v39 == v81 )
        break;
      v80 = *(_QWORD *)(a1 + 1376);
    }
    *(_QWORD *)(a1 + 1384) = v39;
  }
  *(_DWORD *)(a1 + 1408) = 0;
  *(_QWORD *)(a1 + 1416) = 0;
  *(_QWORD *)(a1 + 1424) = a1 + 1408;
  *(_QWORD *)(a1 + 1432) = a1 + 1408;
  *(_QWORD *)(a1 + 1440) = 0;
  v40 = *(const __m128i **)(a2 + 1416);
  if ( v40 )
  {
    v41 = sub_1C2C0(v40, a1 + 1408);
    v42 = v41;
    do
    {
      v43 = v42;
      v42 = (__m128i *)v42[1].m128i_i64[0];
    }
    while ( v42 );
    *(_QWORD *)(a1 + 1424) = v43;
    v44 = v41;
    do
    {
      v45 = v44;
      v44 = (__m128i *)v44[1].m128i_i64[1];
    }
    while ( v44 );
    v46 = *(_QWORD *)(a2 + 1440);
    *(_QWORD *)(a1 + 1432) = v45;
    *(_QWORD *)(a1 + 1416) = v41;
    *(_QWORD *)(a1 + 1440) = v46;
  }
  *(_DWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1464) = 0;
  *(_QWORD *)(a1 + 1472) = a1 + 1456;
  *(_QWORD *)(a1 + 1480) = a1 + 1456;
  *(_QWORD *)(a1 + 1488) = 0;
  v47 = *(_QWORD *)(a2 + 1464);
  if ( v47 )
  {
    v48 = sub_19990(v47, a1 + 1456);
    v49 = v48;
    do
    {
      v50 = v49;
      v49 = *(_QWORD *)(v49 + 16);
    }
    while ( v49 );
    *(_QWORD *)(a1 + 1472) = v50;
    v51 = v48;
    do
    {
      v52 = v51;
      v51 = *(_QWORD *)(v51 + 24);
    }
    while ( v51 );
    v53 = *(_QWORD *)(a2 + 1488);
    *(_QWORD *)(a1 + 1480) = v52;
    *(_QWORD *)(a1 + 1464) = v48;
    *(_QWORD *)(a1 + 1488) = v53;
  }
  v54 = _mm_loadu_si128((const __m128i *)(a2 + 1496));
  *(_QWORD *)(a1 + 1512) = 0;
  *(__m128i *)(a1 + 1496) = v54;
  *(_OWORD *)(a1 + 1520) = 0;
  v55 = *(_QWORD *)(a2 + 1520);
  if ( v55 )
  {
    v77 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1512) = v77;
    v78 = *(const void **)(a2 + 1512);
    *(_QWORD *)(a1 + 1528) = v55;
    memcpy(v77, v78, v55);
    *(_QWORD *)(a1 + 1520) = v55;
  }
  *(_QWORD *)(a1 + 1536) = 0;
  *(_OWORD *)(a1 + 1544) = 0;
  v56 = *(_QWORD *)(a2 + 1544);
  if ( v56 )
  {
    v75 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1536) = v75;
    v76 = *(const void **)(a2 + 1536);
    *(_QWORD *)(a1 + 1552) = v56;
    memcpy(v75, v76, v56);
    *(_QWORD *)(a1 + 1544) = v56;
  }
  v57 = *(_QWORD *)(a2 + 1560);
  *(_QWORD *)(a1 + 1568) = 0;
  *(_OWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1560) = v57;
  v58 = *(_QWORD *)(a2 + 1576);
  if ( v58 )
  {
    v73 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1568) = v73;
    v74 = *(const void **)(a2 + 1568);
    *(_QWORD *)(a1 + 1584) = v58;
    memcpy(v73, v74, v58);
    *(_QWORD *)(a1 + 1576) = v58;
  }
  *(_DWORD *)(a1 + 1592) = *(_DWORD *)(a2 + 1592);
  v59 = *(_BYTE *)(a2 + 1600);
  *(_QWORD *)(a1 + 1608) = 0;
  *(_OWORD *)(a1 + 1616) = 0;
  v60 = *(_QWORD *)(a2 + 1616);
  *(_BYTE *)(a1 + 1600) = v59;
  if ( v60 )
  {
    v71 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 1608) = v71;
    v72 = *(const void **)(a2 + 1608);
    *(_QWORD *)(a1 + 1624) = v60;
    memcpy(v71, v72, 4 * v60);
    *(_QWORD *)(a1 + 1616) = v60;
  }
  *(_DWORD *)(a1 + 1640) = 0;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1656) = a1 + 1640;
  *(_QWORD *)(a1 + 1664) = a1 + 1640;
  *(_QWORD *)(a1 + 1672) = 0;
  v61 = *(_QWORD *)(a2 + 1648);
  if ( v61 )
  {
    v62 = sub_1A6C0(v61, a1 + 1640);
    v63 = v62;
    do
    {
      v64 = v63;
      v63 = *(_QWORD *)(v63 + 16);
    }
    while ( v63 );
    *(_QWORD *)(a1 + 1656) = v64;
    v65 = v62;
    do
    {
      v66 = v65;
      v65 = *(_QWORD *)(v65 + 24);
    }
    while ( v65 );
    v67 = *(_QWORD *)(a2 + 1672);
    *(_QWORD *)(a1 + 1664) = v66;
    *(_QWORD *)(a1 + 1648) = v62;
    *(_QWORD *)(a1 + 1672) = v67;
  }
  *(_QWORD *)(a1 + 1680) = *(_QWORD *)(a2 + 1680);
  *(_QWORD *)(a1 + 1688) = *(_QWORD *)(a2 + 1688);
  result = *(unsigned __int16 *)(a2 + 1696);
  *(_WORD *)(a1 + 1696) = result;
  return result;
}

