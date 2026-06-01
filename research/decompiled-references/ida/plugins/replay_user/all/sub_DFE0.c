_BOOL8 __fastcall sub_DFE0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  _BOOL4 v8; // ebx
  _QWORD *v9; // r8
  _QWORD *v10; // r12
  unsigned __int64 v11; // rsi
  bool v12; // al
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  void *v17; // rax
  _QWORD *i; // rax
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]

  v3 = a1 + 115;
  v4 = (_QWORD *)a1[116];
  if ( !v4 )
    return 0;
  do
  {
    while ( 1 )
    {
      v6 = v4[2];
      v7 = v4[3];
      if ( v4[4] < a3 )
        break;
      v3 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v7 );
LABEL_6:
  v8 = 0;
  if ( a1 + 115 != v3 && a3 >= v3[4] )
  {
    v9 = (_QWORD *)a1[110];
    v10 = a1 + 109;
    v11 = v3[5];
    v12 = 1;
    v13 = a1 + 109;
    v14 = v9;
    if ( v9 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = v14[4];
          if ( v15 >= v11 )
            break;
          v14 = (_QWORD *)v14[3];
          if ( !v14 )
            goto LABEL_14;
        }
        v16 = (_QWORD *)v14[2];
        if ( v11 >= v15 )
          break;
        v13 = v14;
        v14 = (_QWORD *)v14[2];
        if ( !v16 )
        {
LABEL_14:
          v12 = v13 == v10;
          goto LABEL_15;
        }
      }
      for ( i = (_QWORD *)v14[3]; i; i = (_QWORD *)i[3] )
      {
        while ( 1 )
        {
          v20 = i[2];
          if ( v11 >= i[4] )
            break;
          v13 = i;
          i = (_QWORD *)i[2];
          if ( !v20 )
            goto LABEL_24;
        }
      }
LABEL_24:
      while ( v16 )
      {
        while ( 1 )
        {
          v21 = v16[2];
          if ( v16[4] < v11 )
            break;
          v14 = v16;
          v16 = (_QWORD *)v16[2];
          if ( !v21 )
            goto LABEL_27;
        }
        v16 = (_QWORD *)v16[3];
      }
LABEL_27:
      v25 = a1[113];
      if ( (_QWORD *)a1[111] == v14 && v13 == v10 )
        goto LABEL_17;
      if ( v13 != v14 )
      {
        do
        {
          v22 = std::_Rb_tree_increment();
          v23 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v23, 0x30u);
          v24 = a1[113] - 1LL;
          a1[113] = v24;
        }
        while ( v13 != (_QWORD *)v22 );
        v8 = v25 != v24;
        goto LABEL_18;
      }
    }
    else
    {
LABEL_15:
      v25 = a1[113];
      if ( (_QWORD *)a1[111] == v13 && v12 )
      {
LABEL_17:
        sub_DE00(v9);
        a1[111] = v10;
        a1[110] = 0;
        v8 = v25 != 0;
        a1[112] = v10;
        a1[113] = 0;
LABEL_18:
        v17 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v17, 0x30u);
        --a1[119];
        return v8;
      }
    }
    v8 = 0;
    goto LABEL_18;
  }
  return v8;
}

