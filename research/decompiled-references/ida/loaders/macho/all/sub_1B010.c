__int64 __fastcall sub_1B010(__int64 a1, __m128i *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  const __m128i *v5; // rax
  __m128i v6; // xmm0

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[4] = 0;
  if ( a3 )
  {
    v3 = a3 - 1;
    result = 0;
    if ( v3 < *(_QWORD *)(a1 + 256) )
    {
      v5 = (const __m128i *)(*(_QWORD *)(a1 + 248) + 80 * v3);
      *a2 = _mm_loadu_si128(v5);
      a2[1] = _mm_loadu_si128(v5 + 1);
      a2[2] = _mm_loadu_si128(v5 + 2);
      a2[3] = _mm_loadu_si128(v5 + 3);
      v6 = _mm_loadu_si128(v5 + 4);
      a2[4] = v6;
      return 1;
    }
  }
  else
  {
    qstrncpy();
    return 1;
  }
  return result;
}

