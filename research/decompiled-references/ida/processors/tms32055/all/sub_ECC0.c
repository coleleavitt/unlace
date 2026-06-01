__int64 __fastcall sub_ECC0(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rsi

  v3 = a2 & 1;
  *(_BYTE *)(a3 + 1) = 1;
  *(_BYTE *)(a3 + 5) = 0;
  *(_WORD *)(a3 + 6) = 98 - v3;
  return 98 - v3;
}

