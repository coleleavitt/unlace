__int64 __fastcall sub_C330(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (a3 & 4) == 0 ? 3 : 1;
  return 1;
}

