__int64 __fastcall sub_4BB0(__int64 a1, __int64 a2, char a3, int a4)
{
  *(_DWORD *)(a2 + 28) |= a3 & 0xF | (16 * ((a3 & 0xF) != 0 && a4 == 0));
  return 1;
}

