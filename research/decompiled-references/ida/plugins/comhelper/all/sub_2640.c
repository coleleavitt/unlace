char *sub_2640()
{
  char *result; // rax

  if ( !byte_81E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7BA0);
    result = sub_25D0();
    byte_81E0 = 1;
  }
  return result;
}

