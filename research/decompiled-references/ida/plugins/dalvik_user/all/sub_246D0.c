_QWORD *__fastcall sub_246D0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  _QWORD *v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  v5 = operator new(0x30u);
  v6 = *a3;
  v7 = (_QWORD *)v5;
  *(_QWORD *)(v5 + 32) = *a3;
  *(_QWORD *)(v5 + 40) = a3[1];
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v9 + 32) < v6 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_16D00((__int64)a1, v6);
    goto LABEL_6;
  }
  v8 = a2[4];
  if ( v6 >= v8 )
  {
    if ( v8 >= v6 )
      goto LABEL_14;
    if ( (_QWORD *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v11 = std::_Rb_tree_increment();
    v9 = v11;
    if ( v6 < *(_QWORD *)(v11 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_14;
      }
      v4 = (_QWORD *)v11;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    goto LABEL_6;
  v10 = std::_Rb_tree_decrement();
  v9 = v10;
  if ( *(_QWORD *)(v10 + 32) >= v6 )
    goto LABEL_5;
  if ( *(_QWORD *)(v10 + 24) )
    v9 = (__int64)a2;
  else
    v4 = nullptr;
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v4 = v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v7 )
    operator delete(v7, 0x30u);
  return v4;
}

