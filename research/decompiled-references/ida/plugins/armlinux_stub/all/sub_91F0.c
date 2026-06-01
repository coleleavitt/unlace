void *sub_91F0()
{
  void *result; // rax

  if ( !byte_396E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_36EE0);
    result = sub_9180();
    byte_396E0 = 1;
  }
  return result;
}

