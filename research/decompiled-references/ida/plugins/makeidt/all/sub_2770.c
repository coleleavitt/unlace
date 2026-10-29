char *sub_2770()
{
  char *result; // rax

  if ( !byte_81E8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7CD8);
    result = sub_2700();
    byte_81E8 = 1;
  }
  return result;
}

