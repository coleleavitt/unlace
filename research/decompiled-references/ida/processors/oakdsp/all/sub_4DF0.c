__int64 __fastcall sub_4DF0(__int64 a1, __int64 a2, __int16 a3, __int16 a4)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 + a4;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 4;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

