__int64 *sub_E860()
{
  __int64 *result; // rax

  if ( !byte_393E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1CBA0);
    result = sub_E7F0();
    byte_393E0 = 1;
  }
  return result;
}

