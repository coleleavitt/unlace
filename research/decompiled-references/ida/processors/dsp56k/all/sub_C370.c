__int64 __fastcall sub_C370(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 >> 1) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = ((4 * (_BYTE)a3) & 4) == 0 ? 3 : 1;
  return 1;
}

