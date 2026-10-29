__int64 *sub_6AD0()
{
  __int64 *result; // rax

  if ( !byte_16320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_13E20);
    result = sub_6A60();
    byte_16320 = 1;
  }
  return result;
}

