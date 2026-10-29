__int64 __fastcall sub_1F040(__int64 a1, __int64 a2)
{
  __int16 v3; // dx
  __int16 v4; // ax

  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( *(_BYTE *)(a2 + 81) != 1 || *(_BYTE *)(a2 + 121) != 5 || *(_QWORD *)(a2 + 128) || (unsigned __int8)get_fixup() )
    return 0;
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (v3 = getinf(), v4 = *(_WORD *)(a2 + 24), (v3 & 0x1006) == 0x1002) )
  {
    if ( *(_WORD *)(a2 + 24) == 14 && *(_WORD *)(a2 + 86) != *(_WORD *)(a2 + 46) && !*(_QWORD *)(a2 + 144) )
      goto LABEL_13;
    return 0;
  }
  if ( v4 != 14 )
  {
    if ( (unsigned __int16)(v4 - 6) > 1u )
      return 0;
LABEL_13:
    *(_BYTE *)(a2 + 121) = 0;
    *(_WORD *)(a2 + 24) = 23;
    return 1;
  }
  if ( *(_WORD *)(a2 + 86) != 13 )
    goto LABEL_13;
  return 0;
}

