__int64 __fastcall sub_32240(__int64 *a1, int a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rdi
  int v5; // ecx
  __int64 result; // rax

  v2 = a1[1];
  v3 = v2 - 1;
  if ( !(_DWORD)v2 || v3 < 0 )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      result = (unsigned int)(v5 + (v3 - v5) / 2);
      if ( *(_DWORD *)(v4 + ((__int64)(int)result << 6)) <= a2 )
        break;
      v3 = result - 1;
      if ( v5 > (int)result - 1 )
        return (unsigned int)(v5 - 1);
    }
    if ( *(_DWORD *)(v4 + ((__int64)(int)result << 6)) >= a2 )
      return result;
    v5 = result + 1;
  }
  while ( (int)result + 1 <= v3 );
  return (unsigned int)(v5 - 1);
}

