void *sub_5B60()
{
  void *result; // rax

  if ( !byte_16040 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_141A0);
    result = sub_5AF0();
    byte_16040 = 1;
  }
  return result;
}

