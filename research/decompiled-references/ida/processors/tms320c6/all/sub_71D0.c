__int64 __fastcall sub_71D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 2;
  *(_WORD *)(a2 + 24) = ((a4 & 0x1000) != 0) + 208;
  *(_QWORD *)(a2 + 48) = a4 & 1 | (a4 >> 10) & 0x30 | (a4 >> 6) & 0xEu;
  return a4 & 1;
}

