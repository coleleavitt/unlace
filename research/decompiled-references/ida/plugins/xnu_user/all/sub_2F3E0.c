__int64 __fastcall sub_2F3E0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rax
  size_t v6; // r12
  int v7; // ebp
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  void *v12; // r12
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  __int16 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rbx
  const void **v27; // rcx
  size_t v28; // r8
  __int64 *v29; // rsi
  __m128i v30; // xmm1
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rbp
  _QWORD *v34; // rbx
  size_t v36; // r9
  __int64 v37; // rax
  const void **v38; // r11
  __int16 v39; // r10
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  const void **v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i v47; // [rsp+10h] [rbp-A8h] BYREF
  const void **v48; // [rsp+20h] [rbp-98h] BYREF
  __m128i v49; // [rsp+28h] [rbp-90h] BYREF
  size_t n; // [rsp+38h] [rbp-80h]
  const void **v51; // [rsp+40h] [rbp-78h]
  size_t v52; // [rsp+48h] [rbp-70h]
  int v53; // [rsp+50h] [rbp-68h]
  int v54; // [rsp+54h] [rbp-64h]
  __int64 *v55; // [rsp+58h] [rbp-60h]
  __int64 v56; // [rsp+60h] [rbp-58h]
  __m128i v57; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v55 = a1;
  v58 = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    a2 = a3;
    return sub_2BFA0(v55, a2);
  }
  v3 = a2;
  v4 = a3[1];
  if ( !v4 )
    return sub_2BFA0(v55, a2);
  v5 = (unsigned __int64 *)*a2;
  v6 = 0;
  v7 = 0;
  v56 = 0;
  v57 = 0;
  v8 = *v5;
  v53 = 0;
  while ( 1 )
  {
    v49.m128i_i64[1] = v53;
    if ( v53 < v4 )
      break;
    if ( v6 != -1 )
    {
      v11 = -1;
      goto LABEL_17;
    }
LABEL_14:
    v22 = v49.m128i_i64[1];
    if ( v49.m128i_i64[1] == v4 )
      goto LABEL_23;
LABEL_15:
    v9 = 80 * v22;
    v10 = 80 * v22 + *a3;
LABEL_5:
    v12 = nullptr;
    v48 = *(const void ***)(v10 + 8);
    v47.m128i_i64[0] = *(_QWORD *)(v10 + 24);
    if ( v47.m128i_i64[0] )
    {
      v47.m128i_i64[1] = v10;
      v12 = (void *)qalloc_or_throw();
      memcpy(v12, *(const void **)(v47.m128i_i64[1] + 16), v47.m128i_u64[0]);
      v10 = v47.m128i_i64[1];
    }
    v47.m128i_i64[1] = 0;
    v13 = *(_QWORD *)(v10 + 48);
    if ( v13 )
    {
      v49.m128i_i64[1] = v10;
      v49.m128i_i64[0] = v13;
      v47.m128i_i64[1] = qalloc_or_throw();
      memcpy((void *)v47.m128i_i64[1], *(const void **)(v49.m128i_i64[1] + 40), v49.m128i_u64[0]);
      v10 = v49.m128i_i64[1];
      v13 = v49.m128i_i64[0];
    }
    v14 = v57.m128i_i64[0];
    v15 = *(_QWORD *)(v10 + 64);
    v16 = *(_WORD *)(v10 + 72);
    v17 = v56;
    if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 1) )
    {
      LODWORD(n) = *(unsigned __int16 *)(v10 + 72);
      v49.m128i_i64[1] = v13;
      v49.m128i_i64[0] = v15;
      v56 = qvector_reserve();
      v17 = v56;
      v16 = n;
      v14 = v57.m128i_i64[0];
      v13 = v49.m128i_i64[1];
      v15 = v49.m128i_i64[0];
    }
    ++v53;
    v18 = v17 + 80 * v14;
    v19 = v47.m128i_i64[1];
    *(__m128 *)v18 = _mm_loadh_ps((const double *)&v48);
    v20 = _mm_loadl_epi64(&v47);
    *(_QWORD *)(v18 + 16) = v12;
    *(_QWORD *)(v18 + 40) = v19;
    *(__m128i *)(v18 + 24) = _mm_unpacklo_epi64(v20, v20);
    *(_QWORD *)(v18 + 64) = v15;
    *(_WORD *)(v18 + 72) = v16;
    *(__m128i *)(v18 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    v21 = *a3;
    v4 = a3[1];
    ++v57.m128i_i64[0];
    v6 = *(_QWORD *)(v21 + v9 + 8);
  }
  v9 = 80LL * v53;
  v10 = v9 + *a3;
  v11 = *(_QWORD *)v10;
  if ( v6 == *(_QWORD *)v10 )
    goto LABEL_5;
