void *sub_7A10()
{
  void *result; // rax

  if ( !byte_1D2E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_18020);
    result = sub_79A0();
    byte_1D2E0 = 1;
  }
  return result;
}
