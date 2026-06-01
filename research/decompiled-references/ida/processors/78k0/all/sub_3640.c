__int64 *sub_3640()
{
  __int64 *result; // rax

  if ( !byte_D320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_C4E0);
    result = sub_35D0();
    byte_D320 = 1;
  }
  return result;
}

