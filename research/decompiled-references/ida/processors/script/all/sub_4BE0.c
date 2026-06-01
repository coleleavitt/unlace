__int64 __fastcall sub_4BE0(__int64 a1, _BYTE *a2, __int64 *a3)
{
  __int64 result; // rax
  __m128i *v5; // rsi
  __m128i si128; // xmm0
  __m128i *v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax

  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(qword_8198 + 112))(a2, a1);
  if ( (_BYTE)result )
  {
    if ( *a2 == 5 )
      return result;
    v5 = (__m128i *)*a3;
    if ( (unsigned __int64)a3[2] <= 0x18 )
    {
      v9 = qvector_reserve();
      *a3 = v9;
      v5 = (__m128i *)v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5590);
    a3[1] = 25;
    v5[1].m128i_i64[0] = 0x217463656A626F20LL;
    *v5 = si128;
    *(_BYTE *)(*a3 + 24) = 0;
  }
  if ( (unsigned __int64)a3[1] > 1 )
    return 0;
  v7 = (__m128i *)*a3;
  if ( (unsigned __int64)a3[2] <= 0x21 )
  {
    v10 = qvector_reserve();
    *a3 = v10;
    v7 = (__m128i *)v10;
  }
  v8 = _mm_load_si128((const __m128i *)&xmmword_55A0);
  a3[1] = 34;
  v7[2].m128i_i8[0] = 116;
  *v7 = v8;
  v7[1] = _mm_load_si128((const __m128i *)&xmmword_55B0);
  *(_BYTE *)(*a3 + 33) = 0;
  return 0;
}

