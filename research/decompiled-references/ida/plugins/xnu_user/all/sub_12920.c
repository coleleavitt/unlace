void *sub_12920()
{
  void *result; // rax

  if ( !byte_9AB80 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_970A0);
    result = sub_128B0();
    byte_9AB80 = 1;
  }
  return result;
}

