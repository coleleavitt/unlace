__int64 __fastcall sub_4BE0(__int64 a1, __int64 a2, char a3, int a4)
{
  *(_DWORD *)(a2 + 28) |= *((unsigned __int8 *)&dword_DE9C + 2 * (a4 != 0) + (a3 & 1)) | 0x10;
  return 1;
}

