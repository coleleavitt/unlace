char *sub_1150()
{
  char *result; // rax

  if ( !byte_40A8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D30);
    result = sub_10E0();
    byte_40A8 = 1;
  }
  return result;
}

