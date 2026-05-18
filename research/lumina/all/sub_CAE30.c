__int64 __fastcall sub_CAE30(__int64 a1, int a2, unsigned __int8 *a3, int a4, unsigned __int8 *a5)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // r11d

  if ( a3 )
  {
    result = 1;
    if ( a5 )
    {
      v7 = a2;
      if ( a4 <= a2 )
        v7 = a4;
      result = sub_CA590(a3, a5, v7);
      if ( !(_DWORD)result )
        return (unsigned int)(a2 - v8);
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !a5 )
      return (unsigned int)(a2 - a4);
  }
  return result;
}
