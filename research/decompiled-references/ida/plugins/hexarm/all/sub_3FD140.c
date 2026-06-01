__int64 __fastcall sub_3FD140(__int64 a1, int a2, double a3)
{
  unsigned __int16 v3; // ax

  v3 = *(_WORD *)(a1 + 48);
  if ( v3 > 0x8Du )
  {
    if ( v3 == 343 || v3 == 416 )
      return 0xFFFFFFFFLL;
    goto LABEL_5;
  }
  if ( v3 > 0x8Au )
    return 0xFFFFFFFFLL;
  if ( v3 <= 0x22u )
  {
    if ( v3 <= 0x20u )
      goto LABEL_5;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned __int16)(v3 - 115) > 2u )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + 40LL * a2 + 65) != 9 )
      return sub_3FCA60(a1, a2, 1, a3);
    return 0xFFFFFFFFLL;
  }
  return 0xFFFFFFFFLL;
}

