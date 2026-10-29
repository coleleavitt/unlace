unsigned __int64 __fastcall sub_2B80(__int64 a1)
{
  __int64 v1; // rbx
  __m128i v2; // xmm0
  __m128i v3; // xmm2
  __int64 v4; // r12
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // rbp
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __m128i v11; // xmm3
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __m128i v14; // [rsp+10h] [rbp-68h] BYREF
  __m128i s1; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __m128i v17; // [rsp+38h] [rbp-40h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v1 = a1 - 40;
  v2 = _mm_loadu_si128((const __m128i *)a1);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  s1 = v2;
  v16 = v4;
  v14 = v3;
  v17 = v3;
  *(_OWORD *)(a1 + 24) = 0;
  while ( memcmp(&s1, (const void *)v1, 0x10u) < 0 )
  {
    v5 = _mm_loadu_si128((const __m128i *)v1);
    v6 = *(_QWORD *)(v1 + 56);
    v7 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    *(__m128i *)(v1 + 40) = v5;
    v8 = _mm_loadu_si128((const __m128i *)(v1 + 24));
    *(_OWORD *)(v1 + 24) = 0;
    if ( v6 )
    {
      *(_QWORD *)(v1 + 64) = 0;
      v13 = v8;
      qfree();
      v8 = _mm_load_si128(&v13);
    }
    *(_QWORD *)(v1 + 56) = v7;
    v1 -= 40;
    *(__m128i *)(v1 + 104) = v8;
  }
  v9 = _mm_load_si128(&s1);
  v16 = 0;
  *(__m128i *)(v1 + 40) = v9;
  v10 = *(_QWORD *)(v1 + 56);
  v17 = 0;
  if ( v10 )
  {
    *(_QWORD *)(v1 + 64) = 0;
    qfree();
  }
  v11 = _mm_load_si128(&v14);
  *(_QWORD *)(v1 + 56) = v4;
  *(__m128i *)(v1 + 64) = v11;
  return v18 - __readfsqword(0x28u);
}

