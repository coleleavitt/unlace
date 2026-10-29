__int64 __fastcall sub_BCF0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = a3 >> 3;
  return 1;
}

