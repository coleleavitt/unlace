void *sub_6EC0()
{
  void *result; // rax

  if ( !byte_37580 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_35480);
    result = sub_6E50();
    byte_37580 = 1;
  }
  return result;
}

