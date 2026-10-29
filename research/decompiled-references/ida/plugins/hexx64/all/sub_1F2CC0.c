unsigned __int64 __fastcall sub_1F2CC0(__int64 a1, double a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v13; // al
  __int64 v14; // rdi
  __int64 v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r14
  __m128i v19; // xmm3
  __int64 v20; // r13
  __int64 i; // rbp
  __int64 *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm5
  __int64 v26; // rdi
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __m128i v29; // xmm6
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 j; // rbx
  __int64 *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i si128; // xmm0
  __m128i v38; // xmm7
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 *v42; // rbp
  __int64 v43; // rdi
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  __m128i v48; // [rsp+0h] [rbp-C8h] BYREF
  const void **v49; // [rsp+18h] [rbp-B0h]
  __int64 v50[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-98h]
  __m128i v52; // [rsp+38h] [rbp-90h] BYREF
  __int64 v53; // [rsp+48h] [rbp-80h]
  __m128i v54; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v55[24]; // [rsp+60h] [rbp-68h] BYREF
  char v56; // [rsp+78h] [rbp-50h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v2 = a1;
  v49 = (const void **)v50;
  sub_64000(v50, a1, a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v51 = v3;
  v6 = *(_QWORD *)(a1 + 40);
  v52 = v4;
  v53 = v6;
  v7 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)&v55[16] = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 48) = 0;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 40) = 0;
  v56 = v7;
  v54 = v5;
  *(__m128i *)v55 = v8;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v2 - 32);
    v10 = v2;
    if ( *(_QWORD *)v55 != v9 )
    {
      v11 = *(_QWORD *)(v2 - 24);
      if ( !*(_QWORD *)&v55[8] )
      {
        v13 = v11 == 0;
LABEL_7:
        if ( !v13 )
          goto LABEL_20;
        goto LABEL_8;
      }
      if ( !v11 )
        goto LABEL_8;
      v12 = *(_QWORD *)(v9 + 24);
      if ( *(_QWORD *)(*(_QWORD *)v55 + 24LL) != v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)v55 + 24LL) < v12;
        goto LABEL_7;
      }
    }
    if ( v55[20] == *(_BYTE *)(v2 - 12) )
      break;
    if ( v55[20] )
      goto LABEL_20;
LABEL_8:
    v2 -= 96;
    sub_648D0((__int64 *)v10, (const void **)v2, *(double *)v8.m128i_i64);
    v14 = *(_QWORD *)(v10 + 16);
    v15 = *(_QWORD *)(v10 - 80);
    *(_QWORD *)(v10 - 80) = 0;
    v16 = _mm_loadu_si128((const __m128i *)(v10 - 72));
    *(_OWORD *)(v10 - 72) = 0;
    if ( v14 )
    {
      *(_QWORD *)(v10 + 24) = 0;
      v48 = v16;
      qfree(v14);
      v16 = _mm_load_si128(&v48);
    }
    v17 = *(_QWORD *)(v10 + 40);
    v18 = *(_QWORD *)(v10 - 56);
    *(_QWORD *)(v10 + 16) = v15;
    v19 = _mm_loadu_si128((const __m128i *)(v10 - 48));
    *(_QWORD *)(v10 - 56) = 0;
    *(__m128i *)(v10 + 24) = v16;
    v48 = v19;
    *(_OWORD *)(v10 - 48) = 0;
    if ( v17 )
    {
      v20 = *(_QWORD *)(v10 + 48);
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = (__int64 *)(v17 + 40 * i);
          v23 = v22[2];
          if ( v23 )
          {
            v22[3] = 0;
            qfree(v23);
          }
          qfree(*v22);
          v17 = *(_QWORD *)(v10 + 40);
        }
      }
      *(_QWORD *)(v10 + 48) = 0;
      qfree(v17);
    }
    v24 = *(_QWORD *)(v10 - 19);
    v8 = _mm_loadu_si128((const __m128i *)(v10 - 32));
    *(_QWORD *)(v10 + 40) = v18;
    v25 = _mm_load_si128(&v48);
    *(__m128i *)(v10 + 64) = v8;
    *(_QWORD *)(v10 + 77) = v24;
    LOBYTE(v24) = *(_BYTE *)(v10 - 8);
    *(__m128i *)(v10 + 48) = v25;
    *(_BYTE *)(v10 + 88) = v24;
  }
  if ( *(int *)&v55[16] < *(_DWORD *)(v2 - 16) )
    goto LABEL_8;
LABEL_20:
  sub_648D0((__int64 *)v2, v49, *(double *)v8.m128i_i64);
  v26 = *(_QWORD *)(v2 + 16);
  v27 = v51;
  v51 = 0;
  v28 = _mm_loadu_si128(&v52);
  v52 = 0;
  if ( v26 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v48 = v28;
    qfree(v26);
    v28 = _mm_load_si128(&v48);
  }
  v29 = _mm_load_si128(&v54);
  v30 = *(_QWORD *)(v2 + 40);
  *(__m128i *)(v2 + 24) = v28;
  v31 = v53;
  *(_QWORD *)(v2 + 16) = v27;
  v53 = 0;
  v48 = v29;
  v54 = 0;
  if ( v30 )
  {
    v32 = *(_QWORD *)(v2 + 48);
    if ( v32 )
    {
      for ( j = 0; j != v32; ++j )
      {
        v34 = (__int64 *)(v30 + 40 * j);
        v35 = v34[2];
        if ( v35 )
        {
          v34[3] = 0;
          qfree(v35);
        }
        qfree(*v34);
        v30 = *(_QWORD *)(v2 + 40);
      }
    }
    *(_QWORD *)(v2 + 48) = 0;
    qfree(v30);
    v36 = *(_QWORD *)&v55[13];
    si128 = _mm_load_si128((const __m128i *)v55);
    *(_QWORD *)(v2 + 40) = v31;
    v38 = _mm_load_si128(&v48);
    v39 = v53;
    *(__m128i *)(v2 + 64) = si128;
    *(_QWORD *)(v2 + 77) = v36;
    LOBYTE(v36) = v56;
    *(__m128i *)(v2 + 48) = v38;
    *(_BYTE *)(v2 + 88) = v36;
    if ( v39 )
    {
      v40 = v54.m128i_i64[0];
      if ( v54.m128i_i64[0] )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v39 + 40 * v41);
          v43 = v42[2];
          if ( v43 )
          {
            v42[3] = 0;
            qfree(v43);
          }
          ++v41;
          qfree(*v42);
          v39 = v53;
        }
        while ( v40 != v41 );
      }
      v54.m128i_i64[0] = 0;
      qfree(v39);
    }
  }
  else
  {
    v45 = *(_QWORD *)&v55[13];
    v46 = _mm_load_si128((const __m128i *)v55);
    *(_QWORD *)(v2 + 40) = v31;
    v47 = _mm_load_si128(&v48);
    *(__m128i *)(v2 + 64) = v46;
    *(_QWORD *)(v2 + 77) = v45;
    LOBYTE(v45) = v56;
    *(__m128i *)(v2 + 48) = v47;
    *(_BYTE *)(v2 + 88) = v45;
  }
  if ( v51 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v51);
  }
  qfree(v50[0]);
  return v57 - __readfsqword(0x28u);
}

