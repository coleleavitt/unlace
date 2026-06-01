__int64 __fastcall sub_7F30(__int64 a1, unsigned __int64 a2)
{
  unsigned int *v2; // r8
  __int64 result; // rax
  unsigned int *v4; // rcx
  unsigned int *v5; // rdx
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax

  v2 = *(unsigned int **)(a1 + 120);
  result = a2;
  if ( v2 )
  {
    v4 = &v2[2 * *(int *)(a1 + 128)];
    if ( v2 >= v4 )
    {
      result = -1;
      if ( a2 >= *v2 )
      {
        v5 = *(unsigned int **)(a1 + 120);
        goto LABEL_15;
      }
    }
    else
    {
      v5 = *(unsigned int **)(a1 + 120);
      do
      {
        v6 = &v5[2
               * ((__int64)((((char *)v4 - (char *)v5) >> 3) + ((unsigned __int64)((char *)v4 - (char *)v5) >> 63)) >> 1)];
        v7 = *v6;
        if ( v7 >= a2 )
        {
          if ( v7 == a2 )
          {
            result = v6[1];
            if ( !result )
              return -1;
            return result;
          }
          v4 = &v5[2
                 * ((__int64)((((char *)v4 - (char *)v5) >> 3) + ((unsigned __int64)((char *)v4 - (char *)v5) >> 63)) >> 1)];
        }
        else
        {
          v5 = v6 + 2;
        }
      }
      while ( v5 < v4 );
      while ( a2 < *v5 )
      {
        if ( v2 == v5 )
          return -1;
        v5 -= 2;
      }
LABEL_15:
      while ( 1 )
      {
        v8 = v5[1];
        if ( (_DWORD)v8 )
          break;
        if ( v2 == v5 )
          return -1;
        v5 -= 2;
      }
      return a2 - *v5 + v8;
    }
  }
  return result;
}
