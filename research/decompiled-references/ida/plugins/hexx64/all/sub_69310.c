__int64 __fastcall sub_69310(__int64 a1, __int64 a2, int a3, __int64 a4, double a5)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // r12
  void *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __m128i si128; // xmm0
  __int64 v14; // rdi
  void *v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdi
  void *v20; // r13
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  void *v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdi
  void *v30; // r13
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rdi
  const __m128i *v35; // rsi
  void *v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 i; // r12
  __int64 v44; // rax
  __m128i *v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // rdi
  _DWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v52; // r12
  __int64 v53; // r12
  __int64 v54; // r12
  void *v55; // rax
  __int64 v56; // r12
  __int64 v57; // r12
  __int64 v58; // r12
  const void *v59; // r14
  void *v60; // rdi
  __int64 v61; // rax
  char v62; // [rsp+8h] [rbp-50h]
  __m128i v64[4]; // [rsp+10h] [rbp-48h] BYREF

  v62 = a4;
  if ( !a2 || *(_DWORD *)(a2 + 76) == 1 )
    return 0;
  v7 = sub_68AC0(a1, a3, 0, a4, a5);
  v8 = *(_DWORD *)(a2 + 24) & 0xFFFF7FFB;
  BYTE1(v8) |= 0x80u;
  *(_DWORD *)(v7 + 24) = v8;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(v7 + 76) = *(_DWORD *)(a2 + 76);
  if ( a2 != v7 )
  {
    v9 = *(_QWORD *)(a2 + 400);
    if ( v9 > 1 )
    {
      v59 = *(const void **)(a2 + 392);
      v60 = *(void **)(v7 + 392);
      if ( *(_QWORD *)(v7 + 408) < v9 )
      {
        v61 = qvector_reserve(v7 + 392, *(_QWORD *)(v7 + 392), *(_QWORD *)(a2 + 400), 1);
        *(_QWORD *)(v7 + 392) = v61;
        v60 = (void *)v61;
      }
      *(_QWORD *)(v7 + 400) = v9;
      memmove(v60, v59, v9 - 1);
      *(_BYTE *)(*(_QWORD *)(v7 + 392) + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 400) = 0;
    }
  }
  v10 = nullptr;
  sub_648D0((__int64 *)(v7 + 80), (const void **)(a2 + 80), a5);
  v12 = *(_QWORD *)(a2 + 104);
  si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v12 )
  {
    v64[0] = si128;
    v53 = 16 * v12;
    v10 = (void *)qalloc_or_throw(v53, a2 + 80, v53, v11);
    memcpy(v10, *(const void **)(a2 + 96), v53);
    si128 = _mm_load_si128(v64);
  }
  v14 = *(_QWORD *)(v7 + 96);
  if ( v14 )
  {
    *(_QWORD *)(v7 + 104) = 0;
    v64[0] = si128;
    qfree(v14);
    si128 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 96) = v10;
  v15 = nullptr;
  *(__m128i *)(v7 + 104) = si128;
  sub_648D0((__int64 *)(v7 + 120), (const void **)(a2 + 120), *(double *)si128.m128i_i64);
  v17 = *(_QWORD *)(a2 + 144);
  v18 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
  if ( v17 )
  {
    v64[0] = v18;
    v52 = 16 * v17;
    v15 = (void *)qalloc_or_throw(v52, a2 + 120, v52, v16);
    memcpy(v15, *(const void **)(a2 + 136), v52);
    v18 = _mm_load_si128(v64);
  }
  v19 = *(_QWORD *)(v7 + 136);
  if ( v19 )
  {
    *(_QWORD *)(v7 + 144) = 0;
    v64[0] = v18;
    qfree(v19);
    v18 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 136) = v15;
  v20 = nullptr;
  *(__m128i *)(v7 + 144) = v18;
  sub_648D0((__int64 *)(v7 + 160), (const void **)(a2 + 160), *(double *)v18.m128i_i64);
  v22 = *(_QWORD *)(a2 + 184);
  v23 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
  if ( v22 )
  {
    v64[0] = v23;
    v58 = 16 * v22;
    v20 = (void *)qalloc_or_throw(v58, a2 + 160, v58, v21);
    memcpy(v20, *(const void **)(a2 + 176), v58);
    v23 = _mm_load_si128(v64);
  }
  v24 = *(_QWORD *)(v7 + 176);
  if ( v24 )
  {
    *(_QWORD *)(v7 + 184) = 0;
    v64[0] = v23;
    qfree(v24);
    v23 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 176) = v20;
  v25 = nullptr;
  *(__m128i *)(v7 + 184) = v23;
  sub_648D0((__int64 *)(v7 + 200), (const void **)(a2 + 200), *(double *)v23.m128i_i64);
  v27 = *(_QWORD *)(a2 + 224);
  v28 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
  if ( v27 )
  {
    v64[0] = v28;
    v57 = 16 * v27;
    v25 = (void *)qalloc_or_throw(v57, a2 + 200, v57, v26);
    memcpy(v25, *(const void **)(a2 + 216), v57);
    v28 = _mm_load_si128(v64);
  }
  v29 = *(_QWORD *)(v7 + 216);
  if ( v29 )
  {
    *(_QWORD *)(v7 + 224) = 0;
    v64[0] = v28;
    qfree(v29);
    v28 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 216) = v25;
  v30 = nullptr;
  *(__m128i *)(v7 + 224) = v28;
  sub_648D0((__int64 *)(v7 + 240), (const void **)(a2 + 240), *(double *)v28.m128i_i64);
  v32 = *(_QWORD *)(a2 + 264);
  v33 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
  if ( v32 )
  {
    v64[0] = v33;
    v56 = 16 * v32;
    v30 = (void *)qalloc_or_throw(v56, a2 + 240, v56, v31);
    memcpy(v30, *(const void **)(a2 + 256), v56);
    v33 = _mm_load_si128(v64);
  }
  v34 = *(_QWORD *)(v7 + 256);
  if ( v34 )
  {
    *(_QWORD *)(v7 + 264) = 0;
    v64[0] = v33;
    qfree(v34);
    v33 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 256) = v30;
  v35 = (const __m128i *)(a2 + 280);
  v36 = nullptr;
  *(__m128i *)(v7 + 264) = v33;
  sub_648D0((__int64 *)(v7 + 280), (const void **)(a2 + 280), *(double *)v33.m128i_i64);
  v38 = *(_QWORD *)(a2 + 304);
  v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
  if ( v38 )
  {
    v64[0] = v39;
    v54 = 16 * v38;
    v55 = (void *)qalloc_or_throw(v54, (__int64)v35, v54, v37);
    v35 = *(const __m128i **)(a2 + 296);
    v36 = v55;
    memcpy(v55, v35, v54);
    v39 = _mm_load_si128(v64);
  }
  v40 = *(_QWORD *)(v7 + 296);
  if ( v40 )
  {
    *(_QWORD *)(v7 + 304) = 0;
    v64[0] = v39;
    qfree(v40);
    v39 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v7 + 296) = v36;
  v41 = 0;
  *(__m128i *)(v7 + 304) = v39;
  *(_QWORD *)(v7 + 320) = *(_QWORD *)(a2 + 320);
  *(_QWORD *)(v7 + 328) = *(_QWORD *)(a2 + 328);
  *(_QWORD *)(v7 + 336) = *(_QWORD *)(a2 + 336);
  *(_QWORD *)(v7 + 512) = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(v7 + 520) = *(_QWORD *)(a2 + 520);
  v42 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v7 + 416) = v42;
  *(_QWORD *)(v7 + 448) = v42;
  *(_DWORD *)(a1 + 4) &= 0xFFFFFE77;
  for ( i = *(_QWORD *)(a2 + 48); i; v41 = (__int64)v46 )
  {
    v44 = j__qalloc_or_throw(80, (__int64)v35, v38, v37);
    *(_QWORD *)(v44 + 32) = 0xFFFFFFFF00000000LL;
    v45 = (__m128i *)v44;
    *(_QWORD *)(v44 + 40) = 0;
    *(_QWORD *)(v44 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v44 + 56) = 0;
    *(_QWORD *)(v44 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v44 + 72) = 0;
    *(_OWORD *)(v44 + 8) = 0;
    sub_1253A0(v44, i);
    v35 = v45;
    v46 = sub_A3160(v7, v45, v41);
    i = *(_QWORD *)(i + 8);
  }
  if ( *(_DWORD *)(v7 + 76) )
  {
    v47 = *(_QWORD *)(v7 + 16);
    v48 = *(_DWORD **)(v47 + 368);
    v49 = (unsigned int)(a3 + 1);
    v50 = (__int64)&v48[*(_QWORD *)(v47 + 376)];
    if ( v48 != (_DWORD *)v50 )
    {
      while ( (_DWORD)v49 != *v48 )
      {
        if ( (_DWORD *)v50 == ++v48 )
          goto LABEL_39;
      }
      if ( (_DWORD *)v50 != v48 )
        sub_1D51C0(v47, 0, v49, v50);
    }
LABEL_39:
    v35 = nullptr;
    sub_1D51C0(v7, 0, v49, v50);
    sub_1D4FD0(a1);
    if ( (v62 & 2) != 0 && *(_QWORD *)(v7 + 376) == 1 )
      sub_A8320(v7);
  }
  if ( (v62 & 1) != 0 )
    sub_190300(a1, v35);
  return v7;
}

