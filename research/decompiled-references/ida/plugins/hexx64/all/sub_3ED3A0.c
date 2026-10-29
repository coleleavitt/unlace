void __fastcall sub_3ED3A0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // r8
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  bool v9; // al
  _QWORD *i; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  void *v13; // rax

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v5 = a1 + 1;
  if ( v4 )
  {
    v6 = (_QWORD *)a1[2];
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6[4];
        if ( v7 >= a2 )
          break;
        v6 = (_QWORD *)v6[3];
        if ( !v6 )
          goto LABEL_7;
      }
      v8 = (_QWORD *)v6[2];
      if ( a2 >= v7 )
        break;
      v5 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v8 )
      {
LABEL_7:
        v9 = v3 == v5;
        goto LABEL_8;
      }
    }
    for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
    {
      while ( 1 )
      {
        v11 = i[3];
        if ( a2 < i[4] )
          break;
        i = (_QWORD *)i[3];
        if ( !v11 )
          goto LABEL_16;
      }
      v5 = i;
    }
LABEL_16:
    while ( v8 )
    {
      while ( 1 )
      {
        v12 = v8[3];
        if ( v8[4] >= a2 )
          break;
        v8 = (_QWORD *)v8[3];
        if ( !v12 )
          goto LABEL_19;
      }
      v6 = v8;
      v8 = (_QWORD *)v8[2];
    }
LABEL_19:
    if ( (_QWORD *)a1[3] != v6 )
      goto LABEL_23;
    if ( v5 != v3 )
    {
      while ( v5 != v6 )
      {
        v6 = (_QWORD *)std::_Rb_tree_increment();
        v13 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v13, 0x28u);
        --a1[5];
LABEL_23:
        ;
      }
      return;
    }
LABEL_10:
    sub_3ED1D0(v4);
    a1[2] = 0;
    a1[3] = v3;
    a1[4] = v3;
    a1[5] = 0;
    return;
  }
  v9 = 1;
LABEL_8:
  if ( (_QWORD *)a1[3] == v5 && v9 )
    goto LABEL_10;
}

