__int64 *sub_3760()
{
  __int64 *result; // rax

  if ( !byte_B3A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_A3E0);
    result = sub_36F0();
    byte_B3A0 = 1;
  }
  return result;
}

