int __fastcall sub_25A4D0(__int64 a1, __int64 a2, double a3)
{
  int result; // eax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  bool v7; // dl
  __int64 v8; // rbp
  bool v9; // al
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 v12; // rax

  result = sub_25A440((_QWORD **)a1, (_QWORD **)a2, a3);
  if ( result )
    return result;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = v4 + 88LL * *(_QWORD *)(a1 + 32);
  v7 = v4 != v6;
  v8 = v5 + 88LL * *(_QWORD *)(a2 + 32);
  v9 = v5 != v8;
  if ( v5 != v8 && v4 != v6 )
  {
    while ( 1 )
    {
      result = sub_259850(v4, v5, 0, a3);
      if ( result )
        return result;
      v12 = *(_QWORD *)(v4 + 72);
      if ( *(_QWORD *)(v5 + 72) )
        break;
      v10 = s1;
      if ( v12 )
        goto LABEL_7;
LABEL_9:
      v4 += 88;
      v5 += 88;
      v7 = v6 != v4;
      v9 = v8 != v5;
      if ( v6 == v4 || v8 == v5 )
        goto LABEL_15;
    }
    v10 = *(const char **)(v5 + 64);
    v11 = s1;
    if ( v12 )
LABEL_7:
      v11 = *(const char **)(v4 + 64);
    result = strcmp(v11, v10);
    if ( result )
      return result;
    goto LABEL_9;
  }
LABEL_15:
  if ( v6 == v4 && v9 )
    return -1;
  else
    return v7 && v8 == v5;
}

