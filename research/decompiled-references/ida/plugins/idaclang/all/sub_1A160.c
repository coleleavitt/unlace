__int64 __fastcall sub_1A160(
        __int64 a1,
        double a2,
        __m128i a3,
        __m128i a4,
        __m128i a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // xmm0

  v12 = sub_BB20();
  if ( (unsigned int)sub_A170(v12) - 16 > 1 )
    return 1;
  v17 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  return (unsigned __int8)sub_19780(
                            *(_QWORD *)(a1 + 8),
                            *(const char **)a1,
                            1,
                            v13,
                            v14,
                            v15,
                            *(double *)&v17,
                            a3,
                            a4,
                            a5,
                            (__int128)_mm_loadu_si128((const __m128i *)&a11),
                            v17);
}

