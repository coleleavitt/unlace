__int64 __fastcall sub_C140(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // edx

  v3 = a3 & 1;
  if ( *(_DWORD *)(a1 + 600) == 1 )
    v4 = (a3 >> 2) & 2;
  else
    v4 = (a3 >> 1) & 2;
  *(_DWORD *)(a2 + 28) |= byte_17890[v4 | v3];
  return 1;
}

