_BYTE *__fastcall sub_EBCE0(__int64 a1)
{
  _BYTE *result; // rax

  result = *(_BYTE **)(a1 + 16);
  if ( *result )
  {
    *result = 0;
    if ( *(__int16 *)(a1 + 54) > 1 )
      return (_BYTE *)sub_EBBD0((__int64)result);
  }
  return result;
}
