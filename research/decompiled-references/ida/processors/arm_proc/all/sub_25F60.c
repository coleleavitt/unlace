__int64 __fastcall sub_25F60(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // edx

  v1 = *(_WORD *)(a1 + 24);
  if ( v1 != 27 )
  {
    if ( v1 > 0x1Bu )
    {
      v2 = 1;
      if ( (unsigned __int16)(v1 - 521) <= 1u )
        return v2;
      return *(_DWORD *)(a1 + 28) & 1;
    }
    if ( (unsigned __int16)(v1 - 18) > 3u )
      return *(_DWORD *)(a1 + 28) & 1;
  }
  return 1;
}

