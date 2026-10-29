__int64 __fastcall sub_4B60(__int64 a1, __int64 a2, __int16 a3)
{
  ++*(_WORD *)(a2 + 26);
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 4u;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

