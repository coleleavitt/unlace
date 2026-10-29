__int64 __fastcall sub_21C20(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int v4; // edx

  v1 = *(unsigned __int16 *)(a1 + 24);
  v2 = 1;
  switch ( (_WORD)v1 )
  {
    case 0x1F:
      if ( *(_BYTE *)(a1 + 81) == 2 )
        return v2;
      v2 = 0;
      if ( *(_BYTE *)(a1 + 41) != 1 || *(_WORD *)(a1 + 46) == 15 )
        return v2;
      break;
    case 0x1F1:
      return v2;
    case 2:
      return v2;
    default:
      v2 = 0;
      if ( *(_BYTE *)(a1 + 41) != 1 || *(_WORD *)(a1 + 46) == 15 )
        return v2;
      if ( (_WORD)v1 == 30 )
      {
        LOBYTE(v2) = *(_BYTE *)(a1 + 81) == 2;
        return v2;
      }
      break;
  }
  v4 = v1 - 80;
  if ( (unsigned __int16)(v1 - 80) > 1u && (_WORD)v1 != 44 )
  {
    v2 = 0;
    if ( (_WORD)v1 == 23 && *(_BYTE *)(a1 + 81) == 5 )
      return (*(_BYTE *)(a1 + 29) & 2) != 0;
    return v2;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 81) == 5;
  return v4;
}
