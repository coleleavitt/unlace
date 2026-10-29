__int64 __fastcall sub_C0D0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 2u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3;
  return 1;
}

