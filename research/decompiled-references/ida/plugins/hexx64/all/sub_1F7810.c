unsigned __int64 __fastcall sub_1F7810(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm2
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 i; // r12
  __int64 *v18; // r15
  __int64 v19; // rdi
  __m128i v20; // xmm3
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rbx
  __m128i v24; // xmm0
  __m128i v25; // xmm4
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 j; // rbx
  __int64 *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __m128i si128; // xmm0
  __m128i v34; // xmm5
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 *v38; // rbp
  __int64 v39; // rdi
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm6
  __m128i v44; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v45; // [rsp+10h] [rbp-B8h] BYREF
  const void *v46[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+30h] [rbp-98h]
  __m128i v48; // [rsp+38h] [rbp-90h] BYREF
  __int64 v49; // [rsp+48h] [rbp-80h]
  __m128i v50; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v51[24]; // [rsp+60h] [rbp-68h] BYREF
  char v52; // [rsp+78h] [rbp-50h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  sub_64000((__int64 *)v46, a1, a3);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v47 = v4;
  v7 = *(_QWORD *)(a1 + 40);
  v48 = v5;
  v49 = v7;
  v8 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)&v51[16] = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v52 = v8;
  v50 = v6;
  *(__m128i *)v51 = v9;
  sub_648D0((__int64 *)a1, (const void **)a2, *(double *)v9.m128i_i64);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v44 = v11;
    qfree(v12);
    v11 = _mm_load_si128(&v44);
  }
  *(__m128i *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 16) = v10;
  v13 = *(_QWORD *)(a2 + 40);
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v15 = *(_QWORD *)(a1 + 40);
  v44.m128i_i64[0] = v13;
  v45 = v14;
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = (__int64 *)(v15 + 40 * i);
        v19 = v18[2];
        if ( v19 )
        {
          v18[3] = 0;
          qfree(v19);
        }
        qfree(*v18);
        v15 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v15);
  }
  v20 = _mm_load_si128(&v45);
  *(_QWORD *)(a1 + 40) = v44.m128i_i64[0];
  *(__m128i *)(a1 + 48) = v20;
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(__m128i *)(a1 + 64) = v21;
  *(_QWORD *)(a1 + 77) = *(_QWORD *)(a2 + 77);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  sub_648D0((__int64 *)a2, v46, *(double *)v21.m128i_i64);
  v22 = *(_QWORD *)(a2 + 16);
  v23 = v47;
  v47 = 0;
  v24 = _mm_loadu_si128(&v48);
  v48 = 0;
  if ( v22 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v44 = v24;
    qfree(v22);
    v24 = _mm_load_si128(&v44);
  }
  v25 = _mm_load_si128(&v50);
  v26 = *(_QWORD *)(a2 + 40);
  *(__m128i *)(a2 + 24) = v24;
  v27 = v49;
  *(_QWORD *)(a2 + 16) = v23;
  v49 = 0;
  v44 = v25;
  v50 = 0;
  if ( v26 )
  {
    v28 = *(_QWORD *)(a2 + 48);
    if ( v28 )
    {
      for ( j = 0; j != v28; ++j )
      {
        v30 = (__int64 *)(v26 + 40 * j);
        v31 = v30[2];
        if ( v31 )
        {
          v30[3] = 0;
          qfree(v31);
        }
        qfree(*v30);
        v26 = *(_QWORD *)(a2 + 40);
      }
    }
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v26);
    v32 = *(_QWORD *)&v51[13];
    si128 = _mm_load_si128((const __m128i *)v51);
    *(_QWORD *)(a2 + 40) = v27;
    v34 = _mm_load_si128(&v44);
    v35 = v49;
    *(__m128i *)(a2 + 64) = si128;
    *(_QWORD *)(a2 + 77) = v32;
    LOBYTE(v32) = v52;
    *(__m128i *)(a2 + 48) = v34;
    *(_BYTE *)(a2 + 88) = v32;
    if ( v35 )
    {
      v36 = v50.m128i_i64[0];
      if ( v50.m128i_i64[0] )
      {
        v37 = 0;
        do
        {
          v38 = (__int64 *)(v35 + 40 * v37);
          v39 = v38[2];
          if ( v39 )
          {
            v38[3] = 0;
            qfree(v39);
          }
          ++v37;
          qfree(*v38);
          v35 = v49;
        }
        while ( v36 != v37 );
      }
      v50.m128i_i64[0] = 0;
      qfree(v35);
    }
  }
  else
  {
    v41 = *(_QWORD *)&v51[13];
    v42 = _mm_load_si128((const __m128i *)v51);
    *(_QWORD *)(a2 + 40) = v27;
    v43 = _mm_load_si128(&v44);
    *(__m128i *)(a2 + 64) = v42;
    *(_QWORD *)(a2 + 77) = v41;
    LOBYTE(v41) = v52;
    *(__m128i *)(a2 + 48) = v43;
    *(_BYTE *)(a2 + 88) = v41;
  }
  if ( v47 )
  {
    v48.m128i_i64[0] = 0;
    qfree(v47);
  }
  qfree((__int64)v46[0]);
  return v53 - __readfsqword(0x28u);
}

