void *sub_7C40()
{
  void *result; // rax

  if ( !byte_194E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_16A40);
    result = sub_7BD0();
    byte_194E0 = 1;
  }
  return result;
}
