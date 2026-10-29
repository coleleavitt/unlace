char *sub_23440()
{
  char *result; // rax

  if ( !byte_958E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_842E0);
    result = sub_233D0();
    byte_958E0 = 1;
  }
  return result;
}

