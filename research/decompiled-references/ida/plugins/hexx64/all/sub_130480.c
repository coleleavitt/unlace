__int64 __fastcall sub_130480(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        char a10)
{
  int v11; // r14d
  __int64 result; // rax
  char v15; // dl
  _DWORD *v17; // [rsp+8h] [rbp-40h]

  if ( (unsigned int)(*a4 - 56) <= 1 )
    return 0;
  v17 = a4 + 8;
  v11 = a10 & 1;
  if ( !(unsigned __int8)sub_12EA80(a1, a2, a3, (__int64)(a4 + 8), a5, a6, a7, a8, v11) )
  {
    if ( (a10 & 2) == 0 )
      return 0;
LABEL_8:
    if ( (unsigned __int8)sub_12EA80(a1, a2, a3, (__int64)v17, a5, a9, a7, a8, v11) )
      return (unsigned int)-(unsigned __int8)sub_12EA80(a1, a2, a3, (__int64)(a4 + 12), a5, a6, a7, a8, v11);
    return 0;
  }
  v15 = sub_12EA80(a1, a2, a3, (__int64)(a4 + 12), a5, a9, a7, a8, v11);
  result = 1;
  if ( !v15 )
  {
    if ( (a10 & 2) == 0 )
      return 0;
    goto LABEL_8;
  }
  return result;
}

