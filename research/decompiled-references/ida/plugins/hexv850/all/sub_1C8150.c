_QWORD *__fastcall sub_1C8150(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  __int64 i; // rsi
  __int64 v5; // r8
  unsigned __int64 *v6; // rcx

  result = a1;
  for ( i = (a2 - (__int64)a1) >> 4; i > 0; i = i - 1 - v5 )
  {
    while ( 1 )
    {
      v5 = i >> 1;
      v6 = &result[2 * (i >> 1)];
      if ( *v6 < a3 )
        break;
      i >>= 1;
      if ( v5 <= 0 )
        return result;
    }
    result = v6 + 2;
  }
  return result;
}

