__int64 __fastcall sub_854B0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // edx
  int v4; // edx
  unsigned int v5; // edx

  v2 = *(_BYTE *)(a2 + 32);
  if ( v2 == 0x91 )
    return 3;
  if ( v2 == 0x9C )
    return 3;
  v3 = *(_DWORD *)(a1 + 2416);
  if ( v3 != -1 && v2 == v3 + 112 )
    return 3;
  v4 = *(_DWORD *)(a1 + 2420);
  if ( v4 != -1 && v2 == v4 + 112 )
    return 3;
  if ( v2 > 0x6Fu )
    return v2 == 0x90;
  v5 = 1;
  if ( v2 <= 0x4Fu )
    return 4 * (unsigned int)(v2 == 3);
  return v5;
}

