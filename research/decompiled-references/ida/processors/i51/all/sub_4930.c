__int64 *sub_4930()
{
  __int64 *result; // rax

  if ( !byte_11400 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_F960);
    result = sub_48C0();
    byte_11400 = 1;
  }
  return result;
}

