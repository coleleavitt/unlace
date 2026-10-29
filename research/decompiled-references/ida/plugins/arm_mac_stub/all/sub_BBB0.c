void *sub_BBB0()
{
  void *result; // rax

  if ( !byte_48820 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_453A0);
    result = sub_BB40();
    byte_48820 = 1;
  }
  return result;
}

