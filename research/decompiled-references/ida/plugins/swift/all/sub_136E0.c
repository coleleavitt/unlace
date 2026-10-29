const char *__fastcall sub_136E0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  const char *v8; // rbx
  const char *v9; // r12
  const char *v10; // r14
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // r12
  const char *result; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( !a1[5] )
      return (const char *)sub_13590((__int64)a1, (const char *)a3, a3, a4, a5);
    v17 = a1[4];
    v18 = *(_QWORD *)(v17 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v19 = *(const char **)a3;
      v20 = s1;
      if ( !v18 )
        goto LABEL_23;
    }
    else
    {
      v19 = s1;
      if ( !v18 )
        return (const char *)sub_13590((__int64)a1, (const char *)a3, a3, a4, a5);
    }
    v20 = *(const char **)(v17 + 32);
LABEL_23:
    if ( strcmp(v20, v19) < 0 )
      return nullptr;
    return (const char *)sub_13590((__int64)a1, (const char *)a3, a3, a4, a5);
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a2;
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = s1;
    if ( !v7 )
      return v8;
LABEL_4:
    v10 = *(const char **)a3;
    a2 = v9;
    if ( strcmp(*(const char **)a3, v9) >= 0 )
      goto LABEL_5;
LABEL_13:
    result = v8;
    if ( (const char *)a1[3] == v8 )
      return result;
    v15 = std::_Rb_tree_decrement(v8, a2, v8, a4, a5);
    v16 = v15;
    if ( *(_QWORD *)(v15 + 40) )
    {
      if ( strcmp(*(const char **)(v15 + 32), v10) < 0 )
      {
LABEL_16:
        result = v8;
        if ( !*(_QWORD *)(v16 + 24) )
          return nullptr;
        return result;
      }
    }
    else if ( strcmp(s1, v10) < 0 )
    {
      goto LABEL_16;
    }
    return (const char *)sub_13590((__int64)a1, (const char *)a3, a3, a4, a5);
  }
  v9 = *((const char **)a2 + 4);
  if ( v7 )
    goto LABEL_4;
  v10 = s1;
  if ( *v9 )
    goto LABEL_13;
LABEL_5:
  if ( strcmp(v9, v10) >= 0 )
    return v8;
  if ( (const char *)a1[4] == v8 )
    return nullptr;
  v11 = std::_Rb_tree_increment(v8);
  v12 = s1;
  v13 = (const char *)v11;
  if ( *(_QWORD *)(v11 + 40) )
    v12 = *(const char **)(v11 + 32);
  if ( strcmp(v10, v12) >= 0 )
    return (const char *)sub_13590((__int64)a1, (const char *)a3, a3, a4, a5);
  result = v13;
  if ( !*((_QWORD *)v8 + 3) )
    return nullptr;
  return result;
}

