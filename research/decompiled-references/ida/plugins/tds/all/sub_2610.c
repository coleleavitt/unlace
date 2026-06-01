char *sub_2610()
{
  char *result; // rax

  if ( !byte_A228 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9CC8);
    result = sub_25A0();
    byte_A228 = 1;
  }
  return result;
}

