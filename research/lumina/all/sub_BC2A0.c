__int64 __fastcall sub_BC2A0(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // edx

  v2 = *(_DWORD *)(a1 + 24);
  LOBYTE(v1) = v2 == 2013;
  LOBYTE(v2) = v2 == 2006;
  return v2 | v1;
}
