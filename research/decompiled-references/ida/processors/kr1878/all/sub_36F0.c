__int64 *sub_36F0()
{
  __int64 *result; // rax

  if ( !byte_A320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9400);
    result = sub_3680();
    byte_A320 = 1;
  }
  return result;
}

