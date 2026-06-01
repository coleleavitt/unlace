__int64 __fastcall sub_4E40(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 8;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 0xF;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
  return 1;
}

