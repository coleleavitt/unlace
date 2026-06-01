__int64 __fastcall sub_78E0(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(a2 + 30) |= *((_BYTE *)qword_F470 + (a3 & 0xF));
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 8;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

