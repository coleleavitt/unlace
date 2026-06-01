__int64 __fastcall sub_C3B0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = (a3 >> 3) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (((_BYTE)v3 + 4 * (_BYTE)a3) & 4) == 0 ? 3 : 1;
  return 1;
}

