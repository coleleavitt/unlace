__int64 __fastcall sub_3B81B0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  v12 = *(_DWORD *)(v11 + 8);
  if ( v12 == 3 )
    return (unsigned __int8)sub_391820(a2, *(_QWORD *)(v11 + 16));
  if ( v12 <= 3 )
  {
    if ( v12 == 1 )
      return (unsigned __int8)sub_3935C0(a2, *(_QWORD *)(v11 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
    if ( v12 == 2 )
      return (unsigned __int8)sub_3909B0(a2, v11 + 32, *(_DWORD *)(v11 + 16));
    return 0;
  }
  if ( v12 != 5 )
    return 0;
  sub_3860B0(a2);
  v14 = sub_3BF8B0(*(_QWORD *)(a2 + 24) + 1312LL);
  result = 0;
  if ( v14 )
    return (unsigned __int8)sub_3B7B00(*(_QWORD *)(a1 + 16), a2, 0, v15, v16, v17);
  return result;
}

