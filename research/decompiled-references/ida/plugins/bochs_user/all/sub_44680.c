__int64 __fastcall sub_44680(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  LOBYTE(v2) = v3 == a2;
  LOBYTE(v3) = v3 != 0;
  return (unsigned int)v3 & v2;
}

