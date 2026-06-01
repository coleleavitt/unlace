char *sub_12CB0()
{
  char *result; // rax

  if ( !byte_CB3E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_C71A0);
    result = sub_12C40();
    byte_CB3E0 = 1;
  }
  return result;
}

