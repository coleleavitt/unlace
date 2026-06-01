void *sub_4350()
{
  void *result; // rax

  if ( !byte_143A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_138C0);
    result = sub_42E0();
    byte_143A0 = 1;
  }
  return result;
}
