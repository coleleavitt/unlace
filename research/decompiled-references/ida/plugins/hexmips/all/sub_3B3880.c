unsigned __int64 __fastcall sub_3B3880(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned __int64 i; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 j; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // r14
  __m128i v29; // xmm1
  __int64 v30; // rdi
  __m128i v31; // xmm7
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // r15
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __int64 v40; // rbx
  __m128i v41; // xmm3
  __m128i v43; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+10h] [rbp-98h] BYREF
  __m128i v45; // [rsp+20h] [rbp-88h] BYREF
  __int64 v46; // [rsp+38h] [rbp-70h]
  __m128i v47; // [rsp+40h] [rbp-68h] BYREF
  __int64 v48; // [rsp+50h] [rbp-58h]
  __m128i v49; // [rsp+58h] [rbp-50h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v46 = a3;
  v50 = __readfsqword(0x28u);
  v10 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 640 )
    return v50 - __readfsqword(0x28u);
  for ( i = a2; ; i = v18 )
  {
    v13 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3);
    v14 = v13 >> 1;
    if ( !v46 )
      break;
    v15 = *(_QWORD *)(a1 + 48);
    --v46;
    v16 = (__int64 *)(a1 + 40 * v14);
    v17 = *(_QWORD *)(i - 32);
    v18 = a1 + 40;
    v19 = v16[1];
    if ( v15 >= v19 )
    {
      if ( v15 < v17 )
      {
LABEL_24:
        sub_3B37C0(a1, (__int64 *)(a1 + 40));
        goto LABEL_8;
      }
      if ( v19 >= v17 )
      {
LABEL_23:
        sub_3B37C0(a1, v16);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v19 < v17 )
        goto LABEL_23;
      if ( v15 >= v17 )
        goto LABEL_24;
    }
    sub_3B37C0(a1, (__int64 *)(i - 40));
LABEL_8:
    v20 = i;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 8);
      for ( j = *(_QWORD *)(a1 + 8); v21 < j; v18 += 40LL )
        v21 = *(_QWORD *)(v18 + 48);
      v23 = v20 - 40;
      if ( j < *(_QWORD *)(v20 - 32) )
      {
        do
          v23 -= 40LL;
        while ( j < *(_QWORD *)(v23 + 8) );
      }
      if ( v18 >= v23 )
        break;
      a10 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + 24));
      v24 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      v25 = *(_QWORD *)v23;
      v26 = _mm_loadl_epi64((const __m128i *)v18);
      v43 = (__m128i)a10;
      *(_QWORD *)v18 = v25;
      v27 = _mm_unpacklo_epi64(v26, (__m128i)v21);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(v23 + 8);
      v28 = *(_QWORD *)(v23 + 16);
      v29 = _mm_loadu_si128((const __m128i *)(v23 + 24));
      *(_QWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 24) = 0;
      if ( *(_QWORD *)(v18 + 16) )
      {
        *(_QWORD *)(v18 + 24) = 0;
        v45 = v27;
        v44 = v29;
        qfree();
        v27 = _mm_load_si128(&v45);
        v29 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v18 + 16) = v28;
      *(__m128i *)(v18 + 24) = v29;
      v30 = *(_QWORD *)(v23 + 16);
      *(__m128i *)v23 = v27;
      if ( v30 )
      {
        *(_QWORD *)(v23 + 24) = 0;
        qfree();
      }
      v31 = _mm_load_si128(&v43);
      *(_QWORD *)(v23 + 16) = v24;
      v18 += 40LL;
      v20 = v23;
      *(__m128i *)(v23 + 24) = v31;
    }
    sub_3B3880(v18, i, v46);
    v10 = v18 - a1;
    if ( (__int64)(v18 - a1) <= 640 )
      return v50 - __readfsqword(0x28u);
  }
  v32 = v14 - 1;
  v33 = a1 + 40 * (v14 - 1);
  while ( 1 )
  {
    v34 = *(_QWORD *)(v33 + 16);
    v35 = _mm_loadu_si128((const __m128i *)(v33 + 24));
    v36 = _mm_loadu_si128((const __m128i *)v33);
    *(_QWORD *)(v33 + 16) = 0;
    *(_OWORD *)(v33 + 24) = 0;
    v48 = v34;
    v47 = v36;
    v49 = v35;
    sub_3A5770(a1, v32, v13, &v47, *(double *)v35.m128i_i64, *(double *)v36.m128i_i64, 0.0, a7, a8, a9, a10);
    if ( v48 )
      qfree();
    v33 -= 40;
    if ( !v32 )
      break;
    --v32;
  }
  while ( (__int64)(i - a1) > 40 )
  {
    v37 = *(_QWORD *)(i - 24);
    i -= 40LL;
    *(_QWORD *)(i + 16) = 0;
    v38 = _mm_loadu_si128((const __m128i *)(i + 24));
    *(_OWORD *)(i + 24) = 0;
    v39 = _mm_loadu_si128((const __m128i *)i);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_QWORD *)(i + 8) = *(_QWORD *)(a1 + 8);
    v40 = *(_QWORD *)(a1 + 16);
    v41 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    if ( *(_QWORD *)(i + 16) )
    {
      *(_QWORD *)(i + 24) = 0;
      v45 = v38;
      v44 = v39;
      v43 = v41;
      qfree();
      v38 = _mm_load_si128(&v45);
      v39 = _mm_load_si128(&v44);
      v41 = _mm_load_si128(&v43);
    }
    *(_QWORD *)(i + 16) = v40;
    *(__m128i *)(i + 24) = v41;
    v48 = v37;
    v47 = v39;
    v49 = v38;
    sub_3A5770(
      a1,
      0,
      0xCCCCCCCCCCCCCCCDLL * ((__int64)(i - a1) >> 3),
      &v47,
      0.0,
      *(double *)v38.m128i_i64,
      *(double *)v39.m128i_i64,
      *(double *)v41.m128i_i64,
      a8,
      a9,
      a10);
    if ( v48 )
      qfree();
  }
  return v50 - __readfsqword(0x28u);
}

