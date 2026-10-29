void *sub_60330()
{
  void *result; // rax

  if ( !byte_4DB960 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4C8C60);
    result = sub_602C0();
    byte_4DB960 = 1;
  }
  return result;
}

