void *sub_4A10()
{
  void *result; // rax

  if ( !byte_124C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_10DA0);
    result = sub_49A0();
    byte_124C0 = 1;
  }
  return result;
}

