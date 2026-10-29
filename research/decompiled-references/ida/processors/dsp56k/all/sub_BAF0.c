__int64 __fastcall sub_BAF0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 == 0 ? 6 : 10;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

