unsigned __int8 __fastcall sub_2D360(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax
  __int64 v3; // rax

  if ( (unsigned __int16)a1 <= 0x223u )
  {
    if ( (unsigned __int16)a1 > 0x221u )
      return 1;
    if ( (unsigned __int16)a1 <= 0xCBu )
    {
      result = 1;
      if ( (unsigned __int16)a1 <= 0xC9u && (unsigned __int16)(a1 - 114) > 4u )
        return (unsigned __int16)a1 > 0xC5u || (unsigned __int16)(a1 - 82) <= 0x1Fu;
      return result;
    }
    if ( (unsigned __int16)(a1 - 517) <= 1u )
      return 1;
    return (unsigned __int16)(a1 - 439) <= 1u;
  }
  if ( (_WORD)a1 == 821 )
    return 1;
  result = 1;
  if ( (unsigned __int16)(a1 - 834) <= 2u )
    return result;
  if ( (unsigned __int16)a1 > 0x34Au )
  {
    v2 = 0x7F8000000060FLL;
    LOWORD(a1) = a1 - 1500;
    result = _bittest64(&v2, a1);
    if ( (unsigned __int16)a1 >= 0x33u )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x313u )
    {
      v3 = 0x603C000000000FLL;
      LOWORD(a1) = a1 - 788;
      return _bittest64(&v3, a1);
    }
    if ( (unsigned __int16)a1 > 0x241u )
      return (unsigned __int16)(a1 - 629) <= 3u;
    if ( (unsigned __int16)a1 <= 0x23Du )
      return (unsigned __int16)(a1 - 439) <= 1u;
  }
  return result;
}

