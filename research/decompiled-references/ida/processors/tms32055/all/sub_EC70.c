__int64 __fastcall sub_EC70(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a3 + 1) = 1;
  *(_BYTE *)(a3 + 5) = 1;
  *(_BYTE *)(a3 + 33) = (a2 & 7) + 1;
  *(_WORD *)(a3 + 6) = (a2 >> 3) + 8;
  return (unsigned int)(a2 >> 3) + 8;
}

