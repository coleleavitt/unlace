char *sub_2500()
{
  char *result; // rax

  if ( !byte_61C8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_5C70);
    result = sub_2490();
    byte_61C8 = 1;
  }
  return result;
}

