char *sub_1220()
{
  char *result; // rax

  if ( !byte_40F0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_11B0();
    byte_40F0 = 1;
  }
  return result;
}

