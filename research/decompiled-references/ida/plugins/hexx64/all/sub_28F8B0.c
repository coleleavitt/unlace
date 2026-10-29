__int64 __fastcall sub_28F8B0(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // eax

  if ( *(_DWORD *)(a2 + 8) != 20 )
    return 0;
  LOBYTE(v5) = sub_2845A0(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8),
                 a2,
                 *(double *)a3.m128_u64);
  v3 = v5;
  if ( !(_BYTE)v5
    || *(_DWORD *)(sub_254FC0(*(_QWORD *)(a2 + 24)) + 8) == 20
    || *(_DWORD *)(sub_254FC0(*(_QWORD *)(a2 + 32)) + 8) == 20 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 23;
    sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
      *(_DWORD *)(a1 + 8) |= 8u;
  }
  return v3;
}

