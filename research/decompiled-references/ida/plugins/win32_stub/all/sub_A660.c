void *sub_A660()
{
  void *result; // rax

  if ( !byte_3BBE0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_387C0);
    result = sub_A5F0();
    byte_3BBE0 = 1;
  }
  return result;
}

