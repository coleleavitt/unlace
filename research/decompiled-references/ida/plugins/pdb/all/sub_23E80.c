void *sub_23E80()
{
  void *result; // rax

  if ( !byte_B3720 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_A9B60);
    result = sub_23E10();
    byte_B3720 = 1;
  }
  return result;
}

