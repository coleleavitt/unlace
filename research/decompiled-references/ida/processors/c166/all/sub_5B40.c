__int64 *sub_5B40()
{
  __int64 *result; // rax

  if ( !byte_14480 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_12CC0);
    result = sub_5AD0();
    byte_14480 = 1;
  }
  return result;
}

