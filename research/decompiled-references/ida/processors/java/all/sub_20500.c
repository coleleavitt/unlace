__int64 __fastcall sub_20500(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // di

  v1 = a1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = **(_WORD **)(a1 + 8);
    if ( v2 > 0xFFu )
      return sub_204B0(v1);
  }
  else
  {
    LOBYTE(v2) = 0;
  }
  if ( sub_1F6F0(v2, 0) )
    return sub_1F940(v1);
  return sub_204B0(v1);
}

