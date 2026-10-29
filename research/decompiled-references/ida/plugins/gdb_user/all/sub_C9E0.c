void *sub_C9E0()
{
  void *result; // rax

  if ( !byte_6AA60 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_684A0);
    result = sub_C970();
    byte_6AA60 = 1;
  }
  return result;
}

