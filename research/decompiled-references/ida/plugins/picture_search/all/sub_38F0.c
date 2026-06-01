char *sub_38F0()
{
  char *result; // rax

  if ( !byte_B268 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_A5E0);
    result = sub_3880();
    byte_B268 = 1;
  }
  return result;
}

