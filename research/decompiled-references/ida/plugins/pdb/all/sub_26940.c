void __fastcall sub_26940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  __m128i si128; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // r12
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r12
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __m128i v37[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 == a1 )
    return;
  v5 = a3;
  v8 = a1;
  if ( a4 == a3 )
    goto LABEL_18;
  v9 = a5 + 64;
  while ( *(_QWORD *)v5 >= *(_QWORD *)v8 )
  {
    *(_QWORD *)(v9 - 64) = *(_QWORD *)v8;
    *(_QWORD *)(v9 - 56) = *(_QWORD *)(v8 + 8);
    v18 = *(_QWORD *)(v8 + 16);
    si128 = _mm_loadu_si128((const __m128i *)(v8 + 24));
    *(_QWORD *)(v8 + 16) = 0;
    *(_OWORD *)(v8 + 24) = 0;
    v20 = *(_QWORD *)(v9 - 48);
    if ( v20 )
    {
      *(_QWORD *)(v9 - 40) = 0;
      v37[0] = si128;
      qfree(v20);
      si128 = _mm_load_si128(v37);
    }
    *(_QWORD *)(v9 - 48) = v18;
    *(__m128i *)(v9 - 40) = si128;
    v21 = *(_QWORD *)(v8 + 40);
    v22 = _mm_loadu_si128((const __m128i *)(v8 + 48));
    *(_QWORD *)(v8 + 40) = 0;
    *(_OWORD *)(v8 + 48) = 0;
    v23 = *(_QWORD *)(v9 - 24);
    if ( v23 )
    {
      *(_QWORD *)(v9 - 16) = 0;
      v37[0] = v22;
      qfree(v23);
      v22 = _mm_load_si128(v37);
    }
    *(_QWORD *)(v9 - 24) = v21;
    v24 = v8 + 64;
    v8 += 144;
    *(__m128i *)(v9 - 16) = v22;
    copy_tinfo_t(v9, v24);
    *(__m128i *)(v9 + 8) = _mm_loadu_si128((const __m128i *)(v8 - 72));
    *(__m128i *)(v9 + 24) = _mm_loadu_si128((const __m128i *)(v8 - 56));
    *(__m128i *)(v9 + 40) = _mm_loadu_si128((const __m128i *)(v8 - 40));
    *(_DWORD *)(v9 + 56) = *(_DWORD *)(v8 - 24);
    *(_DWORD *)(v9 + 64) = *(_DWORD *)(v8 - 16);
    *(_DWORD *)(v9 + 68) = *(_DWORD *)(v8 - 12);
    *(_BYTE *)(v9 + 72) = *(_BYTE *)(v8 - 8);
    *(_DWORD *)(v9 + 76) = *(_DWORD *)(v8 - 4);
    v17 = v9 + 144;
    if ( a2 == v8 )
      goto LABEL_17;
LABEL_9:
    if ( a4 == v5 )
      goto LABEL_17;
    v9 = v17;
  }
  *(_QWORD *)(v9 - 64) = *(_QWORD *)v5;
  *(_QWORD *)(v9 - 56) = *(_QWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 16);
  v11 = _mm_loadu_si128((const __m128i *)(v5 + 24));
  *(_QWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  v12 = *(_QWORD *)(v9 - 48);
  if ( v12 )
  {
    *(_QWORD *)(v9 - 40) = 0;
    v37[0] = v11;
    qfree(v12);
    v11 = _mm_load_si128(v37);
  }
  *(_QWORD *)(v9 - 48) = v10;
  *(__m128i *)(v9 - 40) = v11;
  v13 = *(_QWORD *)(v5 + 40);
  v14 = _mm_loadu_si128((const __m128i *)(v5 + 48));
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  v15 = *(_QWORD *)(v9 - 24);
  if ( v15 )
  {
    *(_QWORD *)(v9 - 16) = 0;
    v37[0] = v14;
    qfree(v15);
    v14 = _mm_load_si128(v37);
  }
  *(_QWORD *)(v9 - 24) = v13;
  v16 = v5 + 64;
  v5 += 144;
  *(__m128i *)(v9 - 16) = v14;
  copy_tinfo_t(v9, v16);
  *(__m128i *)(v9 + 8) = _mm_loadu_si128((const __m128i *)(v5 - 72));
  *(__m128i *)(v9 + 24) = _mm_loadu_si128((const __m128i *)(v5 - 56));
  *(__m128i *)(v9 + 40) = _mm_loadu_si128((const __m128i *)(v5 - 40));
  *(_DWORD *)(v9 + 56) = *(_DWORD *)(v5 - 24);
  *(_DWORD *)(v9 + 64) = *(_DWORD *)(v5 - 16);
  *(_DWORD *)(v9 + 68) = *(_DWORD *)(v5 - 12);
  *(_BYTE *)(v9 + 72) = *(_BYTE *)(v5 - 8);
  *(_DWORD *)(v9 + 76) = *(_DWORD *)(v5 - 4);
  v17 = v9 + 144;
  if ( a2 != v8 )
    goto LABEL_9;
LABEL_17:
  a5 = v9 + 80;
LABEL_18:
  if ( a2 != v8 )
  {
    v25 = a2 - v8;
    v26 = 0x8E38E38E38E38E39LL * (v25 >> 4);
    if ( v25 > 0 )
    {
      v27 = a5 + 64;
      v28 = v8 + 64;
      do
      {
        *(_QWORD *)(v27 - 64) = *(_QWORD *)(v28 - 64);
        *(_QWORD *)(v27 - 56) = *(_QWORD *)(v28 - 56);
        v29 = *(_QWORD *)(v28 - 48);
        v30 = _mm_loadu_si128((const __m128i *)(v28 - 40));
        *(_QWORD *)(v28 - 48) = 0;
        *(_OWORD *)(v28 - 40) = 0;
        v31 = *(_QWORD *)(v27 - 48);
        if ( v31 )
        {
          *(_QWORD *)(v27 - 40) = 0;
          v37[0] = v30;
          qfree(v31);
          v30 = _mm_load_si128(v37);
        }
        *(_QWORD *)(v27 - 48) = v29;
        *(__m128i *)(v27 - 40) = v30;
        v32 = *(_QWORD *)(v28 - 24);
        v33 = _mm_loadu_si128((const __m128i *)(v28 - 16));
        *(_QWORD *)(v28 - 24) = 0;
        *(_OWORD *)(v28 - 16) = 0;
        v34 = *(_QWORD *)(v27 - 24);
        if ( v34 )
        {
          *(_QWORD *)(v27 - 16) = 0;
          v37[0] = v33;
          qfree(v34);
          v33 = _mm_load_si128(v37);
        }
        *(_QWORD *)(v27 - 24) = v32;
        v35 = v28;
        v36 = v27;
        v28 += 144;
        *(__m128i *)(v27 - 16) = v33;
        v27 += 144;
        copy_tinfo_t(v36, v35);
        *(__m128i *)(v27 - 136) = _mm_loadu_si128((const __m128i *)(v28 - 136));
        *(__m128i *)(v27 - 120) = _mm_loadu_si128((const __m128i *)(v28 - 120));
        *(__m128i *)(v27 - 104) = _mm_loadu_si128((const __m128i *)(v28 - 104));
        *(_DWORD *)(v27 - 88) = *(_DWORD *)(v28 - 88);
        *(_DWORD *)(v27 - 80) = *(_DWORD *)(v28 - 80);
        *(_DWORD *)(v27 - 76) = *(_DWORD *)(v28 - 76);
        *(_BYTE *)(v27 - 72) = *(_BYTE *)(v28 - 72);
        *(_DWORD *)(v27 - 68) = *(_DWORD *)(v28 - 68);
        --v26;
      }
      while ( v26 );
    }
  }
}

