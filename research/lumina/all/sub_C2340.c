__int64 __fastcall sub_C2340(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rdx
  __int64 result; // rax
  unsigned __int8 *v3; // rdx
  char v4; // cl
  unsigned __int8 *v5; // rsi

  v1 = (*a1)++;
  result = *v1;
  if ( (unsigned int)result > 0xBF )
  {
    result = byte_1BEC20[(unsigned int)(result - 192)];
    if ( (v1[1] & 0xC0) == 0x80 )
    {
      v3 = v1 + 2;
      do
      {
        *a1 = v3;
        v4 = *(v3 - 1);
        v5 = v3++;
        result = (v4 & 0x3Fu) + ((_DWORD)result << 6);
      }
      while ( (*v5 & 0xC0) == 0x80 );
      if ( (unsigned int)result > 0x7F && (result & 0xFFFFF800) != 0xD800 )
        goto LABEL_7;
    }
    else if ( (unsigned int)result > 0x7F )
    {
LABEL_7:
      if ( (result & 0xFFFFFFFE) == 0xFFFE )
        return 65533;
      return result;
    }
    return 65533;
  }
  return result;
}
