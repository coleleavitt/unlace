char *sub_6E40()
{
  char *result; // rax

  if ( !byte_2D4F0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2B2C0);
    result = sub_6DD0();
    byte_2D4F0 = 1;
  }
  return result;
}

