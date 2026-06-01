__int64 *sub_6960()
{
  __int64 *result; // rax

  if ( !byte_17440 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_14D40);
    result = sub_68F0();
    byte_17440 = 1;
  }
  return result;
}

