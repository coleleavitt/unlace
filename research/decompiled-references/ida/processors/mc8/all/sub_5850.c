__int64 *sub_5850()
{
  __int64 *result; // rax

  if ( !byte_11D00 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_F960);
    result = sub_57E0();
    byte_11D00 = 1;
  }
  return result;
}

