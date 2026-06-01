__int64 __fastcall sub_2B340(__int64 a1)
{
  *(_WORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 8;
  sub_2B290(*(void ***)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0;
  return a1 + 40;
}

