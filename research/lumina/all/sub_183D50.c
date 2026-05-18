__int64 __fastcall sub_183D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rbx
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // rbx
  void *v11; // rdx
  void *v12; // rax
  void *v13; // rbx
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  void *ptr; // [rsp+8h] [rbp-1A0h]
  void *ptra; // [rsp+8h] [rbp-1A0h]
  __int64 v22; // [rsp+10h] [rbp-198h]
  __int64 v23; // [rsp+20h] [rbp-188h]
  __int64 v24; // [rsp+28h] [rbp-180h]
  char v25; // [rsp+36h] [rbp-172h]
  char v26; // [rsp+37h] [rbp-171h]
  __int64 v27; // [rsp+38h] [rbp-170h]
  unsigned int v28; // [rsp+54h] [rbp-154h]
  char *v29; // [rsp+58h] [rbp-150h] BYREF
  void *v30; // [rsp+60h] [rbp-148h]
  __m128i v31; // [rsp+68h] [rbp-140h] BYREF
  void *v32; // [rsp+80h] [rbp-128h] BYREF
  __int128 v33; // [rsp+88h] [rbp-120h]
  __int64 v34; // [rsp+98h] [rbp-110h]
  __int64 v35; // [rsp+A0h] [rbp-108h]
  __int64 v36; // [rsp+A8h] [rbp-100h]
  __int128 v37; // [rsp+B0h] [rbp-F8h]
  __m128i v38; // [rsp+C0h] [rbp-E8h] BYREF
  __m128i v39; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v40; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v41; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v42; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v43; // [rsp+110h] [rbp-98h] BYREF
  __m128i v44; // [rsp+120h] [rbp-88h] BYREF
  __m128i v45; // [rsp+130h] [rbp-78h] BYREF
  __m128i v46; // [rsp+140h] [rbp-68h] BYREF
  __m128i v47; // [rsp+150h] [rbp-58h] BYREF
  __m128i v48; // [rsp+160h] [rbp-48h] BYREF
  __m128i v49; // [rsp+170h] [rbp-38h] BYREF
  __int64 v50; // [rsp+180h] [rbp-28h]
  unsigned __int64 v51; // [rsp+188h] [rbp-20h]

  v51 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 560);
  v33 = 0;
  v32 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v22 = v2;
  v37 = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    v38 = _mm_loadu_si128((const __m128i *)(a1 + 360));
    v50 = v3;
    v39 = _mm_loadu_si128((const __m128i *)(a1 + 376));
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 392));
    v41 = _mm_loadu_si128((const __m128i *)(a1 + 408));
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 424));
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 440));
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 456));
    v45 = _mm_loadu_si128((const __m128i *)(a1 + 472));
    v46 = _mm_loadu_si128((const __m128i *)(a1 + 488));
    v47 = _mm_loadu_si128((const __m128i *)(a1 + 504));
    v48 = _mm_loadu_si128((const __m128i *)(a1 + 520));
    v49 = _mm_loadu_si128((const __m128i *)(a1 + 536));
  }
  v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 560) = &v32;
  v5 = *(void **)(a1 + 56);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 56) = 0;
  v23 = v4;
  v7 = *(_QWORD *)(a1 + 224);
  v30 = v5;
  v8 = *(_QWORD *)(a1 + 272);
  v24 = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 144);
  *(_QWORD *)(a1 + 216) = sub_17D050;
  v25 = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 84);
  *(_QWORD *)(a1 + 224) = &v29;
  v26 = v7;
  v29 = "";
  v9 = *(void **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 568) = 0;
  ptr = v9;
  v10 = *(_QWORD *)(a1 + 280);
  v31 = v6;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  v27 = v8;
  v28 = _setjmp((struct __jmp_buf_tag *)(a1 + 360));
  if ( v28 )
    sub_18FA40(v28);
  else
    sub_183C40(a1, a2, 1);
  if ( !v28 && ((_WORD)v34 != 1 || *(_BYTE *)(a1 + 568)) )
    v28 = sub_18FA40(47);
  *(_BYTE *)(a1 + 84) = v26;
  v11 = *(void **)(a1 + 264);
  *(_BYTE *)(a1 + 144) = v25;
  *(_QWORD *)(a1 + 216) = v23;
  *(_QWORD *)(a1 + 224) = v24;
  v12 = ptr;
  ptra = v11;
  *(_QWORD *)(a1 + 264) = v12;
  *(_QWORD *)(a1 + 272) = v27;
  *(_QWORD *)(a1 + 280) = v10;
  while ( *(_QWORD *)(a1 + 64) )
    sub_17D2A0(a1);
  v13 = *(void **)(a1 + 56);
  v14 = _mm_loadu_si128(&v31);
  v31.m128i_i64[0] = 0;
  v15 = *(_QWORD *)(a1 + 72);
  v16 = v30;
  v30 = v13;
  *(_QWORD *)(a1 + 56) = v16;
  v31.m128i_i64[1] = v15;
  *(__m128i *)(a1 + 64) = v14;
  if ( v22 )
  {
    v17 = v50;
    *(__m128i *)(a1 + 360) = _mm_load_si128(&v38);
    v18 = _mm_load_si128(&v39);
    *(_QWORD *)(a1 + 552) = v17;
    *(__m128i *)(a1 + 376) = v18;
    *(__m128i *)(a1 + 392) = _mm_load_si128(&v40);
    *(__m128i *)(a1 + 408) = _mm_load_si128(&v41);
    *(__m128i *)(a1 + 424) = _mm_load_si128(&v42);
    *(__m128i *)(a1 + 440) = _mm_load_si128(&v43);
    *(__m128i *)(a1 + 456) = _mm_load_si128(&v44);
    *(__m128i *)(a1 + 472) = _mm_load_si128(&v45);
    *(__m128i *)(a1 + 488) = _mm_load_si128(&v46);
    *(__m128i *)(a1 + 504) = _mm_load_si128(&v47);
    *(__m128i *)(a1 + 520) = _mm_load_si128(&v48);
    *(__m128i *)(a1 + 536) = _mm_load_si128(&v49);
  }
  *(_QWORD *)(a1 + 560) = v22;
  if ( ptra )
    j__free(ptra);
  if ( v13 )
    j__free(v13);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    j__free(v32);
  }
  return v28;
}
