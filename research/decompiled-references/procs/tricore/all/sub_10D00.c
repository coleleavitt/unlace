__int64 __fastcall sub_10D00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v9; // rax

  v6 = (__m128i *)*a1;
  if ( (unsigned __int64)a1[2] <= 0x14 )
  {
    v9 = qvector_reserve(a1, v6, 21, 1, a5, a6);
    *a1 = v9;
    v6 = (__m128i *)v9;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_15FF0);
  a1[1] = 21;
  v6[1].m128i_i32[0] = 151136521;
  *v6 = si128;
  result = *a1;
  *(_BYTE *)(*a1 + 20) = 0;
  return result;
}
