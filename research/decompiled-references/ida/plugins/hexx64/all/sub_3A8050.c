_BOOL8 __fastcall sub_3A8050(__int64 a1, __int64 *a2, __int64 *a3, __m128 a4, double a5, __m128i a6, double a7)
{
  bool v8; // zf
  const void *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 i; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __m128i v20; // xmm3
  _BOOL4 v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 j; // r12
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 k; // r12
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __m128i si128; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // r8
  __int64 v42; // rcx
  size_t v43; // r14
  __int64 v44; // rdi
  void *v45; // rax
  const void **v46; // rcx
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+10h] [rbp-58h]
  __int64 v50; // [rsp+18h] [rbp-50h]
  __int64 v51[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 32) == 0;
  v51[1] = __readfsqword(0x28u);
  if ( !v8 && !get_func() )
  {
    if ( a3 )
    {
      v33 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v38 = qvector_reserve((__int64)a3, v33, 21, 1);
        *a3 = v38;
        v33 = v38;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_424A40);
      a3[1] = 21;
      *(_DWORD *)(v33 + 16) = 1684370017;
      *(__m128i *)v33 = si128;
      *(_BYTE *)(*a3 + 20) = 0;
    }
    return 0;
  }
  v10 = *(const void **)(a1 + 16);
  sub_14CDC0(v51, (__int64)v10, (__int64 **)(a1 + 32), nullptr, 0, *(double *)a4.m128_u64, a5, a6, a7);
  v13 = v51[0];
  if ( !v51[0] )
  {
    if ( a3 )
    {
      v36 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x15 )
      {
        v47 = qvector_reserve((__int64)a3, v36, 22, 1);
        *a3 = v47;
        v13 = v51[0];
        v36 = v47;
      }
      a4 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424A50);
      a3[1] = 22;
      *(__m128 *)v36 = a4;
      *(_QWORD *)(v36 + 13) = 0x6572756C69616620LL;
      v37 = *a3;
      v21 = 0;
      *(_BYTE *)(v37 + 21) = 0;
      goto LABEL_13;
    }
    return 0;
  }
  v49 = 0;
  v14 = *(_QWORD *)(v51[0] + 136);
  if ( v14 )
  {
    v49 = qalloc_or_throw(32 * v14, (__int64)v10, v11, v12);
    v40 = v49;
    v41 = 0;
    do
    {
      v42 = *(_QWORD *)(v13 + 128) + 32 * v41;
      *(_OWORD *)(v40 + 8) = 0;
      *(_QWORD *)v40 = 0;
      v43 = *(_QWORD *)(v42 + 8);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v42 + 8);
        v50 = v41;
        v48.m128i_i64[0] = v42;
        v45 = (void *)qalloc_or_throw(v44, (__int64)v10, v39, v42);
        v46 = (const void **)v48.m128i_i64[0];
        *(_QWORD *)v40 = v45;
        *(_QWORD *)(v40 + 16) = v43;
        v10 = *v46;
        memcpy(v45, *v46, v43);
        *(_QWORD *)(v40 + 8) = v43;
        v41 = v50;
        v42 = v48.m128i_i64[0];
      }
      ++v41;
      v40 += 32;
      *(_BYTE *)(v40 - 8) = *(_BYTE *)(v42 + 24);
      *(_DWORD *)(v40 - 4) = *(_DWORD *)(v42 + 28);
    }
    while ( v14 != v41 );
  }
  v15 = *a2;
  v48 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v15 )
  {
    v16 = a2[1];
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = (__int64 *)(v15 + 32 * i);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19);
          v15 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v15);
  }
  v20 = _mm_load_si128(&v48);
  v13 = v51[0];
  *a2 = v49;
  *(__m128i *)(a2 + 1) = v20;
  v21 = *(_DWORD *)(v13 + 152) >= 0;
LABEL_13:
  if ( v13 )
  {
    v8 = (*(_DWORD *)(v13 + 104))-- == 1;
    if ( v8 )
    {
      sub_258970((__int64 *)v13);
      v22 = *(_QWORD *)(v13 + 184);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v13 + 192);
        if ( v23 )
        {
          for ( j = 0; j != v23; ++j )
          {
            v25 = (__int64 *)(v22 + 24 * j);
            v26 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v26);
              v22 = *(_QWORD *)(v13 + 184);
            }
          }
        }
        *(_QWORD *)(v13 + 192) = 0;
        qfree(v22);
      }
      v27 = *(_QWORD *)(v13 + 160);
      if ( v27 )
      {
        *(_QWORD *)(v13 + 168) = 0;
        qfree(v27);
      }
      v28 = *(_QWORD *)(v13 + 128);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v13 + 136);
        if ( v29 )
        {
          for ( k = 0; k != v29; ++k )
          {
            v31 = (__int64 *)(v28 + 32 * k);
            v32 = *v31;
            if ( *v31 )
            {
              v31[1] = 0;
              qfree(v32);
              v28 = *(_QWORD *)(v13 + 128);
            }
          }
        }
        *(_QWORD *)(v13 + 136) = 0;
        qfree(v28);
      }
      sub_255050(v13 + 16, *(double *)a4.m128_u64);
      j__qfree(v13);
    }
  }
  return v21;
}

