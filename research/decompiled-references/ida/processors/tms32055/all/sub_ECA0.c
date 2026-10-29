__int64 __fastcall sub_ECA0(__int64 a1, char a2, __int64 a3)
{
  *(_BYTE *)(a3 + 1) = 1;
  *(_BYTE *)(a3 + 5) = 1;
  *(_WORD *)(a3 + 6) = 39;
  *(_BYTE *)(a3 + 33) = (a2 & 3) + 1;
  return 39;
}

