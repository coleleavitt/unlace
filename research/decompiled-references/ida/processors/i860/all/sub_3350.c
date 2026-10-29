char *sub_3350()
{
  char *result; // rax

  if ( !byte_91D0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7FA0);
    result = sub_32E0();
    byte_91D0 = 1;
  }
  return result;
}

