__int64 __fastcall sub_C4870(_DWORD *a1, unsigned __int8 *a2)
{
  int v2; // r11d
  __int64 result; // rax
  _BYTE **v4; // r10
  _BYTE *v5; // r8
  unsigned __int8 *i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *a1;
  result = 0xFFFFFFFFLL;
  if ( (int)*a1 > 0 )
  {
    v4 = (_BYTE **)(a1 + 2);
    result = 0;
    while ( 1 )
    {
      v5 = *v4;
      for ( i = a2; ; ++i )
      {
        v7 = (unsigned __int8)*v5;
        v8 = *i;
        if ( (_DWORD)v7 != (_DWORD)v8 )
          break;
        if ( !*v5 )
          return result;
LABEL_5:
        ++v5;
      }
      if ( byte_1BF000[v7] == byte_1BF000[v8] )
        goto LABEL_5;
      result = (unsigned int)(result + 1);
      v4 += 2;
      if ( (_DWORD)result == v2 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}
