__int64 __fastcall sub_68290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r12
  __m128i v22; // xmm0
  __int64 v23; // r12
  __int64 v24; // rsi
  const __m128i *v25; // rdi
  __m128i *v26; // rax
  __m128i *v27; // rdx
  __m128i *v28; // rcx
  __m128i *v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  void *v32; // r14
  __int64 v33; // rax
  __m128i v34; // xmm0
  size_t v35; // r12
  __int64 *v36; // r12
  __int64 v37; // rax
  __m128i v38; // xmm0
  _QWORD *v39; // rcx
  _QWORD *v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 result; // rax
  void *v51; // rax
  const void *v52; // rsi
  void *v53; // rax
  const void *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // r13
  const char *v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r15
  void (__fastcall *v62)(__int64, const char *, __int64); // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r13
  const char *v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r15
  void (__fastcall *v70)(__int64, const char *, __int64); // rax
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // r13
  const char *v75; // r12
  __int64 v76; // rdx
  __int64 v77; // r15
  void (__fastcall *hexdsp)(__int64, const char *, __int64); // rax
  void *v79; // rax
  const void *v80; // rsi
  unsigned __int64 v81; // rdx

  v7 = _mm_loadu_si128((const __m128i *)a2);
  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(__m128i *)a1 = v7;
  *(_OWORD *)(a1 + 32) = 0;
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 16) = v8;
  if ( v9 )
  {
    v79 = (void *)qalloc_or_throw(16 * v9);
    *(_QWORD *)(a1 + 40) = v9;
    v80 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v79;
    memcpy(v79, v80, 16 * v9);
    *(_QWORD *)(a1 + 32) = v9;
  }
  v10 = (const char *)(a1 + 72);
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 72;
  *(_QWORD *)(a1 + 96) = a1 + 72;
  *(_QWORD *)(a1 + 104) = 0;
  v11 = *(_QWORD *)(a2 + 80);
  if ( v11 )
  {
    v12 = sub_65550(v11, (__int64)v10);
    v13 = v12;
    do
    {
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 );
    *(_QWORD *)(a1 + 88) = v14;
    v15 = v12;
    do
    {
      a4 = v15;
      v15 = *(_QWORD *)(v15 + 24);
    }
    while ( v15 );
    v16 = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 96) = a4;
    *(_QWORD *)(a1 + 80) = v12;
    *(_QWORD *)(a1 + 104) = v16;
  }
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  v17 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v18 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 120) = v17;
  if ( v18 )
  {
    v71 = 16 * v18;
    v72 = qalloc_or_throw(16 * v18);
    *(_QWORD *)(a1 + 128) = v72;
    v73 = v72;
    v74 = 0;
    *(_QWORD *)(a1 + 144) = v18;
    while ( 1 )
    {
      v75 = (const char *)(16 * v74 + v73);
      v76 = *(_QWORD *)(a2 + 128) + 16 * v74;
      *(_QWORD *)v75 = 0;
      v77 = v76;
      *((_QWORD *)v75 + 1) = 0;
      hexdsp = (void (__fastcall *)(__int64, const char *, __int64))get_hexdsp(v71, v10);
      v10 = v75;
      v71 = 203;
      hexdsp(203, v75, v77);
      if ( v18 == ++v74 )
        break;
      v73 = *(_QWORD *)(a1 + 128);
    }
    *(_QWORD *)(a1 + 136) = v18;
  }
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v19 = *(_QWORD *)(a2 + 160);
  if ( v19 )
  {
    v63 = 16 * v19;
    v64 = qalloc_or_throw(16 * v19);
    *(_QWORD *)(a1 + 152) = v64;
    v65 = v64;
    v66 = 0;
    *(_QWORD *)(a1 + 168) = v19;
    while ( 1 )
    {
      v67 = (const char *)(16 * v66 + v65);
      v68 = *(_QWORD *)(a2 + 152) + 16 * v66;
      *(_QWORD *)v67 = 0;
      v69 = v68;
      *((_QWORD *)v67 + 1) = 0;
      v70 = (void (__fastcall *)(__int64, const char *, __int64))get_hexdsp(v63, v10);
      v10 = v67;
      v63 = 203;
      v70(203, v67, v69);
      if ( v19 == ++v66 )
        break;
      v65 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)(a1 + 160) = v19;
  }
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v20 = *(_QWORD *)(a2 + 184);
  if ( v20 )
  {
    v55 = 16 * v20;
    v56 = qalloc_or_throw(16 * v20);
    *(_QWORD *)(a1 + 176) = v56;
    v57 = v56;
    v58 = 0;
    *(_QWORD *)(a1 + 192) = v20;
    while ( 1 )
    {
      v59 = (const char *)(16 * v58 + v57);
      v60 = *(_QWORD *)(a2 + 176) + 16 * v58;
      *(_QWORD *)v59 = 0;
      v61 = v60;
      *((_QWORD *)v59 + 1) = 0;
      v62 = (void (__fastcall *)(__int64, const char *, __int64))get_hexdsp(v55, v10);
      v10 = v59;
      v55 = 203;
      v62(203, v59, v61);
      if ( v20 == ++v58 )
        break;
      v57 = *(_QWORD *)(a1 + 176);
    }
    *(_QWORD *)(a1 + 184) = v20;
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v21 = *(_QWORD *)(a2 + 208);
  if ( v21 )
  {
    v53 = (void *)qalloc_or_throw(4 * v21);
    *(_QWORD *)(a1 + 200) = v53;
    v54 = *(const void **)(a2 + 200);
    *(_QWORD *)(a1 + 216) = v21;
    memcpy(v53, v54, 4 * v21);
    *(_QWORD *)(a1 + 208) = v21;
  }
  v22 = _mm_loadu_si128((const __m128i *)(a2 + 224));
  *(_QWORD *)(a1 + 240) = 0;
  *(__m128i *)(a1 + 224) = v22;
  *(_OWORD *)(a1 + 248) = 0;
  v23 = *(_QWORD *)(a2 + 248);
  if ( v23 )
  {
    v51 = (void *)qalloc_or_throw(16 * v23);
    *(_QWORD *)(a1 + 240) = v51;
    v52 = *(const void **)(a2 + 240);
    *(_QWORD *)(a1 + 256) = v23;
    memcpy(v51, v52, 16 * v23);
    *(_QWORD *)(a1 + 248) = v23;
  }
  v24 = a1 + 288;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 288;
  *(_QWORD *)(a1 + 312) = a1 + 288;
  *(_QWORD *)(a1 + 320) = 0;
  v25 = *(const __m128i **)(a2 + 296);
  if ( v25 )
  {
    v26 = sub_650C0(v25, v24);
    v27 = v26;
    do
    {
      v28 = v27;
      v27 = (__m128i *)v27[1].m128i_i64[0];
    }
    while ( v27 );
    *(_QWORD *)(a1 + 304) = v28;
    v29 = v26;
    do
    {
      a4 = (__int64)v29;
      v29 = (__m128i *)v29[1].m128i_i64[1];
    }
    while ( v29 );
    v30 = *(_QWORD *)(a2 + 320);
    *(_QWORD *)(a1 + 312) = a4;
    *(_QWORD *)(a1 + 296) = v26;
    *(_QWORD *)(a1 + 320) = v30;
  }
  v31 = *(_QWORD *)(a2 + 336);
  *(_QWORD *)(a1 + 344) = 0;
  v32 = (void *)(a1 + 376);
  v33 = *(_QWORD *)(a2 + 352);
  v34 = _mm_loadu_si128((const __m128i *)(a2 + 360));
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = v31;
  *(_QWORD *)(a1 + 352) = v33;
  *(_QWORD *)(a1 + 376) = 0;
  *(__m128i *)(a1 + 360) = v34;
  if ( v31 != 1 )
  {
    if ( v31 >> 60 )
    {
      v81 = v31 >> 61;
      if ( v81 )
        sub_B371(v25, v24, v81, a4, a5);
      std::__throw_bad_alloc();
    }
    v35 = 8 * v31;
    v32 = (void *)operator new(8 * v31);
    memset(v32, 0, v35);
  }
  v36 = *(__int64 **)(a2 + 344);
  *(_QWORD *)(a1 + 328) = v32;
  if ( v36 )
  {
    v37 = operator new(0x18u);
    *(_QWORD *)v37 = 0;
    v38 = _mm_loadu_si128((const __m128i *)(v36 + 1));
    v39 = (_QWORD *)v37;
    *(_QWORD *)(a1 + 344) = v37;
    *(__m128i *)(v37 + 8) = v38;
    if ( v37 )
      *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8LL * (*(_QWORD *)(v37 + 8) % *(_QWORD *)(a1 + 336))) = a1 + 344;
    while ( 1 )
    {
      v36 = (__int64 *)*v36;
      if ( !v36 )
        break;
      while ( 1 )
      {
        v40 = v39;
        v41 = operator new(0x18u);
        *(_QWORD *)v41 = 0;
        v39 = (_QWORD *)v41;
        *(__m128i *)(v41 + 8) = _mm_loadu_si128((const __m128i *)(v36 + 1));
        *v40 = v41;
        v42 = (_QWORD *)(*(_QWORD *)(a1 + 328) + 8LL * (*(_QWORD *)(v41 + 8) % *(_QWORD *)(a1 + 336)));
        if ( *v42 )
          break;
        *v42 = v40;
        v36 = (__int64 *)*v36;
        if ( !v36 )
          goto LABEL_31;
      }
    }
  }
LABEL_31:
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 424) = 0;
  v43 = *(_QWORD *)(a2 + 400);
  if ( v43 )
  {
    v44 = sub_65550(v43, a1 + 392);
    v45 = v44;
    do
    {
      v46 = v45;
      v45 = *(_QWORD *)(v45 + 16);
    }
    while ( v45 );
    *(_QWORD *)(a1 + 408) = v46;
    v47 = v44;
    do
    {
      v48 = v47;
      v47 = *(_QWORD *)(v47 + 24);
    }
    while ( v47 );
    v49 = *(_QWORD *)(a2 + 424);
    *(_QWORD *)(a1 + 416) = v48;
    *(_QWORD *)(a1 + 400) = v44;
    *(_QWORD *)(a1 + 424) = v49;
  }
  result = *(unsigned __int16 *)(a2 + 432);
  *(_WORD *)(a1 + 432) = result;
  return result;
}

