char *sub_25A0()
{
  char *result; // rax

  if ( !byte_8190 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7400);
    result = sub_2530();
    byte_8190 = 1;
  }
  return result;
}

