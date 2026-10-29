__int64 __fastcall sub_3780(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 1LL) = 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 5LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 184) + 6LL) = (a3 >> 3) & 3;
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = a3 & 7;
  *(_QWORD *)(a1 + 184) += 40LL;
  return 1;
}

