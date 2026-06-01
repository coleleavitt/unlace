__int64 __fastcall sub_36CE0(__int64 a1, const char *a2, _DWORD *a3, _QWORD *a4)
{
  const char *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 result; // rax
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // rbp
  _QWORD *v11; // r13
  const char *v12; // rax
  _QWORD *v13; // r12
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi
  const char *v22; // [rsp+8h] [rbp-70h]
  __int16 s2; // [rsp+20h] [rbp-58h]
  char *s2a; // [rsp+20h] [rbp-58h]
  size_t v27; // [rsp+28h] [rbp-50h]

  v4 = a2;
  if ( *a2 == 35 )
  {
    v5 = a1 + 668;
    if ( (unsigned int)qsscanf() == 1 )
    {
      v6 = *(_QWORD *)(a1 + 684);
      if ( v6 != v5 )
      {
        while ( *(_WORD *)(v6 + 84) != s2 )
        {
          v6 = std::_Rb_tree_increment();
          if ( v6 == v5 )
            goto LABEL_3;
        }
        goto LABEL_4;
      }
    }
LABEL_3:
    v6 = v5;
    goto LABEL_4;
  }
  v27 = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    s2a = (char *)qvector_reserve();
    v27 = v9;
    memmove(s2a, a2, v10);
    s2a[v10] = 0;
    v11 = *(_QWORD **)(a1 + 676);
    v5 = a1 + 668;
    v4 = s2a;
    v6 = a1 + 668;
    if ( !v11 )
      goto LABEL_30;
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 676);
    v5 = a1 + 668;
    if ( !v11 )
      goto LABEL_3;
  }
  v12 = s1;
  v6 = v5;
  if ( v27 )
    v12 = v4;
  v22 = v12;
  while ( 1 )
  {
    v18 = v11[5];
    if ( !v27 )
      break;
    if ( v18 )
      goto LABEL_22;
    v13 = v11;
    v14 = v4;
    v15 = s1;
LABEL_15:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v11[2];
    v11 = (_QWORD *)v11[3];
    if ( v16 >= 0 )
    {
      v6 = (__int64)v13;
      v11 = v17;
    }
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v18 )
  {
LABEL_22:
    v15 = (const char *)v11[4];
    v14 = v22;
    v13 = v11;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v19 = v11[2];
    if ( !v19 )
      break;
    v6 = (__int64)v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_22;
  }
  v6 = (__int64)v11;
LABEL_24:
  if ( v6 != v5 )
  {
    if ( *(_QWORD *)(v6 + 40) )
    {
      v20 = *(const char **)(v6 + 32);
      v21 = s1;
      if ( v27 )
        goto LABEL_27;
LABEL_28:
      if ( strcmp(v21, v20) < 0 )
        v6 = v5;
    }
    else
    {
      v20 = s1;
      if ( v27 )
      {
LABEL_27:
        v21 = v4;
        goto LABEL_28;
      }
    }
  }
LABEL_30:
  if ( !v4 )
  {
LABEL_4:
    if ( v6 == v5 )
      return 28;
    goto LABEL_5;
  }
  qfree();
  if ( v6 == v5 )
    return 28;
LABEL_5:
  *a3 = *(_DWORD *)(v6 + 80);
  result = 0;
  if ( *(_QWORD *)(v6 + 64) > 1u )
  {
    *a4 = *(_QWORD *)(v6 + 56);
    return 30;
  }
  return result;
}

