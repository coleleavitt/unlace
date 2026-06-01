_QWORD *__fastcall sub_6F510(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r13
  _QWORD *v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  v5 = a2;
  v6 = (_QWORD *)operator new(0x30u);
  v10 = *a3;
  v11 = v6;
  v6[4] = *a3;
  v6[5] = a3[1];
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v7 = a1[4];
      v5 = nullptr;
      if ( *(_QWORD *)(v7 + 32) < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_677C0((__int64)a1, v10, v7, v8, v9);
    goto LABEL_6;
  }
  v12 = a2[4];
  if ( v10 < v12 )
  {
    v7 = a1[3];
    if ( a2 == (_QWORD *)v7 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2, a2, v7, v8, v9);
    v7 = v13;
    if ( *(_QWORD *)(v13 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
    {
      v7 = (unsigned __int64)a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v12 >= v10 )
    goto LABEL_17;
  v7 = a1[4];
  if ( a2 == (_QWORD *)v7 )
  {
LABEL_27:
    v5 = nullptr;
    goto LABEL_6;
  }
  v15 = std::_Rb_tree_increment(a2);
  v7 = v15;
  if ( v10 >= *(_QWORD *)(v15 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    v7 = (unsigned __int64)a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = (_QWORD *)v15;
LABEL_6:
  if ( v7 )
  {
    if ( a1 + 1 == (_QWORD *)v7 || v5 )
    {
      v14 = 1;
LABEL_10:
      v5 = v11;
      std::_Rb_tree_insert_and_rebalance(v14, v11, v7, a1 + 1);
      ++a1[5];
      return v5;
    }
    v12 = *(_QWORD *)(v7 + 32);
LABEL_26:
    v14 = v10 < v12;
    goto LABEL_10;
  }
LABEL_17:
  if ( v11 )
    operator delete(v11, 0x30u);
  return v5;
}

