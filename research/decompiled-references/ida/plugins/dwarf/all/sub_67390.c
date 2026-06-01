char __fastcall sub_67390(__int64 a1)
{
  int v1; // eax
  bool v2; // sf
  bool v3; // of

  v1 = *(_DWORD *)(a1 + 88) + 1;
  v3 = __OFSUB__(v1, *(_DWORD *)(a1 + 64));
  v2 = v1 - *(_DWORD *)(a1 + 64) < 0;
  *(_DWORD *)(a1 + 88) = v1;
  return v2 ^ v3;
}

