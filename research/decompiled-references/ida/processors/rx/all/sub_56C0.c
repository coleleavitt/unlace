__int64 *sub_56C0()
{
  __int64 *result; // rax

  if ( !byte_14300 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_125C0);
    result = sub_5650();
    byte_14300 = 1;
  }
  return result;
}

