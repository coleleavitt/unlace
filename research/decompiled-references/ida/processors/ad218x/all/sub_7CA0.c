__int64 __fastcall sub_7CA0(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = 16 * a3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

