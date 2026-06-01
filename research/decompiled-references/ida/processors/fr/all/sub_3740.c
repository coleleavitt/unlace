__int64 *sub_3740()
{
  __int64 *result; // rax

  if ( !byte_D360 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_C180);
    result = sub_36D0();
    byte_D360 = 1;
  }
  return result;
}

