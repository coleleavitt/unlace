void *sub_9170()
{
  void *result; // rax

  if ( !byte_2A520 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_26F80);
    result = sub_9100();
    byte_2A520 = 1;
  }
  return result;
}

