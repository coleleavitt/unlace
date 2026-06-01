__int64 __fastcall sub_62A0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __m128i v7; // xmm0
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-38h] BYREF
  __m128i v17; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  if ( a2[1].m128i_i32[0] == 5 )
  {
    v7 = _mm_loadu_si128(a2);
    v8 = *(unsigned __int64 **)(a1 + 8);
    v9 = v8[1];
    v10 = *v8;
    v11 = v8[2];
    v12 = v9 + 1;
    v13 = _mm_unpacklo_epi64(v7, _mm_add_epi64(_mm_srli_si128(v7, 8), v7));
    v17 = v13;
    if ( (unsigned __int64)&v17 < v10 || (a5 = v10 + 16 * v11, (unsigned __int64)&v17 >= a5) )
    {
      if ( v11 < v12 )
      {
        v14 = qvector_reserve(
                v8,
                v10,
                v9 + 1,
                16,
                a5,
                a6,
                v16.m128i_i64[0],
                v16.m128i_i64[1],
                v17.m128i_i64[0],
                v17.m128i_i64[1]);
        v9 = v8[1];
        *v8 = v14;
        v10 = v14;
      }
      *(__m128i *)(v10 + 16 * v9) = _mm_load_si128(&v17);
    }
    else
    {
      if ( v11 < v12 )
      {
        v15 = qvector_reserve(
                v8,
                v10,
                v9 + 1,
                16,
                a5,
                a6,
                v13.m128i_i64[0],
                v13.m128i_i64[1],
                v17.m128i_i64[0],
                v17.m128i_i64[1]);
        v9 = v8[1];
        v13 = _mm_load_si128(&v16);
        *v8 = v15;
        v10 = v15;
      }
      *(__m128i *)(v10 + 16 * v9) = v13;
    }
    ++v8[1];
  }
  return 0;
}
