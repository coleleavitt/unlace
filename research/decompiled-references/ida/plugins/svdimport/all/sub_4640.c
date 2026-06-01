_QWORD *__fastcall sub_4640(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  v5 = (_QWORD *)operator new(0x30u);
  v6 = *a3;
  v5[5] = 0;
  v7 = *v6;
  v5[4] = *v6;
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v9 + 32) < v7 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_4580((__int64)a1, v7);
    goto LABEL_6;
  }
  v8 = a2[4];
  if ( v7 < v8 )
  {
    v9 = a1[3];
    if ( a2 == (_QWORD *)v9 )
      goto LABEL_6;
    v10 = std::_Rb_tree_decrement();
    v9 = v10;
    if ( *(_QWORD *)(v10 + 32) >= v7 )
      goto LABEL_5;
    if ( *(_QWORD *)(v10 + 24) )
    {
      v9 = (__int64)a2;
      goto LABEL_6;
    }
    goto LABEL_23;
  }
  if ( v8 >= v7 )
    goto LABEL_14;
  v9 = a1[4];
  if ( a2 == (_QWORD *)v9 )
  {
LABEL_23:
    v4 = nullptr;
    goto LABEL_6;
  }
  v11 = std::_Rb_tree_increment();
  v9 = v11;
  if ( v7 >= *(_QWORD *)(v11 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    if ( a2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v4 = (_QWORD *)v11;
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v4 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v5 )
    operator delete(v5, 0x30u);
  return v4;
}

