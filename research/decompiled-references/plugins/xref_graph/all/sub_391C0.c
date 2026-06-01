void __fastcall sub_391C0(_QWORD *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  signed __int64 v16; // r12
  signed __int64 v17; // r15
  int *v18; // rcx
  char *v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  char *v22; // rdi
  void *v23; // rdx
  __int64 v24; // rax
  char *v25; // rdi
  char *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // r13
  __int64 v32; // r15
  double v33; // xmm0_8
  QT::QGraphicsItem *v34; // r14
  __int64 v35; // rbx
  float v36; // xmm0_4
  __int64 v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // r14
  __m128i v40; // xmm4
  __m128i v41; // xmm3
  __m128i v42; // xmm2
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // [rsp+8h] [rbp-E0h]
  double v46; // [rsp+8h] [rbp-E0h]
  double v47; // [rsp+10h] [rbp-D8h]
  int *v48; // [rsp+10h] [rbp-D8h]
  int *v50; // [rsp+28h] [rbp-C0h]
  void *src[2]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-A8h]
  __m128i v53; // [rsp+50h] [rbp-98h] BYREF
  __m128i v54; // [rsp+60h] [rbp-88h] BYREF
  __m128i v55; // [rsp+70h] [rbp-78h] BYREF
  __m128i v56; // [rsp+80h] [rbp-68h] BYREF
  __m128i v57; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  QT::QGraphicsScene::sceneRect((QT::QGraphicsScene *)src);
  sub_39DC0(a1, src);
  a1[3] = 0;
  *((_OWORD *)a1 + 2) = 0;
  v9 = *(_QWORD *)(a2 + 64);
  v10.m128i_i64[0] = 0;
  v52 = 0;
  *(_OWORD *)src = 0;
  if ( !v9 )
    goto LABEL_17;
  sub_21300(src, *(_QWORD *)(v9 + 48), v5, v6, v7, v8);
  v13 = v9 + 16;
  v14 = *(_QWORD *)(v9 + 32);
  v45 = v13;
  while ( v45 != v14 )
  {
    v15 = *(_QWORD *)(v14 + 40);
    v16 = v52;
    if ( !src[0] )
      goto LABEL_6;
    if ( *(int *)src[0] <= 1 )
    {
      v22 = (char *)src[1];
      v23 = (void *)(((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *((_QWORD *)src[0] + 1) - (((char *)src[1] - (char *)v23) >> 3) != v52 )
      {
        *((_QWORD *)src[1] + v52) = v15;
        v12 = v16 + 1;
        goto LABEL_24;
      }
      if ( !v52 && v23 != src[1] )
      {
        *((_QWORD *)src[1] - 1) = v15;
        v12 = 1;
        src[1] = v22 - 8;
LABEL_24:
        v52 = v12;
        v18 = (int *)src[0];
LABEL_25:
        if ( *v18 <= 1 )
          goto LABEL_11;
        goto LABEL_10;
      }
    }
    if ( *(int *)src[0] > 1 )
      goto LABEL_6;
    v18 = (int *)src[0];
    v17 = v52;
    v24 = (__int64)((__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
    if ( (__int64)(*((_QWORD *)src[0] + 1) - v52 - v24) > 0 )
    {
      v39 = (char *)src[1] + 8 * v52++;
      *v39 = v15;
      if ( *v18 <= 1 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( (__int64)((__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0
      && (__int64)(3 * v52) < 2LL * *((_QWORD *)src[0] + 1) )
    {
      v25 = (char *)src[1] - 8 * v24;
      if ( v52 && src[1] != v25 && src[1] && v25 )
      {
        v50 = (int *)src[0];
        v26 = (char *)memmove(v25, src[1], 8 * v52);
        v18 = v50;
        v25 = v26;
      }
      src[1] = v25;
      v19 = &v25[8 * v16];
    }
    else
    {
LABEL_6:
      sub_22070((__int64)src, 0, 1, 0, v11, v12);
      v17 = v52;
      v18 = (int *)src[0];
      v19 = (char *)src[1] + 8 * v16;
    }
    if ( v16 < v17 )
    {
      v48 = v18;
      memmove(v19 + 8, v19, 8 * (v17 - v16));
      v18 = v48;
    }
    v52 = v17 + 1;
    *(_QWORD *)v19 = v15;
    if ( v18 )
      goto LABEL_25;
LABEL_10:
    sub_22070((__int64)src, 0, 0, 0, v11, v12);
LABEL_11:
    v14 = std::_Rb_tree_increment(v14);
  }
  v20 = v52;
  v21 = a1[4];
  if ( v52 == v21 )
  {
LABEL_15:
    if ( a1[2] >= v20 )
    {
      v47 = *(double *)(a2 + 184);
      v46 = *(double *)(a2 + 192);
      if ( !v20 )
        goto LABEL_17;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v10.m128i_i64[0] = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( v52 < v21 )
    goto LABEL_14;
  v27 = a1[3];
  v28 = a1[5];
  if ( (unsigned __int64)&v53 >= v27 && (unsigned __int64)&v53 < v27 + 80 * v28 )
  {
    if ( v28 < v52 )
    {
      a1[3] = qvector_reserve(a1 + 3, v27, v52, 80);
      v21 = a1[4];
    }
    if ( v21 < v20 )
    {
      v10.m128i_i64[0] = 0;
      a4.m128_u64[0] = 0;
      v29 = 80 * v21;
      do
      {
        ++v21;
        v30 = v29 + a1[3];
        v29 += 80;
        *(_QWORD *)v30 = 0;
        *(_QWORD *)(v30 + 24) = 0;
        *(_QWORD *)(v30 + 48) = 0;
        *(_QWORD *)(v30 + 72) = 0;
        *(_OWORD *)(v30 + 8) = 0;
        *(_OWORD *)(v30 + 32) = 0;
        *(_OWORD *)(v30 + 56) = 0;
      }
      while ( v20 != v21 );
      a1[4] = v20;
      if ( a1[2] >= v20 )
        goto LABEL_45;
      goto LABEL_44;
    }
    goto LABEL_14;
  }
  if ( v28 < v52 )
  {
    a1[3] = qvector_reserve(a1 + 3, v27, v52, 80);
    v21 = a1[4];
  }
  if ( v21 >= v20 )
  {
LABEL_14:
    a1[4] = v20;
    goto LABEL_15;
  }
  v40 = _mm_load_si128(&v53);
  v41 = _mm_load_si128(&v54);
  v42 = _mm_load_si128(&v55);
  v43 = 80 * v21;
  a4 = (__m128)_mm_load_si128(&v56);
  v10 = _mm_load_si128(&v57);
  do
  {
    v44 = a1[3];
    ++v21;
    *(__m128i *)(v44 + v43) = v40;
    *(__m128i *)(v44 + v43 + 16) = v41;
    *(__m128i *)(v44 + v43 + 32) = v42;
    *(__m128 *)(v44 + v43 + 48) = a4;
    *(__m128i *)(v44 + v43 + 64) = v10;
    v43 += 80;
  }
  while ( v20 != v21 );
  a1[4] = v20;
  if ( a1[2] < v20 )
  {
LABEL_44:
    *a1 = qvector_reserve(a1, *a1, v20, 96);
LABEL_45:
    v47 = *(double *)(a2 + 184);
    v46 = *(double *)(a2 + 192);
    goto LABEL_46;
  }
  v47 = *(double *)(a2 + 184);
  v46 = *(double *)(a2 + 192);
LABEL_46:
  v31 = src[1];
  v32 = 0;
  do
  {
    v34 = (QT::QGraphicsItem *)v31[v32];
    v35 = a1[3] + 80 * v32;
    *(_QWORD *)v35 = v34;
    sub_28850(v34);
    *(_QWORD *)(v35 + 8) = v10.m128i_i64[0];
    *(_QWORD *)(v35 + 16) = a4.m128_u64[0];
    a4 = _mm_cvtpd_ps(*(__m128d *)(v35 + 8));
    _mm_storel_ps((double *)(v35 + 24), a4);
    v36 = a4.m128_f32[0];
    a4.m128_u64[0] = _mm_shuffle_ps(a4, a4, 229).m128_u64[0];
    *(double *)(v35 + 32) = hypotf(v36, a4.m128_f32[0]);
    *(_QWORD *)(v35 + 56) = *((_QWORD *)v34 + 15);
    v37 = *((_QWORD *)v34 + 13);
    if ( v37 >= 0 )
      v33 = (double)(int)v37;
    else
      v33 = (double)(int)(*((_DWORD *)v34 + 26) & 1 | (*((_QWORD *)v34 + 13) >> 1))
          + (double)(int)(*((_DWORD *)v34 + 26) & 1 | (*((_QWORD *)v34 + 13) >> 1));
    ++v32;
    *(double *)v10.m128i_i64 = v33 * v46 + v47;
    *(_QWORD *)(v35 + 72) = v10.m128i_i64[0];
  }
  while ( v32 != v20 );
  v38 = 0;
  do
    sub_3A5C0(a1, a1, v38++);
  while ( v38 != v20 );
LABEL_17:
  if ( src[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
      free(src[0]);
  }
}
