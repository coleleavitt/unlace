__int64 __fastcall sub_10BE0(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __m128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // r12
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128 v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 result; // rax
  void *v33; // rax
  const void *v34; // rsi
  void *v35; // rax
  const void *v36; // rsi

  v3 = _mm_loadu_si128((const __m128i *)a2);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(__m128i *)a1 = v3;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v5 )
  {
    v33 = (void *)qalloc_or_throw(16 * v5);
    *(_QWORD *)(a1 + 40) = v5;
    v34 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v33;
    memcpy(v33, v34, 16 * v5);
    *(_QWORD *)(a1 + 32) = v5;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = -1;
  v6 = *(_QWORD *)(a2 + 80);
  if ( v6 )
  {
    v7 = _mm_loadh_ps((const double *)(a2 + 88));
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
    v8 = *(_QWORD *)(a2 + 96);
    *(__m128 *)(a1 + 80) = v7;
    *(_QWORD *)(a1 + 96) = v8;
    *(_QWORD *)(v6 + 8) = a1 + 72;
    v9 = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 80) = 0;
    *(_QWORD *)(a1 + 104) = v9;
    *(_QWORD *)(a2 + 88) = a2 + 72;
    *(_QWORD *)(a2 + 96) = a2 + 72;
    *(_QWORD *)(a2 + 104) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = a1 + 72;
    *(_QWORD *)(a1 + 96) = a1 + 72;
    *(_QWORD *)(a1 + 104) = 0;
  }
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  v10 = *(_QWORD *)(a2 + 128);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 136));
  *(_QWORD *)(a2 + 128) = 0;
  *(_QWORD *)(a1 + 128) = v10;
  *(__m128i *)(a1 + 136) = v11;
  v12 = *(_QWORD *)(a2 + 152);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 160));
  *(_OWORD *)(a2 + 136) = 0;
  *(_QWORD *)(a1 + 152) = v12;
  *(__m128i *)(a1 + 160) = v13;
  v14 = *(_QWORD *)(a2 + 176);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 184));
  *(_QWORD *)(a2 + 152) = 0;
  *(_OWORD *)(a2 + 160) = 0;
  *(_QWORD *)(a1 + 176) = v14;
  *(__m128i *)(a1 + 184) = v15;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 208));
  v17 = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a2 + 176) = 0;
  *(_OWORD *)(a2 + 184) = 0;
  *(_QWORD *)(a1 + 200) = v17;
  *(__m128i *)(a1 + 208) = v16;
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 224));
  *(_QWORD *)(a2 + 200) = 0;
  *(_OWORD *)(a2 + 208) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(__m128i *)(a1 + 224) = v18;
  *(_OWORD *)(a1 + 248) = 0;
  v19 = *(_QWORD *)(a2 + 248);
  if ( v19 )
  {
    v35 = (void *)qalloc_or_throw(16 * v19);
    *(_QWORD *)(a1 + 240) = v35;
    v36 = *(const void **)(a2 + 240);
    *(_QWORD *)(a1 + 256) = v19;
    memcpy(v35, v36, 16 * v19);
    *(_QWORD *)(a1 + 248) = v19;
  }
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  v20 = *(_QWORD *)(a2 + 296);
  if ( v20 )
  {
    v21 = _mm_loadh_ps((const double *)(a2 + 304));
    *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
    v22 = *(_QWORD *)(a2 + 312);
    *(__m128 *)(a1 + 296) = v21;
    *(_QWORD *)(a1 + 312) = v22;
    *(_QWORD *)(v20 + 8) = a1 + 288;
    v23 = *(_QWORD *)(a2 + 320);
    *(_QWORD *)(a2 + 296) = 0;
    *(_QWORD *)(a1 + 320) = v23;
    *(_QWORD *)(a2 + 304) = a2 + 288;
    *(_QWORD *)(a2 + 312) = a2 + 288;
    *(_QWORD *)(a2 + 320) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 288) = 0;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 304) = a1 + 288;
    *(_QWORD *)(a1 + 312) = a1 + 288;
    *(_QWORD *)(a1 + 320) = 0;
  }
  v24 = *(_QWORD *)(a2 + 328);
  v25 = *(_QWORD *)(a2 + 336);
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 328) = v24;
  v26 = *(_QWORD *)(a2 + 344);
  *(_QWORD *)(a1 + 336) = v25;
  *(_QWORD *)(a1 + 344) = v26;
  v27 = _mm_loadu_si128((const __m128i *)(a2 + 360));
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a2 + 352);
  *(__m128i *)(a1 + 360) = v27;
  if ( *(_QWORD *)(a2 + 328) == a2 + 376 )
  {
    *(_QWORD *)(a1 + 328) = a1 + 376;
    *(_QWORD *)(a1 + 376) = *(_QWORD *)(a2 + 376);
  }
  if ( v26 )
    *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8 * (*(_QWORD *)(v26 + 8) % v25)) = a1 + 344;
  v28 = *(_QWORD *)(a2 + 400);
  *(_QWORD *)(a2 + 368) = 0;
  *(_QWORD *)(a2 + 336) = 1;
  *(_QWORD *)(a2 + 376) = 0;
  *(_QWORD *)(a2 + 328) = a2 + 376;
  *(_QWORD *)(a2 + 344) = 0;
  *(_QWORD *)(a2 + 352) = 0;
  if ( v28 )
  {
    v29 = _mm_loadh_ps((const double *)(a2 + 408));
    *(_DWORD *)(a1 + 392) = *(_DWORD *)(a2 + 392);
    v30 = *(_QWORD *)(a2 + 416);
    *(__m128 *)(a1 + 400) = v29;
    *(_QWORD *)(a1 + 416) = v30;
    *(_QWORD *)(v28 + 8) = a1 + 392;
    v31 = *(_QWORD *)(a2 + 424);
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a1 + 424) = v31;
    *(_QWORD *)(a2 + 408) = a2 + 392;
    *(_QWORD *)(a2 + 416) = a2 + 392;
    *(_QWORD *)(a2 + 424) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 400) = 0;
    *(_QWORD *)(a1 + 408) = a1 + 392;
    *(_QWORD *)(a1 + 416) = a1 + 392;
    *(_QWORD *)(a1 + 424) = 0;
  }
  result = *(unsigned __int16 *)(a2 + 432);
  *(_WORD *)(a1 + 432) = result;
  return result;
}
