__int64 __fastcall sub_1BF90(const __m128i *a1, __int64 a2)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  size_t v6; // r13
  __int64 v7; // r12
  __int32 v8; // eax
  size_t v9; // r13
  __int8 v10; // al
  __int64 v11; // rdi
  __int32 v12; // eax
  __int32 v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rax
  size_t v18; // r14
  int v19; // eax
  size_t v20; // r14
  char v21; // al
  int v22; // eax
  __int64 v23; // rdi
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  const void *v30; // rsi

  v4 = operator new(0x1D8u);
  v5 = _mm_loadu_si128(a1 + 2);
  v6 = a1[3].m128i_u64[1];
  *(_QWORD *)(v4 + 48) = 0;
  v7 = v4;
  *(__m128i *)(v4 + 32) = v5;
  *(_OWORD *)(v4 + 56) = 0;
  if ( v6 )
  {
    v27 = (void *)qalloc_or_throw();
    *(_QWORD *)(v7 + 48) = v27;
    v28 = (const void *)a1[3].m128i_i64[0];
    *(_QWORD *)(v7 + 64) = v6;
    memcpy(v27, v28, v6);
    *(_QWORD *)(v7 + 56) = v6;
  }
  v8 = a1[4].m128i_i32[2];
  v9 = a1[5].m128i_u64[1];
  *(_QWORD *)(v7 + 80) = 0;
  *(_OWORD *)(v7 + 88) = 0;
  *(_DWORD *)(v7 + 72) = v8;
  if ( v9 )
  {
    v29 = (void *)qalloc_or_throw();
    *(_QWORD *)(v7 + 80) = v29;
    v30 = (const void *)a1[5].m128i_i64[0];
    *(_QWORD *)(v7 + 96) = v9;
    memcpy(v29, v30, v9);
    *(_QWORD *)(v7 + 88) = v9;
  }
  v10 = a1[29].m128i_i8[0];
  qmemcpy((void *)(v7 + 104), &a1[6].m128i_u64[1], 0x168u);
  v11 = a1[1].m128i_i64[1];
  *(_QWORD *)(v7 + 8) = a2;
  *(_BYTE *)(v7 + 464) = v10;
  v12 = a1[29].m128i_i32[1];
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 468) = v12;
  v13 = a1->m128i_i32[0];
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)v7 = v13;
  if ( v11 )
    *(_QWORD *)(v7 + 24) = sub_1BF90(v11, v7);
  v14 = a1[1].m128i_i64[0];
  if ( v14 )
  {
    v15 = v7;
    do
    {
      v16 = v15;
      v15 = operator new(0x1D8u);
      *(_QWORD *)(v15 + 32) = *(_QWORD *)(v14 + 32);
      v17 = *(_QWORD *)(v14 + 40);
      *(_QWORD *)(v15 + 48) = 0;
      *(_QWORD *)(v15 + 40) = v17;
      *(_OWORD *)(v15 + 56) = 0;
      v18 = *(_QWORD *)(v14 + 56);
      if ( v18 )
      {
        v25 = (void *)qalloc_or_throw();
        *(_QWORD *)(v15 + 48) = v25;
        *(_QWORD *)(v15 + 64) = v18;
        memcpy(v25, *(const void **)(v14 + 48), v18);
        *(_QWORD *)(v15 + 56) = v18;
      }
      v19 = *(_DWORD *)(v14 + 72);
      *(_QWORD *)(v15 + 80) = 0;
      *(_OWORD *)(v15 + 88) = 0;
      *(_DWORD *)(v15 + 72) = v19;
      v20 = *(_QWORD *)(v14 + 88);
      if ( v20 )
      {
        v26 = (void *)qalloc_or_throw();
        *(_QWORD *)(v15 + 80) = v26;
        *(_QWORD *)(v15 + 96) = v20;
        memcpy(v26, *(const void **)(v14 + 80), v20);
        *(_QWORD *)(v15 + 88) = v20;
      }
      v21 = *(_BYTE *)(v14 + 464);
      qmemcpy((void *)(v15 + 104), (const void *)(v14 + 104), 0x168u);
      *(_BYTE *)(v15 + 464) = v21;
      *(_DWORD *)(v15 + 468) = *(_DWORD *)(v14 + 468);
      v22 = *(_DWORD *)v14;
      *(_QWORD *)(v15 + 16) = 0;
      *(_DWORD *)v15 = v22;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v16 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v23 = *(_QWORD *)(v14 + 24);
      if ( v23 )
        *(_QWORD *)(v15 + 24) = sub_1BF90(v23, v15);
      v14 = *(_QWORD *)(v14 + 16);
    }
    while ( v14 );
  }
  return v7;
}

