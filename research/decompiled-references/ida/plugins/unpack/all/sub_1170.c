char *sub_1170()
{
  char *result; // rax

  if ( !byte_40A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_1100();
    byte_40A0 = 1;
  }
  return result;
}

