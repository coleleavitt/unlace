__int64 __fastcall sub_2901F0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  int v5; // eax
  __int16 v7; // r14
  int tinfo_size; // eax

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    if ( v5 != 61 )
      return 0;
    v5 = *(_DWORD *)(v3 + 8);
    v3 = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 24);
  }
  if ( v5 != 48 )
    return 0;
  v7 = sub_285970(v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(double *)a3.m128_u64);
  if ( 8 * get_tinfo_size() < (unsigned __int64)v7 )
    return 0;
  tinfo_size = get_tinfo_size();
  return sub_290080(a1, (__int64)"CAST-1", a2, v3, (__int64 *)v4, 8 * tinfo_size == v7, a3);
}

