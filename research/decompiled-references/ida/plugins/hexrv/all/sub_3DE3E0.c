__int64 __fastcall sub_3DE3E0(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi

  *(_QWORD *)(a1 - 32) = off_4BC190;
  v2 = _mm_loadl_epi64((const __m128i *)off_4BC318);
  *(_QWORD *)a1 = off_4BC1F0;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_4BC2C8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BC320),
                             (__m128i)(unsigned __int64)&off_4BC2F8);
  if ( *(_QWORD *)(a1 + 240) )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
  }
  v3 = *(_QWORD *)(a1 + 216);
  v4 = _mm_loadl_epi64((const __m128i *)off_4BC328);
  *(_QWORD *)(a1 - 32) = &unk_4BE8D8;
  *(_QWORD *)a1 = &unk_4BE910;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_4BE9E8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BC330),
                             (__m128i)(unsigned __int64)&off_4BEA18);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = v3 + 32 * i;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 216);
        }
      }
    }
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
  }
  v8 = a1 + 176;
  *(_QWORD *)a1 = &unk_4BDC88;
  do
  {
    v9 = *(_QWORD *)(v8 - 24);
    v8 -= 24;
    if ( v9 )
    {
      *(_QWORD *)(v8 + 8) = 0;
      qfree();
    }
  }
  while ( v8 != a1 + 80 );
  v10 = *(_QWORD *)(a1 - 24);
  *(_QWORD *)(a1 - 32) = &off_4B9FA8;
  if ( v10 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    qfree();
  }
  return qfree();
}

