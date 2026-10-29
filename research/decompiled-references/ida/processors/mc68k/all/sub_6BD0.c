void *sub_6BD0()
{
  void *result; // rax

  if ( !byte_1D4A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1AB80);
    result = sub_6B60();
    byte_1D4A0 = 1;
  }
  return result;
}

