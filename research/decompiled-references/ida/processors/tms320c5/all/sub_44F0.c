char *sub_44F0()
{
  char *result; // rax

  if ( !byte_D2B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_B240);
    result = sub_4480();
    byte_D2B0 = 1;
  }
  return result;
}

