__int64 __fastcall sub_2AF00(const char **a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 *v6; // rbx
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  char *s1[19]; // [rsp+10h] [rbp-98h] BYREF

  s1[11] = (char *)__readfsqword(0x28u);
  v6 = sub_2A250(a2, a1, (const char **)s1);
  v7 = strcmp(s1[0], "[bochs]:");
  result = 2;
  if ( !v7 )
  {
    v9 = 0;
    v10 = a4;
    if ( (a4 + 15) >> 4 )
    {
      while ( 1 )
      {
        v6 = sub_2A250(v6, a1, (const char **)s1);
        if ( !*s1[0] )
          return 3;
        if ( (unsigned int)qsscanf() != 17 )
          break;
        v11 = 16;
        if ( v10 <= 0x10 )
          v11 = v10;
        if ( v10 )
        {
          v12 = 0;
          do
          {
            *(_BYTE *)(a3 + v12) = *((_DWORD *)&s1[2] + v12);
            ++v12;
          }
          while ( v12 < v11 );
          a3 += v11;
        }
        v10 -= v11;
        if ( (a4 + 15) >> 4 == ++v9 )
          return 0;
      }
      return 2;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

