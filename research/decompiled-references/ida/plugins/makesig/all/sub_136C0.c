_QWORD *__fastcall sub_136C0(__int64 a1, const char *a2)
{
  _QWORD *v2; // r15
  const char *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // r12
  const char *v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rax
  const char *v11; // rsi
  const char *v12; // rdi

  v2 = (_QWORD *)(a1 + 8);
  v3 = a2;
  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
  {
LABEL_18:
    if ( v2 == *(_QWORD **)(a1 + 24) )
      return nullptr;
    v10 = std::_Rb_tree_decrement(v2, a2);
    v9 = *(_QWORD *)(v10 + 40);
    v2 = (_QWORD *)v10;
    if ( !*((_QWORD *)v3 + 1) )
      goto LABEL_26;
LABEL_20:
    v11 = *(const char **)v3;
    v12 = s1;
    if ( v9 )
      goto LABEL_21;
    goto LABEL_22;
  }
  v5 = *((_QWORD *)a2 + 1);
  do
  {
    v9 = v4[5];
    if ( v9 )
    {
      a2 = (const char *)v4[4];
      v2 = v4;
      v6 = s1;
      if ( !v5 )
        goto LABEL_5;
LABEL_4:
      v6 = *(const char **)v3;
      v2 = v4;
      goto LABEL_5;
    }
    a2 = s1;
    if ( v5 )
      goto LABEL_4;
    v2 = (_QWORD *)v4[3];
    if ( !v2 )
    {
LABEL_14:
      if ( !*((_QWORD *)v3 + 1) )
        return v4;
      v11 = *(const char **)v3;
      v2 = v4;
      v12 = s1;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v9 = v2[5];
      if ( v9 )
        break;
      v4 = v2;
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        goto LABEL_14;
    }
    a2 = (const char *)v2[4];
    v6 = s1;
LABEL_5:
    v7 = strcmp(v6, a2);
    v4 = (_QWORD *)v2[3];
    if ( v7 < 0 )
      v4 = (_QWORD *)v2[2];
    v8 = (v7 >> 31) & 1;
  }
  while ( v4 );
  if ( (_BYTE)v8 )
    goto LABEL_18;
  if ( *((_QWORD *)v3 + 1) )
    goto LABEL_20;
LABEL_26:
  v11 = s1;
  if ( !v9 )
    return v2;
LABEL_21:
  v12 = (const char *)v2[4];
LABEL_22:
  if ( strcmp(v12, v11) < 0 )
    return nullptr;
  return v2;
}

