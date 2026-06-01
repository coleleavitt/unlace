void *sub_9B50()
{
  void *result; // rax

  if ( !byte_262C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_215E0);
    result = sub_9AE0();
    byte_262C0 = 1;
  }
  return result;
}

