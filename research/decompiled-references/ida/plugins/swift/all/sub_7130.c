char *sub_7130()
{
  char *result; // rax

  if ( !byte_28660 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_274A0);
    result = sub_70C0();
    byte_28660 = 1;
  }
  return result;
}

