const char *__fastcall sub_13810(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // rbx
  const char *v7; // r12
  const char *v8; // r14
  __int64 v9; // rax
  const char *v10; // rsi
  const char *v11; // r12
  const char *result; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( !a1[5] )
      return (const char *)sub_136C0((__int64)a1, (const char *)a3);
    v15 = a1[4];
    v16 = *(_QWORD *)(v15 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v17 = *(const char **)a3;
      v18 = s1;
      if ( !v16 )
        goto LABEL_23;
    }
    else
    {
      v17 = s1;
      if ( !v16 )
        return (const char *)sub_136C0((__int64)a1, (const char *)a3);
    }
    v18 = *(const char **)(v15 + 32);
LABEL_23:
    if ( strcmp(v18, v17) < 0 )
      return nullptr;
    return (const char *)sub_136C0((__int64)a1, (const char *)a3);
  }
  v5 = *(_QWORD *)(a3 + 8);
  v6 = a2;
  if ( !*((_QWORD *)a2 + 5) )
  {
    v7 = s1;
    if ( !v5 )
      return v6;
LABEL_4:
    v8 = *(const char **)a3;
    a2 = v7;
    if ( strcmp(*(const char **)a3, v7) >= 0 )
      goto LABEL_5;
LABEL_13:
    result = v6;
    if ( (const char *)a1[3] == v6 )
      return result;
    v13 = std::_Rb_tree_decrement(v6, a2);
    v14 = v13;
    if ( *(_QWORD *)(v13 + 40) )
    {
      if ( strcmp(*(const char **)(v13 + 32), v8) < 0 )
      {
LABEL_16:
        result = v6;
        if ( !*(_QWORD *)(v14 + 24) )
          return nullptr;
        return result;
      }
    }
    else if ( strcmp(s1, v8) < 0 )
    {
      goto LABEL_16;
    }
    return (const char *)sub_136C0((__int64)a1, (const char *)a3);
  }
  v7 = *((const char **)a2 + 4);
  if ( v5 )
    goto LABEL_4;
  v8 = s1;
  if ( *v7 )
    goto LABEL_13;
LABEL_5:
  if ( strcmp(v7, v8) >= 0 )
    return v6;
  if ( (const char *)a1[4] == v6 )
    return nullptr;
  v9 = std::_Rb_tree_increment(v6);
  v10 = s1;
  v11 = (const char *)v9;
  if ( *(_QWORD *)(v9 + 40) )
    v10 = *(const char **)(v9 + 32);
  if ( strcmp(v8, v10) >= 0 )
    return (const char *)sub_136C0((__int64)a1, (const char *)a3);
  result = v11;
  if ( !*((_QWORD *)v6 + 3) )
    return nullptr;
  return result;
}

