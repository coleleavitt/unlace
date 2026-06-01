_BOOL8 __fastcall sub_CCD0(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 == 3 )
    return (*(_WORD *)(a2 + 6) & 7 | 8) == 15;
  if ( v2 == 4 )
    return *(_WORD *)(a2 + 6) == 15;
  return 0;
}

