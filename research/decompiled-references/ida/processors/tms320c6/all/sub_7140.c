__int64 __fastcall sub_7140(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  *(_BYTE *)(a2 + 41) = 5;
  *(_WORD *)(a2 + 24) = 206;
  *(_BYTE *)(a2 + 45) = 2;
  *(_QWORD *)(a2 + 48) = (unsigned __int16)(((a4 >> 11) & 8 | (a4 >> 7) & 7) + 1);
  *(_BYTE *)(a2 + 28) = (a4 & 1) == 0 ? 12 : 2;
  return (a4 & 1) == 0 ? 12 : 2;
}

