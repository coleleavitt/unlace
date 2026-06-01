char *sub_DC90()
{
  char *result; // rax

  if ( !byte_75340 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_70C40);
    result = sub_DC20();
    byte_75340 = 1;
  }
  return result;
}

