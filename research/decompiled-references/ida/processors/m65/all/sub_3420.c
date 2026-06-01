char *sub_3420()
{
  char *result; // rax

  if ( !byte_81F0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_6DE0);
    result = sub_33B0();
    byte_81F0 = 1;
  }
  return result;
}

