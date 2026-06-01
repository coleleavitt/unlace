unsigned __int64 __fastcall sub_3B2D20(
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
  __int64 v10; // rdx
  unsigned __int64 i; // rbp
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  __int64 *v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 j; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rcx
  __m128i v26; // xmm0
  int v27; // r12d
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __m128i v30; // xmm1
  __int64 v31; // rdi
  __m128i v32; // xmm7
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rax
  int v36; // edx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // r14
  int v40; // r12d
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  __int64 v43; // rax
  __m128i v44; // xmm3
  int v45; // eax
  __m128i v47; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v49; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+30h] [rbp-98h] BYREF
  __int64 v51; // [rsp+48h] [rbp-80h]
  __m128i v52; // [rsp+50h] [rbp-78h] BYREF
  __int64 v53; // [rsp+60h] [rbp-68h]
  __m128i v54; // [rsp+68h] [rbp-60h]
  int v55; // [rsp+78h] [rbp-50h]
  unsigned __int64 v56; // [rsp+88h] [rbp-40h]

  v51 = a3;
  v56 = __readfsqword(0x28u);
  v10 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 768 )
    return v56 - __readfsqword(0x28u);
  for ( i = a2; ; i = v17 )
  {
    v13 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 4);
    v14 = v13 >> 1;
    if ( !v51 )
      break;
    v15 = *(_QWORD *)(a1 + 56);
    v16 = *(_QWORD *)(i - 40);
    --v51;
    v17 = a1 + 48;
    v18 = (__int64 *)(a1 + 48 * v14);
    v19 = v18[1];
    if ( v15 >= v19 )
    {
      if ( v15 < v16 )
      {
LABEL_24:
        sub_3B2C50(a1, (__int64 *)(a1 + 48));
        goto LABEL_8;
      }
      if ( v19 >= v16 )
      {
LABEL_23:
        sub_3B2C50(a1, v18);
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
    sub_3B2C50(a1, (__int64 *)(i - 48));
LABEL_8:
    v20 = i;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v17 + 8);
      for ( j = *(_QWORD *)(a1 + 8); v21 < j; v17 += 48LL )
        v21 = *(_QWORD *)(v17 + 56);
      v23 = v20 - 48;
      if ( j < *(_QWORD *)(v20 - 40) )
      {
        do
          v23 -= 48LL;
        while ( j < *(_QWORD *)(v23 + 8) );
      }
      if ( v17 >= v23 )
        break;
      a10 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 24));
      v24 = *(_QWORD *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      v25 = *(_QWORD *)v23;
      v26 = _mm_loadl_epi64((const __m128i *)v17);
      v27 = *(_DWORD *)(v17 + 40);
      v47 = (__m128i)a10;
      *(_QWORD *)v17 = v25;
      v28 = _mm_unpacklo_epi64(v26, (__m128i)v21);
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v23 + 8);
      v29 = *(_QWORD *)(v23 + 16);
      v30 = _mm_loadu_si128((const __m128i *)(v23 + 24));
      *(_QWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 24) = 0;
      if ( *(_QWORD *)(v17 + 16) )
      {
        *(_QWORD *)(v17 + 24) = 0;
        v50.m128i_i64[0] = v29;
        v49 = v30;
        v48 = v28;
        qfree();
        v29 = v50.m128i_i64[0];
        v30 = _mm_load_si128(&v49);
        v28 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(v17 + 16) = v29;
      *(__m128i *)(v17 + 24) = v30;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(v23 + 40);
      v31 = *(_QWORD *)(v23 + 16);
      *(__m128i *)v23 = v28;
      if ( v31 )
      {
        *(_QWORD *)(v23 + 24) = 0;
        qfree();
      }
      v32 = _mm_load_si128(&v47);
      *(_QWORD *)(v23 + 16) = v24;
      v17 += 48LL;
      v20 = v23;
      *(_DWORD *)(v23 + 40) = v27;
      *(__m128i *)(v23 + 24) = v32;
    }
    sub_3B2D20(v17, i, v51);
    v10 = v17 - a1;
    if ( (__int64)(v17 - a1) <= 768 )
      return v56 - __readfsqword(0x28u);
  }
  v33 = v14 - 1;
  v34 = a1 + 48 * (v14 - 1);
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16);
    v36 = *(_DWORD *)(v34 + 40);
    *(_QWORD *)(v34 + 16) = 0;
    v37 = _mm_loadu_si128((const __m128i *)(v34 + 24));
    v38 = _mm_loadu_si128((const __m128i *)v34);
    v55 = v36;
    *(_OWORD *)(v34 + 24) = 0;
    v53 = v35;
    v52 = v38;
    v54 = v37;
    sub_3A48A0(a1, v33, v13, &v52, *(double *)v37.m128i_i64, *(double *)v38.m128i_i64, 0.0, a7, a8, a9, a10);
    if ( v53 )
      qfree();
    v34 -= 48;
    if ( !v33 )
      break;
    --v33;
  }
  while ( (__int64)(i - a1) > 48 )
  {
    v39 = *(_QWORD *)(i - 32);
    v40 = *(_DWORD *)(i - 8);
    i -= 48LL;
    *(_QWORD *)(i + 16) = 0;
    v41 = _mm_loadu_si128((const __m128i *)(i + 24));
    *(_OWORD *)(i + 24) = 0;
    v42 = _mm_loadu_si128((const __m128i *)i);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_QWORD *)(i + 8) = *(_QWORD *)(a1 + 8);
    v43 = *(_QWORD *)(a1 + 16);
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    if ( *(_QWORD *)(i + 16) )
    {
      *(_QWORD *)(i + 24) = 0;
      v48.m128i_i64[0] = v43;
      v50 = v41;
      v49 = v42;
      v47 = v44;
      qfree();
      v41 = _mm_load_si128(&v50);
      v42 = _mm_load_si128(&v49);
      v43 = v48.m128i_i64[0];
      v44 = _mm_load_si128(&v47);
    }
    v55 = v40;
    *(_QWORD *)(i + 16) = v43;
    *(__m128i *)(i + 24) = v44;
    v45 = *(_DWORD *)(a1 + 40);
    v53 = v39;
    *(_DWORD *)(i + 40) = v45;
    v52 = v42;
    v54 = v41;
    sub_3A48A0(
      a1,
      0,
      0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 4),
      &v52,
      0.0,
      *(double *)v41.m128i_i64,
      *(double *)v42.m128i_i64,
      *(double *)v44.m128i_i64,
      a8,
      a9,
      a10);
    if ( v53 )
      qfree();
  }
  return v56 - __readfsqword(0x28u);
}

