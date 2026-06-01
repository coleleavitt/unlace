unsigned __int64 __fastcall sub_1EB940(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r14
  __m128i v18; // xmm3
  __int64 v19; // r13
  __int64 i; // rbp
  __int64 v21; // r15
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm5
  __int64 v25; // rdi
  __int64 v26; // rbx
  __m128i v27; // xmm0
  __m128i v28; // xmm6
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 j; // rbx
  __int64 v33; // rbp
  __int64 v34; // rax
  __m128i si128; // xmm0
  __m128i v36; // xmm7
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rbp
  __int64 v42; // rax
  __m128i v43; // xmm0
  __m128i v44; // xmm7
  __m128i v45; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v46; // [rsp+18h] [rbp-B0h]
  __int64 v47[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-98h]
  __m128i v49; // [rsp+38h] [rbp-90h] BYREF
  __int64 v50; // [rsp+48h] [rbp-80h]
  __m128i v51; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v52[24]; // [rsp+60h] [rbp-68h] BYREF
  char v53; // [rsp+78h] [rbp-50h]
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v1 = a1;
  v46 = v47;
  sub_5DA80(v47, a1);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v48 = v2;
  v5 = *(_QWORD *)(a1 + 40);
  v49 = v3;
  v50 = v5;
  v6 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)&v52[16] = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 48) = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 40) = 0;
  v53 = v6;
  v51 = v4;
  *(__m128i *)v52 = v7;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 - 32);
    v9 = v1;
    if ( *(_QWORD *)v52 != v8 )
    {
      v10 = *(_QWORD *)(v1 - 24);
      if ( !*(_QWORD *)&v52[8] )
      {
        v12 = v10 == 0;
LABEL_7:
        if ( !v12 )
          goto LABEL_20;
        goto LABEL_8;
      }
      if ( !v10 )
        goto LABEL_8;
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_QWORD *)(*(_QWORD *)v52 + 24LL) != v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)v52 + 24LL) < v11;
        goto LABEL_7;
      }
    }
    if ( v52[20] == *(_BYTE *)(v1 - 12) )
      break;
    if ( v52[20] )
      goto LABEL_20;
LABEL_8:
    v1 -= 96;
    sub_5E350((__int64 *)v9, (__int64 *)v1);
    v13 = *(_QWORD *)(v9 + 16);
    v14 = *(_QWORD *)(v9 - 80);
    *(_QWORD *)(v9 - 80) = 0;
    v15 = _mm_loadu_si128((const __m128i *)(v9 - 72));
    *(_OWORD *)(v9 - 72) = 0;
    if ( v13 )
    {
      *(_QWORD *)(v9 + 24) = 0;
      v45 = v15;
      qfree();
      v15 = _mm_load_si128(&v45);
    }
    v16 = *(_QWORD *)(v9 + 40);
    v17 = *(_QWORD *)(v9 - 56);
    *(_QWORD *)(v9 + 16) = v14;
    v18 = _mm_loadu_si128((const __m128i *)(v9 - 48));
    *(_QWORD *)(v9 - 56) = 0;
    *(__m128i *)(v9 + 24) = v15;
    v45 = v18;
    *(_OWORD *)(v9 - 48) = 0;
    if ( v16 )
    {
      v19 = *(_QWORD *)(v9 + 48);
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = v16 + 40 * i;
          if ( *(_QWORD *)(v21 + 16) )
          {
            *(_QWORD *)(v21 + 24) = 0;
            qfree();
          }
          qfree();
          v16 = *(_QWORD *)(v9 + 40);
        }
      }
      *(_QWORD *)(v9 + 48) = 0;
      qfree();
    }
    v22 = *(_QWORD *)(v9 - 19);
    v23 = _mm_loadu_si128((const __m128i *)(v9 - 32));
    *(_QWORD *)(v9 + 40) = v17;
    v24 = _mm_load_si128(&v45);
    *(__m128i *)(v9 + 64) = v23;
    *(_QWORD *)(v9 + 77) = v22;
    LOBYTE(v22) = *(_BYTE *)(v9 - 8);
    *(__m128i *)(v9 + 48) = v24;
    *(_BYTE *)(v9 + 88) = v22;
  }
  if ( *(int *)&v52[16] < *(_DWORD *)(v1 - 16) )
    goto LABEL_8;
LABEL_20:
  sub_5E350((__int64 *)v1, v46);
  v25 = *(_QWORD *)(v1 + 16);
  v26 = v48;
  v48 = 0;
  v27 = _mm_loadu_si128(&v49);
  v49 = 0;
  if ( v25 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    v45 = v27;
    qfree();
    v27 = _mm_load_si128(&v45);
  }
  v28 = _mm_load_si128(&v51);
  v29 = *(_QWORD *)(v1 + 40);
  *(__m128i *)(v1 + 24) = v27;
  v30 = v50;
  *(_QWORD *)(v1 + 16) = v26;
  v50 = 0;
  v45 = v28;
  v51 = 0;
  if ( v29 )
  {
    v31 = *(_QWORD *)(v1 + 48);
    if ( v31 )
    {
      for ( j = 0; j != v31; ++j )
      {
        v33 = v29 + 40 * j;
        if ( *(_QWORD *)(v33 + 16) )
        {
          *(_QWORD *)(v33 + 24) = 0;
          qfree();
        }
        qfree();
        v29 = *(_QWORD *)(v1 + 40);
      }
    }
    *(_QWORD *)(v1 + 48) = 0;
    qfree();
    v34 = *(_QWORD *)&v52[13];
    si128 = _mm_load_si128((const __m128i *)v52);
    *(_QWORD *)(v1 + 40) = v30;
    v36 = _mm_load_si128(&v45);
    v37 = v50;
    *(__m128i *)(v1 + 64) = si128;
    *(_QWORD *)(v1 + 77) = v34;
    LOBYTE(v34) = v53;
    *(__m128i *)(v1 + 48) = v36;
    *(_BYTE *)(v1 + 88) = v34;
    if ( v37 )
    {
      v38 = v51.m128i_i64[0];
      if ( v51.m128i_i64[0] )
      {
        v39 = 0;
        do
        {
          v40 = v37 + 40 * v39;
          if ( *(_QWORD *)(v40 + 16) )
          {
            *(_QWORD *)(v40 + 24) = 0;
            qfree();
          }
          ++v39;
          qfree();
          v37 = v50;
        }
        while ( v38 != v39 );
      }
      v51.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v42 = *(_QWORD *)&v52[13];
    v43 = _mm_load_si128((const __m128i *)v52);
    *(_QWORD *)(v1 + 40) = v30;
    v44 = _mm_load_si128(&v45);
    *(__m128i *)(v1 + 64) = v43;
    *(_QWORD *)(v1 + 77) = v42;
    LOBYTE(v42) = v53;
    *(__m128i *)(v1 + 48) = v44;
    *(_BYTE *)(v1 + 88) = v42;
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v54 - __readfsqword(0x28u);
}

