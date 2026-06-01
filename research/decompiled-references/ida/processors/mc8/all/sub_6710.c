__int64 __fastcall sub_6710(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 != 4 )
  {
    v2 = 168;
    if ( v1 != 7 && v1 != 2 )
      return 0;
    return v2;
  }
  v2 = 160;
  if ( !*(_BYTE *)(a1 + 32) )
    return v2;
  return 164;
}

