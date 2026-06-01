__int64 __fastcall sub_3FD30(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5, __m128 a6)
{
  if ( *(_BYTE *)a2 == 4 )
    *(_BYTE *)(a1 + 56) |= sub_3E760(*(_QWORD *)(a1 + 48), *(__m128i **)(a2 + 8), a3, a4, a5, a6);
  return 0;
}

