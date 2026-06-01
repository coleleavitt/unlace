__int64 __fastcall sub_7C60(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = a3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

