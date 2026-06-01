void __fastcall sub_48B80(__m128i *a1, __m128i *a2)
{
  __m128i *v3; // r14
  unsigned __int64 v4; // rax
  __int64 m128i_i64; // rdi
  __m128i *v6; // r12
  __int64 v7; // rdi
  __m128i v8; // xmm5
  __m128 v9; // xmm3
  __m128i *v10; // r15
  __int64 v11; // rax
  __m128i v12; // xmm6
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // r13
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // r13
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rdi
  __m128i v24; // xmm5
  __int64 v25; // rdi
  __m128i si128; // xmm6
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v29; // [rsp+18h] [rbp-90h]
  __int64 v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  __m128i v32; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int16 v34; // [rsp+4Eh] [rbp-5Ah]
  __m128i v35; // [rsp+50h] [rbp-58h] BYREF
  __m128i v36[4]; // [rsp+60h] [rbp-48h] BYREF

  v29 = a2;
  if ( a1 != a2 && a2 != &a1[5] )
  {
    v3 = a1 + 10;
    do
    {
      while ( 1 )
      {
        v4 = v3[-5].m128i_u64[0];
        m128i_i64 = (__int64)v3[-5].m128i_i64;
        v6 = v3;
        if ( a1->m128i_i64[0] >= v4
          && (v4 != a1->m128i_i64[0] || v3[-5].m128i_i64[1] < (unsigned __int64)a1->m128i_i64[1]) )
        {
          break;
        }
        sub_48970(m128i_i64);
        v3 += 5;
        if ( v29 == v6 )
          return;
      }
      v7 = m128i_i64 - (_QWORD)a1;
      v8 = _mm_loadu_si128((__m128i *)((char *)v3 - 56));
      v9 = _mm_loadh_ps((const double *)&v3[-5].m128i_i64[1]);
      v10 = v3;
      v30 = v3[-4].m128i_i64[0];
      v11 = v3[-3].m128i_i64[1];
      v12 = _mm_loadu_si128(v3 - 2);
      v3[-4].m128i_i64[0] = 0;
      v31 = v11;
      v13 = v3[-1].m128i_i64[0];
      v3[-3].m128i_i64[1] = 0;
      v33 = v13;
      LOWORD(v13) = v3[-1].m128i_i16[4];
      v35 = (__m128i)v9;
      v34 = v13;
      v14 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 4);
      v32 = v8;
      *(__m128i *)((char *)&v3[-4] + 8) = 0;
      v36[0] = v12;
      v3[-2] = 0;
      if ( v7 > 0 )
      {
        do
        {
          v15 = v10[-4].m128i_i64[0];
          v10 -= 5;
          v16 = _mm_loadu_si128(v10 - 5);
          v17 = v10[-4].m128i_i64[0];
          v10[-4].m128i_i64[0] = 0;
          *v10 = v16;
          v18 = _mm_loadu_si128((__m128i *)((char *)v10 - 56));
          *(__m128i *)((char *)&v10[-4] + 8) = 0;
          if ( v15 )
          {
            v10[1].m128i_i64[1] = 0;
            v28 = v18;
            qfree();
            v18 = _mm_load_si128(&v28);
          }
          v19 = v10[2].m128i_i64[1];
          v10[1].m128i_i64[0] = v17;
          *(__m128i *)((char *)v10 + 24) = v18;
          v20 = v10[-3].m128i_i64[1];
          v21 = _mm_loadu_si128(v10 - 2);
          v10[-3].m128i_i64[1] = 0;
          v10[-2] = 0;
          if ( v19 )
          {
            v10[3].m128i_i64[0] = 0;
            v28 = v21;
            qfree();
            v21 = _mm_load_si128(&v28);
          }
          v22 = v10[-1].m128i_i64[0];
          v10[2].m128i_i64[1] = v20;
          v10[3] = v21;
          v10[4].m128i_i64[0] = v22;
          v10[4].m128i_i8[8] = v10[-1].m128i_i8[8];
          v10[4].m128i_i8[9] = v10[-1].m128i_i8[9];
          --v14;
        }
        while ( v14 );
      }
      v23 = a1[1].m128i_i64[0];
      *a1 = _mm_load_si128(&v35);
      if ( v23 )
      {
        a1[1].m128i_i64[1] = 0;
        qfree();
      }
      v24 = _mm_load_si128(&v32);
      v25 = a1[2].m128i_i64[1];
      a1[1].m128i_i64[0] = v30;
      *(__m128i *)((char *)a1 + 24) = v24;
      if ( v25 )
      {
        a1[3].m128i_i64[0] = 0;
        qfree();
      }
      si128 = _mm_load_si128(v36);
      v3 += 5;
      a1[2].m128i_i64[1] = v31;
      v27 = v33;
      a1[3] = si128;
      a1[4].m128i_i64[0] = v27;
      a1[4].m128i_i16[4] = v34;
    }
    while ( v29 != v6 );
  }
}

