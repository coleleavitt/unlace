void *sub_93A0()
{
  void *result; // rax

  if ( !byte_25000 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1FE80);
    result = sub_9330();
    byte_25000 = 1;
  }
  return result;
}

