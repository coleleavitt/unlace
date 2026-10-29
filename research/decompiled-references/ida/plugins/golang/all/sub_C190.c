unsigned __int64 __fastcall sub_C190(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rdx
  size_t v5; // r14
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i si128; // xmm0
  __int64 v9; // rbx
  size_t v10; // r14
  void *v11; // rax
  const void *v12; // rsi
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  unsigned __int64 v18; // rbp
  void *v19; // rax
  void *v20; // rsi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rbx
  void *v25; // rax
  const void *v26; // rsi
  void *v27; // rax
  void *v28; // rsi
  size_t v29; // [rsp+8h] [rbp-170h]
  size_t v30; // [rsp+8h] [rbp-170h]
  __m128i v31[9]; // [rsp+10h] [rbp-168h] BYREF
  __m128i v32; // [rsp+A0h] [rbp-D8h] BYREF
  void *v33; // [rsp+B0h] [rbp-C8h]
  __int128 v34; // [rsp+B8h] [rbp-C0h]
  void *v35; // [rsp+C8h] [rbp-B0h]
  __int128 v36; // [rsp+D0h] [rbp-A8h]
  __int64 v37; // [rsp+E0h] [rbp-98h]
  __m128i v38; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v39; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v40; // [rsp+108h] [rbp-70h] BYREF
  __int64 v41; // [rsp+118h] [rbp-60h]
  __int64 v42; // [rsp+120h] [rbp-58h]
  __int8 v43; // [rsp+128h] [rbp-50h]
  unsigned __int64 v44; // [rsp+138h] [rbp-40h]

  v2 = a1[1];
  v44 = __readfsqword(0x28u);
  if ( v2 == a2 )
    return v44 - __readfsqword(0x28u);
  memset(v31, 0, sizeof(v31));
  v31[7].m128i_i64[0] = 1;
  v31[7].m128i_i32[2] = -1;
  if ( a2 < v2 )
  {
    v13 = a2;
    do
    {
      v14 = (_QWORD *)(*a1 + 144 * v13);
      clear_tinfo_t();
      if ( v14[5] )
      {
        v14[6] = 0;
        qfree();
      }
      if ( v14[2] )
      {
        v14[3] = 0;
        qfree();
      }
      ++v13;
    }
    while ( v2 != v13 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)v31 >= *a1 && (unsigned __int64)v31 < *a1 + 144 * v4 )
    {
      v33 = nullptr;
      v35 = nullptr;
      v37 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      copy_tinfo_t();
      v38 = _mm_loadu_si128((const __m128i *)&v31[4].m128i_u64[1]);
      v16 = _mm_loadu_si128((const __m128i *)&v31[5].m128i_u64[1]);
      v41 = v31[7].m128i_i64[1];
      v39 = v16;
      v17 = _mm_loadu_si128((const __m128i *)&v31[6].m128i_u64[1]);
      v42 = v31[8].m128i_i64[0];
      v40 = v17;
      v43 = v31[8].m128i_i8[8];
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v18 = a1[1];
      if ( v18 < a2 )
      {
        do
        {
          v23 = _mm_load_si128(&v32);
          v24 = *a1 + 144 * v18;
          *(_QWORD *)(v24 + 16) = 0;
          *(__m128i *)v24 = v23;
          *(_OWORD *)(v24 + 24) = 0;
          if ( (_QWORD)v34 )
          {
            v29 = v34;
            v19 = (void *)qalloc_or_throw();
            *(_QWORD *)(v24 + 16) = v19;
            v20 = v33;
            *(_QWORD *)(v24 + 32) = v29;
            memcpy(v19, v20, v29);
            *(_QWORD *)(v24 + 24) = v29;
          }
          *(_QWORD *)(v24 + 40) = 0;
          *(_OWORD *)(v24 + 48) = 0;
          if ( (_QWORD)v36 )
          {
            v30 = v36;
            v27 = (void *)qalloc_or_throw();
            *(_QWORD *)(v24 + 40) = v27;
            v28 = v35;
            *(_QWORD *)(v24 + 56) = v30;
            memcpy(v27, v28, v30);
            *(_QWORD *)(v24 + 48) = v30;
          }
          *(_QWORD *)(v24 + 64) = 0;
          copy_tinfo_t();
          v21 = v41;
          ++v18;
          *(__m128i *)(v24 + 72) = _mm_loadu_si128(&v38);
          v22 = _mm_loadu_si128(&v39);
          *(_QWORD *)(v24 + 120) = v21;
          *(__m128i *)(v24 + 88) = v22;
          *(__m128i *)(v24 + 104) = _mm_loadu_si128(&v40);
          *(_QWORD *)(v24 + 128) = v42;
          *(_BYTE *)(v24 + 136) = v43;
        }
        while ( a2 != v18 );
      }
      a1[1] = a2;
      clear_tinfo_t();
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      goto LABEL_20;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_BYTE *)(v9 + 136) = v31[8].m128i_i8[8] )
    {
      si128 = _mm_load_si128(v31);
      v9 = *a1 + 144 * v2;
      *(_QWORD *)(v9 + 16) = 0;
      *(__m128i *)v9 = si128;
      *(_OWORD *)(v9 + 24) = 0;
      v10 = v31[1].m128i_u64[1];
      if ( v31[1].m128i_i64[1] )
      {
        v11 = (void *)qalloc_or_throw();
        *(_QWORD *)(v9 + 16) = v11;
        v12 = (const void *)v31[1].m128i_i64[0];
        *(_QWORD *)(v9 + 32) = v10;
        memcpy(v11, v12, v10);
        *(_QWORD *)(v9 + 24) = v10;
      }
      *(_QWORD *)(v9 + 40) = 0;
      *(_OWORD *)(v9 + 48) = 0;
      v5 = v31[3].m128i_u64[0];
      if ( v31[3].m128i_i64[0] )
      {
        v25 = (void *)qalloc_or_throw();
        *(_QWORD *)(v9 + 40) = v25;
        v26 = (const void *)v31[2].m128i_i64[1];
        *(_QWORD *)(v9 + 56) = v5;
        memcpy(v25, v26, v5);
        *(_QWORD *)(v9 + 48) = v5;
      }
      *(_QWORD *)(v9 + 64) = 0;
      copy_tinfo_t();
      v6 = v31[7].m128i_i64[1];
      ++v2;
      *(__m128i *)(v9 + 72) = _mm_loadu_si128((const __m128i *)&v31[4].m128i_u64[1]);
      v7 = _mm_loadu_si128((const __m128i *)&v31[5].m128i_u64[1]);
      *(_QWORD *)(v9 + 120) = v6;
      *(__m128i *)(v9 + 88) = v7;
      *(__m128i *)(v9 + 104) = _mm_loadu_si128((const __m128i *)&v31[6].m128i_u64[1]);
      *(_QWORD *)(v9 + 128) = v31[8].m128i_i64[0];
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t();
  if ( v31[2].m128i_i64[1] )
  {
    v31[3].m128i_i64[0] = 0;
    qfree();
  }
  if ( v31[1].m128i_i64[0] )
  {
    v31[1].m128i_i64[1] = 0;
    qfree();
  }
  return v44 - __readfsqword(0x28u);
}
