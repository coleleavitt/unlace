void *sub_3070()
{
  void *result; // rax

  if ( !byte_151A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_14CC0);
    result = sub_3000();
    byte_151A0 = 1;
  }
  return result;
}

