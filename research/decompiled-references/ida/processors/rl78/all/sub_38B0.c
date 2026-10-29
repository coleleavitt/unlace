__int64 *sub_38B0()
{
  __int64 *result; // rax

  if ( !byte_E3C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_D320);
    result = sub_3840();
    byte_E3C0 = 1;
  }
  return result;
}

