__int64 __fastcall sub_34B50(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // edx

  v1 = *(_WORD *)(a1 + 24);
  v2 = 1;
  if ( (unsigned __int16)(v1 - 321) <= 0xFu
    || (unsigned __int16)(v1 - 239) <= 0x27u
    || (unsigned __int16)(v1 - 1976) <= 0xEu )
  {
    return v2;
  }
  if ( v1 <= 0x67Au )
  {
    if ( v1 <= 0x678u )
      LOBYTE(v2) = (unsigned __int16)(v1 - 14) <= 2u;
    return v2;
  }
  LOBYTE(v2) = v1 == 2082;
  return v2;
}

