__int64 __fastcall sub_C2F0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 >> 8) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = ((a3 & 0x400) == 0) + 1;
  return 1;
}

