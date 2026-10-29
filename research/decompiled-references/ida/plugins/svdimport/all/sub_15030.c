void __fastcall sub_15030(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rbp
  const char *v7; // rsi
  _QWORD *v8; // r12
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // r12
  size_t v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rdx
  void *v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  _QWORD *v24; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-50h]

  v3 = *a3;
  v24 = a2 + 1;
  v26 = *a3 + 224 * a3[1];
  if ( v26 == *a3 )
    return;
  do
  {
    if ( *(_BYTE *)v3 )
    {
      sub_15030(a1, a2, v3 + 152);
      v4 = (_QWORD *)a2[2];
      if ( !v4 )
      {
LABEL_32:
        v6 = v24;
        goto LABEL_21;
      }
    }
    else
    {
      v4 = (_QWORD *)a2[2];
      if ( !v4 )
        goto LABEL_32;
    }
    v5 = *(_QWORD *)(v3 + 16);
    v6 = v24;
    while ( 1 )
    {
      v12 = v4[5];
      if ( !v5 )
        break;
      v7 = *(const char **)(v3 + 8);
      v8 = v4;
      v9 = s1;
      if ( v12 )
        goto LABEL_6;
LABEL_7:
      v10 = strcmp(v9, v7);
      v11 = (_QWORD *)v4[2];
      v4 = (_QWORD *)v4[3];
      if ( v10 >= 0 )
      {
        v6 = v8;
        v4 = v11;
      }
      if ( !v4 )
        goto LABEL_16;
    }
    if ( v12 )
    {
LABEL_14:
      v8 = v4;
      v7 = s1;
LABEL_6:
      v9 = (const char *)v4[4];
      goto LABEL_7;
    }
    while ( 1 )
    {
      v13 = v4[2];
      if ( !v13 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( *(_QWORD *)(v13 + 40) )
        goto LABEL_14;
    }
    v6 = v4;
LABEL_16:
    if ( v24 == v6 )
      goto LABEL_21;
    if ( v6[5] )
    {
      v14 = (const char *)v6[4];
      v15 = s1;
      if ( v5 )
        goto LABEL_19;
LABEL_20:
      if ( strcmp(v15, v14) < 0 )
      {
LABEL_21:
        v16 = operator new(0x40u);
        *(_QWORD *)(v16 + 32) = 0;
        v17 = (_QWORD *)v16;
        *(_OWORD *)(v16 + 40) = 0;
        v18 = *(_QWORD *)(v3 + 16);
        if ( v18 )
        {
          v21 = (void *)qalloc_or_throw();
          v17[4] = v21;
          v17[6] = v18;
          memcpy(v21, *(const void **)(v3 + 8), v18);
          v17[5] = v18;
        }
        v17[7] = 0;
        v19 = sub_14E70(a2, v6, (__int64)(v17 + 4));
        v6 = v19;
        if ( v20 )
        {
          if ( v19 || v24 == (_QWORD *)v20 )
          {
LABEL_26:
            v6 = v17;
            std::_Rb_tree_insert_and_rebalance();
            ++a2[5];
            goto LABEL_27;
          }
          v22 = s1;
          if ( *(_QWORD *)(v20 + 40) )
          {
            v22 = *(const char **)(v20 + 32);
            v23 = s1;
            if ( !v17[5] )
              goto LABEL_39;
          }
          else
          {
            v23 = s1;
            if ( !v17[5] )
            {
LABEL_39:
              strcmp(v23, v22);
              goto LABEL_26;
            }
          }
          v23 = (const char *)v17[4];
          goto LABEL_39;
        }
        if ( v17 )
        {
          if ( v17[4] )
          {
            v17[5] = 0;
            qfree();
          }
          operator delete(v17, 0x40u);
        }
      }
    }
    else
    {
      v14 = s1;
      if ( v5 )
      {
LABEL_19:
        v15 = *(const char **)(v3 + 8);
        goto LABEL_20;
      }
    }
LABEL_27:
    v6[7] = v3;
    v3 += 224;
  }
  while ( v26 != v3 );
}

