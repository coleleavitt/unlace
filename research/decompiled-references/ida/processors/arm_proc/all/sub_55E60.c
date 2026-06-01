__int64 *__fastcall sub_55E60(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r12
  size_t v5; // r15
  unsigned __int64 v6; // r12
  int v7; // r12d
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // r14
  size_t v17; // r8
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rsi
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  __m128i si128; // xmm0
  __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // rsi
  unsigned int i; // r12d
  int v33; // eax
  __int64 v34; // r12
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // [rsp+0h] [rbp-60h]
  __int64 v45; // [rsp+0h] [rbp-60h]
  __int64 v46; // [rsp+0h] [rbp-60h]
  __int64 v47; // [rsp+0h] [rbp-60h]
  __m128i *src; // [rsp+8h] [rbp-58h]
  _BYTE *srca; // [rsp+8h] [rbp-58h]
  char *srcb; // [rsp+8h] [rbp-58h]
  char *srcc; // [rsp+8h] [rbp-58h]

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_89630);
  strcpy(&src->m128i_i8[15], "re: ");
  v3 = 20;
  v19 = a1[1];
  v20 = 19;
  if ( v19 )
  {
    v20 = --v19 + 19;
    v3 = v19 + 20;
  }
  v21 = *a1;
  if ( a1[2] < v3 )
  {
    v46 = v20;
    v41 = qvector_reserve();
    *a1 = v41;
    v20 = v46;
    v21 = v41;
  }
  a1[1] = v3;
  *(_BYTE *)(v21 + v20) = 0;
  memcpy((void *)(v19 + *a1), src, 0x13u);
  if ( src )
    qfree();
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v4 != 1 )
    {
      v16 = a1[1];
      v17 = v4 - 1;
      if ( v16 )
      {
        --v16;
        v17 = v5 + v16;
        v4 += v16;
      }
      v18 = *a1;
      if ( a1[2] < v4 )
      {
        v44 = v17;
        v39 = qvector_reserve();
        *a1 = v39;
        v17 = v44;
        v18 = v39;
      }
      a1[1] = v4;
      *(_BYTE *)(v18 + v17) = 0;
      memcpy((void *)(v16 + *a1), *(const void **)(a2 + 48), v5);
    }
  }
  srca = (_BYTE *)qvector_reserve();
  *srca = 10;
  srca[1] = 0;
  v6 = 2;
  v13 = a1[1];
  v14 = 1;
  if ( v13 )
  {
    v14 = v13--;
    v6 = v13 + 2;
  }
  v15 = *a1;
  if ( a1[2] < v6 )
  {
    v45 = v14;
    v40 = qvector_reserve();
    *a1 = v40;
    v14 = v45;
    v15 = v40;
  }
  a1[1] = v6;
  *(_BYTE *)(v15 + v14) = 0;
  memcpy((void *)(v13 + *a1), srca, 1u);
  if ( srca )
    qfree();
  sub_55D90(a1);
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 < 0 )
  {
    sub_55D90(a1);
  }
  else
  {
    if ( (unsigned __int64)v7 > 2 )
    {
      sub_55D90(a1);
    }
    else
    {
      sub_55D90(a1);
      if ( v7 != 2 )
        goto LABEL_12;
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      srcb = (char *)qvector_reserve();
      *(__m128i *)srcb = _mm_load_si128((const __m128i *)&xmmword_89640);
      *(__m128i *)(srcb + 9) = _mm_load_si128((const __m128i *)&xmmword_89650);
      srcb[25] = 0;
      v9 = 26;
      v10 = a1[1];
      v11 = 25;
      if ( v10 )
      {
        v11 = --v10 + 25;
        v9 = v10 + 26;
      }
      v12 = *a1;
      if ( a1[2] < v9 )
      {
        v47 = v11;
        v43 = qvector_reserve();
        *a1 = v43;
        v11 = v47;
        v12 = v43;
      }
      a1[1] = v9;
      *(_BYTE *)(v12 + v11) = 0;
      memcpy((void *)(v10 + *a1), srcb, 0x19u);
      if ( srcb )
        qfree();
    }
  }
LABEL_12:
  sub_55D90(a1);
  sub_55D90(a1);
  sub_55D90(a1);
  if ( !*(_BYTE *)(a2 + 97) )
    goto LABEL_13;
  sub_55D90(a1);
  for ( i = 0; i != 8; ++i )
  {
    while ( 1 )
    {
      v33 = *(unsigned __int8 *)(a2 + 97);
      if ( _bittest(&v33, i) )
        break;
      if ( ++i == 8 )
        goto LABEL_54;
    }
    sub_55D90(a1);
  }
LABEL_54:
  v34 = a1[1];
  v35 = 2;
  if ( v34 )
  {
    v35 = v34 + 1;
    v36 = *a1;
    --v34;
    if ( a1[2] >= v35 )
      goto LABEL_56;
LABEL_58:
    v37 = qvector_reserve();
    *a1 = v37;
    v36 = v37;
    goto LABEL_56;
  }
  v36 = *a1;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_58;
LABEL_56:
  a1[1] = v35;
  *(_BYTE *)(v36 + v34) = 10;
  *(_BYTE *)(*a1 + v34 + 1) = 0;
LABEL_13:
  if ( *(_DWORD *)(a2 + 28) )
  {
    srcc = (char *)qvector_reserve();
    *(__m128i *)srcc = _mm_load_si128((const __m128i *)&xmmword_89660);
    *(__m128i *)(srcc + 9) = _mm_load_si128((const __m128i *)&xmmword_89670);
    srcc[25] = 0;
    v28 = 26;
    v29 = a1[1];
    v30 = 25;
    if ( v29 )
    {
      v30 = --v29 + 25;
      v28 = v29 + 26;
    }
    v31 = *a1;
    if ( a1[2] < v28 )
    {
      v42 = qvector_reserve();
      *a1 = v42;
      v31 = v42;
    }
    a1[1] = v28;
    *(_BYTE *)(v31 + v30) = 0;
    memcpy((void *)(v29 + *a1), srcc, 0x19u);
    if ( srcc )
      qfree();
    sub_55D90(a1);
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    v22 = a1[1];
    if ( v22 )
    {
      v25 = v22 + 43;
      v24 = v22 + 44;
      v23 = *a1;
      --v22;
      if ( a1[2] >= v24 )
        goto LABEL_42;
    }
    else
    {
      v23 = *a1;
      v24 = 45;
      v25 = 44;
      if ( (unsigned __int64)a1[2] >= 0x2D )
      {
LABEL_42:
        si128 = _mm_load_si128((const __m128i *)&xmmword_89680);
        a1[1] = v24;
        *(_BYTE *)(v23 + v25) = 0;
        v27 = *a1 + v22;
        *(__m128i *)v27 = si128;
        *(__m128i *)(v27 + 16) = _mm_load_si128((const __m128i *)&xmmword_89690);
        *(__m128i *)(v27 + 28) = _mm_load_si128((const __m128i *)&xmmword_896A0);
        return a1;
      }
    }
    v38 = qvector_reserve();
    *a1 = v38;
    v23 = v38;
    goto LABEL_42;
  }
  return a1;
}

