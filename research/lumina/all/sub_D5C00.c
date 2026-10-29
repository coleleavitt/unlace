__int16 __fastcall sub_D5C00(double a1)
{
  unsigned __int64 v1; // rdx
  __int16 result; // ax
  __int16 i; // ax
  unsigned __int64 v4; // rax

  if ( a1 >= 9.223372036854776e18 )
    v1 = (unsigned int)(int)(a1 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v1 = (unsigned int)(int)a1;
  if ( v1 > 7 )
  {
    _BitScanReverse64(&v4, v1);
    return word_1BACD0[(v1 >> (60 - ((unsigned __int8)v4 ^ 0x3Fu))) & 7] + 10 * (60 - (v4 ^ 0x3F)) + 30;
  }
  else
  {
    result = 0;
    if ( v1 > 1 )
    {
      for ( i = 40; ; i -= 10 )
      {
        v1 *= 2LL;
        if ( v1 > 7 )
          break;
      }
      return word_1BACD0[v1 & 7] + i - 20;
    }
  }
  return result;
}
