char *sub_1220()
{
  char *result; // rax

  if ( !byte_70F0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_6D60);
    result = sub_11B0();
    byte_70F0 = 1;
  }
  return result;
}

