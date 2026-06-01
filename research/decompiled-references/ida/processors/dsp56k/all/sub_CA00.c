__int64 __fastcall sub_CA00(__int64 a1, __int64 a2, __int16 a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 4;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

