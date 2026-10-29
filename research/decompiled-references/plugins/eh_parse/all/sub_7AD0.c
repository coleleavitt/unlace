void *sub_7AD0()
{
  void *result; // rax

  if ( !byte_2F620 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2DFC0);
    result = sub_7A60();
    byte_2F620 = 1;
  }
  return result;
}
