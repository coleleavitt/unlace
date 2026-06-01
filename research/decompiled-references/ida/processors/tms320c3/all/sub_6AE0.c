__int64 __fastcall sub_6AE0(__int64 a1, char a2)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = a2 & 7;
  return 1;
}

