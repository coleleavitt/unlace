unsigned __int64 __fastcall sub_47680(__int64 a1, __int64 (__fastcall *a2)(__m128 *, __m128i *))
{
  __int64 v2; // r12
  size_t v3; // rbp
  __int64 v4; // r15
  void *v5; // rax
  double v6; // rax
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128 v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  size_t v29; // rbx
  void *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rdi
  __m128i v33; // xmm0
  void *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v39; // [rsp+0h] [rbp-1C8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v42)(__m128 *, __m128i *); // [rsp+28h] [rbp-1A0h]
  void *src; // [rsp+30h] [rbp-198h]
  double v44[7]; // [rsp+38h] [rbp-190h] BYREF
  __m128i v45; // [rsp+70h] [rbp-158h] BYREF
  __int64 v46; // [rsp+80h] [rbp-148h]
  __m128i v47; // [rsp+98h] [rbp-130h] BYREF
  __m128i v48; // [rsp+B0h] [rbp-118h] BYREF
  void *v49; // [rsp+C0h] [rbp-108h]
  __int128 v50; // [rsp+C8h] [rbp-100h]
  __int64 v51; // [rsp+D8h] [rbp-F0h]
  __m128i v52; // [rsp+E0h] [rbp-E8h]
  __int64 v53; // [rsp+F0h] [rbp-D8h]
  char v54; // [rsp+F8h] [rbp-D0h]
  __int64 v55; // [rsp+100h] [rbp-C8h]
  __m128i v56; // [rsp+108h] [rbp-C0h]
  __m128 v57; // [rsp+120h] [rbp-A8h] BYREF
  void *v58; // [rsp+130h] [rbp-98h]
  __int128 v59; // [rsp+138h] [rbp-90h]
  __int64 v60; // [rsp+148h] [rbp-80h]
  __m128i v61; // [rsp+150h] [rbp-78h]
  __int64 v62; // [rsp+160h] [rbp-68h]
  char v63; // [rsp+168h] [rbp-60h]
  __int64 v64; // [rsp+170h] [rbp-58h]
  __m128i v65; // [rsp+178h] [rbp-50h]
  unsigned __int64 v66; // [rsp+188h] [rbp-40h]

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 40);
  v42 = a2;
  v66 = __readfsqword(0x28u);
  v39.m128i_i64[0] = *(_QWORD *)a1;
  v41 = *(_QWORD *)(a1 + 8);
  v5 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  src = v5;
  v6 = *(double *)(a1 + 32);
  *(_OWORD *)(a1 + 24) = 0;
  v44[0] = v6;
  v7 = *(_QWORD *)(a1 + 64);
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v46 = v7;
  v8 = *(_BYTE *)(a1 + 72);
  v9 = *(_QWORD *)(a1 + 80);
  v47 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  while ( 1 )
  {
    v28 = _mm_loadu_si128((const __m128i *)(v2 - 104));
    v29 = *(_QWORD *)(v2 - 80);
    v49 = nullptr;
    v50 = 0;
    v48 = v28;
    if ( v29 )
    {
      v30 = (void *)qalloc_or_throw(v29);
      v31 = *(const void **)(v2 - 88);
      v49 = v30;
      *((_QWORD *)&v50 + 1) = v29;
      memcpy(v30, v31, v29);
      *(_QWORD *)&v50 = v29;
    }
    v10 = *(_QWORD *)(v2 - 64);
    v11 = _mm_loadu_si128((const __m128i *)(v2 - 56));
    v58 = nullptr;
    v59 = 0;
    v51 = v10;
    v12 = *(_QWORD *)(v2 - 40);
    v52 = v11;
    v13 = _mm_loadu_si128((const __m128i *)(v2 - 16));
    v14 = _mm_loadh_ps((const double *)&v41);
    v53 = v12;
    LOBYTE(v12) = *(_BYTE *)(v2 - 32);
    v40 = (__m128i)v14;
    v54 = v12;
    v15 = *(_QWORD *)(v2 - 24);
    v56 = v13;
    v55 = v15;
    v57 = v14;
    if ( v3 )
    {
      v58 = (void *)qalloc_or_throw(v3);
      *((_QWORD *)&v59 + 1) = v3;
      memcpy(v58, src, v3);
      *(_QWORD *)&v59 = v3;
    }
    v16 = _mm_load_si128(&v45);
    v60 = v4;
    v63 = v8;
    v61 = v16;
    v17 = _mm_loadu_si128(&v47);
    v62 = v46;
    v64 = v9;
    v65 = v17;
    v18 = v42(&v57, &v48);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( !v18 )
      break;
    v19 = *(_QWORD *)(v2 - 104);
    v20 = *(_QWORD *)(v2 + 16);
    v21 = *(_QWORD *)(v2 - 88);
    v22 = _mm_loadu_si128((const __m128i *)(v2 - 80));
    *(_QWORD *)(v2 - 88) = 0;
    *(_QWORD *)v2 = v19;
    v23 = *(_QWORD *)(v2 - 96);
    *(_OWORD *)(v2 - 80) = 0;
    *(_QWORD *)(v2 + 8) = v23;
    if ( v20 )
    {
      *(_QWORD *)(v2 + 24) = 0;
      v40 = v22;
      qfree(v20);
      v22 = _mm_load_si128(&v40);
    }
    v24 = *(_QWORD *)(v2 - 64);
    *(__m128i *)(v2 + 24) = v22;
    v25 = _mm_loadu_si128((const __m128i *)(v2 - 56));
    v2 -= 104;
    *(_QWORD *)(v2 + 120) = v21;
    *(_QWORD *)(v2 + 144) = v24;
    v26 = *(_QWORD *)(v2 + 64);
    *(__m128i *)(v2 + 152) = v25;
    v27 = _mm_loadu_si128((const __m128i *)(v2 + 88));
    *(_QWORD *)(v2 + 168) = v26;
    LOBYTE(v26) = *(_BYTE *)(v2 + 72);
    *(__m128i *)(v2 + 192) = v27;
    *(_BYTE *)(v2 + 176) = v26;
    *(_QWORD *)(v2 + 184) = *(_QWORD *)(v2 + 80);
  }
  v32 = *(_QWORD *)(v2 + 16);
  v33 = (__m128i)_mm_loadh_ps(v44);
  *(__m128i *)v2 = _mm_load_si128(&v40);
  if ( v32 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v39 = v33;
    qfree(v32);
    v33 = _mm_load_si128(&v39);
  }
  v34 = src;
  *(__m128i *)(v2 + 24) = v33;
  v35 = _mm_load_si128(&v45);
  *(_QWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 16) = v34;
  v36 = v46;
  *(__m128i *)(v2 + 48) = v35;
  v37 = _mm_loadu_si128(&v47);
  *(_QWORD *)(v2 + 64) = v36;
  *(_BYTE *)(v2 + 72) = v8;
  *(_QWORD *)(v2 + 80) = v9;
  *(__m128i *)(v2 + 88) = v37;
  return v66 - __readfsqword(0x28u);
}

