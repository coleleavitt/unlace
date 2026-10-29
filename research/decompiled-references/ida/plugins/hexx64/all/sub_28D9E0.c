__int64 __fastcall sub_28D9E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rsi

  v4 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v4 + 8) - 22) > 9 )
    return 0;
  sub_255850((__int64 *)a2, v4, *(double *)a3.m128_u64);
  *(_DWORD *)(a2 + 8) = sub_254C70(*(_DWORD *)(a2 + 8));
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

