char *sub_1260()
{
  char *result; // rax

  if ( !byte_4110 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_11F0();
    byte_4110 = 1;
  }
  return result;
}