LABEL_17:
  v23 = v7;
  if ( v7 >= (unsigned __int64)v3[1] || v8 >= v11 )
    goto LABEL_14;
  v24 = *v3;
  v25 = 4LL * v7;
  do
  {
    v26 = 16 * (v23 + v25);
    v27 = (const void **)(v24 + v26);
    v28 = *(_QWORD *)(v24 + v26 + 8);
    if ( v6 < v28 )
    {
      v47.m128i_i64[1] = 0;
      v49.m128i_i64[0] = (__int64)*v27;
      v47.m128i_i64[0] = (__int64)v27[3];
      if ( v47.m128i_i64[0] )
      {
        v48 = (const void **)(v24 + v26);
        n = v28;
        v47.m128i_i64[1] = qalloc_or_throw();
        memcpy((void *)v47.m128i_i64[1], v48[2], v47.m128i_u64[0]);
        v28 = n;
        v27 = v48;
      }
      v48 = nullptr;
      v36 = (size_t)v27[6];
      if ( v36 )
      {
        v51 = v27;
        v52 = v28;
        n = v36;
        v48 = (const void **)qalloc_or_throw();
        memcpy(v48, v51[5], n);
        v28 = v52;
        v27 = v51;
        v36 = n;
      }
      v37 = v57.m128i_i64[0];
      v38 = (const void **)v27[8];
      v39 = *((_WORD *)v27 + 36);
      v40 = v56;
      if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 1) )
      {
        v54 = *((unsigned __int16 *)v27 + 36);
        v52 = v36;
        v51 = v38;
        n = v28;
        v56 = qvector_reserve();
        v40 = v56;
        v39 = v54;
        v37 = v57.m128i_i64[0];
        v36 = v52;
        v38 = v51;
        v28 = n;
      }
      v41 = v47.m128i_i64[1];
      v42 = v40 + 80 * v37;
      v43 = v48;
      *(__m128i *)v42 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v49), (__m128i)v28);
      v44 = _mm_loadl_epi64(&v47);
      *(_QWORD *)(v42 + 16) = v41;
      *(_QWORD *)(v42 + 40) = v43;
      *(__m128i *)(v42 + 24) = _mm_unpacklo_epi64(v44, v44);
      *(_QWORD *)(v42 + 64) = v38;
      *(_WORD *)(v42 + 72) = v39;
      *(__m128i *)(v42 + 48) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
      v45 = ++v57.m128i_i64[0];
      if ( v6 >= v8 )
        *(_QWORD *)(v56 + 80 * v45 - 80) = v6;
      v24 = *v3;
      v6 = *(_QWORD *)(*v3 + v26 + 8);
      if ( v11 < v6 )
      {
        v8 = v11;
        *(_QWORD *)(v56 + 80 * v57.m128i_i64[0] - 72) = v11;
        v4 = a3[1];
        goto LABEL_14;
      }
    }
    v23 = ++v7;
    if ( v7 >= (unsigned __int64)v3[1] )
      break;
    v25 = 4LL * v7;
    v8 = *(_QWORD *)(v24 + 80LL * v7);
  }
  while ( v8 < v11 );
  v22 = v49.m128i_i64[1];
  if ( v49.m128i_i64[1] != a3[1] )
    goto LABEL_15;
LABEL_23:
  v29 = v55;
  v30 = _mm_loadu_si128(&v57);
  v31 = *v55;
  v32 = _mm_loadu_si128((const __m128i *)(v55 + 1));
  *v55 = v56;
  *(__m128i *)(v29 + 1) = v30;
  v56 = v31;
  v57 = v32;
  if ( v31 )
  {
    if ( v32.m128i_i64[0] )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v31 + 80 * v33);
        if ( v34[5] )
        {
          v34[6] = 0;
          qfree();
        }
        if ( v34[2] )
        {
          v34[3] = 0;
          qfree();
        }
        ++v33;
        v31 = v56;
      }
      while ( v33 != v32.m128i_i64[0] );
    }
    v57.m128i_i64[0] = 0;
    qfree();
  }
  return v58 - __readfsqword(0x28u);
}

