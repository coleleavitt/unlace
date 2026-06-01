__int64 __fastcall sub_1240(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __m128i *v5; // rsi
  __m128i si128; // xmm0
  __int64 v7; // rax
  __int16 v8; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v3 = qlread(a3, &v8, 2);
  result = 0;
  if ( v3 == 2 && v8 == 5257 )
  {
    v5 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x20 )
    {
      v7 = qvector_reserve(a1, v5, 33, 1);
      *a1 = v7;
      v5 = (__m128i *)v7;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2340);
    a1[1] = 33;
    *v5 = si128;
    v5[1] = _mm_load_si128((const __m128i *)&xmmword_2350);
    *(_BYTE *)(*a1 + 32) = 0;
    return 1;
  }
  return result;
}

