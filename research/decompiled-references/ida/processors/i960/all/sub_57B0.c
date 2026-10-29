__int64 *sub_57B0()
{
  __int64 *result; // rax

  if ( !byte_F380 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_D680);
    result = sub_5740();
    byte_F380 = 1;
  }
  return result;
}

