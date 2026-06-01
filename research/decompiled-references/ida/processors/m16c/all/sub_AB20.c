__int64 *sub_AB20()
{
  __int64 *result; // rax

  if ( !byte_2C420 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_203E0);
    result = sub_AAB0();
    byte_2C420 = 1;
  }
  return result;
}

