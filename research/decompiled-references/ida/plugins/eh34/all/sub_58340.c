_QWORD *__fastcall sub_58340(_QWORD *a1, const char **a2)
{
  _QWORD *v3; // rbx
  const char *v4; // rbp
  const char *v5; // rsi
  const char *v6; // rdi
  const char *v8; // r13
  const char *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  char *v12; // rsi
  char *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r15
  _QWORD *v16; // r12
  const char *v17; // rsi
  const char *v18; // rdi
  char *v19; // rdx
  unsigned __int64 v20; // rax
  char *v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  if ( a1[3] )
  {
    v8 = *a2;
    v9 = a2[1];
    v10 = 0xCBF29CE484222325LL;
    v11 = a1[1];
    v12 = (char *)&v9[(_QWORD)*a2];
    if ( v8 != v12 )
    {
      v13 = (char *)v8;
      do
      {
        v14 = *v13++;
        v10 = 0x100000001B3LL * (v14 ^ v10);
      }
      while ( v12 != v13 );
    }
    v3 = *(_QWORD **)(*a1 + 8 * (v10 % v11));
    v23 = v10 % v11;
    if ( v3 )
    {
      v15 = (_QWORD *)*v3;
      if ( *(_QWORD *)(*v3 + 16LL) )
      {
        v16 = *(_QWORD **)(*a1 + 8 * (v10 % v11));
        goto LABEL_26;
      }
LABEL_19:
      v16 = v3;
      v17 = s1;
      if ( v9 )
      {
LABEL_20:
        v3 = v16;
        v18 = v8;
        v16 = v15;
        while ( strcmp(v18, v17) )
        {
          v15 = (_QWORD *)*v15;
          if ( !v15 )
            return nullptr;
          v19 = (char *)v15[1];
          v20 = 0xCBF29CE484222325LL;
          v21 = &v19[v15[2]];
          if ( v19 == v21 )
          {
            if ( v23 == 0xCBF29CE484222325LL % v11 )
            {
              v3 = v16;
              goto LABEL_19;
            }
            return nullptr;
          }
          do
          {
            v22 = *v19++;
            v20 = 0x100000001B3LL * (v22 ^ v20);
          }
          while ( v19 != v21 );
          if ( v23 != v20 % v11 )
            return nullptr;
LABEL_26:
          v17 = (const char *)v15[1];
          v18 = s1;
          if ( v9 )
            goto LABEL_20;
          v3 = v16;
          v16 = v15;
        }
      }
      if ( v3 )
        return (_QWORD *)*v3;
    }
  }
  else
  {
    v3 = (_QWORD *)a1[2];
    if ( v3 )
    {
      v4 = a2[1];
      while ( 1 )
      {
        if ( v3[2] )
        {
          v5 = (const char *)v3[1];
          v6 = s1;
          if ( !v4 )
            goto LABEL_5;
        }
        else
        {
          if ( !v4 )
            return v3;
          v5 = s1;
        }
        v6 = *a2;
LABEL_5:
        if ( strcmp(v6, v5) )
        {
          v3 = (_QWORD *)*v3;
          if ( v3 )
            continue;
        }
        return v3;
      }
    }
  }
  return v3;
}

