__int64 __fastcall sub_727F0(const __m128i *a1)
{
  __m128i *v1; // rdx
  __int64 (*v2)(void); // rax
  __int64 result; // rax
  __int64 v4; // rax

  v1 = (__m128i *)a1[54].m128i_i64[0];
  if ( (a1[3].m128i_i8[0] & 0xF) == 0xE
    && a1[2].m128i_i16[4] == 23
    && a1[3].m128i_i8[9] == 1
    && a1[3].m128i_i16[7] == 15
    && a1[6].m128i_i8[1] == 1 )
  {
    *v1 = _mm_loadu_si128(a1 + 6);
    v1[1] = _mm_loadu_si128(a1 + 7);
    v1[2].m128i_i32[0] = a1[8].m128i_i32[0];
    return 1;
  }
  v1->m128i_i8[1] = 1;
  *(_WORD *)(a1[54].m128i_i64[0] + 6) = 15;
  *(_BYTE *)(a1[54].m128i_i64[0] + 5) = 2;
  v2 = *(__int64 (**)(void))(a1->m128i_i64[0] + 48);
  if ( (char *)v2 == (char *)sub_727C0 )
    result = sub_72510((__int64)a1);
  else
    result = v2();
  if ( (_BYTE)result )
  {
    v4 = a1[2].m128i_i64[0];
    a1[32].m128i_i8[1] = 1;
    a1[24].m128i_i64[1] = v4;
    return 1;
  }
  return result;
}
