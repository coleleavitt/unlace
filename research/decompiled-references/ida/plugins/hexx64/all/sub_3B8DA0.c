unsigned __int64 __fastcall sub_3B8DA0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __m128i a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rdx
  unsigned __int64 i; // rbp
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  __int64 *v18; // rsi
  unsigned __int64 v19; // rdx
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int64 v22; // rdi
  double v23; // rsi
  unsigned __int64 j; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rcx
  __m128i v28; // xmm0
  int v29; // r12d
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdi
  __m128i v33; // xmm7
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // edx
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int64 v40; // r14
  int v41; // r12d
  __m128i v42; // xmm1
  __m128i v43; // xmm2
  __int64 v44; // rax
  __m128i v45; // xmm3
  __int64 v46; // rdi
  int v47; // eax
  __m128i v49; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v50; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v51; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+30h] [rbp-98h] BYREF
  __int64 v53; // [rsp+48h] [rbp-80h]
  __m128i v54; // [rsp+50h] [rbp-78h] BYREF
  __int64 v55; // [rsp+60h] [rbp-68h]
  __m128i v56; // [rsp+68h] [rbp-60h]
  int v57; // [rsp+78h] [rbp-50h]
  unsigned __int64 v58; // [rsp+88h] [rbp-40h]

  v53 = a3;
  v58 = __readfsqword(0x28u);
  v10 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 768 )
    return v58 - __readfsqword(0x28u);
  for ( i = a2; ; i = v17 )
  {
    v13 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 4);
    v14 = v13 >> 1;
    if ( !v53 )
      break;
    v15 = *(_QWORD *)(a1 + 56);
    v16 = *(_QWORD *)(i - 40);
    --v53;
    v17 = a1 + 48;
    v18 = (__int64 *)(a1 + 48 * v14);
    v19 = v18[1];
    if ( v15 >= v19 )
    {
      if ( v15 < v16 )
      {
LABEL_24:
        sub_3B8CD0(a1, (__int64 *)(a1 + 48));
        goto LABEL_8;
      }
      if ( v19 >= v16 )
      {
LABEL_23:
        sub_3B8CD0(a1, v18);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v19 < v16 )
        goto LABEL_23;
      if ( v15 >= v16 )
        goto LABEL_24;
    }
    sub_3B8CD0(a1, (__int64 *)(i - 48));
LABEL_8:
    v22 = i;
    while ( 1 )
    {
      v23 = *(double *)(v17 + 8);
      for ( j = *(_QWORD *)(a1 + 8); *(_QWORD *)&v23 < j; v17 += 48LL )
        v23 = *(double *)(v17 + 56);
      v25 = v22 - 48;
      if ( j < *(_QWORD *)(v22 - 40) )
      {
        do
          v25 -= 48LL;
        while ( j < *(_QWORD *)(v25 + 8) );
      }
      if ( v17 >= v25 )
        break;
      v20 = 0.0;
      a10 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 24));
      v26 = *(_QWORD *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      v27 = *(_QWORD *)v25;
      v28 = _mm_loadl_epi64((const __m128i *)v17);
      v21 = v23;
      v29 = *(_DWORD *)(v17 + 40);
      v49 = (__m128i)a10;
      *(_QWORD *)v17 = v27;
      a4 = _mm_unpacklo_epi64(v28, (__m128i)*(unsigned __int64 *)&v23);
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v25 + 8);
      v30 = *(_QWORD *)(v25 + 16);
      a5 = _mm_loadu_si128((const __m128i *)(v25 + 24));
      *(_QWORD *)(v25 + 16) = 0;
      *(_OWORD *)(v25 + 24) = 0;
      v31 = *(_QWORD *)(v17 + 16);
      if ( v31 )
      {
        *(_QWORD *)(v17 + 24) = 0;
        v52.m128i_i64[0] = v30;
        v51 = a5;
        v50 = a4;
        qfree(v31);
        v30 = v52.m128i_i64[0];
        a5 = _mm_load_si128(&v51);
        a4 = _mm_load_si128(&v50);
      }
      *(_QWORD *)(v17 + 16) = v30;
      *(__m128i *)(v17 + 24) = a5;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(v25 + 40);
      v32 = *(_QWORD *)(v25 + 16);
      *(__m128i *)v25 = a4;
      if ( v32 )
      {
        *(_QWORD *)(v25 + 24) = 0;
        qfree(v32);
      }
      v33 = _mm_load_si128(&v49);
      *(_QWORD *)(v25 + 16) = v26;
      v17 += 48LL;
      v22 = v25;
      *(_DWORD *)(v25 + 40) = v29;
      *(__m128i *)(v25 + 24) = v33;
    }
    sub_3B8DA0(v17, i, v53, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6, a7, v20, v21, a10);
    v10 = v17 - a1;
    if ( (__int64)(v17 - a1) <= 768 )
      return v58 - __readfsqword(0x28u);
  }
  v34 = v14 - 1;
  v35 = a1 + 48 * (v14 - 1);
  while ( 1 )
  {
    v36 = *(_QWORD *)(v35 + 16);
    v37 = *(_DWORD *)(v35 + 40);
    *(_QWORD *)(v35 + 16) = 0;
    v38 = _mm_loadu_si128((const __m128i *)(v35 + 24));
    v39 = _mm_loadu_si128((const __m128i *)v35);
    v57 = v37;
    *(_OWORD *)(v35 + 24) = 0;
    v55 = v36;
    v54 = v39;
    v56 = v38;
    sub_3AA920(a1, v34, v13, &v54, *(double *)v38.m128i_i64, *(double *)v39.m128i_i64, 0.0, a7, a8, a9, a10);
    if ( v55 )
      qfree(v55);
    v35 -= 48;
    if ( !v34 )
      break;
    --v34;
  }
  while ( (__int64)(i - a1) > 48 )
  {
    v40 = *(_QWORD *)(i - 32);
    v41 = *(_DWORD *)(i - 8);
    i -= 48LL;
    *(_QWORD *)(i + 16) = 0;
    v42 = _mm_loadu_si128((const __m128i *)(i + 24));
    *(_OWORD *)(i + 24) = 0;
    v43 = _mm_loadu_si128((const __m128i *)i);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_QWORD *)(i + 8) = *(_QWORD *)(a1 + 8);
    v44 = *(_QWORD *)(a1 + 16);
    v45 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    v46 = *(_QWORD *)(i + 16);
    if ( v46 )
    {
      *(_QWORD *)(i + 24) = 0;
      v50.m128i_i64[0] = v44;
      v52 = v42;
      v51 = v43;
      v49 = v45;
      qfree(v46);
      v42 = _mm_load_si128(&v52);
      v43 = _mm_load_si128(&v51);
      v44 = v50.m128i_i64[0];
      v45 = _mm_load_si128(&v49);
    }
    v57 = v41;
    *(_QWORD *)(i + 16) = v44;
    *(__m128i *)(i + 24) = v45;
    v47 = *(_DWORD *)(a1 + 40);
    v55 = v40;
    *(_DWORD *)(i + 40) = v47;
    v54 = v43;
    v56 = v42;
    sub_3AA920(
      a1,
      0,
      0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 4),
      &v54,
      0.0,
      *(double *)v42.m128i_i64,
      *(double *)v43.m128i_i64,
      *(double *)v45.m128i_i64,
      a8,
      a9,
      a10);
    if ( v55 )
      qfree(v55);
  }
  return v58 - __readfsqword(0x28u);
}

