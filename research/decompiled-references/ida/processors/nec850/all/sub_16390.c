bool __fastcall sub_16390(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 == 1 )
    return *(_WORD *)(a2 + 6) <= 0x3Fu;
  if ( v2 == 4 )
    return *(_WORD *)(a2 + 6) == 3;
  return 0;
}

