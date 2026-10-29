__int64 *sub_4810()
{
  __int64 *result; // rax

  if ( !byte_123A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_104A0);
    result = sub_47A0();
    byte_123A0 = 1;
  }
  return result;
}

