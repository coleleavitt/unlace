_QWORD *__fastcall sub_1727F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // r12
  const char *v7; // rbx
  _QWORD *v8; // r13
  const char *v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  const char *v13; // rdi
  _QWORD *v14; // r13
  const char *v15; // r14
  int v16; // eax

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return v2;
  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v5 = v3[5];
    if ( v4 )
      break;
    if ( !v5 )
    {
      v6 = (_QWORD *)v3[2];
      v7 = s1;
      goto LABEL_6;
    }
    v14 = v3;
    v7 = s1;
LABEL_26:
    v15 = (const char *)v3[4];
    if ( strcmp(v15, v7) < 0 )
    {
      v3 = (_QWORD *)v3[3];
    }
    else
    {
      v16 = strcmp(v7, v15);
      v3 = (_QWORD *)v3[2];
      if ( v16 >= 0 )
      {
        v6 = v3;
        v3 = v14;
        goto LABEL_6;
      }
      v2 = v14;
    }
    if ( !v3 )
      return v2;
  }
  v7 = *(const char **)a2;
  if ( v5 )
  {
LABEL_25:
    v14 = v3;
    goto LABEL_26;
  }
  while ( **(_BYTE **)a2 )
  {
    v3 = (_QWORD *)v3[3];
    if ( !v3 )
      return v2;
    if ( v3[5] )
      goto LABEL_25;
  }
  v6 = (_QWORD *)v3[2];
LABEL_6:
  v8 = (_QWORD *)v3[3];
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = s1;
        if ( v8[5] )
          v9 = (const char *)v8[4];
        v10 = strcmp(v7, v9);
        v11 = v8[2];
        v12 = v8[3];
        if ( v10 < 0 )
          break;
        v8 = (_QWORD *)v8[3];
        if ( !v12 )
          goto LABEL_13;
      }
      v8 = (_QWORD *)v8[2];
    }
    while ( v11 );
  }
LABEL_13:
  while ( v6 )
  {
    v13 = s1;
    if ( v6[5] )
      v13 = (const char *)v6[4];
    if ( strcmp(v13, v7) >= 0 )
    {
      v3 = v6;
      v6 = (_QWORD *)v6[2];
    }
    else
    {
      v6 = (_QWORD *)v6[3];
    }
  }
  return v3;
}
