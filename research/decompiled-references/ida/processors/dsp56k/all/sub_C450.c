__int64 __fastcall sub_C450(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (a3 & 8) == 0 ? 1 : 7;
  return 1;
}

