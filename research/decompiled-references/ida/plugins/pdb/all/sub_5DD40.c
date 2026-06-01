__int64 __fastcall sub_5DD40(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edx

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 88) & 0x14) == 0x10 )
  {
    v2 = 0;
    *a2 = *(_DWORD *)(a1 + 96);
  }
  return v2;
}

