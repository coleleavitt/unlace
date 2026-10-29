void *sub_63D70()
{
  void *result; // rax

  if ( !byte_4EEA20 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4DBB00);
    result = sub_63D00();
    byte_4EEA20 = 1;
  }
  return result;
}

