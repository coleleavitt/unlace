__int64 __fastcall sub_35E0(__int64 a1, const __m128i *a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rbp
  __int64 v7; // r13
  const char *v8; // rsi
  _QWORD *v9; // rbx
  const char *v10; // rdi
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rsi
  _QWORD *v17; // r14
  _QWORD *v18; // [rsp+8h] [rbp-40h]

  v4 = sub_34D0(a1 + 120, (__int64)a2);
  if ( v4 == (_QWORD *)(a1 + 128) )
  {
    v17 = v4;
    if ( !sub_27C0(a1, a2) )
      return 0xFFFFFFFFLL;
    v4 = sub_34D0(a1 + 120, (__int64)a2);
    if ( v17 == v4 )
      return 0xFFFFFFFFLL;
  }
  v5 = (_QWORD *)v4[9];
  v6 = v4 + 8;
  v18 = v4 + 8;
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v13 = v5[5];
    if ( !v7 )
      break;
    v8 = *(const char **)a3;
    v9 = v5;
    v10 = &s1;
    if ( v13 )
      goto LABEL_5;
LABEL_6:
    v11 = strcmp(v10, v8);
    v12 = (_QWORD *)v5[2];
    v5 = (_QWORD *)v5[3];
    if ( v11 >= 0 )
    {
      v6 = v9;
      v5 = v12;
    }
    if ( !v5 )
      goto LABEL_15;
  }
  if ( v13 )
  {
LABEL_13:
    v8 = &s1;
LABEL_5:
    v10 = (const char *)v5[4];
    v9 = v5;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v14 = v5[2];
    if ( !v14 )
      break;
    v6 = v5;
    v5 = (_QWORD *)v5[2];
    if ( *(_QWORD *)(v14 + 40) )
      goto LABEL_13;
  }
  v6 = v5;
LABEL_15:
  if ( v6 == v18 )
    return 0xFFFFFFFFLL;
  if ( v6[5] )
  {
    v15 = (const char *)v6[4];
    if ( v7 )
    {
LABEL_18:
      if ( strcmp(*(const char **)a3, v15) >= 0 )
        return *((unsigned int *)v6 + 14);
    }
    else if ( strcmp(&s1, v15) >= 0 )
    {
      return *((unsigned int *)v6 + 14);
    }
    return 0xFFFFFFFFLL;
  }
  v15 = &s1;
  if ( v7 )
    goto LABEL_18;
  return *((unsigned int *)v6 + 14);
}

