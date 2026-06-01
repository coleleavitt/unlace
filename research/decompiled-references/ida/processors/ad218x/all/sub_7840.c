__int64 *sub_7840()
{
  __int64 *result; // rax

  if ( !byte_1CC40 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_11B20);
    result = sub_77D0();
    byte_1CC40 = 1;
  }
  return result;
}

