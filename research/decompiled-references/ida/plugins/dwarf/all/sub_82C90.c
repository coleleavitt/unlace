__int64 __fastcall sub_82C90(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  const char **v4; // rbp
  int v5; // ebx
  __int64 v6; // rbx
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // rbx
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  result = 0;
  if ( a2 )
  {
    v4 = (const char **)off_C99E0;
    v5 = 0;
    while ( strncmp(*v4, a2, 0x10u) )
    {
      ++v5;
      v4 += 2;
      if ( v5 == 22 )
        return 0;
    }
    if ( a1 )
    {
      v6 = 2LL * v5;
      v7 = off_C99E0[v6 + 1];
      if ( v7 && (v8 = strlen(off_C99E0[v6 + 1]), (v9 = v8) != 0) )
      {
        v10 = (void *)*a1;
        v11 = v8 + 1;
        if ( a1[2] < v8 + 1 )
        {
          v12 = qvector_reserve(a1, *a1, v8 + 1, 1);
          *a1 = v12;
          v10 = (void *)v12;
        }
        a1[1] = v11;
        memmove(v10, v7, v9);
        *(_BYTE *)(*a1 + v9) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
  return result;
}

