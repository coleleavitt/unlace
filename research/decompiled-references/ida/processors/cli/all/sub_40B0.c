char *sub_40B0()
{
  char *result; // rax

  if ( !byte_1A2B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_18C00);
    result = sub_4040();
    byte_1A2B0 = 1;
  }
  return result;
}

