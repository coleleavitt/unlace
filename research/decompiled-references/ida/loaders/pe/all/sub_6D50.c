void *sub_6D50()
{
  void *result; // rax

  if ( !byte_34580 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_32480);
    result = sub_6CE0();
    byte_34580 = 1;
  }
  return result;
}
