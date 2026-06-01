__int64 __fastcall sub_F840(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  _BYTE *v4; // rsi
  __int64 result; // rax
  const __m128i *v6; // rax

  v4 = (_BYTE *)(a4 + 41);
  result = 0;
  while ( *v4 )
  {
    result = (unsigned int)(result + 1);
    v4 += 40;
    if ( (_DWORD)result == 6 )
      goto LABEL_4;
  }
  if ( (_DWORD)result )
  {
LABEL_4:
    v6 = (const __m128i *)(a4 + 40LL * (int)result);
    *a3 = _mm_loadu_si128(v6);
    a3[1] = _mm_loadu_si128(v6 + 1);
    result = v6[2].m128i_u32[0];
    a3[1].m128i_i32[2] = 393218;
    a3[2].m128i_i32[0] = result;
    return result;
  }
  a3[1].m128i_i32[2] = 393218;
  return result;
}

