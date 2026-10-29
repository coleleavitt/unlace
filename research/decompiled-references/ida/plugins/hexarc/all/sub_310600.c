__int64 __fastcall sub_310600(__int64 *a1, __int64 *a2, __m128i *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  __m128i v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rbp
  __int64 v18; // rdx
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 i; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  char *v25; // rdx
  size_t v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // xmm0_8
  __m128i v30; // xmm0
  char *v32; // r8
  __int64 v33; // rax

  v6 = (_QWORD *)sub_310580(*a2, *a1 + 16 * a1[1], a3, (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_30F550);
  v7 = v6;
  v8 = (_QWORD *)(*a1 + 16 * a1[1]);
  if ( v6 == v8 )
  {
    v14 = 0;
    goto LABEL_19;
  }
  v9 = _mm_loadu_si128(a3);
  v10 = *v6;
  v11 = v9.m128i_i64[0];
  v12 = _mm_add_epi64(v9, _mm_srli_si128(v9, 8)).m128i_u64[0];
  v13 = v12;
  if ( v12 )
  {
    v14 = 0;
    if ( v10 >= v12 )
      goto LABEL_19;
    if ( v10 >= v11 )
      goto LABEL_8;
  }
  else if ( v10 >= v11 )
  {
LABEL_14:
    v26 = 0;
LABEL_15:
    memmove(v7, v8, v26);
    v27 = a1[1] - (((char *)v8 - (char *)v7) >> 4);
    a1[1] = v27;
    if ( v7 != (_QWORD *)(*a1 + 16 * v27) )
    {
      v28 = _mm_loadu_si128(a3);
      v29 = _mm_add_epi64(v28, _mm_srli_si128(v28, 8)).m128i_u64[0];
      if ( *v7 < v29 )
      {
        v7[1] += *v7 - v29;
        v30 = _mm_loadu_si128(a3);
        *v7 = _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0];
      }
    }
    v14 = 1;
    goto LABEL_19;
  }
  v15 = v7[1];
  v7 += 2;
  *(v7 - 1) = v11 - v10;
  v16 = _mm_loadu_si128(a3);
  v17 = *a1;
  v18 = a1[1];
  v19 = _mm_add_epi64(v16, _mm_srli_si128(v16, 8)).m128i_u64[0];
  v13 = v19;
  if ( !v19 )
  {
    v8 = (_QWORD *)(16 * v18 + v17);
    goto LABEL_14;
  }
  v20 = v10 + v15;
  if ( v20 - 1 < v19 )
  {
    v8 = (_QWORD *)(16 * v18 + v17);
LABEL_8:
    v21 = v7;
    for ( i = ((char *)v8 - (char *)v7) >> 4; i > 0; i = i - 1 - v23 )
    {
      while ( 1 )
      {
        v23 = i >> 1;
        v24 = &v21[2 * (i >> 1)];
        if ( *v24 + v24[1] - 1LL < v13 )
          break;
        i >>= 1;
        if ( v23 <= 0 )
          goto LABEL_12;
      }
      v21 = v24 + 2;
    }
LABEL_12:
    v25 = (char *)v8;
    v8 = v21;
    v26 = v25 - (char *)v21;
    goto LABEL_15;
  }
  v32 = (char *)v7 - v17;
  if ( a1[2] < (unsigned __int64)(v18 + 1) )
  {
    v33 = qvector_reserve();
    v32 = (char *)v7 - v17;
    v18 = a1[1];
    *a1 = v33;
    v7 = (_QWORD *)((char *)v7 + v33 - v17);
  }
  memmove(v7 + 2, v7, 16 * v18 - (_QWORD)v32);
  *v7 = v19;
  v14 = 1;
  v7[1] = v20 - v19;
  ++a1[1];
LABEL_19:
  *a2 = (__int64)v7;
  return v14;
}

