unsigned __int64 __fastcall sub_1F2F90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r12
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm2
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 i; // r12
  __int64 v16; // r15
  __m128i v17; // xmm3
  __int64 v18; // rdi
  __int64 v19; // rbx
  __m128i v20; // xmm0
  __m128i v21; // xmm4
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 j; // rbx
  __int64 v26; // r12
  __int64 v27; // rax
  __m128i si128; // xmm0
  __m128i v29; // xmm5
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rbp
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm6
  __m128i v38; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v40[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-98h]
  __m128i v42; // [rsp+38h] [rbp-90h] BYREF
  __int64 v43; // [rsp+48h] [rbp-80h]
  __m128i v44; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v45[24]; // [rsp+60h] [rbp-68h] BYREF
  char v46; // [rsp+78h] [rbp-50h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  sub_5FE00(v40, a1);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v41 = v3;
  v6 = *(_QWORD *)(a1 + 40);
  v42 = v4;
  v43 = v6;
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)&v45[16] = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v46 = v7;
  v44 = v5;
  *(__m128i *)v45 = v8;
  sub_606D0((__int64 *)a1, (__int64 *)a2);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v38 = v10;
    qfree();
    v10 = _mm_load_si128(&v38);
  }
  *(__m128i *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = *(_QWORD *)(a2 + 40);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v13 = *(_QWORD *)(a1 + 40);
  v38.m128i_i64[0] = v11;
  v39 = v12;
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = v13 + 40 * i;
        if ( *(_QWORD *)(v16 + 16) )
        {
          *(_QWORD *)(v16 + 24) = 0;
          qfree();
        }
        qfree();
        v13 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree();
  }
  v17 = _mm_load_si128(&v39);
  *(_QWORD *)(a1 + 40) = v38.m128i_i64[0];
  *(__m128i *)(a1 + 48) = v17;
  *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a1 + 77) = *(_QWORD *)(a2 + 77);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  sub_606D0((__int64 *)a2, v40);
  v18 = *(_QWORD *)(a2 + 16);
  v19 = v41;
  v41 = 0;
  v20 = _mm_loadu_si128(&v42);
  v42 = 0;
  if ( v18 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v38 = v20;
    qfree();
    v20 = _mm_load_si128(&v38);
  }
  v21 = _mm_load_si128(&v44);
  v22 = *(_QWORD *)(a2 + 40);
  *(__m128i *)(a2 + 24) = v20;
  v23 = v43;
  *(_QWORD *)(a2 + 16) = v19;
  v43 = 0;
  v38 = v21;
  v44 = 0;
  if ( v22 )
  {
    v24 = *(_QWORD *)(a2 + 48);
    if ( v24 )
    {
      for ( j = 0; j != v24; ++j )
      {
        v26 = v22 + 40 * j;
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
        }
        qfree();
        v22 = *(_QWORD *)(a2 + 40);
      }
    }
    *(_QWORD *)(a2 + 48) = 0;
    qfree();
    v27 = *(_QWORD *)&v45[13];
    si128 = _mm_load_si128((const __m128i *)v45);
    *(_QWORD *)(a2 + 40) = v23;
    v29 = _mm_load_si128(&v38);
    v30 = v43;
    *(__m128i *)(a2 + 64) = si128;
    *(_QWORD *)(a2 + 77) = v27;
    LOBYTE(v27) = v46;
    *(__m128i *)(a2 + 48) = v29;
    *(_BYTE *)(a2 + 88) = v27;
    if ( v30 )
    {
      v31 = v44.m128i_i64[0];
      if ( v44.m128i_i64[0] )
      {
        v32 = 0;
        do
        {
          v33 = v30 + 40 * v32;
          if ( *(_QWORD *)(v33 + 16) )
          {
            *(_QWORD *)(v33 + 24) = 0;
            qfree();
          }
          ++v32;
          qfree();
          v30 = v43;
        }
        while ( v31 != v32 );
      }
      v44.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v35 = *(_QWORD *)&v45[13];
    v36 = _mm_load_si128((const __m128i *)v45);
    *(_QWORD *)(a2 + 40) = v23;
    v37 = _mm_load_si128(&v38);
    *(__m128i *)(a2 + 64) = v36;
    *(_QWORD *)(a2 + 77) = v35;
    LOBYTE(v35) = v46;
    *(__m128i *)(a2 + 48) = v37;
    *(_BYTE *)(a2 + 88) = v35;
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v47 - __readfsqword(0x28u);
}

