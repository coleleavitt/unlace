__int64 *sub_46B0()
{
  __int64 *result; // rax

  if ( !byte_1D360 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1BA40);
    result = sub_4640();
    byte_1D360 = 1;
  }
  return result;
}

