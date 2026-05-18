__int64 __fastcall sub_C2ED0(unsigned int *a1, int a2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // eax

  v2 = a2 - 1;
  result = 0;
  if ( *a1 > v2 )
  {
    while ( 1 )
    {
      v5 = a1[2];
      if ( !v5 )
        break;
      v4 = v2 / v5;
      v2 %= v5;
      a1 = *(unsigned int **)&a1[2 * v4 + 4];
      if ( !a1 )
        return 0;
    }
    if ( *a1 <= 0xF80 )
    {
      return ((int)*((unsigned __int8 *)a1 + (v2 >> 3) + 16) >> (v2 & 7)) & 1;
    }
    else
    {
      v6 = v2 + 1;
      v7 = v2 % 0x7C;
      v8 = a1[v7 + 4];
      if ( !v8 )
        return 0;
      if ( v8 == v6 )
      {
        return 1;
      }
      else
      {
        while ( 1 )
        {
          v7 = ((int)v7 + 1) % 0x7Cu;
          result = a1[v7 + 4];
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == v6 )
            return 1;
        }
      }
    }
  }
  return result;
}
