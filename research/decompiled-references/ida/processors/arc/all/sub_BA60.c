__int64 __fastcall sub_BA60(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  __int64 v3; // rdx
  __int64 v4; // r10
  char v5; // al
  char v7; // al

  v2 = *(_WORD *)(a1 + 40);
  v3 = a1 + 96;
  v4 = a1 + 56;
  if ( v2 > 0x1Du )
    return 0;
  if ( ((1LL << v2) & 0x25280080) != 0 )
  {
    if ( *(_BYTE *)(a1 + 137) != 5 || *(_QWORD *)(a1 + 144) )
      return 0;
  }
  else if ( ((1LL << v2) & 0x8000002) == 0 )
  {
    if ( v2 != 3 )
      return 0;
    v3 = a1 + 56;
    v4 = a1 + 96;
  }
  v5 = *(_BYTE *)(v3 + 1);
  if ( v5 == 1 )
  {
    if ( *(_WORD *)(v3 + 6) > 0x3Fu )
      return 0;
  }
  else if ( v5 != 4 )
  {
    return 0;
  }
  v7 = *(_BYTE *)(v4 + 1);
  if ( v7 == 1 )
  {
    if ( *(_WORD *)(v4 + 6) <= 0x3Fu )
      return 0;
  }
  else if ( v7 == 4 )
  {
    return 0;
  }
  return set_moved_jpt(a1, v4, v3, a2, 10, 10);
}

