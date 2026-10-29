__int64 __fastcall sub_3800(__int64 a1, __int64 a2, __int16 a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 1LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 5LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 184) + 6LL) = a3;
  *(_QWORD *)(a1 + 184) += 40LL;
  return 1;
}

