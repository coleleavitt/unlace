__int64 __fastcall sub_6A00(__int64 a1, int a2)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 3) & 0x1F;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (a2 & 7) + 8;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
  *(_QWORD *)(a1 + 8) += 40LL;
  return 1;
}

