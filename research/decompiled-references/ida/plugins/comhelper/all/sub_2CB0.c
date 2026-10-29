unsigned __int64 __fastcall sub_2CB0(__m128i *s2, __m128i *a2)
{
  const __m128i *v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  unsigned __int64 v10; // r15
  __int128 v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __m128i v17; // xmm3
  __m128i v18; // [rsp+0h] [rbp-98h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  __m128i v20; // [rsp+20h] [rbp-78h] BYREF
  __m128i v21[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( s2 != a2 )
  {
    v3 = (__m128i *)((char *)s2 + 40);
    while ( a2 != v3 )
    {
      while ( 1 )
      {
        v4 = (__int64)v3;
        v5 = memcmp(v3, s2, 0x10u);
        v3 = (const __m128i *)((char *)v3 + 40);
        if ( v5 < 0 )
          break;
        sub_2B80(v4);
        if ( a2 == v3 )
          return v22 - __readfsqword(0x28u);
      }
      v7 = v3[-2].m128i_i64[1];
      v8 = _mm_loadu_si128((const __m128i *)((char *)v3 - 40));
      v9 = _mm_loadu_si128(v3 - 1);
      v3[-2].m128i_i64[1] = 0;
      v19 = v7;
      v21[0] = v8;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((v4 - (__int64)s2) >> 3);
      v20 = v9;
      v11 = 0;
      v3[-1] = 0;
      if ( v4 - (__int64)s2 > 0 )
      {
        do
        {
          v12 = _mm_loadu_si128((const __m128i *)(v4 - 40));
          v13 = *(_QWORD *)(v4 + 16);
          v4 -= 40;
          v14 = *(_QWORD *)(v4 + 16);
          *(_QWORD *)(v4 + 16) = 0;
          *(__m128i *)(v4 + 40) = v12;
          v15 = _mm_loadu_si128((const __m128i *)(v4 + 24));
          *(_OWORD *)(v4 + 24) = v11;
          if ( v13 )
          {
            *(_QWORD *)(v4 + 64) = 0;
            v18 = v15;
            qfree();
            v15 = _mm_load_si128(&v18);
            v11 = 0;
          }
          *(_QWORD *)(v4 + 56) = v14;
          *(__m128i *)(v4 + 64) = v15;
          --v10;
        }
        while ( v10 );
      }
      v16 = s2[1].m128i_i64[0];
      *s2 = _mm_load_si128(v21);
      if ( v16 )
      {
        s2[1].m128i_i64[1] = 0;
        qfree();
      }
      v17 = _mm_load_si128(&v20);
      s2[1].m128i_i64[0] = v19;
      *(__m128i *)((char *)s2 + 24) = v17;
    }
  }
  return v22 - __readfsqword(0x28u);
}

