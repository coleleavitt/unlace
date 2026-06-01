__int64 (__fastcall **__fastcall sub_3DF1D0(__int64 a1))()
{
  __m128i v1; // xmm0
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  __int64 (__fastcall **result)(); // rax

  v1 = _mm_loadl_epi64((const __m128i *)off_4D69F8);
  *(_QWORD *)a1 = off_4D6870;
  *(_QWORD *)(a1 + 32) = off_4D68D0;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_4D69A8);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4D6A00),
                             (__m128i)(unsigned __int64)&off_4D69D8);
  if ( *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree();
  }
  v3 = *(_QWORD *)(a1 + 248);
  v4 = _mm_loadl_epi64((const __m128i *)off_4D6A08);
  *(_QWORD *)a1 = &unk_4D9920;
  *(_QWORD *)(a1 + 32) = &unk_4D9958;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_4D9A30);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4D6A10),
                             (__m128i)(unsigned __int64)&off_4D9A60);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 256);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = v3 + 32 * i;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
  }
  v8 = (_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 32) = &unk_4D8D28;
  do
  {
    if ( *v8 )
    {
      v8[1] = 0;
      qfree();
    }
    v8 -= 3;
  }
  while ( (_QWORD *)(a1 + 88) != v8 );
  v9 = *(_QWORD *)(a1 + 8);
  result = &off_4D4688;
  *(_QWORD *)a1 = &off_4D4688;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

