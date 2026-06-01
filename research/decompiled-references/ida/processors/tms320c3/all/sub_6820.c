__int64 __fastcall sub_6820(__int64 a1, unsigned __int8 a2)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 5;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a2;
  return 1;
}

