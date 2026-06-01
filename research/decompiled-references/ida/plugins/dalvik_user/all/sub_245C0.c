_QWORD *__fastcall sub_245C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  _QWORD *v15; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  v15 = (_QWORD *)(a1 + 8);
  if ( !v3 )
    return (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = v3[5];
    if ( !v4 )
      break;
    v6 = *(const char **)a2;
    v7 = v3;
    v8 = nptr;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v3[2];
    v3 = (_QWORD *)v3[3];
    if ( v9 >= 0 )
    {
      v2 = v7;
      v3 = v10;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = nptr;
LABEL_4:
    v8 = (const char *)v3[4];
    v7 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v3[2];
    if ( !v12 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v2 = v3;
LABEL_14:
  if ( v15 != v2 )
  {
    if ( v2[5] )
    {
      v13 = (const char *)v2[4];
      if ( v4 )
        goto LABEL_17;
      if ( strcmp(nptr, v13) < 0 )
        return v15;
    }
    else
    {
      v13 = nptr;
      if ( v4 )
      {
LABEL_17:
        if ( strcmp(*(const char **)a2, v13) < 0 )
          return v15;
      }
    }
  }
  return v2;
}

