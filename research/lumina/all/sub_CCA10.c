__int64 __fastcall sub_CCA10(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // ecx

  v3 = (a3 - 2) / (*a2 / 5u + 1) * (*a2 / 5u + 1);
  v4 = v3 + 2;
  v5 = v3 + 3;
  if ( v4 == (unsigned int)dword_241470 / *a1 + 1 )
    return v5;
  return v4;
}
