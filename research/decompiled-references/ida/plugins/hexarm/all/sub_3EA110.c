__int64 __fastcall sub_3EA110(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  int v4; // edx
  bool v5; // cc

  v2 = a2 - 8;
  if ( a1[20] == 8 )
  {
    v5 = v2 <= 0x107;
    result = (unsigned int)a2;
    if ( v5 )
      return a2 & 0xFFFFFFF8;
    if ( a2 >= a1[122] && a2 < a1[153] + 16 )
      return a2 & 0xFFFFFFF0;
  }
  else
  {
    if ( v2 <= 0x3F )
      return a2 & 0xFFFFFFFC;
    v4 = a1[122];
    if ( a2 < v4 )
      return (unsigned int)a2;
    result = (unsigned int)a2;
    if ( a2 < a1[137] + 16 && (v4 + 124 < a2 || (a2 & 3) != 0) )
    {
      if ( v4 + 248 < a2 )
        return a2 & 0xFFFFFFF0;
      result = (unsigned int)a2;
      if ( (a2 & 7) != 0 )
        return a2 & 0xFFFFFFF0;
    }
  }
  return result;
}

