__int64 __fastcall sub_4B8A0(_QWORD *a1, const char *a2, char a3)
{
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // r13
  const char *v10; // r12
  const char *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  const char *v15; // rsi
  const char *v16; // rdi
  const char *v18; // r13
  __int64 v19; // rbx
  const char *v20; // r15
  char *v21; // [rsp+18h] [rbp-870h]
  char *s2; // [rsp+20h] [rbp-868h]
  char *s2a; // [rsp+20h] [rbp-868h]
  size_t v24; // [rsp+28h] [rbp-860h]

  v3 = a2;
  if ( a3 )
  {
    v24 = 0;
    if ( a2 )
    {
      v4 = strlen(a2);
      v5 = v4 + 1;
      v6 = v4;
      s2a = (char *)qvector_reserve();
      v24 = v5;
      v7 = a1 + 12;
      memmove(s2a, a2, v6);
      s2a[v6] = 0;
      v8 = (_QWORD *)a1[13];
      v3 = s2a;
      if ( !v8 )
      {
LABEL_18:
        if ( v3 )
          qfree();
        return 0;
      }
    }
    else
    {
      v8 = (_QWORD *)a1[13];
      v7 = a1 + 12;
      if ( !v8 )
        return 0;
    }
    v9 = v7;
    v10 = s1;
    if ( v24 )
      v10 = v3;
    do
    {
      while ( 1 )
      {
        v11 = s1;
        if ( v8[5] )
          v11 = (const char *)v8[4];
        v12 = strcasecmp(v11, v10);
        v13 = v8[2];
        v14 = v8[3];
        if ( v12 >= 0 )
          break;
        v8 = (_QWORD *)v8[3];
        if ( !v14 )
          goto LABEL_12;
      }
      v9 = v8;
      v8 = (_QWORD *)v8[2];
    }
    while ( v13 );
LABEL_12:
    if ( v9 == v7 )
      goto LABEL_18;
    v15 = s1;
    if ( v9[5] )
      v15 = (const char *)v9[4];
    v16 = s1;
    if ( v24 )
      v16 = v3;
    if ( strcasecmp(v16, v15) < 0 )
      goto LABEL_18;
    if ( v3 )
      qfree();
    return v9[7];
  }
  else
  {
    v18 = (const char *)qbasename();
    qstrncpy();
    qsplitfile();
    v19 = a1[14];
    if ( (_QWORD *)v19 == a1 + 12 )
      return 0;
    while ( 1 )
    {
      v20 = (const char *)qbasename();
      qstrncpy();
      qsplitfile();
      if ( !strcasecmp(v20, v18) || !strcasecmp(s2, v21) )
        break;
      v19 = std::_Rb_tree_increment();
      if ( (_QWORD *)v19 == a1 + 12 )
        return 0;
    }
    return *(_QWORD *)(v19 + 56);
  }
}

