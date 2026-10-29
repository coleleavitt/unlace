__int64 *sub_4880()
{
  __int64 *result; // rax

  if ( !byte_12420 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_10E40);
    result = sub_4810();
    byte_12420 = 1;
  }
  return result;
}

