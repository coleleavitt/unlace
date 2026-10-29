__int64 __fastcall sub_4E580(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  const char *v6; // r14
  const char *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  const char *v15; // rsi
  const char *v16; // rdi

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_4E470((__int64)a1, a3);
    v14 = a1[4];
    v15 = s1;
    if ( *(_QWORD *)(a3 + 8) )
      v15 = *(const char **)a3;
    v16 = s1;
    if ( *(_QWORD *)(v14 + 40) )
      v16 = *(const char **)(v14 + 32);
    if ( strcasecmp(v16, v15) >= 0 )
      return sub_4E470((__int64)a1, a3);
    return 0;
  }
  v6 = s1;
  if ( a2[5] )
  {
    v6 = (const char *)a2[4];
    if ( !*(_QWORD *)(a3 + 8) )
    {
LABEL_4:
      v7 = s1;
      if ( strcasecmp(s1, v6) < 0 )
        goto LABEL_5;
      goto LABEL_11;
    }
  }
  else if ( !*(_QWORD *)(a3 + 8) )
  {
    goto LABEL_4;
  }
  v7 = *(const char **)a3;
  if ( strcasecmp(*(const char **)a3, v6) >= 0 )
  {
LABEL_11:
    if ( strcasecmp(v6, v7) >= 0 )
      return (__int64)a2;
    if ( (_QWORD *)a1[4] != a2 )
    {
      v11 = std::_Rb_tree_increment();
      v12 = s1;
      v13 = v11;
      if ( *(_QWORD *)(v11 + 40) )
        v12 = *(const char **)(v11 + 32);
      if ( strcasecmp(v7, v12) >= 0 )
        return sub_4E470((__int64)a1, a3);
      result = v13;
      if ( a2[3] )
        return result;
    }
    return 0;
  }
LABEL_5:
  if ( (_QWORD *)a1[3] == a2 )
    return (__int64)a2;
  v8 = std::_Rb_tree_decrement();
  v9 = v8;
  if ( !*(_QWORD *)(v8 + 40) )
  {
    if ( strcasecmp(s1, v7) < 0 )
      goto LABEL_8;
    return sub_4E470((__int64)a1, a3);
  }
  if ( strcasecmp(*(const char **)(v8 + 32), v7) >= 0 )
    return sub_4E470((__int64)a1, a3);
LABEL_8:
  result = (__int64)a2;
  if ( !*(_QWORD *)(v9 + 24) )
    return 0;
  return result;
}

