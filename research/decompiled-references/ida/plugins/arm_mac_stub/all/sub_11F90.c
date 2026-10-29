__int64 __fastcall sub_11F90(__int64 a1, __int64 a2)
{
  *(__m128i *)*(_QWORD *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_BYTE *)(a1 + 16) = 1;
  return 0;
}

