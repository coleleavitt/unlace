__int64 __fastcall sub_3A33D0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __m128i si128; // xmm0
  __int64 result; // rax
  __m128i v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a2;
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = 0;
  *(_OWORD *)(a2 + 1) = 0;
  if ( *a1 )
  {
    a1[1] = 0;
    v5[0] = si128;
    result = qfree();
    si128 = _mm_load_si128(v5);
  }
  *a1 = v2;
  *(__m128i *)(a1 + 1) = si128;
  return result;
}

