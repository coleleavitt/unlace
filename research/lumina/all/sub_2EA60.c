__int64 __fastcall sub_2EA60(__int64 a1, __int64 *a2)
{
  __m128i *v3; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v6; // rax

  v3 = (__m128i *)*a2;
  if ( (unsigned __int64)a2[2] <= 0x28 )
  {
    v6 = sub_1987B0(a2, v3, 41, 1);
    *a2 = v6;
    v3 = (__m128i *)v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B68F0);
  a2[1] = 41;
  v3[2].m128i_i64[0] = 0x293F28205345554CLL;
  *v3 = si128;
  v3[1] = _mm_load_si128((const __m128i *)&xmmword_1B6900);
  result = *a2;
  *(_BYTE *)(*a2 + 40) = 0;
  return result;
}
