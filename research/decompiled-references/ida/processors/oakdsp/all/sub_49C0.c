__int64 __fastcall sub_49C0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = a3;
  if ( *(_WORD *)(a2 + 24) == 56 )
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

