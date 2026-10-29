__int64 *sub_55A0()
{
  __int64 *result; // rax

  if ( !byte_E2A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_BFC0);
    result = sub_5530();
    byte_E2A0 = 1;
  }
  return result;
}

