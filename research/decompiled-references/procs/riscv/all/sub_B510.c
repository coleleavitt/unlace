void *sub_B510()
{
  void *result; // rax

  if ( !byte_35600 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_31560);
    result = sub_B4A0();
    byte_35600 = 1;
  }
  return result;
}
