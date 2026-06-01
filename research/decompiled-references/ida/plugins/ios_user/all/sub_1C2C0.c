__m128i *__fastcall sub_1C2C0(const __m128i *a1, __int64 a2)
{
  __m128i *v4; // rax
  size_t v5; // r13
  __m128i *v6; // r12
  __int64 v7; // rax
  size_t v8; // r13
  __int64 v9; // rax
  size_t v10; // r13
  __int32 v11; // eax
  __int64 v12; // rdi
  __int32 v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  size_t v18; // r13
  size_t v19; // r13
  __int64 v20; // rax
  size_t v21; // r13
  int v22; // eax
  __int64 v23; // rdi
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  const void *v29; // rsi
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi

  v4 = (__m128i *)operator new(0x90u);
  v5 = a1[4].m128i_u64[0];
  v6 = v4;
  v4[2] = _mm_loadu_si128(a1 + 2);
  v7 = a1[3].m128i_i64[0];
  v6[3].m128i_i64[1] = 0;
  v6[3].m128i_i64[0] = v7;
  v6[4] = 0;
  if ( v5 )
  {
    v28 = (void *)qalloc_or_throw();
    v6[3].m128i_i64[1] = (__int64)v28;
    v29 = (const void *)a1[3].m128i_i64[1];
    v6[4].m128i_i64[1] = v5;
    memcpy(v28, v29, v5);
    v6[4].m128i_i64[0] = v5;
  }
  v8 = a1[5].m128i_u64[1];
  v6[5].m128i_i64[0] = 0;
  *(__m128i *)((char *)&v6[5] + 8) = 0;
  if ( v8 )
  {
    v32 = (void *)qalloc_or_throw();
    v6[5].m128i_i64[0] = (__int64)v32;
    v33 = (const void *)a1[5].m128i_i64[0];
    v6[6].m128i_i64[0] = v8;
    memcpy(v32, v33, v8);
    v6[5].m128i_i64[1] = v8;
  }
  v9 = a1[6].m128i_i64[1];
  v10 = a1[7].m128i_u64[1];
  v6[7].m128i_i64[0] = 0;
  *(__m128i *)((char *)&v6[7] + 8) = 0;
  v6[6].m128i_i64[1] = v9;
  if ( v10 )
  {
    v30 = (void *)qalloc_or_throw();
    v6[7].m128i_i64[0] = (__int64)v30;
    v31 = (const void *)a1[7].m128i_i64[0];
    v6[8].m128i_i64[0] = v10;
    memcpy(v30, v31, v10);
    v6[7].m128i_i64[1] = v10;
  }
  v11 = a1[8].m128i_i32[2];
  v12 = a1[1].m128i_i64[1];
  v6[1].m128i_i64[0] = 0;
  v6[1].m128i_i64[1] = 0;
  v6[8].m128i_i32[2] = v11;
  v13 = a1->m128i_i32[0];
  v6->m128i_i64[1] = a2;
  v6->m128i_i32[0] = v13;
  if ( v12 )
    v6[1].m128i_i64[1] = sub_1C2C0(v12, v6);
  v14 = a1[1].m128i_i64[0];
  if ( v14 )
  {
    v15 = (__int64)v6;
    do
    {
      v16 = v15;
      v15 = operator new(0x90u);
      *(_QWORD *)(v15 + 32) = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v15 + 40) = *(_QWORD *)(v14 + 40);
      v17 = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 48) = v17;
      *(_OWORD *)(v15 + 64) = 0;
      v18 = *(_QWORD *)(v14 + 64);
      if ( v18 )
      {
        v26 = (void *)qalloc_or_throw();
        *(_QWORD *)(v15 + 56) = v26;
        *(_QWORD *)(v15 + 72) = v18;
        memcpy(v26, *(const void **)(v14 + 56), v18);
        *(_QWORD *)(v15 + 64) = v18;
      }
      *(_QWORD *)(v15 + 80) = 0;
      *(_OWORD *)(v15 + 88) = 0;
      v19 = *(_QWORD *)(v14 + 88);
      if ( v19 )
      {
        v27 = (void *)qalloc_or_throw();
        *(_QWORD *)(v15 + 80) = v27;
        *(_QWORD *)(v15 + 96) = v19;
        memcpy(v27, *(const void **)(v14 + 80), v19);
        *(_QWORD *)(v15 + 88) = v19;
      }
      v20 = *(_QWORD *)(v14 + 104);
      *(_QWORD *)(v15 + 112) = 0;
      *(_OWORD *)(v15 + 120) = 0;
      *(_QWORD *)(v15 + 104) = v20;
      v21 = *(_QWORD *)(v14 + 120);
      if ( v21 )
      {
        v25 = (void *)qalloc_or_throw();
        *(_QWORD *)(v15 + 112) = v25;
        *(_QWORD *)(v15 + 128) = v21;
        memcpy(v25, *(const void **)(v14 + 112), v21);
        *(_QWORD *)(v15 + 120) = v21;
      }
      *(_DWORD *)(v15 + 136) = *(_DWORD *)(v14 + 136);
      v22 = *(_DWORD *)v14;
      *(_QWORD *)(v15 + 16) = 0;
      *(_DWORD *)v15 = v22;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v16 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v23 = *(_QWORD *)(v14 + 24);
      if ( v23 )
        *(_QWORD *)(v15 + 24) = sub_1C2C0(v23, v15);
      v14 = *(_QWORD *)(v14 + 16);
    }
    while ( v14 );
  }
  return v6;
}

