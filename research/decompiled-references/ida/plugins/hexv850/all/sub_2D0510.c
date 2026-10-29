__m128i *__fastcall sub_2D0510(__int64 a1, __int64 a2, __m128i *a3, unsigned __int64 a4)
{
  __m128i v4; // xmm1
  __m128i *v6; // rbx
  char v7; // al
  __m128i *v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  __m128 v11; // [rsp+8h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-20h]

  v4 = (__m128i)a4;
  v12 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 24);
  if ( !v6 )
  {
    v10 = a4;
    v9 = (__m128i *)qalloc();
    v6 = v9;
    if ( !v9 )
      sub_4E402(16);
    v9->m128i_i64[0] = 0;
    v4 = _mm_loadl_epi64((const __m128i *)&v10);
    v9->m128i_i64[1] = 0;
  }
  v11 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(a3), v4);
  v7 = sub_2CF600(v6, (char **)&v11, nullptr, v11);
  a3->m128i_i64[0] = v11.m128_u64[0];
  if ( !v7 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      return nullptr;
    }
    else
    {
      sub_2B71A0(v6->m128i_i64);
      v6 = nullptr;
      qfree();
    }
  }
  return v6;
}

