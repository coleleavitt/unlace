__int64 __fastcall sub_49440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64))
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // r12
  char i; // al
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rsi
  char v20; // al
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rbp
  unsigned __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r12
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // r12
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned __int64 v40; // r15
  __int64 v41; // r13
  unsigned __int64 v42; // r14
  __int64 v43; // rbx
  unsigned __int64 v44; // r13
  __int64 v45; // rbp
  __int64 v46; // r15
  __m128i v47; // xmm0
  __int64 v48; // rdi
  __int64 v49; // r15
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r14
  __m128i v56; // [rsp+0h] [rbp-68h] BYREF
  __m128i v57; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-40h]

  v8 = a1;
  v9 = a3;
  if ( a1 == a2 || a3 == a4 )
  {
    v57.m128i_i64[0] = a5;
  }
  else
  {
    v11 = a5 + 64;
    for ( i = a6(a3, a1); ; i = a6(v9, v8) )
    {
      if ( i )
      {
        *(_QWORD *)(v11 - 64) = *(_QWORD *)v9;
        *(_QWORD *)(v11 - 56) = *(_QWORD *)(v9 + 8);
        v13 = *(_QWORD *)(v9 + 16);
        v14 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        *(_QWORD *)(v9 + 16) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        v15 = *(_QWORD *)(v11 - 48);
        if ( v15 )
        {
          *(_QWORD *)(v11 - 40) = 0;
          v56.m128i_i64[0] = v13;
          v57 = v14;
          qfree(v15);
          v14 = _mm_load_si128(&v57);
          v13 = v56.m128i_i64[0];
        }
        *(_QWORD *)(v11 - 48) = v13;
        *(__m128i *)(v11 - 40) = v14;
        v16 = *(_QWORD *)(v9 + 40);
        v17 = _mm_loadu_si128((const __m128i *)(v9 + 48));
        *(_QWORD *)(v9 + 40) = 0;
        *(_OWORD *)(v9 + 48) = 0;
        v18 = *(_QWORD *)(v11 - 24);
        if ( v18 )
        {
          *(_QWORD *)(v11 - 16) = 0;
          v56.m128i_i64[0] = v16;
          v57 = v17;
          qfree(v18);
          v17 = _mm_load_si128(&v57);
          v16 = v56.m128i_i64[0];
        }
        *(_QWORD *)(v11 - 24) = v16;
        v19 = v9 + 64;
        v9 += 144;
        *(__m128i *)(v11 - 16) = v17;
        copy_tinfo_t(v11, v19);
        *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v9 - 72));
        *(__m128i *)(v11 + 24) = _mm_loadu_si128((const __m128i *)(v9 - 56));
        *(__m128i *)(v11 + 40) = _mm_loadu_si128((const __m128i *)(v9 - 40));
        *(_DWORD *)(v11 + 56) = *(_DWORD *)(v9 - 24);
        *(_DWORD *)(v11 + 64) = *(_DWORD *)(v9 - 16);
        *(_DWORD *)(v11 + 68) = *(_DWORD *)(v9 - 12);
        v20 = *(_BYTE *)(v9 - 8);
      }
      else
      {
        *(_QWORD *)(v11 - 64) = *(_QWORD *)v8;
        *(_QWORD *)(v11 - 56) = *(_QWORD *)(v8 + 8);
        v21 = *(_QWORD *)(v8 + 16);
        v22 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v23 = *(_QWORD *)(v11 - 48);
        if ( v23 )
        {
          *(_QWORD *)(v11 - 40) = 0;
          v56.m128i_i64[0] = v21;
          v57 = v22;
          qfree(v23);
          v22 = _mm_load_si128(&v57);
          v21 = v56.m128i_i64[0];
        }
        *(_QWORD *)(v11 - 48) = v21;
        *(__m128i *)(v11 - 40) = v22;
        v24 = *(_QWORD *)(v8 + 40);
        v25 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        *(_QWORD *)(v8 + 40) = 0;
        *(_OWORD *)(v8 + 48) = 0;
        v26 = *(_QWORD *)(v11 - 24);
        if ( v26 )
        {
          *(_QWORD *)(v11 - 16) = 0;
          v56.m128i_i64[0] = v24;
          v57 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v57);
          v24 = v56.m128i_i64[0];
        }
        *(_QWORD *)(v11 - 24) = v24;
        v27 = v8 + 64;
        v8 += 144;
        *(__m128i *)(v11 - 16) = v25;
        copy_tinfo_t(v11, v27);
        *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v8 - 72));
        *(__m128i *)(v11 + 24) = _mm_loadu_si128((const __m128i *)(v8 - 56));
        *(__m128i *)(v11 + 40) = _mm_loadu_si128((const __m128i *)(v8 - 40));
        *(_DWORD *)(v11 + 56) = *(_DWORD *)(v8 - 24);
        *(_DWORD *)(v11 + 64) = *(_DWORD *)(v8 - 16);
        *(_DWORD *)(v11 + 68) = *(_DWORD *)(v8 - 12);
        v20 = *(_BYTE *)(v8 - 8);
      }
      *(_BYTE *)(v11 + 72) = v20;
      if ( v8 == a2 || v9 == a4 )
        break;
      v11 += 144;
    }
    v57.m128i_i64[0] = v11 + 80;
  }
  v28 = a2 - v8;
  v58 = 0x8E38E38E38E38E39LL * (v28 >> 4);
  if ( v28 > 0 )
  {
    v29 = v8 + 64;
    v30 = 0x8E38E38E38E38E39LL * (v28 >> 4);
    v31 = v57.m128i_i64[0] + 64;
    do
    {
      *(_QWORD *)(v31 - 64) = *(_QWORD *)(v29 - 64);
      *(_QWORD *)(v31 - 56) = *(_QWORD *)(v29 - 56);
      v32 = *(_QWORD *)(v29 - 48);
      v33 = _mm_loadu_si128((const __m128i *)(v29 - 40));
      *(_QWORD *)(v29 - 48) = 0;
      *(_OWORD *)(v29 - 40) = 0;
      v34 = *(_QWORD *)(v31 - 48);
      if ( v34 )
      {
        *(_QWORD *)(v31 - 40) = 0;
        v56 = v33;
        qfree(v34);
        v33 = _mm_load_si128(&v56);
      }
      *(_QWORD *)(v31 - 48) = v32;
      *(__m128i *)(v31 - 40) = v33;
      v35 = *(_QWORD *)(v29 - 24);
      v36 = _mm_loadu_si128((const __m128i *)(v29 - 16));
      *(_QWORD *)(v29 - 24) = 0;
      *(_OWORD *)(v29 - 16) = 0;
      v37 = *(_QWORD *)(v31 - 24);
      if ( v37 )
      {
        *(_QWORD *)(v31 - 16) = 0;
        v56 = v36;
        qfree(v37);
        v36 = _mm_load_si128(&v56);
      }
      *(_QWORD *)(v31 - 24) = v35;
      v38 = v29;
      v39 = v31;
      v29 += 144;
      *(__m128i *)(v31 - 16) = v36;
      v31 += 144;
      copy_tinfo_t(v39, v38);
      *(__m128i *)(v31 - 136) = _mm_loadu_si128((const __m128i *)(v29 - 136));
      *(__m128i *)(v31 - 120) = _mm_loadu_si128((const __m128i *)(v29 - 120));
      *(__m128i *)(v31 - 104) = _mm_loadu_si128((const __m128i *)(v29 - 104));
      *(_DWORD *)(v31 - 88) = *(_DWORD *)(v29 - 88);
      *(_DWORD *)(v31 - 80) = *(_DWORD *)(v29 - 80);
      *(_DWORD *)(v31 - 76) = *(_DWORD *)(v29 - 76);
      *(_BYTE *)(v31 - 72) = *(_BYTE *)(v29 - 72);
      --v30;
    }
    while ( v30 );
    v40 = v58 - 1;
    if ( (__int64)(v58 - 1) < 0 )
      v40 = 0;
    v57.m128i_i64[0] += 144 * v40 + 144;
  }
  v41 = a4 - v9;
  v42 = 0x8E38E38E38E38E39LL * (v41 >> 4);
  if ( v41 > 0 )
  {
    v43 = v9 + 64;
    v44 = 0x8E38E38E38E38E39LL * (v41 >> 4);
    v45 = v57.m128i_i64[0] + 64;
    do
    {
      *(_QWORD *)(v45 - 64) = *(_QWORD *)(v43 - 64);
      *(_QWORD *)(v45 - 56) = *(_QWORD *)(v43 - 56);
      v46 = *(_QWORD *)(v43 - 48);
      v47 = _mm_loadu_si128((const __m128i *)(v43 - 40));
      *(_QWORD *)(v43 - 48) = 0;
      *(_OWORD *)(v43 - 40) = 0;
      v48 = *(_QWORD *)(v45 - 48);
      if ( v48 )
      {
        *(_QWORD *)(v45 - 40) = 0;
        v56 = v47;
        qfree(v48);
        v47 = _mm_load_si128(&v56);
      }
      *(_QWORD *)(v45 - 48) = v46;
      *(__m128i *)(v45 - 40) = v47;
      v49 = *(_QWORD *)(v43 - 24);
      v50 = _mm_loadu_si128((const __m128i *)(v43 - 16));
      *(_QWORD *)(v43 - 24) = 0;
      *(_OWORD *)(v43 - 16) = 0;
      v51 = *(_QWORD *)(v45 - 24);
      if ( v51 )
      {
        *(_QWORD *)(v45 - 16) = 0;
        v56 = v50;
        qfree(v51);
        v50 = _mm_load_si128(&v56);
      }
      *(_QWORD *)(v45 - 24) = v49;
      v52 = v43;
      v53 = v45;
      v43 += 144;
      *(__m128i *)(v45 - 16) = v50;
      v45 += 144;
      copy_tinfo_t(v53, v52);
      *(__m128i *)(v45 - 136) = _mm_loadu_si128((const __m128i *)(v43 - 136));
      *(__m128i *)(v45 - 120) = _mm_loadu_si128((const __m128i *)(v43 - 120));
      *(__m128i *)(v45 - 104) = _mm_loadu_si128((const __m128i *)(v43 - 104));
      *(_DWORD *)(v45 - 88) = *(_DWORD *)(v43 - 88);
      *(_DWORD *)(v45 - 80) = *(_DWORD *)(v43 - 80);
      *(_DWORD *)(v45 - 76) = *(_DWORD *)(v43 - 76);
      *(_BYTE *)(v45 - 72) = *(_BYTE *)(v43 - 72);
      --v44;
    }
    while ( v44 );
    v54 = v42 - 1;
    if ( v54 < 0 )
      v54 = 0;
    v57.m128i_i64[0] += 16 * (9 * v54 + 9);
  }
  return v57.m128i_i64[0];
}

