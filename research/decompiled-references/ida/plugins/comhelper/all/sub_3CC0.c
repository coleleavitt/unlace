unsigned __int64 __fastcall sub_3CC0(char *s2, _BYTE *s1, unsigned __int64 a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  char *v7; // r13
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // r15
  __m128i v17; // xmm1
  __m128i si128; // xmm1
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v22[3]; // [rsp+20h] [rbp-98h] BYREF
  __m128i v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h]
  __m128i v25; // [rsp+68h] [rbp-50h]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v3 = s1;
  v26 = __readfsqword(0x28u);
  v21.m128i_i64[0] = s1 - s2;
  if ( s1 - s2 > 40 )
  {
    v5 = 0xCCCCCCCCCCCCCCCDLL * ((s1 - s2) >> 3);
    v6 = (v5 - 2) / 2;
    v7 = &s2[40 * v6];
    v20.m128i_i64[0] = (__int64)&v23;
    while ( 1 )
    {
      v8 = *((_QWORD *)v7 + 2);
      v9 = _mm_loadu_si128((const __m128i *)v7);
      *((_QWORD *)v7 + 2) = 0;
      v10 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      v11 = v20.m128i_i64[0];
      v24 = v8;
      *(_OWORD *)(v7 + 24) = 0;
      v22[0] = v9;
      v23 = v9;
      v25 = v10;
      sub_2E30((__int64)s2, v6, v5, v11);
      if ( v24 )
        qfree();
      v7 -= 40;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( (unsigned __int64)s1 < a3 )
  {
    v12 = 0xCCCCCCCCCCCCCCCDLL * (v21.m128i_i64[0] >> 3);
    do
    {
      while ( 1 )
      {
        if ( memcmp(v3, s2, 0x10u) < 0 )
        {
          v13 = _mm_loadu_si128((const __m128i *)v3);
          v14 = *((_QWORD *)v3 + 2);
          *((_QWORD *)v3 + 2) = 0;
          v22[0] = v13;
          v15 = _mm_loadu_si128((const __m128i *)(v3 + 24));
          *(_OWORD *)(v3 + 24) = 0;
          *(__m128i *)v3 = _mm_loadu_si128((const __m128i *)s2);
          v16 = *((_QWORD *)s2 + 2);
          v17 = _mm_loadu_si128((const __m128i *)(s2 + 24));
          *((_QWORD *)s2 + 2) = 0;
          *(_OWORD *)(s2 + 24) = 0;
          if ( *((_QWORD *)v3 + 2) )
          {
            *((_QWORD *)v3 + 3) = 0;
            v21 = v15;
            v20 = v17;
            qfree();
            v15 = _mm_load_si128(&v21);
            v17 = _mm_load_si128(&v20);
          }
          *((_QWORD *)v3 + 2) = v16;
          *(__m128i *)(v3 + 24) = v17;
          si128 = _mm_load_si128(v22);
          v24 = v14;
          v23 = si128;
          v25 = v15;
          sub_2E30((__int64)s2, 0, v12, (__int64)&v23);
          if ( v24 )
            break;
        }
        v3 += 40;
        if ( (unsigned __int64)v3 >= a3 )
          return v26 - __readfsqword(0x28u);
      }
      qfree();
      v3 += 40;
    }
    while ( (unsigned __int64)v3 < a3 );
  }
  return v26 - __readfsqword(0x28u);
}

