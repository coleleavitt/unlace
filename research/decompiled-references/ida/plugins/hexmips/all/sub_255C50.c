int __fastcall sub_255C50(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  bool v6; // dl
  __int64 v7; // rbp
  bool v8; // al
  const char *v9; // rsi
  const char *v10; // rdi
  __int64 v11; // rax

  result = sub_255BC0((_QWORD **)a1, (_QWORD **)a2);
  if ( result )
    return result;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = v3 + 88LL * *(_QWORD *)(a1 + 32);
  v6 = v3 != v5;
  v7 = v4 + 88LL * *(_QWORD *)(a2 + 32);
  v8 = v4 != v7;
  if ( v4 != v7 && v3 != v5 )
  {
    while ( 1 )
    {
      result = sub_254FD0(v3, v4, 0);
      if ( result )
        return result;
      v11 = *(_QWORD *)(v3 + 72);
      if ( *(_QWORD *)(v4 + 72) )
        break;
      v9 = s1;
      if ( v11 )
        goto LABEL_7;
LABEL_9:
      v3 += 88;
      v4 += 88;
      v6 = v5 != v3;
      v8 = v7 != v4;
      if ( v5 == v3 || v7 == v4 )
        goto LABEL_15;
    }
    v9 = *(const char **)(v4 + 64);
    v10 = s1;
    if ( v11 )
LABEL_7:
      v10 = *(const char **)(v3 + 64);
    result = strcmp(v10, v9);
    if ( result )
      return result;
    goto LABEL_9;
  }
LABEL_15:
  if ( v5 == v3 && v8 )
    return -1;
  else
    return v6 && v7 == v4;
}

