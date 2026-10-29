unsigned __int64 __fastcall sub_37330(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // r14
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i si128; // xmm0
  __int64 v11; // rbx
  size_t v12; // r14
  void *v13; // rax
  const void *v14; // rsi
  unsigned __int64 v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  unsigned __int64 v23; // rbp
  void *v24; // rax
  void *v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rbx
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  void *v33; // rsi
  size_t v34; // [rsp+8h] [rbp-170h]
  size_t v35; // [rsp+8h] [rbp-170h]
  __m128i v36[9]; // [rsp+10h] [rbp-168h] BYREF
  __m128i v37; // [rsp+A0h] [rbp-D8h] BYREF
  void *v38; // [rsp+B0h] [rbp-C8h]
  __int128 v39; // [rsp+B8h] [rbp-C0h]
  void *v40; // [rsp+C8h] [rbp-B0h]
  __int128 v41; // [rsp+D0h] [rbp-A8h]
  __int64 v42; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v43; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v44; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v45; // [rsp+108h] [rbp-70h] BYREF
  __int64 v46; // [rsp+118h] [rbp-60h]
  __int64 v47; // [rsp+120h] [rbp-58h]
  __int8 v48; // [rsp+128h] [rbp-50h]
  __int32 v49; // [rsp+12Ch] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+138h] [rbp-40h]

  v2 = a1[1];
  v50 = __readfsqword(0x28u);
  if ( v2 == a2 )
    return v50 - __readfsqword(0x28u);
  memset(v36, 0, sizeof(v36));
  v36[7].m128i_i64[0] = 1;
  v36[7].m128i_i32[2] = -1;
  if ( a2 < v2 )
  {
    v15 = a2;
    do
    {
      v16 = (_QWORD *)(*a1 + 144 * v15);
      clear_tinfo_t(v16 + 8);
      v17 = v16[5];
      if ( v17 )
      {
        v16[6] = 0;
        qfree(v17);
      }
      v18 = v16[2];
      if ( v18 )
      {
        v16[3] = 0;
        qfree(v18);
      }
      ++v15;
    }
    while ( v2 != v15 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v36 >= *a1 && (unsigned __int64)v36 < v5 + 144 * v6 )
    {
      v38 = nullptr;
      v40 = nullptr;
      v42 = 0;
      v37 = 0;
      v39 = 0;
      v41 = 0;
      copy_tinfo_t(&v42, &v36[4]);
      v20 = _mm_loadu_si128((const __m128i *)&v36[4].m128i_u64[1]);
      v46 = v36[7].m128i_i64[1];
      v43 = v20;
      v21 = _mm_loadu_si128((const __m128i *)&v36[5].m128i_u64[1]);
      v47 = v36[8].m128i_i64[0];
      v44 = v21;
      v22 = _mm_loadu_si128((const __m128i *)&v36[6].m128i_u64[1]);
      v48 = v36[8].m128i_i8[8];
      v45 = v22;
      v49 = v36[8].m128i_i32[3];
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 144);
      v23 = a1[1];
      if ( v23 < a2 )
      {
        do
        {
          v28 = _mm_load_si128(&v37);
          v29 = *a1 + 144 * v23;
          *(_QWORD *)(v29 + 16) = 0;
          *(__m128i *)v29 = v28;
          *(_OWORD *)(v29 + 24) = 0;
          if ( (_QWORD)v39 )
          {
            v34 = v39;
            v24 = (void *)qalloc_or_throw(v39);
            *(_QWORD *)(v29 + 16) = v24;
            v25 = v38;
            *(_QWORD *)(v29 + 32) = v34;
            memcpy(v24, v25, v34);
            *(_QWORD *)(v29 + 24) = v34;
          }
          *(_QWORD *)(v29 + 40) = 0;
          *(_OWORD *)(v29 + 48) = 0;
          if ( (_QWORD)v41 )
          {
            v35 = v41;
            v32 = (void *)qalloc_or_throw(v41);
            *(_QWORD *)(v29 + 40) = v32;
            v33 = v40;
            *(_QWORD *)(v29 + 56) = v35;
            memcpy(v32, v33, v35);
            *(_QWORD *)(v29 + 48) = v35;
          }
          *(_QWORD *)(v29 + 64) = 0;
          copy_tinfo_t(v29 + 64, &v42);
          v26 = v46;
          ++v23;
          *(__m128i *)(v29 + 72) = _mm_loadu_si128(&v43);
          v27 = _mm_loadu_si128(&v44);
          *(_QWORD *)(v29 + 120) = v26;
          *(__m128i *)(v29 + 88) = v27;
          *(__m128i *)(v29 + 104) = _mm_loadu_si128(&v45);
          *(_QWORD *)(v29 + 128) = v47;
          *(_BYTE *)(v29 + 136) = v48;
          *(_DWORD *)(v29 + 140) = v49;
        }
        while ( a2 != v23 );
      }
      a1[1] = a2;
      clear_tinfo_t(&v42);
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree(v38);
      }
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 144);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v11 + 140) = v36[8].m128i_i32[3] )
    {
      si128 = _mm_load_si128(v36);
      v11 = *a1 + 144 * v2;
      *(_QWORD *)(v11 + 16) = 0;
      *(__m128i *)v11 = si128;
      *(_OWORD *)(v11 + 24) = 0;
      v12 = v36[1].m128i_u64[1];
      if ( v36[1].m128i_i64[1] )
      {
        v13 = (void *)qalloc_or_throw(v36[1].m128i_i64[1]);
        *(_QWORD *)(v11 + 16) = v13;
        v14 = (const void *)v36[1].m128i_i64[0];
        *(_QWORD *)(v11 + 32) = v12;
        memcpy(v13, v14, v12);
        *(_QWORD *)(v11 + 24) = v12;
      }
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 48) = 0;
      v7 = v36[3].m128i_u64[0];
      if ( v36[3].m128i_i64[0] )
      {
        v30 = (void *)qalloc_or_throw(v36[3].m128i_i64[0]);
        *(_QWORD *)(v11 + 40) = v30;
        v31 = (const void *)v36[2].m128i_i64[1];
        *(_QWORD *)(v11 + 56) = v7;
        memcpy(v30, v31, v7);
        *(_QWORD *)(v11 + 48) = v7;
      }
      *(_QWORD *)(v11 + 64) = 0;
      copy_tinfo_t(v11 + 64, &v36[4]);
      v8 = v36[7].m128i_i64[1];
      ++v2;
      *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)&v36[4].m128i_u64[1]);
      v9 = _mm_loadu_si128((const __m128i *)&v36[5].m128i_u64[1]);
      *(_QWORD *)(v11 + 120) = v8;
      *(__m128i *)(v11 + 88) = v9;
      *(__m128i *)(v11 + 104) = _mm_loadu_si128((const __m128i *)&v36[6].m128i_u64[1]);
      *(_QWORD *)(v11 + 128) = v36[8].m128i_i64[0];
      *(_BYTE *)(v11 + 136) = v36[8].m128i_i8[8];
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v36[4]);
  if ( v36[2].m128i_i64[1] )
  {
    v36[3].m128i_i64[0] = 0;
    qfree(v36[2].m128i_i64[1]);
  }
  if ( v36[1].m128i_i64[0] )
  {
    v36[1].m128i_i64[1] = 0;
    qfree(v36[1].m128i_i64[0]);
  }
  return v50 - __readfsqword(0x28u);
}

