unsigned __int8 __fastcall sub_E870(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v4; // eax
  unsigned __int8 result; // al
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // rax

  v4 = a2[1];
  if ( v4 == 3 )
    return 1;
  if ( v4 > 3 )
    return 2 * (v4 - 4 <= 1);
  if ( v4 )
  {
    if ( v4 == 1 )
      return sub_E7E0(a1, a2);
    return 0;
  }
  v7 = *a2;
  if ( *a2 <= 0x5F )
  {
    if ( v7 > 0x49 )
    {
      v9 = 2097219;
      return _bittest64(&v9, v7 - 74);
    }
    return 0;
  }
  v8 = v7 - 111;
  if ( v8 > 0x33 )
    return 0;
  if ( ((1LL << v8) & 0x8000040011000LL) != 0 )
    return 2 * (a4 != 0);
  result = 1;
  if ( ((1LL << v8) & 0x80000003) == 0 )
  {
    result = a4 != 0;
    if ( v8 != 17 )
      return 0;
  }
  return result;
}

