__int64 *sub_3650()
{
  __int64 *result; // rax

  if ( !byte_C320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_B600);
    result = sub_35E0();
    byte_C320 = 1;
  }
  return result;
}

