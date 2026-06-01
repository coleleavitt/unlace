__int64 __fastcall sub_FF00(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  const __m128i *v4; // rax
  __int64 result; // rax

  if ( (_DWORD)result )
  {
    v4 = (const __m128i *)(a4 + 40LL * (int)result);
    *a3 = _mm_loadu_si128(v4);
    a3[1] = _mm_loadu_si128(v4 + 1);
    result = v4[2].m128i_u32[0];
    a3[2].m128i_i32[0] = result;
  }
  a3[2].m128i_i8[2] |= 0x80u;
  return result;
}

