char *sub_1180()
{
  char *result; // rax

  if ( !byte_40B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_1110();
    byte_40B0 = 1;
  }
  return result;
}

