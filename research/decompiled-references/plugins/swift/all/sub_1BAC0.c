_QWORD *__fastcall sub_1BAC0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r15
  const char *v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // r12
  const char *v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi

  v5 = (_QWORD *)(a1 + 8);
  v6 = a2;
  v7 = *(_QWORD **)(a1 + 16);
  if ( !v7 )
  {
LABEL_18:
    if ( v5 == *(_QWORD **)(a1 + 24) )
      return nullptr;
    v13 = std::_Rb_tree_decrement(v5, a2, a3, a4, a5);
    v12 = *(_QWORD *)(v13 + 40);
    v5 = (_QWORD *)v13;
    if ( !*((_QWORD *)v6 + 1) )
      goto LABEL_26;
LABEL_20:
    v14 = *(const char **)v6;
    v15 = s1;
    if ( v12 )
      goto LABEL_21;
    goto LABEL_22;
  }
  v8 = *((_QWORD *)a2 + 1);
  do
  {
    v12 = v7[5];
    if ( v12 )
    {
      a2 = (const char *)v7[4];
      v5 = v7;
      v9 = s1;
      if ( !v8 )
        goto LABEL_5;
LABEL_4:
      v9 = *(const char **)v6;
      v5 = v7;
      goto LABEL_5;
    }
    a2 = s1;
    if ( v8 )
      goto LABEL_4;
    v5 = (_QWORD *)v7[3];
    if ( !v5 )
    {
LABEL_14:
      if ( !*((_QWORD *)v6 + 1) )
        return v7;
      v14 = *(const char **)v6;
      v5 = v7;
      v15 = s1;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v12 = v5[5];
      if ( v12 )
        break;
      v7 = v5;
      v5 = (_QWORD *)v5[3];
      if ( !v5 )
        goto LABEL_14;
    }
    a2 = (const char *)v5[4];
    v9 = s1;
LABEL_5:
    v10 = strcmp(v9, a2);
    v7 = (_QWORD *)v5[3];
    if ( v10 < 0 )
      v7 = (_QWORD *)v5[2];
    v11 = (v10 >> 31) & 1;
  }
  while ( v7 );
  if ( (_BYTE)v11 )
    goto LABEL_18;
  if ( *((_QWORD *)v6 + 1) )
    goto LABEL_20;
LABEL_26:
  v14 = s1;
  if ( !v12 )
    return v5;
LABEL_21:
  v15 = (const char *)v5[4];
LABEL_22:
  if ( strcmp(v15, v14) < 0 )
    return nullptr;
  return v5;
}
