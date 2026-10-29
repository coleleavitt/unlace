void __fastcall sub_3360F0(__int64 a1)
{
  __m128 *v1; // rbx
  __m128i v2; // xmm2
  const char *v3; // r13
  const char *v4; // rsi
  const char *v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __m128i v8; // xmm0
  __m128i si128; // xmm3
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11[4]; // [rsp+10h] [rbp-48h] BYREF

  v1 = (__m128 *)a1;
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(const char **)a1;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v11[0] = v2;
  while ( 1 )
  {
    if ( v1[-1].m128_u64[0] )
    {
      v4 = (const char *)v1[-2].m128_u64[1];
      v5 = s1;
      if ( !v2.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_10;
    }
    if ( !v2.m128i_i64[0] )
      break;
    v4 = s1;
LABEL_10:
    v5 = v3;
LABEL_3:
    if ( strcmp(v5, v4) >= 0 )
      break;
    v6 = v1->m128_u64[0];
    v7 = v1[-2].m128_u64[1];
    v8 = (__m128i)_mm_loadh_ps((const double *)&v1[-1].m128_u64[1]);
    v1[-2].m128_u64[1] = 0;
    v1[-1] = 0;
    if ( v6 )
    {
      v1->m128_u64[1] = 0;
      v10 = v8;
      qfree();
      v8 = _mm_load_si128(&v10);
    }
    v1->m128_u64[0] = v7;
    v1 = (__m128 *)((char *)v1 - 24);
    v1[2] = (__m128)v8;
  }
  if ( v1->m128_u64[0] )
  {
    v1->m128_u64[1] = 0;
    qfree();
  }
  si128 = _mm_load_si128(v11);
  v1->m128_u64[0] = (unsigned __int64)v3;
  *(__m128i *)((char *)v1 + 8) = si128;
}

