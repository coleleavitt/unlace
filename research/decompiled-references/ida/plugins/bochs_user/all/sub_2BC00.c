__int64 __fastcall sub_2BC00(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // ebp

  v2 = 100 * *(_DWORD *)a2 + 10 * *(_DWORD *)(a2 + 4);
  v3 = strtol((const char *)(a2 + 12), nullptr, 10) + v2;
  *(_DWORD *)(a1 + 24) = v3;
  return 0;
}

