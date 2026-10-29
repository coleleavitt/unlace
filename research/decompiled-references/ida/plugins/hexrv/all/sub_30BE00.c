__int64 __fastcall sub_30BE00(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __m128i v4; // xmm1

  result = *(_QWORD *)(a1 + 72);
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v3 = *(_QWORD *)(a1 + 48);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(_QWORD *)(a1 + 48) = result;
  *(_QWORD *)(a1 + 72) = v3;
  *(__m128i *)(a1 + 80) = v4;
  *(__m128i *)(a1 + 56) = v2;
  return result;
}

