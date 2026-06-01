void __fastcall sub_1E2E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // r12
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  void *v14; // rax

  v2 = (_QWORD *)a1[67];
  if ( v2 )
  {
    v3 = a1 + 66;
    v4 = a2 + 2;
    v5 = (_QWORD *)a1[67];
    v7 = a1 + 66;
    do
    {
      while ( 1 )
      {
        v8 = v5[2];
        v9 = v5[3];
        if ( v5[4] >= v4 )
          break;
        v5 = (_QWORD *)v5[3];
        if ( !v9 )
          goto LABEL_6;
      }
      v7 = v5;
      v5 = (_QWORD *)v5[2];
    }
    while ( v8 );
LABEL_6:
    if ( v3 != v7 && v4 >= v7[4] )
      goto LABEL_15;
    v10 = a2 + 4;
    v11 = v3;
    do
    {
      while ( 1 )
      {
        v12 = v2[2];
        v13 = v2[3];
        if ( v2[4] >= v10 )
          break;
        v2 = (_QWORD *)v2[3];
        if ( !v13 )
          goto LABEL_12;
      }
      v11 = v2;
      v2 = (_QWORD *)v2[2];
    }
    while ( v12 );
LABEL_12:
    if ( v3 != v11 && v10 >= v11[4] && *((_BYTE *)v11 + 41) == 15 )
    {
LABEL_15:
      netnode_supdel();
      v14 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v14, 0x30u);
      --a1[70];
    }
  }
}

