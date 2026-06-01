void *sub_CEB0()
{
  void *result; // rax

  if ( !byte_49CA0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_46180);
    result = sub_CE40();
    byte_49CA0 = 1;
  }
  return result;
}

