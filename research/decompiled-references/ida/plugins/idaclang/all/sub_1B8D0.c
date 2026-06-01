_QWORD *__fastcall sub_1B8D0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // r13
  const char *v5; // rsi
  _QWORD *v6; // rbp
  const char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rax
  size_t v16; // r13
  void *v18; // rax
  const char *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi
  _QWORD *v22; // [rsp+0h] [rbp-48h]

  v3 = (_QWORD *)a1[2];
  v22 = a1 + 1;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v10 = v3[5];
      if ( !v10 )
        break;
      v5 = (const char *)v3[4];
      v6 = v3;
      v7 = s1;
      if ( v4 )
        goto LABEL_4;
LABEL_5:
      v8 = strcmp(v7, v5);
      v3 = (_QWORD *)v6[3];
      if ( v8 < 0 )
        v3 = (_QWORD *)v6[2];
      v9 = (v8 >> 31) & 1;
      if ( !v3 )
      {
        if ( (_BYTE)v9 )
        {
          if ( (_QWORD *)a1[3] != v6 )
            goto LABEL_19;
          v3 = v6;
          LOBYTE(v14) = 1;
          if ( v22 != v6 )
          {
LABEL_33:
            v20 = s1;
            if ( v3[5] )
              v20 = (const char *)v3[4];
            v21 = s1;
            if ( *(_QWORD *)(a2 + 8) )
              v21 = *(const char **)a2;
            v14 = (unsigned int)strcmp(v21, v20) >> 31;
          }
LABEL_24:
          v15 = operator new(0x38u);
          v16 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)(v15 + 32) = 0;
          v6 = (_QWORD *)v15;
          *(_OWORD *)(v15 + 40) = 0;
          if ( v16 )
          {
            v18 = (void *)qalloc_or_throw(v16);
            v6[4] = v18;
            v19 = *(const char **)a2;
            v6[6] = v16;
            memcpy(v18, v19, v16);
            v6[5] = v16;
          }
          std::_Rb_tree_insert_and_rebalance((unsigned __int8)v14, v6, v3, v22);
          ++a1[5];
          return v6;
        }
        v3 = v6;
        if ( *(_QWORD *)(a2 + 8) )
          goto LABEL_20;
LABEL_29:
        v12 = s1;
        if ( !v10 )
          return v6;
        goto LABEL_21;
      }
    }
    v5 = s1;
    if ( !v4 )
    {
      v6 = (_QWORD *)v3[3];
      if ( !v6 )
      {
LABEL_14:
        if ( !*(_QWORD *)(a2 + 8) )
          return v3;
        v12 = *(const char **)a2;
        v6 = v3;
        v13 = s1;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v10 = v6[5];
        if ( v10 )
          break;
        v3 = v6;
        v6 = (_QWORD *)v6[3];
        if ( !v6 )
          goto LABEL_14;
      }
      v5 = (const char *)v6[4];
      v7 = s1;
      goto LABEL_5;
    }
LABEL_4:
    v7 = *(const char **)a2;
    v6 = v3;
    goto LABEL_5;
  }
  v6 = a1 + 1;
  if ( v22 == (_QWORD *)a1[3] )
  {
    v3 = a1 + 1;
    LOBYTE(v14) = 1;
    goto LABEL_24;
  }
LABEL_19:
  v3 = v6;
  v11 = std::_Rb_tree_decrement(v6);
  v10 = *(_QWORD *)(v11 + 40);
  v6 = (_QWORD *)v11;
  if ( !*(_QWORD *)(a2 + 8) )
    goto LABEL_29;
LABEL_20:
  v12 = *(const char **)a2;
  v13 = s1;
  if ( v10 )
LABEL_21:
    v13 = (const char *)v6[4];
LABEL_22:
  if ( strcmp(v13, v12) < 0 )
  {
    LOBYTE(v14) = 1;
    if ( v22 != v3 )
      goto LABEL_33;
    goto LABEL_24;
  }
  return v6;
}

