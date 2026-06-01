char *__fastcall sub_334C10(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 i; // r15
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r12
  _QWORD *v10; // r13
  __int64 v11; // rsi
  __int64 *v12; // r15
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  char *v18; // rax
  __m128i v19; // xmm2
  char *v20; // rcx
  __int64 v21; // r15
  const char *v22; // rax
  char *v23; // rsi
  const char *v24; // rdi
  __int64 *v25; // r12
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // r12
  __m128i v32; // xmm0
  char *result; // rax
  __m128i si128; // xmm3
  char *v35; // rax
  char *v36; // rbx
  __m128i v37; // xmm4
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __m128i v39; // [rsp+10h] [rbp-78h] BYREF
  __m128i v40; // [rsp+20h] [rbp-68h] BYREF
  char *s2; // [rsp+30h] [rbp-58h]
  char *v42; // [rsp+38h] [rbp-50h]
  __m128i v43[4]; // [rsp+40h] [rbp-48h] BYREF

  v43[0].m128i_i64[0] = a3;
  v42 = a4;
  v38.m128i_i64[0] = (a3 - 1) / 2;
  s2 = (char *)(a3 & 1);
  if ( a2 < v38.m128i_i64[0] )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v15 = 48 * (i + 1);
      v16 = a1 + v15 - 24;
      v10 = (_QWORD *)(a1 + v15);
      v17 = *(_QWORD *)(a1 + v15 + 8);
      if ( *(_QWORD *)(v16 + 8) )
      {
        v7 = *(const char **)v16;
        v8 = s1;
        if ( !v17 )
          goto LABEL_5;
      }
      else
      {
        v7 = s1;
        if ( !v17 )
          goto LABEL_7;
      }
      v8 = (const char *)*v10;
LABEL_5:
      if ( strcmp(v8, v7) < 0 )
      {
        --v9;
        v10 = (_QWORD *)(a1 + 24 * v9);
      }
LABEL_7:
      v11 = *v10;
      v12 = (__int64 *)(a1 + 24 * i);
      *v10 = 0;
      v13 = (__m128i)_mm_loadh_ps((const double *)v10 + 2);
      *(_OWORD *)(v10 + 1) = 0;
      if ( *v12 )
      {
        v12[1] = 0;
        v39.m128i_i64[0] = v11;
        v40 = v13;
        qfree();
        v13 = _mm_load_si128(&v40);
      }
      v14 = v38.m128i_i64[0];
      *v12 = v11;
      *(__m128i *)(v12 + 1) = v13;
      if ( v9 >= v14 )
      {
        if ( s2 )
          goto LABEL_15;
        goto LABEL_30;
      }
    }
  }
  v10 = (_QWORD *)(a1 + 24 * a2);
  if ( s2 )
  {
    v35 = v42;
    v36 = *(char **)v42;
    v37 = _mm_loadu_si128((const __m128i *)(v42 + 8));
    *(_QWORD *)v42 = 0;
    *(_OWORD *)(v35 + 8) = 0;
    s2 = v36;
    v43[0] = v37;
    goto LABEL_35;
  }
  v9 = a2;
LABEL_30:
  if ( (v43[0].m128i_i64[0] - 2) / 2 == v9 )
  {
    v29 = 2 * (v9 + 1);
    v30 = a1 + 48 * (v9 + 1) - 24;
    v31 = *(_QWORD *)v30;
    v32 = _mm_loadu_si128((const __m128i *)(v30 + 8));
    *(_QWORD *)v30 = 0;
    *(_OWORD *)(v30 + 8) = 0;
    if ( *v10 )
    {
      v10[1] = 0;
      v38 = v32;
      qfree();
      v32 = _mm_load_si128(&v38);
    }
    *v10 = v31;
    v9 = v29 - 1;
    *(__m128i *)(v10 + 1) = v32;
    v10 = (_QWORD *)(a1 + 24 * (v29 - 1));
  }
LABEL_15:
  v18 = v42;
  v19 = _mm_loadu_si128((const __m128i *)(v42 + 8));
  v20 = *(char **)v42;
  *(_OWORD *)(v42 + 8) = 0;
  *(_QWORD *)v18 = 0;
  s2 = v20;
  v43[0] = v19;
  v38.m128i_i64[0] = v19.m128i_i64[0];
  v21 = (v9 - 1) / 2;
  if ( v9 <= a2 )
    goto LABEL_35;
  v22 = s1;
  if ( v19.m128i_i64[0] )
    v22 = v20;
  v42 = (char *)v22;
  while ( 1 )
  {
    v10 = (_QWORD *)(a1 + 24 * v21);
    v28 = v10[1];
    if ( v38.m128i_i64[0] )
    {
      v23 = s2;
      v24 = s1;
      if ( !v28 )
        goto LABEL_20;
    }
    else if ( !v28 )
    {
      v10 = (_QWORD *)(a1 + 24 * v9);
      goto LABEL_35;
    }
    v24 = (const char *)*v10;
    v23 = v42;
LABEL_20:
    v25 = (__int64 *)(a1 + 24 * v9);
    if ( strcmp(v24, v23) >= 0 )
      break;
    v26 = *v10;
    *v10 = 0;
    v27 = (__m128i)_mm_loadh_ps((const double *)v10 + 2);
    *(_OWORD *)(v10 + 1) = 0;
    if ( *v25 )
    {
      v25[1] = 0;
      v40.m128i_i64[0] = v26;
      v39 = v27;
      qfree();
      v26 = v40.m128i_i64[0];
      v27 = _mm_load_si128(&v39);
    }
    *v25 = v26;
    *(__m128i *)(v25 + 1) = v27;
    v9 = v21;
    if ( v21 <= a2 )
      goto LABEL_35;
    v21 = (v21 - 1) / 2;
  }
  v10 = v25;
LABEL_35:
  if ( *v10 )
  {
    v10[1] = 0;
    qfree();
  }
  result = s2;
  si128 = _mm_load_si128(v43);
  *v10 = s2;
  *(__m128i *)(v10 + 1) = si128;
  return result;
}

