__int64 *sub_35E0()
{
  __int64 *result; // rax

  if ( !byte_A340 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9160);
    result = sub_3570();
    byte_A340 = 1;
  }
  return result;
}

