bool sub_69F50()
{
  unsigned __int8 byte; // al
  __int64 func; // rax

  byte = get_byte();
  if ( byte == 0xCF )
    return *(_BYTE *)(getseg() + 43) == 0;
  if ( byte <= 0xCFu )
    return (unsigned __int8)(byte + 54) <= 1u;
  if ( (unsigned __int8)(byte + 23) <= 2u )
  {
    get_first_fcref_from();
    func = get_func();
    if ( func )
      return (*(_BYTE *)(func + 16) & 2) != 0;
  }
  return 0;
}

