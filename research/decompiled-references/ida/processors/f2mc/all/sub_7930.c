__int64 *sub_7930()
{
  __int64 *result; // rax

  if ( !byte_18440 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_120E0);
    result = sub_78C0();
    byte_18440 = 1;
  }
  return result;
}

