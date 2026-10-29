__int64 __fastcall sub_3DD5E0(__int64 a1)
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

  *(_QWORD *)(a1 - 32) = off_4BD0F0;
  v2 = _mm_loadl_epi64((const __m128i *)off_4BD278);
  *(_QWORD *)a1 = off_4BD150;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_4BD228);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BD280),
                             (__m128i)(unsigned __int64)&off_4BD258);
  if ( *(_QWORD *)(a1 + 240) )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
  }
  v3 = *(_QWORD *)(a1 + 216);
  v4 = _mm_loadl_epi64((const __m128i *)off_4BD288);
  *(_QWORD *)(a1 - 32) = &unk_4BF8D8;
  *(_QWORD *)a1 = &unk_4BF910;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_4BF9E8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BD290),
                             (__m128i)(unsigned __int64)&off_4BFA18);
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
  *(_QWORD *)a1 = &unk_4BEC88;
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
  *(_QWORD *)(a1 - 32) = &off_4BAF08;
  if ( v10 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    qfree();
  }
  return qfree();
}

