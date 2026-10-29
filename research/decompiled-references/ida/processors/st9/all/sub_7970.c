__int64 *sub_7970()
{
  __int64 *result; // rax

  if ( !byte_18460 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_15DE0);
    result = sub_7900();
    byte_18460 = 1;
  }
  return result;
}

