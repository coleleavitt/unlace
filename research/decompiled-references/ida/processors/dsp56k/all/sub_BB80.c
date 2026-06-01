__int64 __fastcall sub_BB80(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = ((a3 & 8) == 0 ? 0xFFF8 : 0) + (a3 & 0xF) + 26;
  return 1;
}

