__int64 __fastcall sub_296400(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi

  if ( sub_259AA0(a2, *(_QWORD *)(a1 + 72), *(double *)a3.m128_u64) )
    return 0;
  sub_25AFF0(a2, *(_QWORD *)(a1 + 80), *(double *)a3.m128_u64);
  v5 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 8) |= 1u;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5 - 8);
  if ( !v6 || *(int *)(v6 + 8) > 69 )
    return 0;
  sub_281F10(v6, *(_QWORD *)(a1 + 64), 0, 0, a3);
  return 0;
}

