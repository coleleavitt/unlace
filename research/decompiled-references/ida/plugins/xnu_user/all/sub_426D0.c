_QWORD *__fastcall sub_426D0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  _QWORD *v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // rax

  v6 = a2;
  v7 = operator new(0x30u);
  v8 = *a3;
  v9 = (_QWORD *)v7;
  *(_QWORD *)(v7 + 32) = v8;
  *(_QWORD *)(v7 + 40) = *a4;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v11 = a1[4];
      v6 = nullptr;
      if ( *(_QWORD *)(v11 + 32) < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_2AF40((__int64)a1, v8);
    goto LABEL_6;
  }
  v10 = a2[4];
  if ( v8 >= v10 )
  {
    if ( v10 >= v8 )
      goto LABEL_9;
    if ( (_QWORD *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v15 = std::_Rb_tree_increment();
    v11 = v15;
    if ( v8 < *(_QWORD *)(v15 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v6 = (_QWORD *)v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    goto LABEL_6;
  v12 = std::_Rb_tree_decrement();
  v11 = v12;
  if ( *(_QWORD *)(v12 + 32) >= v8 )
    goto LABEL_5;
  if ( *(_QWORD *)(v12 + 24) )
    v11 = (__int64)a2;
  else
    v6 = nullptr;
LABEL_6:
  if ( v11 )
  {
LABEL_7:
    v6 = v9;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
LABEL_9:
  if ( v9 )
  {
    v13 = v9[5];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    operator delete(v9, 0x30u);
  }
  return v6;
}

