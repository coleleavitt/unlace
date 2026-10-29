__int64 __fastcall sub_FCA0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 96);
  v2 = 0;
  if ( (v1 & 0x3F) != 0 )
  {
    v2 = 1;
    *(_BYTE *)(a1 + 3544) = (v1 & 3) != 0;
    *(_BYTE *)(a1 + 3545) = (v1 & 0x1C) != 0;
    *(_BYTE *)(a1 + 3546) = (v1 & 0x20) != 0;
  }
  return v2;
}

