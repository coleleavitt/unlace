void *sub_A010()
{
  void *result; // rax

  if ( !byte_3D5E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3BCA0);
    result = sub_9FA0();
    byte_3D5E0 = 1;
  }
  return result;
}
