bool __fastcall sub_8740(__int64 a1)
{
  unsigned __int8 v1; // al

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 == 3 )
    return *(_WORD *)(a1 + 6) <= 7u || *(_WORD *)(a1 + 6) == 24;
  if ( v1 <= 3u )
    return v1 == 2;
  return (unsigned __int8)(v1 - 4) <= 1u;
}

