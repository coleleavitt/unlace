__int64 *sub_3750()
{
  __int64 *result; // rax

  if ( !byte_B3A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_A3C0);
    result = sub_36E0();
    byte_B3A0 = 1;
  }
  return result;
}

