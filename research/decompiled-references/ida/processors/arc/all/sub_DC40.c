__int64 __fastcall sub_DC40(__int64 a1, _WORD *a2)
{
  unsigned int v2; // edx

  v2 = 1;
  if ( (*(_QWORD *)a2 & 0xFFFF00000000FF00LL) != 0x1C000000000400LL )
  {
    v2 = 0;
    if ( *a2 == 1282 && *(_WORD *)(a1 + 24) == 19 )
    {
      v2 = 1;
      if ( *(_BYTE *)(a1 + 81) == 1 )
        return *(_WORD *)(a1 + 86) != 27;
    }
  }
  return v2;
}

