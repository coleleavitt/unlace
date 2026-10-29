char *sub_7650()
{
  char *result; // rax

  if ( !byte_262B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_224E0);
    result = sub_75E0();
    byte_262B0 = 1;
  }
  return result;
}

