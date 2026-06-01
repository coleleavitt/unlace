bool __fastcall sub_14B70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  const char *v3; // r12
  char *v4; // rax
  size_t v5; // rax
  size_t v6; // rbp
  char *v7; // rbp
  bool result; // al
  size_t v9; // r14
  int v10; // edx
  __int64 v11; // r12
  size_t v12; // rax
  size_t v13; // r12
  __int64 v14; // r13
  size_t v15; // rax
  size_t v16; // rbx
  char *v17; // rdi
  size_t v18; // rbp
  char *v19; // rbx
  const char *v20; // rsi
  const char *v21; // rdi
  bool v22; // [rsp+Fh] [rbp-69h]
  bool v23; // [rsp+Fh] [rbp-69h]
  char *s1; // [rsp+10h] [rbp-68h]
  size_t v25; // [rsp+18h] [rbp-60h]
  char *v26; // [rsp+30h] [rbp-48h]
  size_t v27; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 0;
  v3 = *(const char **)a2;
  if ( !strcmp(*(const char **)a2, "alloc")
    || !strcmp(v3, "init")
    || !strcmp(v3, "new")
    || !strcmp(v3, "allocWithZone:")
    || !strcmp(v3, "sharedInstance")
    || !strcmp(v3, "defaultInstance")
    || !strcmp(v3, "retain")
    || !strcmp(v3, "autorelease")
    || !strcmp(v3, "self") )
  {
    return 1;
  }
  v4 = strstr(v3, "With");
  if ( !v4 )
    return 0;
  v5 = v4 - v3;
  if ( v5 == -1 )
    return 0;
  v6 = v2 - 1;
  s1 = 0;
  v25 = 0;
  if ( v6 > v5 )
    v6 = v5;
  if ( !v6 || (v25 = v6 + 1, s1 = (char *)qvector_reserve(), memmove(s1, v3, v6), s1[v6] = 0, v9 = v6 + 1, v6 == -1) )
  {
    if ( a1[1] )
    {
      v7 = s1;
      v27 = 0;
      goto LABEL_18;
    }
    v7 = s1;
LABEL_29:
    v27 = 0;
LABEL_18:
    if ( !v25 )
    {
      result = strcasecmp(src, src) == 0;
      goto LABEL_20;
    }
    goto LABEL_42;
  }
  v7 = s1;
  v10 = strcmp(s1, "init");
  result = 1;
  if ( v10 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v11 - 1 >= v9 - 1 )
      {
        v13 = v11 - v9;
        v14 = *a1;
        v26 = 0;
        v27 = 0;
        if ( v13 > v12 )
          v13 = v12;
        v15 = v12 - v13;
        v16 = v15;
        if ( v15 )
        {
          v17 = 0;
          v18 = v15 + 1;
          if ( v15 != -1 )
          {
            v26 = (char *)qvector_reserve();
            v17 = v26;
          }
          v27 = v18;
          memmove(v17, (const void *)(v14 + v13), v16);
          v26[v16] = 0;
          v19 = v26;
          v7 = s1;
          goto LABEL_38;
        }
LABEL_42:
        v19 = 0;
LABEL_38:
        v20 = v7;
        v21 = v19;
        if ( !v27 )
          v21 = src;
        v7 = s1;
        result = strcasecmp(v21, v20) == 0;
        if ( v19 )
        {
          v23 = result;
          qfree();
          v7 = s1;
          result = v23;
        }
        goto LABEL_20;
      }
      result = 0;
    }
    else
    {
      result = 0;
      if ( v9 == 1 )
        goto LABEL_29;
    }
  }
LABEL_20:
  if ( v7 )
  {
    v22 = result;
    qfree();
    return v22;
  }
  return result;
}
