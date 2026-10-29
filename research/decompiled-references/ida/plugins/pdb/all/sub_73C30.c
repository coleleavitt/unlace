unsigned __int8 __fastcall sub_73C30(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax
  __int64 v3; // rax

  if ( (unsigned __int16)a1 > 0x1027u )
  {
    v3 = 0x10000003F320831LL;
    LOWORD(a1) = a1 - 4358;
    result = _bittest64(&v3, a1);
    if ( (unsigned __int16)a1 >= 0x39u )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x1000u )
    {
      v2 = 0x7E00C81031LL;
      LOWORD(a1) = a1 - 4097;
      return _bittest64(&v2, a1);
    }
    if ( (_WORD)a1 == 268 )
      return 1;
    if ( (unsigned __int16)a1 <= 0x10Cu )
    {
      if ( (_WORD)a1 != 12 )
        return (_WORD)a1 == 256 || (_WORD)a1 == 2;
      return 1;
    }
    return (_WORD)a1 == 524 || (_WORD)a1 == 512;
  }
  return result;
}

