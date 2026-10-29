__int64 __fastcall sub_10430(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = *(unsigned __int16 *)(a1 + 24);
  v2 = v1 - 70;
  LOBYTE(v2) = (unsigned __int16)(v1 - 70) <= 1u;
  v1 -= 87;
  LOBYTE(v1) = (unsigned __int16)v1 <= 1u;
  return v1 | v2;
}

