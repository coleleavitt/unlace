void *sub_11CF0()
{
  void *result; // rax

  if ( !byte_8F9A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_8B540);
    result = sub_11C80();
    byte_8F9A0 = 1;
  }
  return result;
}

