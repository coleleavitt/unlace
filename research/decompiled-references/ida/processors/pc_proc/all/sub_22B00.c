__int64 __fastcall sub_22B00(__int64 a1, __int64 a2)
{
  void *v2; // r13
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm0
  void *v5; // r13
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v8; // r14
  size_t v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 i; // r12
  _QWORD *v13; // rax
  __m128i v14; // xmm2
  __int64 result; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  size_t v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r15
  void *v24; // rax
  const void **v25; // rdx
  size_t v26; // r12
  size_t v27; // r12
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v30; // [rsp+20h] [rbp-48h]
  const void **v31; // [rsp+28h] [rbp-40h]

  v2 = nullptr;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v28 = v4;
    v27 = 32 * v3;
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)(a2 + 8), v27);
    v4 = _mm_load_si128(&v28);
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v28 = v4;
    qfree();
    v4 = _mm_load_si128(&v28);
  }
  *(_QWORD *)(a1 + 8) = v2;
  v5 = nullptr;
  *(__m128i *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 56);
  v7 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v26 = 8 * v6;
    v28 = v7;
    v5 = (void *)qalloc_or_throw();
    memcpy(v5, *(const void **)(a2 + 48), v26);
    v7 = _mm_load_si128(&v28);
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 56) = 0;
    v28 = v7;
    qfree();
    v7 = _mm_load_si128(&v28);
  }
  *(_QWORD *)(a1 + 48) = v5;
  v8 = 0;
  *(__m128i *)(a1 + 56) = v7;
  v9 = *(_QWORD *)(a2 + 80);
  v28 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    n = v9;
    v16 = 0;
    v17 = qalloc_or_throw();
    v18 = n;
    v19 = 0;
    v8 = v17;
    v20 = v17;
    do
    {
      v21 = *(_QWORD *)(a2 + 72);
      *(_OWORD *)(v20 + 8) = v19;
      *(_QWORD *)v20 = 0;
      v22 = v21 + 24 * v16;
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
      {
        v30 = v18;
        v31 = (const void **)v22;
        n = 8 * v23;
        v24 = (void *)qalloc_or_throw();
        v25 = v31;
        *(_QWORD *)(v20 + 16) = v23;
        *(_QWORD *)v20 = v24;
        memcpy(v24, *v25, n);
        *(_QWORD *)(v20 + 8) = v23;
        v18 = v30;
        v19 = 0;
      }
      ++v16;
      v20 += 24;
    }
    while ( v18 != v16 );
  }
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = (_QWORD *)(v10 + 24 * i);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = *(_QWORD *)(a1 + 72);
        }
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree();
  }
  v14 = _mm_load_si128(&v28);
  *(_QWORD *)(a1 + 72) = v8;
  *(__m128i *)(a1 + 80) = v14;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_BYTE *)(a1 + 177) = *(_BYTE *)(a2 + 177);
  *(_BYTE *)(a1 + 178) = *(_BYTE *)(a2 + 178);
  result = *(unsigned __int8 *)(a2 + 179);
  *(_BYTE *)(a1 + 179) = result;
  return result;
}

