__int64 __fastcall sub_195380(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  unsigned int v4; // edx
  signed int v5; // eax

  if ( (*(_BYTE *)(a1 + 288) & 1) == 0 )
    sub_195360(a3);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = 0;
  if ( v3 != 1 )
  {
    v5 = *(_DWORD *)(a2 + 64);
    if ( v5 >= *(_DWORD *)(a1 + 48) )
    {
      v4 = *(_DWORD *)(a2 + 40);
      if ( (int)v4 >= v5 )
        v5 = *(_DWORD *)(a2 + 40);
      if ( v3 == 4 )
        v4 = v5;
      LOBYTE(v4) = v4 != *(_DWORD *)(a1 + 24);
    }
  }
  return v4;
}

