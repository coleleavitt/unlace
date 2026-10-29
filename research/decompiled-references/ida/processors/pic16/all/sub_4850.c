__int64 *sub_4850()
{
  __int64 *result; // rax

  if ( !byte_11400 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_100C0);
    result = sub_47E0();
    byte_11400 = 1;
  }
  return result;
}

