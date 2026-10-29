char *sub_11E0()
{
  char *result; // rax

  if ( !byte_40D0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_1170();
    byte_40D0 = 1;
  }
  return result;
}

