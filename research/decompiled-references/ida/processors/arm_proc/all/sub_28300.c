bool __fastcall sub_28300(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  if ( !(unsigned __int8)sub_38020(a2, a3) )
    return 0;
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf() & 0x1006) == 0x1002 )
  {
    if ( a4 || (int)sub_54880(a1, a2, 0) <= 0 )
      return 0;
  }
  else if ( a4 )
  {
    a5 |= 2u;
    if ( (int)sub_76A90(a1, a2, 0) <= 0 )
      return 0;
  }
  else if ( (int)sub_1F300(a1, a2, 0) <= 0 )
  {
    return 0;
  }
  return sub_28040(a1, a2, a5);
}

