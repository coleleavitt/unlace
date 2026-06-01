void *sub_1C780()
{
  void *result; // rax

  if ( !byte_177280 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_16BAA0);
    result = sub_1C710();
    byte_177280 = 1;
  }
  return result;
}
