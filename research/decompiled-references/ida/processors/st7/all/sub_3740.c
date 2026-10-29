__int64 *sub_3740()
{
  __int64 *result; // rax

  if ( !byte_B360 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_A4C0);
    result = sub_36D0();
    byte_B360 = 1;
  }
  return result;
}

