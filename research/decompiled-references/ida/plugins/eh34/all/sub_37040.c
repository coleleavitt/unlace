void __fastcall sub_37040(unsigned __int64 *a1, size_t a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r14
  size_t v6; // rbx
  size_t v7; // r8
  __int64 v9; // r13
  __int64 v10; // r12
  size_t v11; // rbx
  void *v12; // rax
  size_t v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int128 v16; // xmm0
  size_t v17; // rbx
  __int64 v18; // r13
  void *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rdi
  bool v28; // cf
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 n; // [rsp+0h] [rbp-58h]
  size_t na; // [rsp+0h] [rbp-58h]
  size_t nb; // [rsp+0h] [rbp-58h]
  size_t nc; // [rsp+0h] [rbp-58h]
  void *src; // [rsp+8h] [rbp-50h]
  void *srca; // [rsp+8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+10h] [rbp-48h]
  __int64 v44; // [rsp+10h] [rbp-48h]
  unsigned __int64 v45; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  if ( a2 < v5 )
  {
    v13 = a2;
    do
    {
      v14 = (__int64 *)(*a1 + 32 * v13);
      v15 = *v14;
      if ( *v14 )
      {
        v14[1] = 0;
        qfree(v15);
      }
      ++v13;
    }
    while ( v5 != v13 );
    goto LABEL_16;
  }
  if ( v5 >= a2 )
    return;
  v6 = *a1;
  v7 = a1[2];
  if ( a3 < *a1 || a3 >= v6 + 32 * v7 )
  {
    if ( v7 >= a2 )
      goto LABEL_19;
    v43 = a1[2];
    v20 = qvector_reserve(a1, 0, a2, 32);
    v21 = a1[1];
    v22 = *a1;
    na = v20;
    srca = (void *)a1[2];
    a1[2] = v43;
    v23 = v21 - 1;
    if ( v23 >= 0 )
    {
      v24 = v20;
      do
      {
        v25 = *(_QWORD *)v22;
        v26 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        *(_QWORD *)v22 = 0;
        *(_QWORD *)(v22 + 16) = 0;
        *(_QWORD *)v24 = v25;
        *(__m128i *)(v24 + 8) = v26;
        *(_QWORD *)(v24 + 24) = *(_QWORD *)(v22 + 24);
        v27 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)(v22 + 8) = 0;
          qfree(v27);
        }
        v22 += 32LL;
        v24 += 32;
        v28 = v23-- == 0;
      }
      while ( !v28 );
      v22 = *a1;
    }
    qfree(v22);
    v6 = na;
    v5 = a1[1];
    *a1 = na;
    a1[2] = (unsigned __int64)srca;
    if ( v5 < a2 )
    {
LABEL_19:
      v16 = 0;
      while ( 1 )
      {
        v17 = 32 * v5 + v6;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = v16;
        v18 = *(_QWORD *)(a3 + 8);
        if ( v18 )
        {
          v19 = (void *)qalloc_or_throw(8 * v18);
          *(_QWORD *)(v17 + 16) = v18;
          *(_QWORD *)v17 = v19;
          memcpy(v19, *(const void **)a3, 8 * v18);
          *(_QWORD *)(v17 + 8) = v18;
          v16 = 0;
        }
        ++v5;
        *(_QWORD *)(v17 + 24) = *(_QWORD *)(a3 + 24);
        if ( v5 >= a2 )
          break;
        v6 = *a1;
      }
    }
LABEL_16:
    a1[1] = a2;
    return;
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
  {
    src = (void *)qalloc_or_throw(8 * v9);
    memcpy(src, *(const void **)a3, 8 * v9);
    v7 = a1[2];
    v10 = *(_QWORD *)(a3 + 24);
    if ( v7 >= a2 )
      goto LABEL_42;
  }
  else
  {
    src = nullptr;
    v10 = *(_QWORD *)(a3 + 24);
    if ( v7 >= a2 )
      goto LABEL_7;
  }
  nb = v7;
  v29 = qvector_reserve(a1, 0, a2, 32);
  v44 = v29;
  v30 = *a1;
  v45 = a1[2];
  v31 = a1[1];
  a1[2] = nb;
  v32 = v31 - 1;
  if ( v32 >= 0 )
  {
    v33 = v29;
    do
    {
      v34 = *(_QWORD *)v30;
      v35 = _mm_loadu_si128((const __m128i *)(v30 + 8));
      *(_QWORD *)v30 = 0;
      *(_QWORD *)(v30 + 16) = 0;
      *(_QWORD *)v33 = v34;
      *(__m128i *)(v33 + 8) = v35;
      *(_QWORD *)(v33 + 24) = *(_QWORD *)(v30 + 24);
      v36 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 )
      {
        *(_QWORD *)(v30 + 8) = 0;
        nc = v32;
        qfree(v36);
        v32 = nc;
      }
      v30 += 32LL;
      v33 += 32;
      v28 = v32-- == 0;
    }
    while ( !v28 );
    v30 = *a1;
  }
  qfree(v30);
  *a1 = v44;
  a1[2] = v45;
LABEL_42:
  v5 = a1[1];
  if ( v5 < a2 )
  {
    v6 = *a1;
LABEL_7:
    n = 8 * v9;
    while ( 1 )
    {
      v11 = 32 * v5 + v6;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      if ( v9 )
      {
        v12 = (void *)qalloc_or_throw(n);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v11 + 16) = v9;
        memcpy(v12, src, n);
        *(_QWORD *)(v11 + 8) = v9;
      }
      ++v5;
      *(_QWORD *)(v11 + 24) = v10;
      if ( a2 == v5 )
        break;
      v6 = *a1;
    }
  }
  a1[1] = a2;
  if ( src )
    qfree(src);
}

