void *sub_5F9D0()
{
  void *result; // rax

  if ( !byte_4C0C40 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4AE580);
    result = sub_5F960();
    byte_4C0C40 = 1;
  }
  return result;
}

