void *sub_1D780()
{
  void *result; // rax

  if ( !byte_18C280 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1809E0);
    result = sub_1D710();
    byte_18C280 = 1;
  }
  return result;
}

