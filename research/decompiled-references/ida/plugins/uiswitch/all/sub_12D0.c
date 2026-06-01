char *sub_12D0()
{
  char *result; // rax

  if ( !byte_6128 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_5CF0);
    result = sub_1260();
    byte_6128 = 1;
  }
  return result;
}

