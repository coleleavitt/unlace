void *sub_4580()
{
  void *result; // rax

  if ( !byte_20500 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1FCB8);
    result = sub_4510();
    byte_20500 = 1;
  }
  return result;
}

