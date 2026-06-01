unsigned __int64 __fastcall sub_1D4840(__int64 a1, __int64 a2, __m128i *a3)
{
  void *v3; // r14
  __int64 v5; // rax
  __int64 v7; // r13
  void *v8; // r13
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm0
  void *v11; // r14
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm0
  void *v14; // r14
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm0
  void *v17; // r14
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm0
  void *v20; // r14
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  void *v23; // r14
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  void *v26; // r13
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  __int64 v31; // rdx
  void *v32; // r8
  __int64 v33; // rbp
  void *v34; // rbp
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  void *v37; // rbp
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm0
  void *v40; // rbp
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm0
  void *v43; // rbp
  unsigned __int64 v44; // rdx
  __m128i v45; // xmm0
  void *v46; // rbp
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm0
  void *v49; // r15
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm0
  void *v52; // r14
  unsigned __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rsi
  unsigned __int64 *v56; // rax
  __int64 v57; // rdx
  size_t v59; // rbp
  size_t v60; // rbp
  void *v61; // rax
  size_t v62; // r13
  size_t v63; // r13
  size_t v64; // r13
  size_t v65; // r13
  size_t v66; // r13
  size_t v67; // r14
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  size_t v69[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v70; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v71; // [rsp+30h] [rbp-58h] BYREF
  __int64 v72; // [rsp+38h] [rbp-50h]
  unsigned __int64 v73; // [rsp+48h] [rbp-40h]

  v3 = nullptr;
  v5 = *(_QWORD *)(a1 + 8);
  v73 = __readfsqword(0x28u);
  a3->m128i_i64[0] = v5;
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)(a1 + 16), 16 * v7);
  }
  if ( a3->m128i_i64[1] )
  {
    a3[1].m128i_i64[0] = 0;
    qfree();
  }
  a3[1].m128i_i64[0] = v7;
  a3[1].m128i_i64[1] = v7;
  v8 = nullptr;
  a3->m128i_i64[1] = (__int64)v3;
  a3[2].m128i_i64[0] = *(_QWORD *)(a1 + 40);
  a3[2].m128i_i64[1] = *(_QWORD *)(a1 + 48);
  a3[3].m128i_i64[0] = *(_QWORD *)(a1 + 56);
  a3[3].m128i_i64[1] = *(_QWORD *)(a1 + 80);
  a3[4].m128i_i64[0] = *(_QWORD *)(a1 + 88);
  a3[4].m128i_i64[1] = *(_QWORD *)(a1 + 96);
  a3[5].m128i_i64[0] = *(_QWORD *)(a1 + 104);
  a3[5].m128i_i32[2] = *(_DWORD *)(a1 + 112);
  a3[5].m128i_i32[3] = *(_DWORD *)(a1 + 116);
  a3[6].m128i_i32[0] = *(_DWORD *)(a1 + 120);
  a3[6].m128i_i64[1] = *(_QWORD *)(a1 + 128);
  a3[7].m128i_i64[0] = *(_QWORD *)(a1 + 136);
  a3[7].m128i_i64[1] = *(_QWORD *)(a1 + 144);
  a3[8].m128i_i64[0] = *(_QWORD *)(a1 + 152);
  a3[8].m128i_i64[1] = *(_QWORD *)(a1 + 168);
  v9 = *(_QWORD *)(a1 + 1480);
  si128 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    *(__m128i *)n = si128;
    v67 = 40 * v9;
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, *(const void **)(a1 + 1472), v67);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[9].m128i_i64[0] )
  {
    a3[9].m128i_i64[1] = 0;
    *(__m128i *)n = si128;
    qfree();
    si128 = _mm_load_si128((const __m128i *)n);
  }
  *(__m128i *)((char *)a3 + 152) = si128;
  v11 = nullptr;
  a3[9].m128i_i64[0] = (__int64)v8;
  a3[10].m128i_i64[1] = *(_QWORD *)(a1 + 176);
  a3[18].m128i_i32[0] = *(_DWORD *)(a1 + 1184);
  v12 = *(_QWORD *)(a1 + 1200);
  v13 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v12 )
  {
    *(__m128i *)n = v13;
    v66 = 16 * v12;
    v11 = (void *)qalloc_or_throw();
    memcpy(v11, *(const void **)(a1 + 1192), v66);
    v13 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[18].m128i_i64[1] )
  {
    a3[19].m128i_i64[0] = 0;
    *(__m128i *)n = v13;
    qfree();
    v13 = _mm_load_si128((const __m128i *)n);
  }
  a3[18].m128i_i64[1] = (__int64)v11;
  v14 = nullptr;
  a3[19] = v13;
  v15 = *(_QWORD *)(a1 + 192);
  v16 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v15 )
  {
    *(__m128i *)n = v16;
    v65 = 16 * v15;
    v14 = (void *)qalloc_or_throw();
    memcpy(v14, *(const void **)(a1 + 184), v65);
    v16 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[11].m128i_i64[0] )
  {
    a3[11].m128i_i64[1] = 0;
    *(__m128i *)n = v16;
    qfree();
    v16 = _mm_load_si128((const __m128i *)n);
  }
  a3[11].m128i_i64[0] = (__int64)v14;
  v17 = nullptr;
  *(__m128i *)((char *)a3 + 184) = v16;
  v18 = *(_QWORD *)(a1 + 216);
  v19 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
  if ( v18 )
  {
    *(__m128i *)n = v19;
    v64 = 16 * v18;
    v17 = (void *)qalloc_or_throw();
    memcpy(v17, *(const void **)(a1 + 208), v64);
    v19 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[12].m128i_i64[1] )
  {
    a3[13].m128i_i64[0] = 0;
    *(__m128i *)n = v19;
    qfree();
    v19 = _mm_load_si128((const __m128i *)n);
  }
  a3[12].m128i_i64[1] = (__int64)v17;
  v20 = nullptr;
  a3[13] = v19;
  v21 = *(_QWORD *)(a1 + 240);
  v22 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  if ( v21 )
  {
    *(__m128i *)n = v22;
    v63 = 16 * v21;
    v20 = (void *)qalloc_or_throw();
    memcpy(v20, *(const void **)(a1 + 232), v63);
    v22 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[14].m128i_i64[0] )
  {
    a3[14].m128i_i64[1] = 0;
    *(__m128i *)n = v22;
    qfree();
    v22 = _mm_load_si128((const __m128i *)n);
  }
  a3[14].m128i_i64[0] = (__int64)v20;
  v23 = nullptr;
  *(__m128i *)((char *)a3 + 232) = v22;
  sub_60E90(&a3[15].m128i_i64[1], (__int64 *)(a1 + 256));
  v24 = *(_QWORD *)(a1 + 280);
  v25 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
  if ( v24 )
  {
    *(__m128i *)n = v25;
    v62 = 16 * v24;
    v23 = (void *)qalloc_or_throw();
    memcpy(v23, *(const void **)(a1 + 272), v62);
    v25 = _mm_load_si128((const __m128i *)n);
  }
  if ( a3[16].m128i_i64[1] )
  {
    a3[17].m128i_i64[0] = 0;
    *(__m128i *)n = v25;
    qfree();
    v25 = _mm_load_si128((const __m128i *)n);
  }
  a3[16].m128i_i64[1] = (__int64)v23;
  v26 = nullptr;
  a3[17] = v25;
  sub_1D0620(a3[20].m128i_i64, a1 + 432);
  v27 = *(_QWORD *)(a1 + 464);
  v28 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
  if ( v27 )
  {
    *(__m128i *)v69 = v28;
    n[0] = 4 * v27;
    v26 = (void *)qalloc_or_throw();
    memcpy(v26, *(const void **)(a1 + 456), n[0]);
    v28 = _mm_load_si128((const __m128i *)v69);
  }
  if ( a3[21].m128i_i64[1] )
  {
    a3[22].m128i_i64[0] = 0;
    *(__m128i *)n = v28;
    qfree();
    v28 = _mm_load_si128((const __m128i *)n);
  }
  a3[21].m128i_i64[1] = (__int64)v26;
  n[0] = a1 + 872;
  a3[22] = v28;
  if ( (__m128i *)(a1 + 872) != &a3[23] )
  {
    sub_1D4630((__int64 *)&v71, a1 + 872);
    v29 = v72;
    v30 = (unsigned __int64 *)a3[23].m128i_i64[0];
    a3[23].m128i_i64[0] = (__int64)v71;
    v31 = a3[23].m128i_i64[1];
    v71 = v30;
    a3[23].m128i_i64[1] = v29;
    v72 = v31;
    if ( v30 )
    {
      sub_7F200(&v71);
      if ( v71 )
        qfree();
    }
  }
  v32 = nullptr;
  a3[24] = _mm_loadu_si128((const __m128i *)(a1 + 536));
  a3[25] = _mm_loadu_si128((const __m128i *)(a1 + 552));
  a3[26] = _mm_loadu_si128((const __m128i *)(a1 + 568));
  a3[27] = _mm_loadu_si128((const __m128i *)(a1 + 584));
  a3[28] = _mm_loadu_si128((const __m128i *)(a1 + 600));
  a3[29] = _mm_loadu_si128((const __m128i *)(a1 + 616));
  a3[30] = _mm_loadu_si128((const __m128i *)(a1 + 632));
  a3[31] = _mm_loadu_si128((const __m128i *)(a1 + 648));
  a3[32] = _mm_loadu_si128((const __m128i *)(a1 + 664));
  a3[33] = _mm_loadu_si128((const __m128i *)(a1 + 680));
  a3[34] = _mm_loadu_si128((const __m128i *)(a1 + 696));
  a3[35] = _mm_loadu_si128((const __m128i *)(a1 + 712));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v33 = *(_QWORD *)(a2 + 16);
  if ( v33 )
  {
    v69[0] = 16 * v33;
    v61 = (void *)qalloc_or_throw();
    v32 = memcpy(v61, *(const void **)(a2 + 8), v69[0]);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v69[0] = (size_t)v32;
    qfree();
    v32 = (void *)v69[0];
  }
  *(_QWORD *)(a1 + 24) = v33;
  *(_QWORD *)(a1 + 32) = v33;
  v34 = nullptr;
  *(_QWORD *)(a1 + 16) = v32;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 136);
  v35 = *(_QWORD *)(a2 + 152);
  v36 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
  if ( v35 )
  {
    v70 = v36;
    v69[0] = 40 * v35;
    v34 = (void *)qalloc_or_throw();
    memcpy(v34, *(const void **)(a2 + 144), v69[0]);
    v36 = _mm_load_si128(&v70);
  }
  if ( *(_QWORD *)(a1 + 1472) )
  {
    *(_QWORD *)(a1 + 1480) = 0;
    *(__m128i *)v69 = v36;
    qfree();
    v36 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 1472) = v34;
  v37 = nullptr;
  *(__m128i *)(a1 + 1480) = v36;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 1184) = *(_DWORD *)(a2 + 288);
  v38 = *(_QWORD *)(a2 + 304);
  v39 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
  if ( v38 )
  {
    v70 = v39;
    v69[0] = 16 * v38;
    v37 = (void *)qalloc_or_throw();
    memcpy(v37, *(const void **)(a2 + 296), v69[0]);
    v39 = _mm_load_si128(&v70);
  }
  if ( *(_QWORD *)(a1 + 1192) )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    *(__m128i *)v69 = v39;
    qfree();
    v39 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 1192) = v37;
  v40 = nullptr;
  *(__m128i *)(a1 + 1200) = v39;
  v41 = *(_QWORD *)(a2 + 184);
  v42 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
  if ( v41 )
  {
    v70 = v42;
    v69[0] = 16 * v41;
    v40 = (void *)qalloc_or_throw();
    memcpy(v40, *(const void **)(a2 + 176), v69[0]);
    v42 = _mm_load_si128(&v70);
  }
  if ( *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)(a1 + 192) = 0;
    *(__m128i *)v69 = v42;
    qfree();
    v42 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 184) = v40;
  v43 = nullptr;
  *(__m128i *)(a1 + 192) = v42;
  v44 = *(_QWORD *)(a2 + 208);
  v45 = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
  if ( v44 )
  {
    v70 = v45;
    v69[0] = 16 * v44;
    v43 = (void *)qalloc_or_throw();
    memcpy(v43, *(const void **)(a2 + 200), v69[0]);
    v45 = _mm_load_si128(&v70);
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    *(_QWORD *)(a1 + 216) = 0;
    *(__m128i *)v69 = v45;
    qfree();
    v45 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 208) = v43;
  v46 = nullptr;
  *(__m128i *)(a1 + 216) = v45;
  v47 = *(_QWORD *)(a2 + 232);
  v48 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
  if ( v47 )
  {
    v70 = v48;
    v69[0] = 16 * v47;
    v46 = (void *)qalloc_or_throw();
    memcpy(v46, *(const void **)(a2 + 224), v69[0]);
    v48 = _mm_load_si128(&v70);
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    *(_QWORD *)(a1 + 240) = 0;
    *(__m128i *)v69 = v48;
    qfree();
    v48 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 232) = v46;
  v49 = nullptr;
  *(__m128i *)(a1 + 240) = v48;
  sub_60E90((__int64 *)(a1 + 256), (__int64 *)(a2 + 248));
  v50 = *(_QWORD *)(a2 + 272);
  v51 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
  if ( v50 )
  {
    *(__m128i *)v69 = v51;
    v60 = 16 * v50;
    v49 = (void *)qalloc_or_throw();
    memcpy(v49, *(const void **)(a2 + 264), v60);
    v51 = _mm_load_si128((const __m128i *)v69);
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 280) = 0;
    *(__m128i *)v69 = v51;
    qfree();
    v51 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 272) = v49;
  v52 = nullptr;
  *(__m128i *)(a1 + 280) = v51;
  sub_1D0620((__int64 *)(a1 + 432), a2 + 320);
  v53 = *(_QWORD *)(a2 + 352);
  v54 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
  if ( v53 )
  {
    v59 = 4 * v53;
    *(__m128i *)v69 = v54;
    v52 = (void *)qalloc_or_throw();
    memcpy(v52, *(const void **)(a2 + 344), v59);
    v54 = _mm_load_si128((const __m128i *)v69);
  }
  if ( *(_QWORD *)(a1 + 456) )
  {
    *(_QWORD *)(a1 + 464) = 0;
    *(__m128i *)v69 = v54;
    qfree();
    v54 = _mm_load_si128((const __m128i *)v69);
  }
  *(_QWORD *)(a1 + 456) = v52;
  *(__m128i *)(a1 + 464) = v54;
  if ( n[0] != a2 + 368 )
  {
    sub_1D4630((__int64 *)&v71, a2 + 368);
    v55 = v72;
    v56 = *(unsigned __int64 **)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v71;
    v57 = *(_QWORD *)(a1 + 880);
    v71 = v56;
    *(_QWORD *)(a1 + 880) = v55;
    v72 = v57;
    if ( v56 )
    {
      sub_7F200(&v71);
      if ( v71 )
        qfree();
    }
  }
  *(__m128i *)(a1 + 536) = _mm_loadu_si128((const __m128i *)(a2 + 384));
  *(__m128i *)(a1 + 552) = _mm_loadu_si128((const __m128i *)(a2 + 400));
  *(__m128i *)(a1 + 568) = _mm_loadu_si128((const __m128i *)(a2 + 416));
  *(__m128i *)(a1 + 584) = _mm_loadu_si128((const __m128i *)(a2 + 432));
  *(__m128i *)(a1 + 600) = _mm_loadu_si128((const __m128i *)(a2 + 448));
  *(__m128i *)(a1 + 616) = _mm_loadu_si128((const __m128i *)(a2 + 464));
  *(__m128i *)(a1 + 632) = _mm_loadu_si128((const __m128i *)(a2 + 480));
  *(__m128i *)(a1 + 648) = _mm_loadu_si128((const __m128i *)(a2 + 496));
  *(__m128i *)(a1 + 664) = _mm_loadu_si128((const __m128i *)(a2 + 512));
  *(__m128i *)(a1 + 680) = _mm_loadu_si128((const __m128i *)(a2 + 528));
  *(__m128i *)(a1 + 696) = _mm_loadu_si128((const __m128i *)(a2 + 544));
  *(__m128i *)(a1 + 712) = _mm_loadu_si128((const __m128i *)(a2 + 560));
  return v73 - __readfsqword(0x28u);
}

