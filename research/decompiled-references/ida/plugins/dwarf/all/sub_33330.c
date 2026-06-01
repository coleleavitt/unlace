unsigned __int64 __fastcall sub_33330(_QWORD *a1, unsigned __int64 a2)
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
  unsigned __int64 v22; // rbp
  void *v23; // rax
  void *v24; // rsi
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rbx
  void *v29; // rax
  const void *v30; // rsi
  void *v31; // rax
  void *v32; // rsi
  size_t v33; // [rsp+8h] [rbp-170h]
  size_t v34; // [rsp+8h] [rbp-170h]
  __m128i v35[9]; // [rsp+10h] [rbp-168h] BYREF
  __m128i v36; // [rsp+A0h] [rbp-D8h] BYREF
  void *v37; // [rsp+B0h] [rbp-C8h]
  __int128 v38; // [rsp+B8h] [rbp-C0h]
  void *v39; // [rsp+C8h] [rbp-B0h]
  __int128 v40; // [rsp+D0h] [rbp-A8h]
  __int64 v41; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v42; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v43; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v44; // [rsp+108h] [rbp-70h] BYREF
  __int64 v45; // [rsp+118h] [rbp-60h]
  __int64 v46; // [rsp+120h] [rbp-58h]
  __int8 v47; // [rsp+128h] [rbp-50h]
  unsigned __int64 v48; // [rsp+138h] [rbp-40h]

  v2 = a1[1];
  v48 = __readfsqword(0x28u);
  if ( v2 == a2 )
    return v48 - __readfsqword(0x28u);
  memset(v35, 0, sizeof(v35));
  v35[7].m128i_i64[0] = 1;
  v35[7].m128i_i32[2] = -1;
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
    if ( (unsigned __int64)v35 >= *a1 && (unsigned __int64)v35 < v5 + 144 * v6 )
    {
      v37 = nullptr;
      v39 = nullptr;
      v41 = 0;
      v36 = 0;
      v38 = 0;
      v40 = 0;
      copy_tinfo_t(&v41, &v35[4]);
      v42 = _mm_loadu_si128((const __m128i *)&v35[4].m128i_u64[1]);
      v20 = _mm_loadu_si128((const __m128i *)&v35[5].m128i_u64[1]);
      v45 = v35[7].m128i_i64[1];
      v43 = v20;
      v21 = _mm_loadu_si128((const __m128i *)&v35[6].m128i_u64[1]);
      v46 = v35[8].m128i_i64[0];
      v44 = v21;
      v47 = v35[8].m128i_i8[8];
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 144);
      v22 = a1[1];
      if ( v22 < a2 )
      {
        do
        {
          v27 = _mm_load_si128(&v36);
          v28 = *a1 + 144 * v22;
          *(_QWORD *)(v28 + 16) = 0;
          *(__m128i *)v28 = v27;
          *(_OWORD *)(v28 + 24) = 0;
          if ( (_QWORD)v38 )
          {
            v33 = v38;
            v23 = (void *)qalloc_or_throw(v38);
            *(_QWORD *)(v28 + 16) = v23;
            v24 = v37;
            *(_QWORD *)(v28 + 32) = v33;
            memcpy(v23, v24, v33);
            *(_QWORD *)(v28 + 24) = v33;
          }
          *(_QWORD *)(v28 + 40) = 0;
          *(_OWORD *)(v28 + 48) = 0;
          if ( (_QWORD)v40 )
          {
            v34 = v40;
            v31 = (void *)qalloc_or_throw(v40);
            *(_QWORD *)(v28 + 40) = v31;
            v32 = v39;
            *(_QWORD *)(v28 + 56) = v34;
            memcpy(v31, v32, v34);
            *(_QWORD *)(v28 + 48) = v34;
          }
          *(_QWORD *)(v28 + 64) = 0;
          copy_tinfo_t(v28 + 64, &v41);
          v25 = v45;
          ++v22;
          *(__m128i *)(v28 + 72) = _mm_loadu_si128(&v42);
          v26 = _mm_loadu_si128(&v43);
          *(_QWORD *)(v28 + 120) = v25;
          *(__m128i *)(v28 + 88) = v26;
          *(__m128i *)(v28 + 104) = _mm_loadu_si128(&v44);
          *(_QWORD *)(v28 + 128) = v46;
          *(_BYTE *)(v28 + 136) = v47;
        }
        while ( a2 != v22 );
      }
      a1[1] = a2;
      clear_tinfo_t(&v41);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37);
      }
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 144);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_BYTE *)(v11 + 136) = v35[8].m128i_i8[8] )
    {
      si128 = _mm_load_si128(v35);
      v11 = *a1 + 144 * v2;
      *(_QWORD *)(v11 + 16) = 0;
      *(__m128i *)v11 = si128;
      *(_OWORD *)(v11 + 24) = 0;
      v12 = v35[1].m128i_u64[1];
      if ( v35[1].m128i_i64[1] )
      {
        v13 = (void *)qalloc_or_throw(v35[1].m128i_i64[1]);
        *(_QWORD *)(v11 + 16) = v13;
        v14 = (const void *)v35[1].m128i_i64[0];
        *(_QWORD *)(v11 + 32) = v12;
        memcpy(v13, v14, v12);
        *(_QWORD *)(v11 + 24) = v12;
      }
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 48) = 0;
      v7 = v35[3].m128i_u64[0];
      if ( v35[3].m128i_i64[0] )
      {
        v29 = (void *)qalloc_or_throw(v35[3].m128i_i64[0]);
        *(_QWORD *)(v11 + 40) = v29;
        v30 = (const void *)v35[2].m128i_i64[1];
        *(_QWORD *)(v11 + 56) = v7;
        memcpy(v29, v30, v7);
        *(_QWORD *)(v11 + 48) = v7;
      }
      *(_QWORD *)(v11 + 64) = 0;
      copy_tinfo_t(v11 + 64, &v35[4]);
      v8 = v35[7].m128i_i64[1];
      ++v2;
      *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)&v35[4].m128i_u64[1]);
      v9 = _mm_loadu_si128((const __m128i *)&v35[5].m128i_u64[1]);
      *(_QWORD *)(v11 + 120) = v8;
      *(__m128i *)(v11 + 88) = v9;
      *(__m128i *)(v11 + 104) = _mm_loadu_si128((const __m128i *)&v35[6].m128i_u64[1]);
      *(_QWORD *)(v11 + 128) = v35[8].m128i_i64[0];
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v35[4]);
  if ( v35[2].m128i_i64[1] )
  {
    v35[3].m128i_i64[0] = 0;
    qfree(v35[2].m128i_i64[1]);
  }
  if ( v35[1].m128i_i64[0] )
  {
    v35[1].m128i_i64[1] = 0;
    qfree(v35[1].m128i_i64[0]);
  }
  return v48 - __readfsqword(0x28u);
}

