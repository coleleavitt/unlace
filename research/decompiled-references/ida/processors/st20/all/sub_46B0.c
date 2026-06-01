__int64 *sub_46B0()
{
  __int64 *result; // rax

  if ( !byte_C320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_AA60);
    result = sub_4640();
    byte_C320 = 1;
  }
  return result;
}

