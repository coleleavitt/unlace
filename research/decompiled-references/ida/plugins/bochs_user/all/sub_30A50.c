__int64 __fastcall sub_30A50(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v4; // r13d
  size_t v7; // r13
  int v8; // r14d
  char *v9; // r13
  const char *v10; // rdi
  char *s1; // [rsp+0h] [rbp-48h]
  size_t v12; // [rsp+8h] [rbp-40h]

  if ( a3 && *a3 )
  {
    v7 = strlen(a3);
    v12 = v7 + 1;
    s1 = (char *)qvector_reserve();
    v8 = 0;
    memmove(s1, a3, v7);
    s1[v7] = 0;
    while ( 1 )
    {
      v4 = qfileexist();
      if ( (_BYTE)v4 )
        break;
      v9 = s1;
      if ( v8 == 2 )
      {
LABEL_14:
        if ( v9 )
          qfree();
        return 0;
      }
      while ( 1 )
      {
        qbasename();
        if ( v8 )
        {
          qbasename();
          qstrupr();
        }
        else
        {
          qstrlwr();
        }
        v9 = s1;
        v10 = ::s1;
        if ( v12 )
        {
          v9 = s1;
          v10 = s1;
        }
        ++v8;
        if ( strcmp(v10, a3) )
          break;
        if ( v8 == 2 )
          goto LABEL_14;
      }
    }
    if ( a1 )
      qstrncpy();
    if ( s1 )
      qfree();
  }
  else
  {
    return 0;
  }
  return v4;
}

