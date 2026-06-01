__int64 __fastcall sub_11620(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 23 || v2 == 26 || v2 == 24 || v2 == 61 )
  {
LABEL_12:
    split_sreg_range();
    return netnode_supdel();
  }
  if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 63 )
  {
    if ( v2 == 78 )
      get_sreg();
    goto LABEL_12;
  }
  return netnode_supdel();
}

