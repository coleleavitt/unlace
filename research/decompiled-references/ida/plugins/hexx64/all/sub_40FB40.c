__int64 __fastcall sub_40FB40(_QWORD *a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  int v5; // eax

  v5 = sub_40FAA0(a1, *(double *)a3.m128i_i64, a4);
  if ( v5 <= 0 )
    return 4294967294LL;
  sub_1D6740(
    (__int64)a1,
    15,
    5 * (unsigned int)((*(_BYTE *)(a2 + 16) & 0xF) != 4) + 2,
    *(_DWORD *)(a1[104] + 492LL) + *(_DWORD *)(a1[104] + 448LL) * (8 - v5),
    8,
    *(_DWORD *)(a2 + 32),
    a3,
    a4,
    a5);
  return 0;
}

