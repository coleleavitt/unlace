bool __fastcall sub_E790(__int64 a1)
{
  unsigned __int8 v1; // al

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 == 3 )
    return (((*(_WORD *)(a1 + 6) & 0x38) - 24) & 0xFFF0) != 0;
  if ( v1 <= 3u )
    return v1 == 2;
  return (unsigned __int8)(v1 - 4) <= 1u;
}
