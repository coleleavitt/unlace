__int64 __fastcall sub_9E40(unsigned int *a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  if ( a3 == 1 )
    return ieee_realcvt();
  if ( a3 != 9 )
    return ieee_realcvt();
  result = ieee_realcvt();
  *a1 = __ROL4__(_byteswap_ulong(*a1), 16);
  return result;
}

