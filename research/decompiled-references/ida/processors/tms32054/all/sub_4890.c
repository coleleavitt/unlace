__int64 *sub_4890()
{
  __int64 *result; // rax

  if ( !byte_11420 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_F7E0);
    result = sub_4820();
    byte_11420 = 1;
  }
  return result;
}

